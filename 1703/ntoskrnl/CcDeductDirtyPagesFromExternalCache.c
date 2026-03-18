/*
 * XREFs of CcDeductDirtyPagesFromExternalCache @ 0x140150AD0
 * Callers:
 *     CcUnregisterExternalCache @ 0x1401DD8A0 (CcUnregisterExternalCache.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 */

__int64 *__fastcall CcDeductDirtyPagesFromExternalCache(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // esi
  unsigned __int64 v5; // rcx
  __int64 *result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  while ( v2 )
  {
    v4 = v2;
    if ( v2 > 0xFFFFFFFF )
      v4 = -1;
    v2 -= v4;
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 < v4 )
      v4 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v5 - v4;
    qword_14036F9A0 -= v4;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  result = &qword_14036FA30;
  if ( (__int64 *)qword_14036FA30 != &qword_14036FA30 )
    return (__int64 *)CcPostDeferredWrites(&CcSystemPartition);
  return result;
}
