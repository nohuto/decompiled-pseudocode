/*
 * XREFs of SmKmUnlockMdl @ 0x140097D04
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140096ABC (SmKmStoreHelperCommandProcess.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14009740C (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x1402A7548 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x140091540 (SmFpFree.c)
 *     MiUnlockStoreLockedPages @ 0x1400BF3E0 (MiUnlockStoreLockedPages.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 */

__int64 __fastcall SmKmUnlockMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
  {
    if ( a2 )
      SmFpFree(a2, 5, a3, MemoryDescriptorList);
    else
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  }
  if ( MemoryDescriptorList->Next )
  {
    SmFpFree(a2, 4, a3, MemoryDescriptorList->Next);
    MemoryDescriptorList->Next = 0LL;
  }
  return MiUnlockStoreLockedPages(MemoryDescriptorList);
}
