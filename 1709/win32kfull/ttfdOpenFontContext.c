/*
 * XREFs of ttfdOpenFontContext @ 0x1C023298C
 * Callers:
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C022D700 (ttfdQueryQuadTrueTypeOutline.c)
 *     bQueryAdvanceWidths @ 0x1C022E178 (bQueryAdvanceWidths.c)
 *     ttfdQueryFontData @ 0x1C022FD64 (ttfdQueryFontData.c)
 *     ttfdQueryGlyphAttrs @ 0x1C0230288 (ttfdQueryGlyphAttrs.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C010CBB0 (EngUnmapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0227068 (vMarkFontGone.c)
 *     ttfdOpenFontContextInternal @ 0x1C02329F4 (ttfdOpenFontContextInternal.c)
 */

__int64 ttfdOpenFontContext()
{
  return ttfdOpenFontContextInternal();
}
