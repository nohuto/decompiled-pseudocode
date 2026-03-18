/*
 * XREFs of PsGetNextPartitionUnsafe @ 0x14011C07C
 * Callers:
 *     PsGetNextPartition @ 0x140001044 (PsGetNextPartition.c)
 *     CcForEachPartition @ 0x14011BF90 (CcForEachPartition.c)
 *     CcUnmapInactiveViews @ 0x1401E1A30 (CcUnmapInactiveViews.c)
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 */

_UNKNOWN **__fastcall PsGetNextPartitionUnsafe(_QWORD *Object)
{
  _UNKNOWN **v2; // rsi
  KIRQL v3; // al
  _UNKNOWN **v4; // rbx
  KIRQL v5; // r14

  v2 = 0LL;
  v3 = ExAcquireSpinLockShared(&PspActivePartitionListLock);
  v4 = (_UNKNOWN **)PspActivePartitionListHead;
  v5 = v3;
  if ( Object )
    v4 = (_UNKNOWN **)Object[5];
  while ( v4 != &PspActivePartitionListHead )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v4 - 5)) )
    {
      v2 = v4 - 5;
      break;
    }
    v4 = (_UNKNOWN **)*v4;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&PspActivePartitionListLock);
  __writecr8(v5);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return v2;
}
