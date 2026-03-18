/*
 * XREFs of KxWaitForLockChainValid @ 0x14012B5E0
 * Callers:
 *     IoReleaseCancelSpinLock @ 0x140013B80 (IoReleaseCancelSpinLock.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     IopGetMountFlag @ 0x14004BC40 (IopGetMountFlag.c)
 *     MiEmptyDecayClusterTimers @ 0x140082E80 (MiEmptyDecayClusterTimers.c)
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14008F610 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14008FC20 (ExpAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExpApplyPriorityBoost @ 0x1400913C0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140091CD0 (ExpBoostIoAfterAcquire.c)
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14009C290 (ExpAcquireSharedStarveExclusive.c)
 *     KeReleaseQueuedSpinLock @ 0x1400A9390 (KeReleaseQueuedSpinLock.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     MiLargePageFreeToZero @ 0x1400B3450 (MiLargePageFreeToZero.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x1400C7FC0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiDeleteBatch @ 0x1400C8490 (MiDeleteBatch.c)
 *     MiInsertPageInList @ 0x1400C88B0 (MiInsertPageInList.c)
 *     MiRemoveWsle @ 0x1400D4A00 (MiRemoveWsle.c)
 *     IopDecrementVpbRefCount @ 0x1400DB890 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400DB970 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400DBA60 (IopDecrementDeviceObjectRef.c)
 *     ExFreeLargePool @ 0x1400DCA30 (ExFreeLargePool.c)
 *     IopfCompleteRequest @ 0x1400DEE70 (IopfCompleteRequest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400E3860 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400E3D20 (ExpWorkerFactoryCheckCreate.c)
 *     AlpcpSignalAndWait @ 0x1400E7A20 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     KiAbProcessContextSwitch @ 0x1400EC3E0 (KiAbProcessContextSwitch.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400ED6B0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1400EECB0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1400EF460 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IopCheckDeviceAndDriver @ 0x1400F0FF0 (IopCheckDeviceAndDriver.c)
 *     MiUnlinkNodeLargePage @ 0x1401291F0 (MiUnlinkNodeLargePage.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     IopCheckVpbMounted @ 0x14012B240 (IopCheckVpbMounted.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14012B400 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14012B570 (KeReleaseInStackQueuedSpinLock.c)
 *     IopDereferenceVpbAndFree @ 0x14012B810 (IopDereferenceVpbAndFree.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     CcSetParallelFlushFile @ 0x14012BED0 (CcSetParallelFlushFile.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1401FEA38 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401E5050 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KxWaitForLockChainValid(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  do
  {
    if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v2);
    result = *a1;
  }
  while ( !*a1 );
  return result;
}
