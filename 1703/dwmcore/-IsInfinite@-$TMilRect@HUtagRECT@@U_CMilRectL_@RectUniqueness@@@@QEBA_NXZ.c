/*
 * XREFs of ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180020680
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180050730 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x18012A478 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsInfinite(_DWORD *a1)
{
  return *a1 <= TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::sc_rcInfinite && a1[2] >= dword_18023DC50
      || a1[1] <= dword_18023DC4C && a1[3] >= dword_18023DC54;
}
