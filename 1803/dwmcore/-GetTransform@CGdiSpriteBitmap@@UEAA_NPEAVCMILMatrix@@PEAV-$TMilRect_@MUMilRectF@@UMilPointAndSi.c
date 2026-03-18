/*
 * XREFs of ?GetTransform@CGdiSpriteBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180093B80
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     <none>
 */

char __fastcall CGdiSpriteBitmap::GetTransform(int *a1, __int64 a2, float *a3)
{
  float v3; // xmm1_4
  float v4; // xmm2_4

  *(_WORD *)(a2 + 64) = 32085;
  *(_OWORD *)a2 = _xmm;
  *(_OWORD *)(a2 + 16) = _xmm;
  *(_OWORD *)(a2 + 32) = _xmm;
  *(_OWORD *)(a2 + 48) = _xmm;
  if ( a3 )
  {
    v3 = (float)a1[11];
    *a3 = v3;
    v4 = (float)a1[13];
    a3[1] = v4;
    a3[2] = fmaxf(v3, (float)(a1[78] - a1[12]));
    a3[3] = fmaxf(v4, (float)(a1[79] - a1[14]));
  }
  return 0;
}
