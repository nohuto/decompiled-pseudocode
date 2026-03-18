/*
 * XREFs of MmDetachSession @ 0x1400B4910
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiEmptyAccessLogs @ 0x140230750 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x14024A230 (PopWatchdogWorker.c)
 *     MmPrefetchVirtualMemory @ 0x140444728 (MmPrefetchVirtualMemory.c)
 *     ExGetSessionPoolTagInformation @ 0x1404477C8 (ExGetSessionPoolTagInformation.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404EF6A0 (EtwpSendDataBlock.c)
 *     ExCallSessionCallBack @ 0x1404F0184 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x14050DC70 (PspChangeProcessExecutionState.c)
 *     ObpProcessRemoveObjectQueue @ 0x140568570 (ObpProcessRemoveObjectQueue.c)
 *     PnpNotifyDriverCallback @ 0x140586518 (PnpNotifyDriverCallback.c)
 *     MmGetSessionMappedViewInformation @ 0x1406DF0E8 (MmGetSessionMappedViewInformation.c)
 *     MmEnumerateSystemImages @ 0x1406E2040 (MmEnumerateSystemImages.c)
 *     PopLazySensorActiveInput @ 0x140709D98 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x14070FE40 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x14074DA54 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140753E0C (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x1407B6038 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1407B610C (VfThunkApplyThunks.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1024);
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  --*(_DWORD *)(v2 + 116);
  if ( (*(_DWORD *)(v2 + 4) & 2) == 0 || *(_DWORD *)(v2 + 116) )
    v2 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  KiUnstackDetachProcess(a2, 0LL);
  if ( v2 )
    KeSignalGate(v2 + 120, 1LL);
  return 0LL;
}
