/*
 * XREFs of ttfdOpenFontContext @ 0x1C023141C
 * Callers:
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C022C1F0 (ttfdQueryQuadTrueTypeOutline.c)
 *     bQueryAdvanceWidths @ 0x1C022CC6C (bQueryAdvanceWidths.c)
 *     ttfdQueryFontData @ 0x1C022E854 (ttfdQueryFontData.c)
 *     ttfdQueryGlyphAttrs @ 0x1C022ED78 (ttfdQueryGlyphAttrs.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FCCB0 (EngUnmapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0225AE8 (vMarkFontGone.c)
 *     ttfdOpenFontContextInternal @ 0x1C0231484 (ttfdOpenFontContextInternal.c)
 */

__int64 ttfdOpenFontContext()
{
  return ttfdOpenFontContextInternal();
}
