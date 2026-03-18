/*
 * XREFs of MiInsertNewPartitionInList @ 0x140154374
 * Callers:
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 *     MiCreatePfnDatabase @ 0x1407FFCB0 (MiCreatePfnDatabase.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiInsertNewPartitionInList(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036C8B0, &LockHandle);
  v2 = (_QWORD *)qword_14036C8D0;
  v3 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_14036C8D0 != &qword_14036C8C8 )
    __fastfail(3u);
  *v3 = &qword_14036C8C8;
  v3[1] = v2;
  *v2 = v3;
  qword_14036C8D0 = (__int64)v3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  return result;
}
