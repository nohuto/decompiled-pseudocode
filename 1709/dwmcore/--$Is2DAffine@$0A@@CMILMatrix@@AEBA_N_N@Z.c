/*
 * XREFs of ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A380
 * Callers:
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800350E0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180061360 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18009653C (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800C2890 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z @ 0x18013E134 (-PushOffsetInternal@CDrawingContext@@AEAAJPEBVCVisual@@MMM@Z.c)
 * Callees:
 *     ??$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z @ 0x18018F30C (--$IsEqual@$00$0A@@CMILMatrix@@CA_NMMM@Z.c)
 */

__int64 __fastcall CMILMatrix::Is2DAffine<0>(float *a1, __int64 a2)
{
  __int64 v2; // xmm4_8
  float v3; // xmm5_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  __int64 v11; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  LOBYTE(a2) = 0;
  v2 = _xmm;
  v3 = FLOAT_0_000081380211;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[2]) & _xmm);
  if ( v4 < 0.000081380211
    && (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[6]) & _xmm), v5 < 0.000081380211)
    && (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[14]) & _xmm), v6 < 0.000081380211)
    || (unsigned __int8)CMILMatrix::IsEqual<1,0>(a1, a2)
    && (unsigned __int8)CMILMatrix::IsEqual<1,0>(v13, v11)
    && (unsigned __int8)CMILMatrix::IsEqual<1,0>(v14, v11)
    && (unsigned __int8)CMILMatrix::IsEqual<1,0>(v15, v11)
    && ((unsigned __int8)CMILMatrix::IsEqual<1,0>(v16, v11) || (unsigned __int8)CMILMatrix::IsEqual<1,0>(v17, v11))
    && (unsigned __int8)CMILMatrix::IsEqual<1,0>(v17, v11)
    && (unsigned __int8)CMILMatrix::IsEqual<1,0>(v18, v11) )
  {
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[3]) & v2);
    v8 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[7]) & v2) * 61440.0) + (float)(v7 * 61440.0);
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(a1[15]) & v2);
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v8 + v9) - 1.0)) & v2);
    LOBYTE(v11) = v3 > v10;
  }
  return (unsigned __int8)v11;
}
