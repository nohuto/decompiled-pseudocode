/*
 * XREFs of ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088A88
 * Callers:
 *     ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C007E310 (-_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005420 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005E80 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000610C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0037960 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 */

void __fastcall FxIoTarget::TimerCallback(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v4; // bp
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxRequestBase *_a2; // r8
  unsigned __int64 v8; // rcx
  const void *_a1; // rdx
  unsigned __int8 v10; // r8
  char v11; // si
  unsigned __int8 m_TargetFlags; // al
  signed __int32 m_IrpCompletionReferenceCount; // eax
  signed __int32 v14; // edx
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // al
  _IRP *m_Irp; // rcx
  _FX_DRIVER_GLOBALS *v18; // rcx
  unsigned __int64 v19; // r8
  FxRequestBase *v20; // rax
  const void *v21; // rdx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a2 = Request;
    v8 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v8 = 0LL;
    if ( v8 )
      _a2 = (FxRequestBase *)v8;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x29u, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags &= ~4u;
  v11 = 1;
  m_TargetFlags = Request->m_TargetFlags;
  if ( (m_TargetFlags & 1) == 0 )
  {
    Request->m_TargetFlags = m_TargetFlags | 8;
    m_IrpCompletionReferenceCount = Request->m_IrpCompletionReferenceCount;
    do
    {
      if ( m_IrpCompletionReferenceCount <= 0 )
        break;
      v14 = m_IrpCompletionReferenceCount;
      m_IrpCompletionReferenceCount = _InterlockedCompareExchange(
                                        &Request->m_IrpCompletionReferenceCount,
                                        m_IrpCompletionReferenceCount + 1,
                                        m_IrpCompletionReferenceCount);
    }
    while ( v14 != m_IrpCompletionReferenceCount );
    FxNonPagedObject::Unlock(this, irql, v10);
    FxRequestBase::Cancel(Request);
    FxNonPagedObject::Lock(this, &irql, v15);
  }
  if ( _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    v16 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v10);
    m_Irp = Request->m_Irp.m_Irp;
    v4 = v16;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  else
  {
    v11 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v10);
  if ( v11 )
  {
    v18 = this->m_Globals;
    if ( v18->FxVerboseOn )
    {
      v19 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v20 = Request;
      if ( !Request->m_ObjectSize )
        v19 = 0LL;
      if ( v19 )
        v20 = (FxRequestBase *)v19;
      WPP_IFR_SF_q(v18, 5u, 0xEu, 0x2Au, WPP_FxIoTarget_cpp_Traceguids, v20);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v4 )
  {
    v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qq(this->m_Globals, 4u, 0xEu, 0x2Bu, WPP_FxIoTarget_cpp_Traceguids, v21, &this->m_SentIoEvent);
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v11 )
    FxIoTarget::DecrementIoCount(this);
}
