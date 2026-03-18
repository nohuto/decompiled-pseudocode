/*
 * XREFs of SmKmUnlockMdl @ 0x140039E90
 * Callers:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14005D878 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140120FFC (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x14024DFB0 (SmKmStoreHelperCommandCleanup.c)
 * Callees:
 *     SmFpFree @ 0x140054CF0 (SmFpFree.c)
 *     MmUnmapLockedPages @ 0x1400A3B30 (MmUnmapLockedPages.c)
 */

__int64 __fastcall SmKmUnlockMdl(PMDL MemoryDescriptorList, __int64 a2, __int64 a3)
{
  if ( (MemoryDescriptorList->MdlFlags & 1) != 0 )
  {
    if ( a2 )
      SmFpFree(a2, 5LL, a3, MemoryDescriptorList);
    else
      MmUnmapLockedPages(MemoryDescriptorList->MappedSystemVa, MemoryDescriptorList);
  }
  if ( MemoryDescriptorList->Next )
  {
    SmFpFree(a2, 4LL, a3, MemoryDescriptorList->Next);
    MemoryDescriptorList->Next = 0LL;
  }
  return MiUnlockStoreLockedPages((__int64)MemoryDescriptorList);
}
