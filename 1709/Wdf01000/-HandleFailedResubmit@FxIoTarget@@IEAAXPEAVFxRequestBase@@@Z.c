/*
 * XREFs of ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C008833C
 * Callers:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0088870 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005420 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005E80 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000610C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoTarget::HandleFailedResubmit(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v7; // rdx
  bool v8; // zf
  FxRequestBase *_a1; // rax
  unsigned __int8 v10; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 v12; // si
  unsigned __int8 v13; // r8
  _FX_DRIVER_GLOBALS *v14; // rcx
  FxRequestBase *v15; // rax
  unsigned __int64 v16; // r8
  _FX_DRIVER_GLOBALS *v17; // rcx
  const void *v18; // r10
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_ObjectSize = Request->m_ObjectSize;
    v7 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v8 = m_ObjectSize == 0;
    _a1 = Request;
    if ( v8 )
      v7 = 0LL;
    if ( v7 )
      _a1 = (FxRequestBase *)v7;
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  FxNonPagedObject::Lock(this, &irql, a3);
  Request->m_TargetFlags |= 1u;
  if ( (Request->m_TargetFlags & 8) != 0 )
  {
    m_Irp = Request->m_Irp.m_Irp;
    if ( m_Irp->IoStatus.Status == -1073741536 )
      m_Irp->IoStatus.Status = -1073741643;
  }
  v12 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v10);
  FxNonPagedObject::Unlock(this, irql, v13);
  v14 = this->m_Globals;
  if ( v14->FxVerboseOn )
  {
    v15 = Request;
    v16 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !Request->m_ObjectSize )
      v16 = 0LL;
    if ( v16 )
      v15 = (FxRequestBase *)v16;
    WPP_IFR_SF_q(v14, 5u, 0xEu, 0x2Fu, WPP_FxIoTarget_cpp_Traceguids, v15);
  }
  FxRequestBase::CompleteSubmitted(Request);
  if ( v12 )
  {
    v17 = this->m_Globals;
    if ( v17->FxVerboseOn )
    {
      v18 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v18 = 0LL;
      WPP_IFR_SF_qq(v17, 5u, 0xEu, 0x30u, WPP_FxIoTarget_cpp_Traceguids, v18, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  FxIoTarget::DecrementIoCount(this);
}
