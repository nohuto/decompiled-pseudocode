/*
 * XREFs of ?DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x18001A9DC
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 * Callees:
 *     <none>
 */

float __fastcall CCustomBlur::DetermineOutputScale(float a1, float a2, enum D2D1_GAUSSIANBLUR_OPTIMIZATION a3)
{
  float v3; // xmm3_4
  float v4; // xmm3_4

  v3 = FLOAT_1_0;
  if ( a1 > 1.0 )
  {
    if ( a2 <= CCustomBlur::k_optimizations[5 * a3 + 2] )
      v4 = FLOAT_1_0;
    else
      v4 = FLOAT_0_5;
    v3 = v4
       * fmaxf(
           0.1,
           fminf(1.0, CCustomBlur::k_optimizations[5 * a3] / (float)(a2 + CCustomBlur::k_optimizations[5 * a3 + 1])));
    if ( (float)(v3 * a1) < 1.0 )
      return 1.0 / a1;
  }
  return v3;
}
