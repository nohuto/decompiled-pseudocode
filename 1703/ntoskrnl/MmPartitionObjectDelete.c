/*
 * XREFs of MmPartitionObjectDelete @ 0x140213B10
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall MmPartitionObjectDelete(__int64 *a1)
{
  __int64 v1; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v1 = *a1;
  KeAcquireInStackQueuedSpinLock(&qword_14036C8B0, &LockHandle);
  *(_QWORD *)(v1 + 200) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (*(_DWORD *)(v1 + 4) & 2) != 0 )
    MiDereferencePartition((volatile LONG *)v1);
}
