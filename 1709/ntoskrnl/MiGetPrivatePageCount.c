/*
 * XREFs of MiGetPrivatePageCount @ 0x14021D734
 * Callers:
 *     MiAllocateCrcList @ 0x1406ECC24 (MiAllocateCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

unsigned __int64 __fastcall MiGetPrivatePageCount(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_140389240, &LockHandle);
  v3 = (_QWORD *)(a1 + 5688);
  v4 = (_QWORD *)*v3;
  while ( v4 != v3 )
  {
    v5 = v4[13];
    v4 = (_QWORD *)*v4;
    v6 = v2 + v5;
    if ( v6 <= v2 )
      v6 = v2;
    v2 = v6;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v2;
}
