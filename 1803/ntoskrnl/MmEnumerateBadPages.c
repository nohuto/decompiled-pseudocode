/*
 * XREFs of MmEnumerateBadPages @ 0x140270B74
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
    if ( !qword_1403CEF00 )
      return 0LL;
    v2 = qword_1403CEF00 + 16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * (qword_1403CEF00 + 16), 0x61426D4Du);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    v5 = PoolWithTag;
    KeAcquireInStackQueuedSpinLock(qword_1403CEF20, &LockHandle);
    if ( qword_1403CEF00 < v2 && qword_1403CEF00 )
    {
      *v4 = qword_1403CEF00;
      for ( i = qword_1403CEF10; i != 0xFFFFFFFFFLL; i = *(_QWORD *)(48 * i - 0x58000000000LL) & 0xFFFFFFFFFLL )
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
