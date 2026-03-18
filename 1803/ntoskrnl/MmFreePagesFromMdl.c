/*
 * XREFs of MmFreePagesFromMdl @ 0x1400CEF30
 * Callers:
 *     sub_14019FD30 @ 0x14019FD30 (sub_14019FD30.c)
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     MmAllocateNonCachedMemory @ 0x14074B6C0 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x14074B840 (MmFreeNonCachedMemory.c)
 *     ResFwFreeContext @ 0x14083B078 (ResFwFreeContext.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  MiFreePagesFromMdl((ULONG_PTR)MemoryDescriptorList);
}
