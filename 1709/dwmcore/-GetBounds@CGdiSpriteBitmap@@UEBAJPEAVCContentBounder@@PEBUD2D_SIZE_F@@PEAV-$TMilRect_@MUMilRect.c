/*
 * XREFs of ?GetBounds@CGdiSpriteBitmap@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009D390
 * Callers:
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180037114 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGdiSpriteBitmap::GetBounds(int *a1, __int64 a2, __int64 a3, float *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  __int64 result; // rax

  v4 = (float)a1[11];
  *a4 = v4;
  v5 = (float)a1[13];
  a4[1] = v5;
  a4[2] = fmaxf(v4, (float)(a1[76] - a1[12]));
  result = 0LL;
  a4[3] = fmaxf(v5, (float)(a1[77] - a1[14]));
  return result;
}
