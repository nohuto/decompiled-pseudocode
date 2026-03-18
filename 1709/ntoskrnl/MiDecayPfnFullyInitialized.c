/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x140115284
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x140027210 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiWalkEntireImage @ 0x140039480 (MiWalkEntireImage.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiRemoveDecayClusterTimer @ 0x1401153E8 (MiRemoveDecayClusterTimer.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

PSLIST_ENTRY __fastcall MiDecayPfnFullyInitialized(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi
  PSLIST_ENTRY result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock(
    (PKSPIN_LOCK)(*(_QWORD *)(qword_140388AF0 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 40) & 0x3FFLL)) + 2536LL),
    &LockHandle);
  if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
  {
    if ( MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(BugCheckParameter2 + 16) != (__int64)(BugCheckParameter2 + 0x58000000000LL)
                                                                         / 48 )
      goto LABEL_5;
    MiUnlinkPageFromList(BugCheckParameter2, 1LL);
    MiRemoveDecayClusterTimer(BugCheckParameter2);
  }
  v2 = 1;
LABEL_5:
  *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (PSLIST_ENTRY)LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v2 == 1 )
    return RtlpInterlockedPushEntrySList(&stru_140388DF0, (PSLIST_ENTRY)BugCheckParameter2);
  return result;
}
