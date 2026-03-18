/*
 * XREFs of PsGetNextPartitionUnsafe @ 0x14000457C
 * Callers:
 *     PsGetNextPartition @ 0x1400043F8 (PsGetNextPartition.c)
 *     CcForEachPartition @ 0x140004490 (CcForEachPartition.c)
 *     CcUnmapInactiveViews @ 0x14015C064 (CcUnmapInactiveViews.c)
 *     ExSwapinWorkerThreads @ 0x1405EF4EC (ExSwapinWorkerThreads.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400FED50 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
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
    if ( (unsigned __int8)ObReferenceObjectSafeWithTag(v4 - 5, 1850045264LL) )
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
