/*
 * XREFs of ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x1800A56A0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000EDB8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800275D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180063F60 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800ACDB0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18013F310 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x180162368 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 * Callees:
 *     ??$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z @ 0x180019470 (--$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z.c)
 */

__int64 __fastcall CMILMatrix::Is2DAffine<0>(float *a1)
{
  __int64 v1; // xmm4_8
  float v2; // xmm5_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  unsigned __int8 v10; // dl
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  float v16; // xmm3_4
  __int64 v17; // rcx
  float v18; // xmm5_4
  float v19; // xmm2_4
  __int64 v20; // rcx

  v1 = _xmm;
  v2 = FLOAT_0_000081380211;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[2] - 0.0)) & _xmm);
  if ( v3 < 0.000081380211
    && (v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[6] - 0.0)) & _xmm), v4 < 0.000081380211)
    && (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1[14] - 0.0)) & _xmm), v5 < 0.000081380211)
    || CMILMatrix::IsEqual<1,0>(a1[2], 0.0, 0.000081380211)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v12 + 24), 0.0, 0.000081380211)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v13 + 32), 0.0, 0.000081380211)
    && CMILMatrix::IsEqual<1,0>(*(float *)(v14 + 36), 0.0, 0.000081380211)
    && ((v16 = *(float *)(v15 + 40), CMILMatrix::IsEqual<1,0>(v16, 0.0, 0.000081380211))
     || CMILMatrix::IsEqual<1,0>(v16, 1.0, 0.000081380211))
    && (v19 = v18, CMILMatrix::IsEqual<1,0>(*(float *)(v17 + 44), 0.0, v18))
    && CMILMatrix::IsEqual<1,0>(*(float *)(v20 + 56), 0.0, v19) )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[3]) & v1);
    v7 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[7]) & v1) * 61440.0) + (float)(v6 * 61440.0);
    v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[15]) & v1);
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v7 + v8) - 1.0)) & v1);
    return v2 > v9;
  }
  return v10;
}
