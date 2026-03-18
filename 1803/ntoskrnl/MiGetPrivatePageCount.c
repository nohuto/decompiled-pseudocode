/*
 * XREFs of MiGetPrivatePageCount @ 0x1401408E0
 * Callers:
 *     MiAllocateCrcList @ 0x1405BF15C (MiAllocateCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 */

unsigned __int64 __fastcall MiGetPrivatePageCount(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  bool v8; // cc
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
  v3 = (_QWORD *)(a1 + 6776);
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v5 = v4[13];
    v6 = v2;
    v4 = (_QWORD *)*v4;
    v7 = v2 + v5;
    v8 = v7 <= v2;
    v2 = v7;
    if ( v8 )
      v2 = v6;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v2;
}
