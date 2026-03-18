/*
 * XREFs of ?GetID2D1BitmapBrushFromSurfaceBitmap@CD2DContext@@AEAAJPEAUID2D1Bitmap1@@AEBUtagRECT@@AEBUD2D1_BITMAP_BRUSH_PROPERTIES@@PEAPEAUID2D1BitmapBrush@@@Z @ 0x180199290
 * Callers:
 *     ?DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@PEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@56M@Z @ 0x180198970 (-DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIV.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetID2D1BitmapBrushFromSurfaceBitmap(
        CD2DContext *this,
        struct ID2D1Bitmap1 *a2,
        const struct tagRECT *a3,
        const struct D2D1_BITMAP_BRUSH_PROPERTIES *a4,
        struct ID2D1BitmapBrush **a5)
{
  LONG top; // ecx
  float *v10; // r9
  int v11; // eax
  __m128 v12; // xmm1
  unsigned int v13; // xmm2_4
  __m128i v14; // xmm0
  __m128 v15; // xmm2
  float v17; // [rsp+30h] [rbp-31h] BYREF
  float v18; // [rsp+34h] [rbp-2Dh]
  __int128 v19; // [rsp+38h] [rbp-29h]
  float v20; // [rsp+50h] [rbp-11h] BYREF
  __int128 v21; // [rsp+54h] [rbp-Dh]
  unsigned __int64 v22; // [rsp+64h] [rbp+3h]

  (*(void (__fastcall **)(struct ID2D1Bitmap1 *, float *))(*(_QWORD *)a2 + 32LL))(a2, &v17);
  top = a3->top;
  if ( !*(_QWORD *)&a3->left && a3->bottom == (int)(float)(v18 + 0.5) && a3->right == (int)(float)(v17 + 0.5) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = &v20;
    v11 = a3->right - a3->left;
    DWORD2(v19) = 0;
    v12 = (__m128)COERCE_UNSIGNED_INT((float)a3->left);
    *(float *)&v13 = v17 / (float)v11;
    v14 = _mm_cvtsi32_si128(a3->bottom - top);
    v12.m128_f32[0] = v12.m128_f32[0] * *(float *)&v13;
    *(_QWORD *)&v19 = v13;
    v15 = (__m128)COERCE_UNSIGNED_INT((float)top);
    *((float *)&v19 + 3) = v18 / _mm_cvtepi32_ps(v14).m128_f32[0];
    v15.m128_f32[0] = v15.m128_f32[0] * *((float *)&v19 + 3);
    v20 = FLOAT_1_0;
    v22 = _mm_unpacklo_ps(_mm_xor_ps(v12, (__m128)_xmm), _mm_xor_ps(v15, (__m128)_xmm)).m128_u64[0];
    v21 = v19;
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 *, const struct D2D1_BITMAP_BRUSH_PROPERTIES *, float *, struct ID2D1BitmapBrush **))(**((_QWORD **)this + 22) + 56LL))(
           *((_QWORD *)this + 22),
           a2,
           a4,
           v10,
           a5);
}
