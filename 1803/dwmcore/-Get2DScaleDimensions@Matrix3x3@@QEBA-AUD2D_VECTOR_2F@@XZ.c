/*
 * XREFs of ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x18008C720
 * Callers:
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801BD2E4 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 */

struct D2D_VECTOR_2F __fastcall Matrix3x3::Get2DScaleDimensions(Matrix3x3 *this, struct D2D_VECTOR_2F a2)
{
  float v2; // xmm5_4
  float v4; // xmm4_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm3_4
  float v8; // xmm6_4
  float v9; // xmm12_4
  float v10; // xmm13_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm7_4
  float v18; // xmm6_4
  float v19; // xmm8_4
  float v20; // xmm0_4
  struct D2D_VECTOR_2F result; // rax

  v2 = *((float *)this + 6);
  v4 = v2 + *(float *)this;
  v5 = v2 + *((float *)this + 3);
  v6 = *((float *)this + 7);
  v7 = v6 + *((float *)this + 1);
  v8 = v6 + *((float *)this + 4);
  v9 = *((float *)this + 8) + *((float *)this + 5);
  v10 = *((float *)this + 8) + *((float *)this + 2);
  v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
  if ( v11 >= 0.000081380211 )
  {
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - 1.0)) & _xmm);
    if ( v12 >= 0.000081380211 )
    {
      v4 = v4 / v10;
      v7 = v7 / v10;
    }
  }
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
  if ( v13 >= 0.000081380211 )
  {
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v9 - 1.0)) & _xmm);
    if ( v14 >= 0.000081380211 )
    {
      v5 = v5 / v9;
      v8 = v8 / v9;
    }
  }
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 8)) & _xmm);
  if ( v15 >= 0.000081380211 )
  {
    v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm);
    if ( v16 >= 0.000081380211 )
    {
      v2 = v2 / *((float *)this + 8);
      v6 = v6 / *((float *)this + 8);
    }
  }
  v17 = v5 - v2;
  v18 = v8 - v6;
  v19 = sqrtf_0((float)((float)(v7 - v6) * (float)(v7 - v6)) + (float)((float)(v4 - v2) * (float)(v4 - v2)));
  v20 = sqrtf_0((float)(v18 * v18) + (float)(v17 * v17));
  result = a2;
  **(float **)&a2 = v19;
  *(float *)(*(_QWORD *)&a2 + 4LL) = v20;
  return result;
}
