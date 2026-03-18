/*
 * XREFs of HvlDiscardPagesFromHibernation @ 0x1401E91F4
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1401E9254 (HvlDiscardSecurePagesFromHibernation.c)
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 */

void __fastcall HvlDiscardPagesFromHibernation(PVOID MemoryMap)
{
  if ( HvlpHibernateScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpHibernateScratchPage, 0x1000uLL, 0x646C7648u);
  if ( HvlpFallbackScratchPage )
    PoSetHiberRange(MemoryMap, 0x8000u, HvlpFallbackScratchPage, 0x1000uLL, 0x646C7648u);
}
