/*
 * XREFs of MmFreePagesFromMdl @ 0x140033E40
 * Callers:
 *     sub_140175E30 @ 0x140175E30 (sub_140175E30.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x1406B4790 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1406B4910 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x140755078 (ResFwFreeContext.c)
 * Callees:
 *     <none>
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
