/*
 * XREFs of ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800BDF98
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18017E764 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Matrix3x3::TryInvert(const struct Matrix3x3 *a1, struct Matrix3x3 *a2)
{
  float v2; // xmm5_4
  float v3; // xmm4_4
  float v4; // xmm6_4
  float v5; // xmm10_4
  float v6; // xmm11_4
  float v7; // xmm12_4
  float v8; // xmm13_4
  float v9; // xmm14_4
  float v10; // xmm15_4
  float v11; // xmm9_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  bool result; // al

  v2 = *((float *)a1 + 2);
  v3 = *((float *)a1 + 8);
  v4 = *((float *)a1 + 5);
  v5 = *(float *)a1;
  v6 = *((float *)a1 + 6);
  v7 = *((float *)a1 + 7);
  v8 = *((float *)a1 + 3);
  v9 = *((float *)a1 + 4);
  v10 = *((float *)a1 + 1);
  v11 = *(float *)a1 * v9;
  v12 = (float)((float)((float)((float)((float)(v11 * v3) + (float)((float)(v8 * v7) * v2))
                              + (float)((float)(v10 * v6) * v4))
                      - (float)((float)(v6 * *(float *)a1) * v4))
              - (float)((float)(v6 * v9) * v2))
      - (float)((float)(v10 * v8) * v3);
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
  if ( v13 < 0.0000011920929 )
    return 0;
  result = 1;
  *((float *)a2 + 6) = (float)((float)(v8 * v7) - (float)(v6 * v9)) * (float)(1.0 / v12);
  *((float *)a2 + 8) = (float)(v11 - (float)(v10 * v8)) * (float)(1.0 / v12);
  *(float *)a2 = (float)((float)(v3 * v9) - (float)(v4 * v7)) * (float)(1.0 / v12);
  *((float *)a2 + 1) = (float)((float)(v2 * v7) - (float)(v3 * v10)) * (float)(1.0 / v12);
  *((float *)a2 + 2) = (float)((float)(v4 * v10) - (float)(v2 * v9)) * (float)(1.0 / v12);
  *((float *)a2 + 3) = (float)((float)(v4 * v6) - (float)(v3 * v8)) * (float)(1.0 / v12);
  *((float *)a2 + 5) = (float)((float)(v2 * v8) - (float)(v4 * v5)) * (float)(1.0 / v12);
  *((float *)a2 + 4) = (float)((float)(v3 * v5) - (float)(v2 * v6)) * (float)(1.0 / v12);
  *((float *)a2 + 7) = (float)((float)(v10 * v6) - (float)(v5 * v7)) * (float)(1.0 / v12);
  return result;
}
