/*
 * XREFs of ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0064C74
 * Callers:
 *     ?CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0023438 (-CompletePendedRequestList@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z @ 0x1C0088CC0 (-_RequestCancelled@FxIoTarget@@KAXPEAVFxIrpQueue@@PEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@E@Z.c)
 *     ?_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0092AB0 (-_CleanupPipesRequests@FxUsbDevice@@KAXPEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005060 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005090 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C00053F4 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?CompleteSubmitted@FxRequestBase@@QEAAXXZ @ 0x1C0005420 (-CompleteSubmitted@FxRequestBase@@QEAAXXZ.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005E80 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1C000610C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00140BC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoTarget::RequestCompletionRoutine(FxIoTarget *this, FxRequestBase *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v7; // rdx
  bool v8; // zf
  FxRequestBase *_a1; // rax
  unsigned __int8 v10; // bp
  char v11; // si
  unsigned __int8 v12; // r8
  _IRP *m_Irp; // rax
  unsigned __int8 v14; // r8
  unsigned __int64 v15; // rcx
  FxRequestBase *v16; // rax
  _FX_DRIVER_GLOBALS *v17; // rcx
  unsigned __int64 v18; // rdx
  FxRequestBase *v19; // rax
  _FX_DRIVER_GLOBALS *v20; // rcx
  const void *v21; // r10
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

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
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x31u, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  v10 = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  v11 = 1;
  Request->m_TargetFlags |= 1u;
  if ( FxRequestBase::CancelTimer(Request)
    && _InterlockedExchangeAdd(&Request->m_IrpCompletionReferenceCount, 0xFFFFFFFF) == 1 )
  {
    if ( (Request->m_TargetFlags & 8) != 0 )
    {
      m_Irp = Request->m_Irp.m_Irp;
      if ( m_Irp->IoStatus.Status == -1073741536 )
        m_Irp->IoStatus.Status = -1073741643;
    }
    v10 = FxIoTarget::RemoveCompletedRequestLocked(this, Request, v12);
  }
  else
  {
    v15 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v16 = Request;
    if ( !Request->m_ObjectSize )
      v15 = 0LL;
    if ( v15 )
      v16 = (FxRequestBase *)v15;
    WPP_IFR_SF_q(this->m_Globals, 4u, 0xEu, 0x32u, WPP_FxIoTarget_cpp_Traceguids, v16);
    v11 = 0;
  }
  FxNonPagedObject::Unlock(this, irql, v14);
  if ( v11 )
  {
    v17 = this->m_Globals;
    if ( v17->FxVerboseOn )
    {
      v18 = (unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL;
      v19 = Request;
      if ( !Request->m_ObjectSize )
        v18 = 0LL;
      if ( v18 )
        v19 = (FxRequestBase *)v18;
      WPP_IFR_SF_q(v17, 5u, 0xEu, 0x33u, WPP_FxIoTarget_cpp_Traceguids, v19);
    }
    FxRequestBase::CompleteSubmitted(Request);
  }
  if ( v10 )
  {
    v20 = this->m_Globals;
    if ( v20->FxVerboseOn )
    {
      v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v21 = 0LL;
      WPP_IFR_SF_qq(v20, 5u, 0xEu, 0x34u, WPP_FxIoTarget_cpp_Traceguids, v21, &this->m_SentIoEvent);
    }
    KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
  }
  if ( v11 )
    FxIoTarget::DecrementIoCount(this);
}
