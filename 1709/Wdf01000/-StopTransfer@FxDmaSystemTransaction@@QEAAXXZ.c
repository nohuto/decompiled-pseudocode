/*
 * XREFs of ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C006BC60
 * Callers:
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x1C00679E0 (imp_WdfDmaTransactionStopSystemTransfer.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0016B8C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?CancelMappedTransfer@FxDmaSystemTransaction@@IEAAEXZ @ 0x1C006B998 (-CancelMappedTransfer@FxDmaSystemTransaction@@IEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaSystemTransaction::StopTransfer(FxDmaSystemTransaction *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 v3; // rsi
  const void *_a1; // rax
  unsigned int v5; // edx

  this->m_IsCancelled = 1;
  if ( !FxDmaSystemTransaction::CancelMappedTransfer(this) )
  {
    m_Globals = this->m_Globals;
    v3 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionSystem_cpp_Traceguids, _a1);
    if ( m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v5, 0xBu) || m_Globals->FxVerifyDownlevel) )
    {
      if ( !this->m_ObjectSize )
        v3 = 0LL;
      FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v3, this->m_State);
    }
  }
}
