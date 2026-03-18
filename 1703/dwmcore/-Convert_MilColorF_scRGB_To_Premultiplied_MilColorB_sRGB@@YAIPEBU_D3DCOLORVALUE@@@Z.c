/*
 * XREFs of ?Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB@@YAIPEBU_D3DCOLORVALUE@@@Z @ 0x1801ADC8C
 * Callers:
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18019CBD0 (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 * Callees:
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800C3DB0 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 */

__int64 __fastcall Convert_MilColorF_scRGB_To_Premultiplied_MilColorB_sRGB(const struct _D3DCOLORVALUE *a1)
{
  __m128 v1; // xmm6
  float v2; // xmm2_4
  float v3; // xmm0_4
  float v4; // eax
  float v5; // xmm0_4
  unsigned int v6; // eax
  float v7; // xmm0_4
  struct _D3DCOLORVALUE v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+68h] [rbp+20h]

  v1 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v9, a1));
  v2 = _mm_shuffle_ps(v1, v1, 255).m128_f32[0];
  v3 = (float)(v2 * 255.0) + 6291456.25;
  v4 = v3;
  v5 = (float)((float)(v2 * v1.m128_f32[0]) * 255.0) + 6291456.25;
  v6 = (LOWORD(v5) & 0x1FE | ((LODWORD(v4) & 0xFFFFFFFE) << 8)) << 8;
  v7 = (float)((float)(_mm_shuffle_ps(v1, v1, 85).m128_f32[0] * v2) * 255.0) + 6291456.25;
  *(float *)&v10 = (float)((float)(_mm_shuffle_ps(v1, v1, 170).m128_f32[0] * v2) * 255.0) + 6291456.25;
  return (unsigned __int8)(v10 >> 1) | ((LOWORD(v7) & 0x1FE | v6) << 7);
}
