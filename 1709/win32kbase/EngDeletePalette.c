/*
 * XREFs of EngDeletePalette @ 0x1C00F01B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00AA140 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  return EngDeletePaletteInternal((struct HOBJ__ *)hpal, 0);
}
