/*
 * XREFs of ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180099FB0
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180079CB0 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsIdentity<1>(__int64 a1)
{
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
  bool result; // al
  char v17; // r8
  char v18; // cl
  float v19; // xmm1_4
  float v20; // xmm2_4

  v2 = (char)(*(_BYTE *)(a1 + 64) << 6) >> 6;
  if ( v2 )
    return v2 == 1;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a1 - 1.0)) & _xmm) >= 0.00012207031 )
    goto LABEL_16;
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 4)) & _xmm);
  if ( v3 >= 0.00012207031 )
    goto LABEL_16;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 8)) & _xmm);
  if ( v4 >= 0.00012207031 )
    goto LABEL_16;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm);
  if ( v5 >= 0.00012207031 )
    goto LABEL_16;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)) & _xmm);
  if ( v6 >= 0.00012207031 )
    goto LABEL_16;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm);
  if ( v7 >= 0.00012207031 )
    goto LABEL_16;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 24)) & _xmm);
  if ( v8 >= 0.00012207031 )
    goto LABEL_16;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm);
  if ( v9 >= 0.00012207031 )
    goto LABEL_16;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 32)) & _xmm);
  if ( v10 >= 0.00012207031
    || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 36)) & _xmm), v11 >= 0.00012207031)
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 1.0)) & _xmm), v12 >= 0.00012207031)
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 44)) & _xmm), v13 >= 0.00012207031)
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 48)) & _xmm), v14 >= 0.00012207031)
    || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 52)) & _xmm), v15 >= 0.00012207031)
    || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 56)) & _xmm), v19 >= 0.00012207031)
    || (v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v20 >= 0.00012207031) )
  {
LABEL_16:
    result = 0;
    v17 = 0;
  }
  else
  {
    result = 1;
    v17 = 1;
  }
  *(_BYTE *)(a1 + 64) &= 0xFCu;
  *(_BYTE *)(a1 + 64) |= (-1 - 2 * v17) & 3;
  v18 = *(_BYTE *)(a1 + 64);
  if ( result )
  {
    *(_BYTE *)(a1 + 65) = 125;
    *(_BYTE *)(a1 + 64) = v18 & 3 | 0x54;
  }
  return result;
}
