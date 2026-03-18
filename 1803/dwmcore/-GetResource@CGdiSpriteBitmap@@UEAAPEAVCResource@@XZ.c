/*
 * XREFs of ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x180093CA0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CGdiSpriteBitmap::GetResource(CGdiSpriteBitmap *this)
{
  return (CGdiSpriteBitmap *)((char *)this - 56);
}
