/*
 * XREFs of MmDetachSession @ 0x140073870
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MiEmptyAccessLogs @ 0x14013F820 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x1402350E0 (PopWatchdogWorker.c)
 *     ObpProcessRemoveObjectQueue @ 0x140428DC0 (ObpProcessRemoveObjectQueue.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     MmEnumerateSystemImages @ 0x1404B0CF8 (MmEnumerateSystemImages.c)
 *     ExGetSessionPoolTagInformation @ 0x1404C76E4 (ExGetSessionPoolTagInformation.c)
 *     ExCallSessionCallBack @ 0x1404C81A8 (ExCallSessionCallBack.c)
 *     MmPrefetchVirtualMemory @ 0x1404C9B00 (MmPrefetchVirtualMemory.c)
 *     PspChangeProcessExecutionState @ 0x140547580 (PspChangeProcessExecutionState.c)
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1405535DC (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x140571900 (PnpNotifyDriverCallback.c)
 *     MmGetSessionMappedViewInformation @ 0x1406B3140 (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x1406D4648 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1406D9A30 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x140710968 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140714C7C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x14077427C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140774350 (VfThunkApplyThunks.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1024);
  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  --*(_DWORD *)(v2 + 116);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 116) )
    v2 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  KiUnstackDetachProcess(a2, 0LL);
  if ( v2 )
    KeSignalGate(v2 + 120, 1);
  return 0LL;
}
