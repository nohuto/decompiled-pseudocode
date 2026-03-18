/*
 * XREFs of MiReferencePartition @ 0x140063FA8
 * Callers:
 *     MiJoinPartition @ 0x140063F74 (MiJoinPartition.c)
 *     MiReferencePagePartition @ 0x140213AA8 (MiReferencePagePartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiReferencePartition(__int64 a1, int a2)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(&qword_14036C8B0, &LockHandle);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = v4 + 1;
    if ( a2 )
      *(_DWORD *)(a1 + 4) &= ~0x10u;
    v5 = 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v5;
}
