/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180054710
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?IsOpaque@CGdiSpriteBitmap@@WFA@EBA_NXZ @ 0x1800D5C90 (-IsOpaque@CGdiSpriteBitmap@@WFA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::IsOpaque(CGdiSpriteBitmap *this)
{
  return *((_DWORD *)this + 29) == 3;
}
