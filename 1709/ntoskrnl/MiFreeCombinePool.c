/*
 * XREFs of MiFreeCombinePool @ 0x14012BF10
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlockPagedAddress @ 0x14012BF78 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeCombinePool(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v2 = *(_QWORD **)(a1 + 24);
  *(_QWORD *)(a1 + 24) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  do
  {
    v3 = (_QWORD *)*v2;
    MiUnlockPagedAddress(v2);
    ExFreePoolWithTag(v2, 0);
    v2 = v3;
  }
  while ( v3 );
}
