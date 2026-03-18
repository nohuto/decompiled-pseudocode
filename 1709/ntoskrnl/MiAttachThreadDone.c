/*
 * XREFs of MiAttachThreadDone @ 0x1400CAF78
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x1400C81C8 (MiStealPage.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MmQueryCommitReleaseState @ 0x14012B070 (MmQueryCommitReleaseState.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402137F4 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  v2 = *(_QWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 193) = *(_BYTE *)(a1 + 193) & 0xF | (16 * ((*(_BYTE *)(a1 + 193) >> 4) - 1));
  if ( v2 )
    KeSignalGate(v2, 1LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
