/*
 * XREFs of MiReduceCommitLimits @ 0x1402223B4
 * Callers:
 *     MiAttemptPageFileReductionApc @ 0x140224310 (MiAttemptPageFileReductionApc.c)
 *     MiInsertPartitionPages @ 0x140237794 (MiInsertPartitionPages.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MiRemovePhysicalMemory @ 0x1406E00F8 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiComputeCommitThresholds @ 0x14014FE60 (MiComputeCommitThresholds.c)
 */

__int64 __fastcall MiReduceCommitLimits(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1 + 637, &LockHandle);
  if ( a3 )
    a1[633] -= a3;
  if ( a2 )
    a1[805] -= a2;
  MiComputeCommitThresholds(a1, v6, v7, v8);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
