/*
 * XREFs of ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x18009D420
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CGdiSpriteBitmap::GetResource(CGdiSpriteBitmap *this)
{
  return (CGdiSpriteBitmap *)((char *)this - 56);
}
