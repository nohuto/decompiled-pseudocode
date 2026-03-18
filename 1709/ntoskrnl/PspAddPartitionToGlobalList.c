/*
 * XREFs of PspAddPartitionToGlobalList @ 0x140158798
 * Callers:
 *     PspAllocatePartition @ 0x1405E9330 (PspAllocatePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall PspAddPartitionToGlobalList(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rcx
  KIRQL v4; // di
  __int64 v5; // rbx
  __int64 result; // rax

  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = off_140354F18[0];
  v4 = v2;
  v5 = a1 + 40;
  if ( *(_UNKNOWN ***)off_140354F18[0] != &PspActivePartitionListHead )
    __fastfail(3u);
  *(_UNKNOWN ***)(v5 + 8) = off_140354F18[0];
  *(_QWORD *)v5 = &PspActivePartitionListHead;
  *v3 = v5;
  off_140354F18[0] = (_UNKNOWN **)v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspActivePartitionListLock);
  result = v4;
  __writecr8(v4);
  return result;
}
