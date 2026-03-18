/*
 * XREFs of MmAttachSession @ 0x14008A660
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MiAttachToOwningSession @ 0x1400C6954 (MiAttachToOwningSession.c)
 *     MiEmptyAccessLogs @ 0x14016A490 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x1402801A0 (PopWatchdogWorker.c)
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 *     ExCallSessionCallBack @ 0x14052F85C (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x140532AF8 (PspChangeProcessExecutionState.c)
 *     ObpProcessRemoveObjectQueue @ 0x140552770 (ObpProcessRemoveObjectQueue.c)
 *     ExGetSessionPoolTagInformation @ 0x14055F754 (ExGetSessionPoolTagInformation.c)
 *     PspAttachSession @ 0x140580258 (PspAttachSession.c)
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
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MmAttachSession(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  _KPROCESS *v4; // rbx
  _KPROCESS *Process; // rsi
  unsigned __int64 v6; // rbp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = BugCheckParameter1[1].ActiveProcessors.Bitmap[2];
  v4 = BugCheckParameter1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v6 = Process[1].ActiveProcessors.Bitmap[2];
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(v3 + 116);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v6 && (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 && v6 == v3 )
      v4 = Process;
    KiStackAttachProcess(v4, 0, a2);
    return 0LL;
  }
}
