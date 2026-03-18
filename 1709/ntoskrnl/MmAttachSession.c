/*
 * XREFs of MmAttachSession @ 0x1400B4990
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiAttachToOwningSession @ 0x1400B4828 (MiAttachToOwningSession.c)
 *     MiEmptyAccessLogs @ 0x140230750 (MiEmptyAccessLogs.c)
 *     PopWatchdogWorker @ 0x14024A230 (PopWatchdogWorker.c)
 *     MmPrefetchVirtualMemory @ 0x140444728 (MmPrefetchVirtualMemory.c)
 *     ExGetSessionPoolTagInformation @ 0x1404477C8 (ExGetSessionPoolTagInformation.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1404EF6A0 (EtwpSendDataBlock.c)
 *     PspAttachSession @ 0x1404F0128 (PspAttachSession.c)
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
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
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
