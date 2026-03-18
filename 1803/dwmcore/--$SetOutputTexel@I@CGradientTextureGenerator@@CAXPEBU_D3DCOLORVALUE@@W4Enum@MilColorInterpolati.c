/*
 * XREFs of ??$SetOutputTexel@I@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@W4Enum@MilColorInterpolationMode@@PEAI@Z @ 0x1802207DC
 * Callers:
 *     ??$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilColorInterpolationMode@@IPEAI@Z @ 0x1802202F8 (--$FillGradientSpan@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enu.c)
 *     ??$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4Enum@MilColorInterpolationMode@@HMMPEAI@Z @ 0x180220480 (--$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4.c)
 *     ??$FillTexture@I@CGradientTextureGenerator@@CAXPEBV?$DynArray@UMILGradientStop@@$0A@@@W4Enum@MilGradientWrapMode@@W42MilColorInterpolationMode@@PEBU_D3DCOLORVALUE@@3PEBVCGradientSpanInfo@@IPEAI@Z @ 0x18022056C (--$FillTexture@I@CGradientTextureGenerator@@CAXPEBV-$DynArray@UMILGradientStop@@$0A@@@W4Enum@Mil.c)
 * Callees:
 *     ?Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z @ 0x1800C48F4 (-Convert_scRGB_Channel_To_sRGB_Byte@@YAEM@Z.c)
 *     floor @ 0x1800DB784 (floor.c)
 *     ?Premultiply@@YAII@Z @ 0x180205038 (-Premultiply@@YAII@Z.c)
 */

__int64 __fastcall CGradientTextureGenerator::SetOutputTexel<unsigned int>(const __m128i *a1, int a2, int *a3)
{
  __int64 result; // rax
  __m128 v5; // xmm6
  float v6; // xmm7_4
  float v7; // xmm1_4
  float v8; // xmm8_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  int v11; // eax
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // di
  unsigned __int8 v14; // r14
  int v15; // ecx
  unsigned __int8 v16; // bp
  int v17; // ecx
  unsigned __int8 v18; // si
  int v19; // ecx
  unsigned __int8 v20; // bl
  int v21; // ecx
  unsigned __int8 v22; // di
  int v23; // ebx
  int v24; // ebx
  unsigned __int8 v25; // al
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = (__m128)_mm_loadu_si128(a1);
  LODWORD(v6) = _mm_shuffle_ps(v5, v5, 85).m128_u32[0];
  v7 = fminf(_mm_shuffle_ps(v5, v5, 255).m128_f32[0], 1.0);
  v8 = fminf(v5.m128_f32[0], 1.0) * v7;
  v9 = fminf(_mm_shuffle_ps(v5, v5, 170).m128_f32[0], 1.0) * v7;
  v10 = fminf(v6, 1.0) * v7;
  if ( a2 == 1 )
  {
    v11 = (int)floor((float)(v7 * 255.0) + 0.5);
    v12 = 0;
    v13 = -1;
    if ( v11 <= 255 )
    {
      v14 = 0;
      if ( v11 >= 0 )
        v14 = v11;
    }
    else
    {
      v14 = -1;
    }
    v15 = (int)floor((float)(v8 * 255.0) + 0.5);
    if ( v15 <= 255 )
    {
      v16 = 0;
      if ( v15 >= 0 )
        v16 = v15;
    }
    else
    {
      v16 = -1;
    }
    v17 = (int)floor((float)(v10 * 255.0) + 0.5);
    if ( v17 <= 255 )
    {
      v18 = 0;
      if ( v17 >= 0 )
        v18 = v17;
    }
    else
    {
      v18 = -1;
    }
    v19 = (int)floor((float)(v9 * 255.0) + 0.5);
    if ( v19 <= 255 )
    {
      if ( v19 >= 0 )
        v12 = v19;
      v13 = v12;
    }
    result = v13;
    *a3 = v13 | ((v18 | ((v16 | (v14 << 8)) << 8)) << 8);
  }
  else
  {
    v20 = 0;
    if ( !a2 )
    {
      if ( v7 > 0.0 )
      {
        v8 = v8 / v7;
        v10 = v10 / v7;
        v9 = v9 / v7;
      }
      v21 = (int)floor((float)(v7 * 255.0) + 0.5);
      v22 = -1;
      if ( v21 <= 255 )
      {
        if ( v21 >= 0 )
          v20 = v21;
        v22 = v20;
      }
      v23 = ((v22 << 8) | Convert_scRGB_Channel_To_sRGB_Byte(v8)) << 8;
      v24 = (Convert_scRGB_Channel_To_sRGB_Byte(v10) | v23) << 8;
      v25 = Convert_scRGB_Channel_To_sRGB_Byte(v9);
      result = Premultiply(v24 | (unsigned int)v25);
      *a3 = result;
    }
  }
  return result;
}
