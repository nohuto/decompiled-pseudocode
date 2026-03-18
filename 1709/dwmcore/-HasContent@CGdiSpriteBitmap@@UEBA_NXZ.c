/*
 * XREFs of ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18009D3F0
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18009A980 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::HasContent(CGdiSpriteBitmap *this)
{
  return *((_QWORD *)this + 40) != 0LL;
}
