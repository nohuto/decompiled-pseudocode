/*
 * XREFs of MiUpdatePartitionMemory @ 0x14021ED10
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1406BCFEC (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     MiDereferencePageRuns @ 0x1400252E4 (MiDereferencePageRuns.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeNodeMemory @ 0x1405BABD8 (MiComputeNodeMemory.c)
 */

void __fastcall MiUpdatePartitionMemory(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // al
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int64 v9; // rbx

  v2 = (volatile LONG *)(a1 + 232);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v6 = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD *)(a1 + 128);
  v8 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 64) = v6;
  v9 = v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v9);
  MiComputeNodeMemory(a1);
  if ( v8 )
    MiDereferencePageRuns(v8);
  if ( v7 )
    MiDereferencePageRuns(v7);
}
