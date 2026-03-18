/*
 * XREFs of MmDetachSession @ 0x14008A5E0
 * Callers:
 *     MiUnlockStealVm @ 0x14003F9B0 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiEmptyAccessLogs @ 0x14016A490 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x1402801A0 (PopWatchdogWorker.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 *     ExCallSessionCallBack @ 0x14052F85C (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     ObpProcessRemoveObjectQueue @ 0x140552770 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x14055F754 (ExGetSessionPoolTagInformation.c)
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x14058DED0 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x1405E28F8 (PnpNotifyDriverCallback.c)
 *     MmEnumerateSystemImages @ 0x14062991C (MmEnumerateSystemImages.c)
 *     MmGetSessionMappedViewInformation @ 0x140749FEC (MmGetSessionMappedViewInformation.c)
 *     PopLazySensorActiveInput @ 0x14076D98C (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1407736B0 (TtmpSessionWorker.c)
 *     EtwpPoolRunDown @ 0x1407AF2C4 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1407BABAC (ExGetSessionBigPoolInformation.c)
 *     VfThunkApplyMandatoryThunks @ 0x140823D28 (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140823DFC (VfThunkApplyThunks.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MmDetachSession(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v4; // eax
  int v5; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 1024);
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  v4 = *(_DWORD *)(v2 + 4);
  v5 = *(_DWORD *)(v2 + 116) - 1;
  *(_DWORD *)(v2 + 116) = v5;
  if ( (v4 & 2) == 0 || v5 )
    v2 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  KiUnstackDetachProcess(a2, 0LL);
  if ( v2 )
    KeSignalGate(v2 + 120, 1LL);
  return 0LL;
}
