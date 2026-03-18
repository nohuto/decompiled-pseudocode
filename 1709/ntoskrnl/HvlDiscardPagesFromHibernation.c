/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1401EE3F0
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401EE450 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
