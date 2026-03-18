/*
 * XREFs of ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x180054700
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18009B300 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?HasContent@CGdiSpriteBitmap@@WFA@EBA_NXZ @ 0x1800D5C80 (-HasContent@CGdiSpriteBitmap@@WFA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CGdiSpriteBitmap::HasContent(CGdiSpriteBitmap *this)
{
  return *((_QWORD *)this + 9) != 0LL;
}
