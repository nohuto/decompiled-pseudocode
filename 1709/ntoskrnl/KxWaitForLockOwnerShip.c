/*
 * XREFs of KxWaitForLockOwnerShip @ 0x14008A720
 * Callers:
 *     CcSetDirtyInMask @ 0x14001DA30 (CcSetDirtyInMask.c)
 *     IopGetMountFlag @ 0x1400240A0 (IopGetMountFlag.c)
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDeleteBatch @ 0x140051140 (MiDeleteBatch.c)
 *     MiInsertPageInList @ 0x140051480 (MiInsertPageInList.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140051C80 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertProtectedStandbyPage @ 0x140051F60 (MiInsertProtectedStandbyPage.c)
 *     MiRemoveWsle @ 0x140055F20 (MiRemoveWsle.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14005E0E0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140064600 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     CcCanIWriteStream @ 0x140064730 (CcCanIWriteStream.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     AlpcpSignal @ 0x14006AE10 (AlpcpSignal.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14006B170 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14006B320 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14006BEF0 (NtWaitForWorkViaWorkerFactory.c)
 *     IopfCompleteRequest @ 0x1400713E0 (IopfCompleteRequest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140076620 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140076870 (ExpWorkerFactoryCheckCreate.c)
 *     IopCheckDeviceAndDriver @ 0x140085280 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1400855E0 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1400858D0 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x140085A10 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140085AF0 (IopIncrementDeviceObjectRefCount.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiProcessWorkingSets @ 0x14009FE30 (MiProcessWorkingSets.c)
 *     IoGetAttachedDeviceReference @ 0x1400A0850 (IoGetAttachedDeviceReference.c)
 *     MiObtainSystemCacheView @ 0x1400A3510 (MiObtainSystemCacheView.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A3FD0 (KeAcquireQueuedSpinLock.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     NtSetInformationWorkerFactory @ 0x1400B1CE0 (NtSetInformationWorkerFactory.c)
 *     ExpAllocateBigPool @ 0x1400C0CC0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C32F0 (ExpInsertPoolTrackerExpansion.c)
 *     MiUnlinkNodeLargePage @ 0x1400C6570 (MiUnlinkNodeLargePage.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400C6B30 (MiInsertLargePageInNodeListHelper.c)
 *     MiEmptyDecayClusterTimers @ 0x1400F0D10 (MiEmptyDecayClusterTimers.c)
 *     IopDereferenceVpbAndFree @ 0x1400F1CE0 (IopDereferenceVpbAndFree.c)
 *     PoQueryWatchdogTime @ 0x1400F1DC0 (PoQueryWatchdogTime.c)
 *     MiReturnNonPagedPoolVa @ 0x1400F3C70 (MiReturnNonPagedPoolVa.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140103540 (ExpRemovePoolTrackerExpansion.c)
 *     MiLargePageFreeToZero @ 0x14010FA20 (MiLargePageFreeToZero.c)
 *     IoAcquireCancelSpinLock @ 0x1401100E0 (IoAcquireCancelSpinLock.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140135E60 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401365D0 (MiSwapNumaStandbyPage.c)
 *     ExDeferredFreePool @ 0x1402B2010 (ExDeferredFreePool.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140153060 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockOwnerShip(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // ebx

  *(_QWORD *)(a1 + 8) |= 1uLL;
  v3 = 0;
  *a2 = a1;
  do
  {
    if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v3);
  }
  while ( (*(_QWORD *)(a1 + 8) & 1) != 0 );
  return v3;
}
