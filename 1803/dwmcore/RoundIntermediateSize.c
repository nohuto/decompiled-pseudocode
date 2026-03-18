/*
 * XREFs of RoundIntermediateSize @ 0x1800C2E64
 * Callers:
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800C2C4C (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801BD2E4 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 */

float __fastcall RoundIntermediateSize(float a1)
{
  float v2; // xmm2_4
  float v3; // xmm1_4

  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1) & _xmm);
  if ( v2 >= 8388608.0 )
    v3 = a1;
  else
    v3 = (float)(int)floorf_0(a1);
  if ( (float)(a1 - v3) <= 0.0099999998 )
    return fmaxf(1.0, v3);
  else
    return v3 + 1.0;
}
