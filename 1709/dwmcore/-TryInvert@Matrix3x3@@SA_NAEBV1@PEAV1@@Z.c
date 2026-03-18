/*
 * XREFs of ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800B37C8
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800491D0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x180155AFC (-ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Matrix3x3::TryInvert(const struct Matrix3x3 *a1, struct Matrix3x3 *a2)
{
  float v2; // xmm5_4
  float v3; // xmm4_4
  float v4; // xmm9_4
  float v5; // xmm10_4
  float v6; // xmm11_4
  float v7; // xmm12_4
  float v8; // xmm13_4
  float v9; // xmm14_4
  float v10; // xmm15_4
  float v11; // xmm8_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4

  v2 = *((float *)a1 + 1);
  v3 = *((float *)a1 + 2);
  v4 = *(float *)a1;
  v5 = *((float *)a1 + 8);
  v6 = *((float *)a1 + 5);
  v7 = *((float *)a1 + 6);
  v8 = *((float *)a1 + 7);
  v9 = *((float *)a1 + 3);
  v10 = *((float *)a1 + 4);
  v11 = *(float *)a1 * v10;
  v12 = (float)((float)((float)((float)((float)(v11 * v5) + (float)((float)(v9 * v8) * v3))
                              + (float)((float)(v2 * v7) * v6))
                      - (float)((float)(v7 * *(float *)a1) * v6))
              - (float)((float)(v7 * v10) * v3))
      - (float)((float)(v2 * v9) * v5);
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
  if ( v13 < 0.0000011920929 )
    return 0;
  v14 = 1.0 / v12;
  if ( a2 )
  {
    *((float *)a2 + 6) = (float)((float)(v9 * v8) - (float)(v7 * v10)) * v14;
    *(float *)a2 = (float)((float)(v5 * v10) - (float)(v6 * v8)) * v14;
    *((float *)a2 + 8) = (float)(v11 - (float)(v2 * v9)) * v14;
    *((float *)a2 + 1) = (float)((float)(v3 * v8) - (float)(v2 * v5)) * v14;
    *((float *)a2 + 2) = (float)((float)(v2 * v6) - (float)(v3 * v10)) * v14;
    *((float *)a2 + 3) = (float)((float)(v6 * v7) - (float)(v9 * v5)) * v14;
    *((float *)a2 + 4) = (float)((float)(v4 * v5) - (float)(v3 * v7)) * v14;
    *((float *)a2 + 7) = (float)((float)(v2 * v7) - (float)(v4 * v8)) * v14;
    *((float *)a2 + 5) = (float)((float)(v3 * v9) - (float)(v4 * v6)) * v14;
  }
  return 1;
}
