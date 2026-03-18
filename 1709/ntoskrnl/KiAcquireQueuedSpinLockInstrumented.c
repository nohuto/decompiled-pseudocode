/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x140204BB0
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
 *     KxWaitForLockOwnerShipWithIrql @ 0x14008B4F0 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x14027EC18 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v3; // r9d
  int v4; // esi
  char v5; // di
  unsigned __int64 v6; // rax
  unsigned int InterruptCount; // r14d
  unsigned int v8; // ebp
  _QWORD *v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rax
  unsigned int v12; // [rsp+60h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v4 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v5 = 1;
    v6 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v8 = v6;
  }
  else
  {
    v8 = v12;
    v5 = 0;
    InterruptCount = v12;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v9 = (_QWORD *)_InterlockedExchange64(a2, a1);
  if ( v9 )
  {
    v10 = KxWaitForLockOwnerShipWithIrql(a1, v9, 0LL);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v3 = v10;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v10;
  }
  if ( v5 )
  {
    v11 = __rdtsc();
    PerfLogSpinLockAcquire(v4, v11, v11 - v8, v3, InterruptCount, 1);
  }
}
