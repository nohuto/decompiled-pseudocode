/*
 * XREFs of ?GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1801BC2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800BC5FC (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpace@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801A9850 (-CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpac.c)
 */

__int64 __fastcall CHwLinearGradientBrush::GetD2DBrush(__int64 *a1, float a2, int a3, _QWORD *a4)
{
  __int64 v8; // rdx
  int v9; // xmm3_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  const struct _D3DCOLORVALUE *v12; // rdi
  __m128 v13; // xmm1
  __m128 v14; // xmm1
  unsigned __int32 v15; // xmm0_4
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  signed int LinearGradientBrush; // eax
  unsigned int v21; // ebx
  __int64 v23; // [rsp+30h] [rbp-51h]
  struct _D3DCOLORVALUE v24; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v25[2]; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v26[2]; // [rsp+60h] [rbp-21h] BYREF
  struct _D3DCOLORVALUE v27; // [rsp+68h] [rbp-19h] BYREF
  float v28; // [rsp+78h] [rbp-9h] BYREF
  __int128 v29; // [rsp+7Ch] [rbp-5h]
  int v30; // [rsp+8Ch] [rbp+Bh]
  int v31; // [rsp+90h] [rbp+Fh]

  v8 = *(_QWORD *)(a1[8] + 224);
  v9 = *(_DWORD *)(v8 + 128);
  v10 = *(_DWORD *)(v8 + 132);
  v11 = *(_DWORD *)(v8 + 136);
  v12 = *(const struct _D3DCOLORVALUE **)(v8 + 152);
  v26[0] = *(_DWORD *)(v8 + 124);
  v26[1] = v9;
  v25[0] = v10;
  v25[1] = v11;
  if ( a3 == 1 )
  {
    v13 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v27, v12));
    LODWORD(v24.r) = v13.m128_i32[0];
    LODWORD(v24.a) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
    LODWORD(v24.b) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
    LODWORD(v24.g) = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
    *(struct _D3DCOLORVALUE *)&v27.r = *(struct _D3DCOLORVALUE *)&v24.r;
    v14 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v24, v12 + 1));
    LODWORD(v24.r) = v14.m128_i32[0];
    LODWORD(v24.a) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
    v15 = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
    LODWORD(v24.b) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
  }
  else
  {
    v16 = (__m128)_mm_loadu_si128((const __m128i *)v12);
    v17 = (__m128)_mm_loadu_si128((const __m128i *)&v12[1]);
    LODWORD(v24.r) = v16.m128_i32[0];
    LODWORD(v24.a) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
    LODWORD(v24.b) = _mm_shuffle_ps(v16, v16, 170).m128_u32[0];
    LODWORD(v24.g) = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
    *(struct _D3DCOLORVALUE *)&v27.r = *(struct _D3DCOLORVALUE *)&v24.r;
    LODWORD(v24.r) = v17.m128_i32[0];
    v15 = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
    LODWORD(v24.b) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
    LODWORD(v24.a) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
  }
  v18 = a1[1];
  v30 = 0;
  v19 = a1 + 9;
  v31 = 0;
  LODWORD(v24.g) = v15;
  LODWORD(v23) = a3;
  v29 = _xmm;
  v28 = a2;
  LinearGradientBrush = CD2DContext::CreateLinearGradientBrush(
                          v18,
                          (__int128 *)&v27,
                          (__int128 *)&v24,
                          v26,
                          v25,
                          v23,
                          (__int64)&v28,
                          (__int64)(a1 + 9));
  v21 = LinearGradientBrush;
  if ( LinearGradientBrush < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, LinearGradientBrush, 0x85u);
  else
    *a4 = *v19;
  return v21;
}
