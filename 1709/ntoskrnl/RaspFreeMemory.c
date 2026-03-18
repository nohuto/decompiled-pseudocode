/*
 * XREFs of RaspFreeMemory @ 0x14013CD18
 * Callers:
 *     BgpRasPrintGlyph @ 0x14013C14C (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x14013C930 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x14013CB44 (RaspRectangleDestroy.c)
 *     RaspRasterize @ 0x14013CB58 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x14013CC54 (RaspDestroySegmentList.c)
 *     RaspGetUnscaledGlyphData @ 0x14013CDF0 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x14013CED0 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x14013DAC0 (RaspInitializeGlyphData.c)
 *     RaspGetCompositeGlyphList @ 0x140291B2C (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x140291E48 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x1402921B4 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1407D00AC (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14013CD34 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
