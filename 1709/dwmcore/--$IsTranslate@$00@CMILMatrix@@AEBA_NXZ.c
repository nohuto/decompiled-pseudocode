/*
 * XREFs of ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A560
 * Callers:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180059A5C (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z @ 0x18014E3FC (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsTranslate<1>(__int64 a1)
{
  char result; // al
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
  float v13; // xmm2_4
  char v14; // dl
  char v15; // al
  char v16; // r8
  char v17; // al

  result = (char)(16 * *(_BYTE *)(a1 + 64)) >> 6;
  if ( result )
  {
    if ( result != 1 )
      return 0;
  }
  else
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a1 - 1.0)) & _xmm) >= 0.000081380211 )
      goto LABEL_23;
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 4)) & _xmm);
    if ( v2 >= 0.000081380211 )
      goto LABEL_23;
    v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 8)) & _xmm);
    if ( v3 >= 0.000081380211 )
      goto LABEL_23;
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm);
    if ( v4 >= 0.000081380211 )
      goto LABEL_23;
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)) & _xmm);
    if ( v5 >= 0.000081380211 )
      goto LABEL_23;
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm);
    if ( v6 >= 0.000081380211
      || (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 24)) & _xmm), v7 >= 0.000081380211)
      || (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm), v8 >= 0.000081380211)
      || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 32)) & _xmm), v9 >= 0.000081380211)
      || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 36)) & _xmm), v10 >= 0.000081380211)
      || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 1.0)) & _xmm), v11 >= 0.000081380211)
      || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 44)) & _xmm), v12 >= 0.000081380211)
      || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v13 >= 0.000081380211) )
    {
LABEL_23:
      v14 = 0;
      v15 = 12;
    }
    else
    {
      v14 = 1;
      v15 = 4;
    }
    *(_BYTE *)(a1 + 64) &= 0xF3u;
    *(_BYTE *)(a1 + 64) |= v15;
    if ( v14 )
      v16 = 16;
    else
      v16 = 48;
    v17 = v16 | *(_BYTE *)(a1 + 64) & 0xCF;
    *(_BYTE *)(a1 + 64) = v17;
    if ( v14 )
    {
      *(_BYTE *)(a1 + 65) &= ~2u;
      *(_BYTE *)(a1 + 65) |= 0x3Du;
      *(_BYTE *)(a1 + 64) = v17 & 0x3F | 0x40;
    }
    return v14;
  }
  return result;
}
