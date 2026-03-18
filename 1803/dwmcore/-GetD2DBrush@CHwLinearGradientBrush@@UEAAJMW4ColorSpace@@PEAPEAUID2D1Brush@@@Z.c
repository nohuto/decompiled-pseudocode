/*
 * XREFs of ?GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1801F6DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800B611C (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpace@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801E1D10 (-CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpac.c)
 */

__int64 __fastcall CHwLinearGradientBrush::GetD2DBrush(__int64 *a1, float a2, int a3, _QWORD *a4)
{
  __int64 v8; // rdx
  const struct _D3DCOLORVALUE *v9; // rax
  int v10; // xmm3_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  const struct _D3DCOLORVALUE *v13; // rdi
  __m128 v14; // xmm1
  __m128 v15; // xmm1
  unsigned __int32 v16; // xmm0_4
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  int LinearGradientBrush; // eax
  unsigned int v22; // ebx
  __int64 v24; // [rsp+30h] [rbp-51h]
  struct _D3DCOLORVALUE v25; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v26[2]; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v27[2]; // [rsp+60h] [rbp-21h] BYREF
  struct _D3DCOLORVALUE v28; // [rsp+68h] [rbp-19h] BYREF
  float v29; // [rsp+78h] [rbp-9h] BYREF
  __int128 v30; // [rsp+7Ch] [rbp-5h]
  int v31; // [rsp+8Ch] [rbp+Bh]
  int v32; // [rsp+90h] [rbp+Fh]

  v8 = *(_QWORD *)(a1[8] + 224);
  v9 = *(const struct _D3DCOLORVALUE **)(v8 + 152);
  v10 = *(_DWORD *)(v8 + 128);
  v11 = *(_DWORD *)(v8 + 132);
  v12 = *(_DWORD *)(v8 + 136);
  v13 = v9 + 1;
  v27[0] = *(_DWORD *)(v8 + 124);
  v27[1] = v10;
  v26[0] = v11;
  v26[1] = v12;
  if ( a3 == 1 )
  {
    v14 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v28, v9));
    LODWORD(v25.r) = v14.m128_i32[0];
    LODWORD(v25.a) = _mm_shuffle_ps(v14, v14, 255).m128_u32[0];
    LODWORD(v25.b) = _mm_shuffle_ps(v14, v14, 170).m128_u32[0];
    LODWORD(v25.g) = _mm_shuffle_ps(v14, v14, 85).m128_u32[0];
    *(struct _D3DCOLORVALUE *)&v28.r = *(struct _D3DCOLORVALUE *)&v25.r;
    v15 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v25, v13));
    LODWORD(v25.r) = v15.m128_i32[0];
    LODWORD(v25.a) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
    v16 = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
    LODWORD(v25.b) = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
  }
  else
  {
    v17 = (__m128)_mm_loadu_si128((const __m128i *)v9);
    v18 = (__m128)_mm_loadu_si128((const __m128i *)v13);
    LODWORD(v25.r) = v17.m128_i32[0];
    LODWORD(v25.a) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
    LODWORD(v25.b) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
    LODWORD(v25.g) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
    *(struct _D3DCOLORVALUE *)&v28.r = *(struct _D3DCOLORVALUE *)&v25.r;
    LODWORD(v25.r) = v18.m128_i32[0];
    v16 = _mm_shuffle_ps(v18, v18, 85).m128_u32[0];
    LODWORD(v25.b) = _mm_shuffle_ps(v18, v18, 170).m128_u32[0];
    LODWORD(v25.a) = _mm_shuffle_ps(v18, v18, 255).m128_u32[0];
  }
  v19 = a1[1];
  v31 = 0;
  v20 = a1 + 9;
  v32 = 0;
  LODWORD(v25.g) = v16;
  LODWORD(v24) = a3;
  v30 = _xmm;
  v29 = a2;
  LinearGradientBrush = CD2DContext::CreateLinearGradientBrush(
                          v19,
                          (__int128 *)&v28,
                          (__int128 *)&v25,
                          v27,
                          v26,
                          v24,
                          (__int64)&v29,
                          (__int64)(a1 + 9));
  v22 = LinearGradientBrush;
  if ( LinearGradientBrush < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LinearGradientBrush, 0x85u);
  else
    *a4 = *v20;
  return v22;
}
