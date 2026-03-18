/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x14014B1D0
 * Callers:
 *     CcUnregisterExternalCache @ 0x1401E0810 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 */

_QWORD *__fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rdi
  unsigned int v5; // ebp
  unsigned __int64 v6; // rax
  _QWORD *result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  v4 = *((_QWORD *)PspSystemPartition + 1);
  while ( v2 )
  {
    v5 = v2;
    if ( v2 > 0xFFFFFFFF )
      v5 = -1;
    v2 -= v5;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 < v5 )
      v5 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v6 - v5;
    *(_QWORD *)(*((_QWORD *)PspSystemPartition + 1) + 600LL) -= v5;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  result = (_QWORD *)(v4 + 744);
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CcPostDeferredWrites(v4);
  return result;
}
