/*
 * XREFs of MiReferencePagePartition @ 0x140213AA8
 * Callers:
 *     MiMoveEccPagesToFreeList @ 0x14020D91C (MiMoveEccPagesToFreeList.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14020DC20 (MmMarkPhysicalMemoryAsBad.c)
 * Callees:
 *     MiReferencePartition @ 0x140063FA8 (MiReferencePartition.c)
 */

__int64 __fastcall MiReferencePagePartition(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(qword_14036C8F8 + 8 * ((*(_QWORD *)(a1 + 40) >> 40) & 0x3FFLL));
  return v1 & -(__int64)((unsigned int)MiReferencePartition(v1, 0) != 0);
}
