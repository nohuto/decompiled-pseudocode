/*
 * XREFs of PspRemovePartitionFromGlobalList @ 0x140285854
 * Callers:
 *     PspDeletePartition @ 0x14077EC20 (PspDeletePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall PspRemovePartitionFromGlobalList(__int64 a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // di
  __int64 v3; // r8
  _QWORD *v4; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 40);
  v2 = ExAcquireSpinLockExclusive(&PspActivePartitionListLock);
  v3 = *v1;
  if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v4 = (_QWORD *)v1[1], (_QWORD *)*v4 != v1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspActivePartitionListLock);
  result = v2;
  __writecr8(v2);
  return result;
}
