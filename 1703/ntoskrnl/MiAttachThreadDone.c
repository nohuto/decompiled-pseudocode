/*
 * XREFs of MiAttachThreadDone @ 0x1400AD5BC
 * Callers:
 *     MmQueryCommitReleaseState @ 0x1400366C0 (MmQueryCommitReleaseState.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400D8800 (MiTrimOrAgeWorkingSet.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiStealPage @ 0x14010C28C (MiStealPage.c)
 *     MmReleaseCommitForMemResetPages @ 0x14020C848 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KeSignalGate @ 0x14002E0B0 (KeSignalGate.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiAttachThreadDone(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_14036CF80, &LockHandle);
  v2 = *(_QWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 193) = *(_BYTE *)(a1 + 193) & 0xF | (16 * ((*(_BYTE *)(a1 + 193) >> 4) - 1));
  if ( v2 )
    KeSignalGate(v2, 1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
