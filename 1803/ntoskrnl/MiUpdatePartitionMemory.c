/*
 * XREFs of MiUpdatePartitionMemory @ 0x140270148
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x140757804 (MiMakePartitionMemoryBlock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiDereferencePageRunsEx @ 0x1400C4510 (MiDereferencePageRunsEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeNodeMemory @ 0x14064FEE4 (MiComputeNodeMemory.c)
 */

void __fastcall MiUpdatePartitionMemory(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rdi
  KIRQL v5; // al
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 v8; // rbx

  v2 = (volatile LONG *)(a1 + 192);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v6 = *(_QWORD *)(a1 + 96);
  v7 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  v8 = v5;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v8);
  if ( *(_QWORD *)(a2 + 16) )
    MiComputeNodeMemory(a1);
  if ( v7 )
    MiDereferencePageRunsEx(v7, 0);
  if ( v6 )
    MiDereferencePageRunsEx(v6, 0);
}
