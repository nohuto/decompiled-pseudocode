/*
 * XREFs of ?GetBounds@CFlipChain@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180163E20
 * Callers:
 *     ?GetBounds@CFlipChain@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5D10 (-GetBounds@CFlipChain@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipChain::GetBounds(_DWORD *a1, __int64 a2, __int64 a3, float *a4)
{
  float v4; // xmm1_4
  float v5; // xmm2_4
  __int64 result; // rax

  v4 = (float)(int)a1[22];
  *a4 = v4;
  v5 = (float)(int)a1[24];
  a4[1] = v5;
  a4[2] = fmaxf(v4, (float)(a1[16] - a1[23]));
  result = 0LL;
  a4[3] = fmaxf(v5, (float)(a1[17] - a1[25]));
  return result;
}
