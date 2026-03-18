/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x14022BC8C
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x14022BCEC (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
