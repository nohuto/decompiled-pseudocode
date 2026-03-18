/*
 * XREFs of ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180094DF4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@3@Z @ 0x18013C044 (-GetAlphaMarginsRects@CWindowNode@@AEAA_N_NPEAU_MARGINS@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z @ 0x1801C744C (-Transform2DBounds@CMILMatrix@@QEBAXAEBUtagRECT@@AEAU2@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180209D10 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x18021815C (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     <none>
 */

int *__fastcall CMilRectLFromMilRectF(int *a1, __int64 a2)
{
  float v2; // xmm0_4
  float v3; // eax
  double v4; // xmm0_8
  int v5; // eax
  double v6; // xmm0_8
  int v7; // eax
  float v9; // [rsp+8h] [rbp+8h]

  v2 = *(float *)a2 + 6291456.25;
  v3 = v2;
  v4 = *(float *)(a2 + 4);
  *a1 = (int)(LODWORD(v3) << 10) >> 11;
  *(float *)&v4 = v4 + 6291456.25;
  v5 = LODWORD(v4);
  v6 = *(float *)(a2 + 8);
  a1[1] = v5 << 10 >> 11;
  *(float *)&v6 = v6 + 6291456.25;
  v7 = LODWORD(v6);
  LODWORD(v6) = *(_DWORD *)(a2 + 12);
  a1[2] = v7 << 10 >> 11;
  v9 = *(float *)&v6 + 6291456.25;
  a1[3] = (int)(LODWORD(v9) << 10) >> 11;
  return a1;
}
