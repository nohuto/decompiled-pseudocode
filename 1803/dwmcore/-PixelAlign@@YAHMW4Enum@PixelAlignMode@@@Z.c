/*
 * XREFs of ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x18001D790
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PixelAlign(double a1, int a2, double a3)
{
  float v3; // xmm4_4
  __int64 result; // rax
  float v5; // xmm3_4
  __m128 v6; // rt1
  __m128 v7; // xmm2
  __m128 v8; // xmm1
  float v9; // [rsp+8h] [rbp+8h]

  v3 = *(float *)&a1;
  if ( (LODWORD(a1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)*(float *)&a1 - *(float *)&a1;
    v6.m128_f32[0] = FLOAT_N0_5;
    result = (int)*(float *)&a1 - _mm_cmple_ss(*(__m128 *)&a3, v6).m128_u32[0];
  }
  else
  {
    v9 = *(float *)&a1 + 6291456.25;
    result = (unsigned int)((int)(LODWORD(v9) << 10) >> 11);
  }
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&a1 - (float)(int)result)) & _xmm);
  if ( v5 > 0.00390625 )
  {
    v7 = 0LL;
    v7.m128_f32[0] = *(float *)&a1;
    if ( a2 )
    {
      *(float *)&a1 = (float)(int)*(float *)&a1;
      return (int)v3 - _mm_cmplt_ss(*(__m128 *)&a1, v7).m128_u32[0];
    }
    else
    {
      v8.m128_f32[0] = (float)(int)*(float *)&a1;
      return (int)*(float *)&a1 + _mm_cmplt_ss(v7, v8).m128_u32[0];
    }
  }
  return result;
}
