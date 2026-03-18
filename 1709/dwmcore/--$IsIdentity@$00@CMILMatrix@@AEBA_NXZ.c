/*
 * XREFs of ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A710
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D8A0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z @ 0x1800C5B24 (-GetCRegion@CRegionShape@@QEBAJAEAVCRegion@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsIdentity<1>(__int64 a1)
{
  char v1; // al
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  bool result; // al
  char v16; // dl
  char v17; // dl
  float v18; // xmm1_4
  float v19; // xmm2_4

  v1 = (char)(*(_BYTE *)(a1 + 64) << 6) >> 6;
  if ( v1 )
    return v1 == 1;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a1 - 1.0)) & _xmm) >= 0.000081380211 )
    goto LABEL_16;
  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 4)) & _xmm);
  if ( v2 >= 0.000081380211 )
    goto LABEL_16;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 8)) & _xmm);
  if ( v3 >= 0.000081380211 )
    goto LABEL_16;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm);
  if ( v4 >= 0.000081380211 )
    goto LABEL_16;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)) & _xmm);
  if ( v5 >= 0.000081380211 )
    goto LABEL_16;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm);
  if ( v6 >= 0.000081380211 )
    goto LABEL_16;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 24)) & _xmm);
  if ( v7 >= 0.000081380211 )
    goto LABEL_16;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm);
  if ( v8 >= 0.000081380211 )
    goto LABEL_16;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 32)) & _xmm);
  if ( v9 >= 0.000081380211
    || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 36)) & _xmm), v10 >= 0.000081380211)
    || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 1.0)) & _xmm), v11 >= 0.000081380211)
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 44)) & _xmm), v12 >= 0.000081380211)
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 48)) & _xmm), v13 >= 0.000081380211)
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 52)) & _xmm), v14 >= 0.000081380211)
    || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 56)) & _xmm), v18 >= 0.000081380211)
    || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v19 >= 0.000081380211) )
  {
LABEL_16:
    result = 0;
    v16 = 3;
  }
  else
  {
    result = 1;
    v16 = 1;
  }
  *(_BYTE *)(a1 + 64) &= 0xFCu;
  *(_BYTE *)(a1 + 64) |= v16;
  v17 = *(_BYTE *)(a1 + 64);
  if ( result )
  {
    *(_BYTE *)(a1 + 65) = 125;
    *(_BYTE *)(a1 + 64) = v17 & 3 | 0x54;
  }
  return result;
}
