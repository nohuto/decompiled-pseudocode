/*
 * XREFs of ?AddWeightedStopPairContribution@CGradientTextureGenerator@@CAXPEBUMILGradientStop@@0MMMPEAU_D3DCOLORVALUE@@@Z @ 0x180220A00
 * Callers:
 *     ??$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4Enum@MilColorInterpolationMode@@HMMPEAI@Z @ 0x180220480 (--$FillSingleTexelGradientSpan@I@CGradientTextureGenerator@@CAXPEAPEAUMILGradientStop@@0PEBU1@W4.c)
 * Callees:
 *     ?InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z @ 0x180221294 (-InterpolateColors@CGradientTextureGenerator@@CAXPEBU_D3DCOLORVALUE@@0MMMPEAU2@@Z.c)
 *     ?IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z @ 0x180221368 (-IsPositionLessThanOrEqual@CGradientTextureGenerator@@CAHMM@Z.c)
 */

void __fastcall CGradientTextureGenerator::AddWeightedStopPairContribution(
        const struct MILGradientStop *a1,
        const struct MILGradientStop *a2,
        float a3,
        float a4,
        float a5,
        struct _D3DCOLORVALUE *a6)
{
  float v7; // xmm3_4
  float v8; // xmm2_4
  __int64 v9; // rdx
  __int64 v10; // rcx
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm6_4
  D3DVALUE v14; // xmm3_4
  D3DVALUE v15; // xmm1_4
  float v16; // xmm0_4
  struct _D3DCOLORVALUE v17; // [rsp+30h] [rbp-28h] BYREF

  v7 = *(float *)a2;
  v8 = fmaxf(a3, *(float *)a1);
  if ( !(unsigned int)CGradientTextureGenerator::IsPositionLessThanOrEqual(fminf(a4, *(float *)a2) - v8, 0.0) )
  {
    v13 = v11 * a5;
    CGradientTextureGenerator::InterpolateColors(
      (const struct _D3DCOLORVALUE *)(v10 + 4),
      (const struct _D3DCOLORVALUE *)(v9 + 4),
      (float)(v11 * 0.5) + v8,
      v7 - v12,
      v12,
      &v17);
    v14 = (float)(v17.a * v13) + a6->a;
    v15 = (float)(v17.g * v13) + a6->g;
    a6->r = (float)(v17.r * v13) + a6->r;
    v16 = v17.b * v13;
    a6->a = v14;
    a6->g = v15;
    a6->b = v16 + a6->b;
  }
}
