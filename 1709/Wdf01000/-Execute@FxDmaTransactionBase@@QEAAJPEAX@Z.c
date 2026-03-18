/*
 * XREFs of ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006C6A4
 * Callers:
 *     imp_WdfDmaTransactionExecute @ 0x1C0066DA0 (imp_WdfDmaTransactionExecute.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001FD44 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0066320 (WPP_IFR_SF_ql.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1C007BFD0 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C007C29C (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall FxDmaTransactionBase::Execute(FxDmaTransactionBase *this, void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDmaTransactionState *p_m_State; // r14
  FxDmaTransactionState _a2; // ecx
  unsigned __int16 *p_m_ObjectSize; // rbx
  unsigned __int64 v8; // rdi
  const void *v9; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxDmaTransactionBase_vtbl *v11; // rax
  int v12; // ebx
  FxRequest *v13; // rcx
  FxRequest *v14; // rcx

  m_Globals = this->m_Globals;
  p_m_State = &this->m_State;
  _a2 = this->m_State;
  if ( _a2 != FxDmaTransactionStateInitialized )
  {
    p_m_ObjectSize = &this->m_ObjectSize;
    v8 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v9 = (const void *)v8;
    if ( !*p_m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x15u, WPP_FxDmaTransactionBase_cpp_Traceguids, v9, _a2);
    if ( !*p_m_ObjectSize )
      v8 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v8, *(int *)p_m_State);
  }
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    FxRequest::AddIrpReference(m_EncodedRequest);
    FxObject::AddRef(
      this->m_EncodedRequest,
      this,
      274,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    this->m_EncodedRequest = (FxRequest *)((unsigned __int64)this->m_EncodedRequest | 1);
  }
  v11 = this->__vftable;
  *p_m_State = FxDmaTransactionStateTransfer;
  this->m_DmaAcquiredContext = Context;
  v12 = v11->StartTransfer(this);
  if ( v12 < 0 )
  {
    v13 = this->m_EncodedRequest;
    *p_m_State = FxDmaTransactionStateTransferFailed;
    this->m_DmaAcquiredContext = 0LL;
    if ( v13 )
    {
      v14 = (FxRequest *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v14;
      FxRequest::ReleaseIrpReference(v14);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
  }
  return (unsigned int)v12;
}
