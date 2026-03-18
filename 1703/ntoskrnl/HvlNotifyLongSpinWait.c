/*
 * XREFs of HvlNotifyLongSpinWait @ 0x1401E5050
 * Callers:
 *     ExpGetPoolTagInfoTarget @ 0x14000DF80 (ExpGetPoolTagInfoTarget.c)
 *     KiIpiWaitForRequestBarrier @ 0x140040C60 (KiIpiWaitForRequestBarrier.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireKobjectLockSafe @ 0x140051920 (KiAcquireKobjectLockSafe.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     KxWaitForLockOwnerShip @ 0x1400AB2F0 (KxWaitForLockOwnerShip.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B2E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400B7600 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiResolvePrivateZeroFault @ 0x1400BAF20 (MiResolvePrivateZeroFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiDispatchFault @ 0x1400BF7D0 (MiDispatchFault.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiZeroSinglePage @ 0x1400C6290 (MiZeroSinglePage.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiWalkPageTablesRecursively @ 0x1400D4D00 (MiWalkPageTablesRecursively.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     KiIpiSendRequestEx @ 0x1400D8CD0 (KiIpiSendRequestEx.c)
 *     MiGetVadWakeList @ 0x1400DAF90 (MiGetVadWakeList.c)
 *     KiChooseTargetProcessor @ 0x1400E11B0 (KiChooseTargetProcessor.c)
 *     KeRemoveQueueEx @ 0x1400E9870 (KeRemoveQueueEx.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KiSwapThread @ 0x1400EB0F0 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1400EBB90 (KiSearchForNewThreadOnProcessor.c)
 *     KeClockInterruptNotify @ 0x1400F3A30 (KeClockInterruptNotify.c)
 *     KeRemovePriQueue @ 0x1400FC3E0 (KeRemovePriQueue.c)
 *     MiLockOwnedProtoPage @ 0x14010B370 (MiLockOwnedProtoPage.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     KxWaitForLockChainValid @ 0x14012B5E0 (KxWaitForLockChainValid.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     KiIdleLoop @ 0x140184ED0 (KiIdleLoop.c)
 *     KxDispatchInterrupt @ 0x1401885E0 (KxDispatchInterrupt.c)
 *     SwapContext @ 0x1401887A0 (SwapContext.c)
 *     PopHandleNextState @ 0x1404063E0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

__int64 HvlNotifyLongSpinWait()
{
  return HvcallCodeVa();
}
