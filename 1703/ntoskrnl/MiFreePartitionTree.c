/*
 * XREFs of MiFreePartitionTree @ 0x14021DF3C
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x14021D530 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1406BC714 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x1406BCDD0 (MiHotAddPartitionMemory.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     MiFreePartitionNodePages @ 0x14021DE78 (MiFreePartitionNodePages.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreePartitionTree(__int16 *a1, unsigned __int64 *a2, char a3)
{
  PVOID *i; // rbx

  for ( i = (PVOID *)*a2; i; i = (PVOID *)*a2 )
  {
    RtlAvlRemoveNode(a2, (__int64)i);
    MiFreePartitionNodePages(a1, (__int64)i, a3);
    ExFreePoolWithTag(i[5], 0);
    ExFreePoolWithTag(i, 0);
  }
}
