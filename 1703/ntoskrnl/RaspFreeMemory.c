/*
 * XREFs of RaspFreeMemory @ 0x1401417C4
 * Callers:
 *     BgpRasPrintGlyph @ 0x140140DFC (BgpRasPrintGlyph.c)
 *     RaspRasterize @ 0x140141608 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x140141704 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x14014189C (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x140141980 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x140142574 (RaspInitializeGlyphData.c)
 *     RaspGetXExtent @ 0x14015DE2C (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x14015DFC4 (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x1402677D4 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x140267AF0 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x140267E60 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1407586A4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401417E0 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
