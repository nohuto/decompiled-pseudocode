/*
 * XREFs of MmFreePagesFromMdl @ 0x140130F50
 * Callers:
 *     sub_1401755B0 @ 0x1401755B0 (sub_1401755B0.c)
 *     MmAllocateNonCachedMemory @ 0x1406E0780 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1406E0910 (MmFreeNonCachedMemory.c)
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 *     ResFwFreeContext @ 0x1407D3A5C (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x1400E10B0 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList, 0);
}
