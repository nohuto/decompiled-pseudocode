/*
 * XREFs of MiAttachThreadDone @ 0x1400831E4
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiUnlockStealVm @ 0x14003F9B0 (MiUnlockStealVm.c)
 *     MiTrimSharedPageFromViews @ 0x140082660 (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1400C6588 (MmQueryCommitReleaseState.c)
 *     MmReleaseCommitForMemResetPages @ 0x140251BF0 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSignalGate @ 0x1400C1720 (KeSignalGate.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  v5 = *(_DWORD *)(a1 + 184);
  BYTE1(v5) = BYTE1(v5) & 0xF | (16 * ((BYTE1(v5) >> 4) - 1));
  *(_WORD *)(a1 + 184) = v5;
  v2 = *(_QWORD *)(a1 + 104);
  if ( v2 )
    KeSignalGate(v2, 1LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
