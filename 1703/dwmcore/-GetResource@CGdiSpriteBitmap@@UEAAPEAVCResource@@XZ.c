/*
 * XREFs of ?GetResource@CGdiSpriteBitmap@@UEAAPEAVCResource@@XZ @ 0x1800547D0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CGdiSpriteBitmap::GetResource(CGdiSpriteBitmap *this)
{
  return (struct CResource *)(((unsigned __int64)this - 72) & -(__int64)(this != (CGdiSpriteBitmap *)88));
}
