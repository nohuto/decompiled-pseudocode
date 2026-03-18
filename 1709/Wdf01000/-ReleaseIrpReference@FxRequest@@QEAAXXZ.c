/*
 * XREFs of ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C007C29C
 * Callers:
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x1C0069100 (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 *     ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C006C188 (-CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C006C2A0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C006C3C0 (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?Execute@FxDmaTransactionBase@@QEAAJPEAX@Z @ 0x1C006C6A4 (-Execute@FxDmaTransactionBase@@QEAAJPEAX@Z.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C006CF10 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1C007C300 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C007F6C8 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ?Release@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C007F9A0 (-Release@FxRequestOutputBuffer@@UEAAKPEAXJPEBD@Z.c)
 *     ?Release@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z @ 0x1C007FAA0 (-Release@FxRequestSystemBuffer@@UEAAKPEAXJPEBD@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::ReleaseIrpReference(FxRequest *this)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *_a1; // rcx

  if ( _InterlockedDecrement(&this->m_IrpReferenceCount) < 0 )
  {
    m_ObjectSize = this->m_ObjectSize;
    p_m_Globals = &this->m_Globals;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(*p_m_Globals, 2u, 0x10u, 0x30u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
}
