/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x140242390
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MiWalkPageTables @ 0x14000D8E0 (MiWalkPageTables.c)
 *     MiAllocateWsle @ 0x1400161C0 (MiAllocateWsle.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteBatch @ 0x14002D060 (MiDeleteBatch.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x14002D9F0 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x14002FB90 (MiInsertProtectedStandbyPage.c)
 *     AlpcpSignalAndWait @ 0x1400601C0 (AlpcpSignalAndWait.c)
 *     IopGetMountFlag @ 0x140060E20 (IopGetMountFlag.c)
 *     MiEmptyDecayClusterTimers @ 0x140080EE0 (MiEmptyDecayClusterTimers.c)
 *     NtSetInformationWorkerFactory @ 0x140085580 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140086160 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400865D0 (ExpWorkerFactoryCheckCreate.c)
 *     IopDereferenceVpbAndFree @ 0x140088C00 (IopDereferenceVpbAndFree.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140089390 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400A30A0 (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400A3780 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400A4600 (ExpRemovePoolTrackerExpansion.c)
 *     IoAcquireCancelSpinLock @ 0x1400AE5A0 (IoAcquireCancelSpinLock.c)
 *     ExpAllocateBigPool @ 0x1400D8A60 (ExpAllocateBigPool.c)
 *     ExFreeLargePool @ 0x1400DB3B0 (ExFreeLargePool.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     KiAbEntryRemoveFromTree @ 0x1400E9340 (KiAbEntryRemoveFromTree.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x1400F3D30 (AlpcpLookasidePacketCallbackRoutine.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     IopfCompleteRequest @ 0x1400FA0B0 (IopfCompleteRequest.c)
 *     MiWaitForFreePagesToZero @ 0x1400FEE90 (MiWaitForFreePagesToZero.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140106870 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1401069A0 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x140106AE0 (IopDecrementDeviceObjectRef.c)
 *     IopCheckDeviceAndDriver @ 0x140106CD0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140107070 (IopCheckVpbMounted.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiLockPageTableInternal @ 0x140120C90 (MiLockPageTableInternal.c)
 *     MiInsertLargePageInNodeListHelper @ 0x140122680 (MiInsertLargePageInNodeListHelper.c)
 *     MiLargePageFreeToZero @ 0x1401235B0 (MiLargePageFreeToZero.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KxWaitForLockOwnerShipWithIrql @ 0x1400EAFD0 (KxWaitForLockOwnerShipWithIrql.c)
 *     PerfLogSpinLockAcquire @ 0x1402B1DE4 (PerfLogSpinLockAcquire.c)
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
