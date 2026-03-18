/*
 * XREFs of MiDecayPfnFullyInitialized @ 0x14004DA54
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiWalkEntireImage @ 0x140030B50 (MiWalkEntireImage.c)
 *     MiCopyDataPageToImagePage @ 0x14004F194 (MiCopyDataPageToImagePage.c)
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiRemoveDecayClusterTimer @ 0x1400B7878 (MiRemoveDecayClusterTimer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

PSLIST_ENTRY __fastcall MiDecayPfnFullyInitialized(PSLIST_ENTRY ListEntry)
{
  int v2; // edi
  char v3; // r9
  PSLIST_ENTRY result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock(
    (PKSPIN_LOCK)(*(_QWORD *)(qword_1403CBD88 + 8 * ((*((_QWORD *)&ListEntry[2].Next + 1) >> 40) & 0x3FFLL)) + 2600LL),
    &LockHandle);
  v3 = BYTE3(ListEntry[2].Next);
  if ( (v3 & 8) != 0 )
  {
    if ( MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&ListEntry[1]) != (__int64)&ListEntry[0x5800000000LL] / 48 )
      goto LABEL_5;
    MiUnlinkPageFromList((ULONG_PTR)ListEntry);
    MiRemoveDecayClusterTimer(ListEntry);
    v3 = BYTE3(ListEntry[2].Next);
  }
  v2 = 1;
LABEL_5:
  BYTE3(ListEntry[2].Next) = v3 & 0xF7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (PSLIST_ENTRY)LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v2 == 1 )
    return RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
  return result;
}
