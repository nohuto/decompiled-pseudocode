/*
 * XREFs of ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006CF10
 * Callers:
 *     imp_WdfDmaTransactionRelease @ 0x1C00675A0 (imp_WdfDmaTransactionRelease.c)
 *     ?ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ @ 0x1C0068F70 (-ReleaseAdapter@FxDmaPacketTransaction@@QEAAXXZ.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0069100 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x1C006C994 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0066320 (WPP_IFR_SF_ql.c)
 *     ?Reset@FxDmaTransactionBase@@AEAAXXZ @ 0x1C006D09C (-Reset@FxDmaTransactionBase@@AEAAXXZ.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C007C29C (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaTransactionBase::ReleaseForReuse(FxDmaTransactionBase *this, __int64 ForceRelease)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char v3; // bp
  FxDmaTransactionState m_State; // eax
  const void *_a1; // rbx
  unsigned __int64 v7; // rsi
  const void *v8; // rax
  FxDmaTransactionBase_vtbl *v9; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v11; // rcx

  m_Globals = this->m_Globals;
  v3 = ForceRelease;
  if ( !(_BYTE)ForceRelease )
  {
    m_State = this->m_State;
    if ( m_State == FxDmaTransactionStateReleased )
    {
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 3u, 0xFu, 0x1Cu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, 0);
      return;
    }
    if ( m_State == FxDmaTransactionStateTransfer )
    {
      v7 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v8 = 0LL;
      WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x1Du, WPP_FxDmaTransactionBase_cpp_Traceguids, v8, 4);
      if ( m_Globals->FxVerifierOn
        && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, ForceRelease, 0xBu)
         || m_Globals->FxVerifyDownlevel) )
      {
        if ( !this->m_ObjectSize )
          v7 = 0LL;
        FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v7, this->m_State);
      }
    }
  }
  v9 = this->__vftable;
  LOBYTE(ForceRelease) = v3;
  this->m_State = FxDmaTransactionStateReleased;
  v9->ReleaseResources(this, ForceRelease);
  FxDmaTransactionBase::Reset(this);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    if ( ((unsigned __int8)m_EncodedRequest & 1) != 0 )
    {
      v11 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v11;
      FxRequest::ReleaseIrpReference(v11);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
    this->m_EncodedRequest = 0LL;
  }
}
