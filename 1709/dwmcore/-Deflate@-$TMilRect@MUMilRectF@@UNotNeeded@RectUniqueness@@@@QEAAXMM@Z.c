/*
 * XREFs of ?Deflate@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180178940
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::Deflate(float *a1, float a2, float a3)
{
  float v3; // xmm3_4
  float v4; // xmm0_4
  float v5; // xmm1_4
  bool result; // al
  _QWORD *v7; // rcx

  v3 = a3 + a1[1];
  *a1 = a2 + *a1;
  v4 = a1[2] - a2;
  a1[1] = v3;
  v5 = a1[3] - a3;
  a1[2] = v4;
  a1[3] = v5;
  result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(a1);
  if ( result )
  {
    v7[1] = 0LL;
    *v7 = 0LL;
  }
  return result;
}
