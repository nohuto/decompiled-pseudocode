/*
 * XREFs of RaspFreeMemory @ 0x140174460
 * Callers:
 *     BgpRasPrintGlyph @ 0x140173ACC (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x140174074 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x140174288 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x14017429C (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x140174398 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x14017447C (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x140174560 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x140175110 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x1402C7648 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x1402C7964 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x1402C7CEC (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x14083D5E4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401659F0 (BgpFwFreeMemory.c)
 */

void __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  if ( !*a2 )
    BgpFwFreeMemory(a1);
}
