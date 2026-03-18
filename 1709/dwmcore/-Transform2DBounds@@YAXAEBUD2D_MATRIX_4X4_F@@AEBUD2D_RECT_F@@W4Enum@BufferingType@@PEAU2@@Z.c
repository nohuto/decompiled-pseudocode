/*
 * XREFs of ?Transform2DBounds@@YAXAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@W4Enum@BufferingType@@PEAU2@@Z @ 0x180192070
 * Callers:
 *     ?Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilBitmapBorderMode@@PEAV2@@Z @ 0x18018FF34 (-Transform2DBoundsWithBorderMode@CMILMatrix@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ComputeBounds@@YAXPEBUD2D_POINT_2F@@IPEAUD2D_RECT_F@@@Z @ 0x180191F50 (-ComputeBounds@@YAXPEBUD2D_POINT_2F@@IPEAUD2D_RECT_F@@@Z.c)
 *     ?RequiresNearPlaneClipping@@YA_NAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@@Z @ 0x180191FF4 (-RequiresNearPlaneClipping@@YA_NAEBUD2D_MATRIX_4X4_F@@AEBUD2D_RECT_F@@@Z.c)
 */

void __fastcall Transform2DBounds(
        const struct D2D_MATRIX_4X4_F *a1,
        const struct D2D_RECT_F *a2,
        __int64 a3,
        struct D2D_RECT_F *a4)
{
  __m128 left_low; // xmm7
  __m128 top_low; // xmm6
  __int64 v6; // rdx
  unsigned int *v7; // rcx
  __int128 v8; // xmm0
  __m128 v9; // xmm3
  __m128 v10; // xmm5
  __m128 v11; // xmm3
  __m128 v12; // xmm4
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm2
  __m128 v20; // xmm2
  float *v21; // r9
  int v22; // r10d
  float v23; // xmm1_4
  float v24; // xmm0_4
  struct D2D_POINT_2F v25; // [rsp+20h] [rbp-58h] BYREF
  __int32 v26; // [rsp+28h] [rbp-50h]
  __int32 v27; // [rsp+2Ch] [rbp-4Ch]
  __int32 v28; // [rsp+30h] [rbp-48h]
  __int32 v29; // [rsp+34h] [rbp-44h]
  unsigned __int32 v30; // [rsp+38h] [rbp-40h]
  unsigned __int32 v31; // [rsp+3Ch] [rbp-3Ch]

  left_low = (__m128)LODWORD(a2->left);
  if ( left_low.m128_f32[0] > a2->right || (top_low = (__m128)LODWORD(a2->top), top_low.m128_f32[0] > a2->bottom) )
  {
    v8 = (__int128)*a2;
    goto LABEL_8;
  }
  if ( RequiresNearPlaneClipping(a1, a2) )
  {
    v8 = _xmm;
LABEL_8:
    *a4 = (struct D2D_RECT_F)v8;
    return;
  }
  v9 = _mm_unpacklo_ps(top_low, (__m128)*(unsigned int *)(v6 + 12));
  v10 = _mm_unpacklo_ps(
          _mm_unpacklo_ps(left_low, left_low),
          _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 8), (__m128)*(unsigned int *)(v6 + 8)));
  v11 = _mm_unpacklo_ps(v9, v9);
  v12 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps((__m128)v7[7], (__m128)v7[7], 0), v11),
            _mm_mul_ps(_mm_shuffle_ps((__m128)v7[3], (__m128)v7[3], 0), v10)),
          _mm_shuffle_ps((__m128)v7[15], (__m128)v7[15], 0));
  v13 = _mm_div_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps((__m128)*v7, (__m128)*v7, 0), v10),
              _mm_mul_ps(_mm_shuffle_ps((__m128)v7[4], (__m128)v7[4], 0), v11)),
            _mm_shuffle_ps((__m128)v7[12], (__m128)v7[12], 0)),
          v12);
  v14 = _mm_add_ps(
          _mm_mul_ps(_mm_shuffle_ps((__m128)v7[5], (__m128)v7[5], 0), v11),
          _mm_mul_ps(_mm_shuffle_ps((__m128)v7[1], (__m128)v7[1], 0), v10));
  v15 = _mm_shuffle_ps((__m128)v7[13], (__m128)v7[13], 0);
  LODWORD(v25.x) = v13.m128_i32[0];
  v16 = _mm_shuffle_ps(v13, v13, 229);
  v26 = v16.m128_i32[0];
  v17 = _mm_unpackhi_ps(v16, v16);
  v28 = v17.m128_i32[0];
  v30 = _mm_unpackhi_ps(v17, v17).m128_u32[0];
  v18 = _mm_div_ps(_mm_add_ps(v14, v15), v12);
  LODWORD(v25.y) = v18.m128_i32[0];
  v19 = _mm_shuffle_ps(v18, v18, 229);
  v27 = v19.m128_i32[0];
  v20 = _mm_unpackhi_ps(v19, v19);
  v29 = v20.m128_i32[0];
  v31 = _mm_unpackhi_ps(v20, v20).m128_u32[0];
  ComputeBounds(&v25, v6, a4);
  if ( v22 == 1 )
  {
    v23 = v21[2] + 4.0;
    *v21 = *v21 - 4.0;
    v24 = v21[1] - 4.0;
    v21[2] = v23;
    v21[1] = v24;
    v21[3] = v21[3] + 4.0;
  }
}
