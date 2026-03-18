/*
 * XREFs of MmAllocateNodePagesForMdlEx @ 0x1402176E0
 * Callers:
 *     <none>
 * Callees:
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14011CC70 (MmAllocatePartitionNodePagesForMdlEx.c)
 */

char *__fastcall MmAllocateNodePagesForMdlEx(
        unsigned __int64 a1,
        unsigned __int64 a2,
        signed __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6,
        int a7)
{
  return MmAllocatePartitionNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7, 0LL);
}
