/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x14015B120
 * Callers:
 *     CcUnregisterExternalCache @ 0x14021FE10 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 */

_QWORD *__fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 i; // rsi
  unsigned int v5; // edi
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a2;
  for ( i = *((_QWORD *)PspSystemPartition + 1); v2; v2 -= v5 )
  {
    v5 = v2;
    if ( v2 > 0xFFFFFFFF )
      v5 = -1;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(i + 128), &LockHandle);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = (unsigned int)v6;
    if ( v6 >= v5 )
      v7 = v5;
    *(_QWORD *)(a1 + 8) = v6 - v7;
    *(_QWORD *)(*((_QWORD *)PspSystemPartition + 1) + 600LL) -= v7;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  result = (_QWORD *)(i + 744);
  if ( (_QWORD *)*result != result )
    return (_QWORD *)CcPostDeferredWrites(i);
  return result;
}
