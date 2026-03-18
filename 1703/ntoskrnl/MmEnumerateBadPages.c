/*
 * XREFs of MmEnumerateBadPages @ 0x140226910
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmEnumerateBadPages(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  __int64 i; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  *a1 = 0LL;
  while ( 1 )
  {
    if ( !qword_140381100 )
      return 0LL;
    v2 = qword_140381100 + 16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (qword_140381100 + 16), 0x61426D4Du);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    v5 = PoolWithTag;
    KeAcquireInStackQueuedSpinLock(&qword_140381120, &LockHandle);
    if ( qword_140381100 < v2 && qword_140381100 )
    {
      *v4 = qword_140381100;
      for ( i = qword_140381110; i != 0xFFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x58000000000LL) & 0xFFFFFFFFFLL )
        *++v5 = i;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      *a1 = v4;
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ExFreePoolWithTag(v4, 0);
  }
  return 3221225626LL;
}
