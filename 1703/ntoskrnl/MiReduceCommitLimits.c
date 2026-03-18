/*
 * XREFs of MiReduceCommitLimits @ 0x1402180F8
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x1402196E0 (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x1405B967C (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1406B410C (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x140159CC0 (MiComputeCommitThresholds.c)
 */

__int64 __fastcall MiReduceCommitLimits(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 621, &LockHandle);
  if ( a3 )
    a1[617] -= a3;
  if ( a2 )
    a1[781] -= a2;
  MiComputeCommitThresholds(a1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
