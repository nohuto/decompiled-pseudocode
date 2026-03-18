/*
 * XREFs of ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0023958
 * Callers:
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C0037960 (-Cancel@FxRequestBase@@QEAAEXZ.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005420 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005E80 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000610C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoTarget::CompleteCanceledRequest(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // si
  unsigned __int8 v7; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IRP *m_Irp; // rax
  unsigned __int64 v10; // rdx
  FxRequestBase *_a1; // rax
  _FX_DRIVER_GLOBALS *v12; // rcx
  const void *v13; // r10
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  FxNonPagedObject::Lock(this, &irql, a3);
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v6 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v5);
  FxNonPagedObject::Unlock(this, irql, v7);
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    v10 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a1 = Request;
    if ( !Request->m_ObjectSize )
      v10 = 0LL;
    if ( v10 )
      _a1 = (FxRequestBase *)v10;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x2Cu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxRequestBase::CompleteSubmitted(Request);
  if ( v6 )
  {
    v12 = this->m_Globals;
    if ( v12->FxVerboseOn )
    {
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_qq(v12, 5u, 0xEu, 0x2Du, WPP_FxIoTarget_cpp_Traceguids, v13, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
