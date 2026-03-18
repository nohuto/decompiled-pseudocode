/*
 * XREFs of ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A5D80
 * Callers:
 *     ?GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z @ 0x18000B8A8 (-GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045C50 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsIdentity<1>(__int64 a1)
{
  char v1; // r8
  char v2; // al
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  char v18; // r9
  char v19; // dl

  v1 = *(_BYTE *)(a1 + 64);
  v2 = (char)(v1 << 6) >> 6;
  if ( v2 )
    return v2 == 1;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a1 - 1.0)) & _xmm) >= 0.000081380211 )
    goto LABEL_19;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 4) - 0.0)) & _xmm);
  if ( v3 >= 0.000081380211 )
    goto LABEL_19;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 8) - 0.0)) & _xmm);
  if ( v4 >= 0.000081380211 )
    goto LABEL_19;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 12) - 0.0)) & _xmm);
  if ( v5 >= 0.000081380211 )
    goto LABEL_19;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 16) - 0.0)) & _xmm);
  if ( v6 >= 0.000081380211 )
    goto LABEL_19;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm);
  if ( v7 >= 0.000081380211 )
    goto LABEL_19;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 24) - 0.0)) & _xmm);
  if ( v8 >= 0.000081380211 )
    goto LABEL_19;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 28) - 0.0)) & _xmm);
  if ( v9 >= 0.000081380211 )
    goto LABEL_19;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 32) - 0.0)) & _xmm);
  if ( v10 >= 0.000081380211
    || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 36) - 0.0)) & _xmm), v11 >= 0.000081380211)
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 1.0)) & _xmm), v12 >= 0.000081380211)
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 44) - 0.0)) & _xmm), v13 >= 0.000081380211)
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 48) - 0.0)) & _xmm), v14 >= 0.000081380211)
    || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 52) - 0.0)) & _xmm), v15 >= 0.000081380211)
    || (v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 56) - 0.0)) & _xmm), v16 >= 0.000081380211)
    || (v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v17 >= 0.000081380211) )
  {
LABEL_19:
    v18 = 0;
  }
  else
  {
    v18 = 1;
  }
  v19 = v1 ^ (v1 ^ (-1 - 2 * v18)) & 3;
  *(_BYTE *)(a1 + 64) = v19;
  if ( v18 )
  {
    *(_BYTE *)(a1 + 65) = 125;
    *(_BYTE *)(a1 + 64) = v19 & 3 | 0x54;
  }
  return v18;
}
