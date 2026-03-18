/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x1401FE8B0
 * Callers:
 *     IoAcquireCancelSpinLock @ 0x140013880 (IoAcquireCancelSpinLock.c)
 *     MiDecayPfnFullyInitialized @ 0x140016720 (MiDecayPfnFullyInitialized.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140049DE0 (KiAbEntryGetLockedHeadEntry.c)
 *     IopGetMountFlag @ 0x14004BC40 (IopGetMountFlag.c)
 *     MiEmptyDecayClusterTimers @ 0x140082E80 (MiEmptyDecayClusterTimers.c)
 *     MiProcessWorkingSets @ 0x1400830E0 (MiProcessWorkingSets.c)
 *     ExpAllocateBigPool @ 0x14008C2B0 (ExpAllocateBigPool.c)
 *     IoGetAttachedDeviceReference @ 0x140091AB0 (IoGetAttachedDeviceReference.c)
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     MmGetSessionById @ 0x140094460 (MmGetSessionById.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     KeAcquireQueuedSpinLock @ 0x1400A9410 (KeAcquireQueuedSpinLock.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400AD580 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     MiLargePageFreeToZero @ 0x1400B3450 (MiLargePageFreeToZero.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400C4D40 (MiInsertAndUnlockStandbyPages.c)
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
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400ED6B0 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopCheckDeviceAndDriver @ 0x1400F0FF0 (IopCheckDeviceAndDriver.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiUnlinkNodeLargePage @ 0x1401291F0 (MiUnlinkNodeLargePage.c)
 *     NtSetInformationWorkerFactory @ 0x140129BE0 (NtSetInformationWorkerFactory.c)
 *     IopCheckVpbMounted @ 0x14012B240 (IopCheckVpbMounted.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14012B400 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x14012B810 (IopDereferenceVpbAndFree.c)
 *     ExpInsertPoolTrackerExpansion @ 0x14012BA70 (ExpInsertPoolTrackerExpansion.c)
 *     CcSetParallelFlushFile @ 0x14012BED0 (CcSetParallelFlushFile.c)
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x14011C530 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x14025635C (PerfLogSpinLockAcquire.c)
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
