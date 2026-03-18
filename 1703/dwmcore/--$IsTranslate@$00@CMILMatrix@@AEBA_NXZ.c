/*
 * XREFs of ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x180099DE0
 * Callers:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098D54 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z @ 0x1800D0F4C (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILMatrix::IsTranslate<1>(__int64 a1)
{
  char v2; // al
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm1_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  unsigned __int8 v16; // r8
  char v17; // r9
  char v18; // al
  char v19; // cl

  v2 = (char)(16 * *(_BYTE *)(a1 + 64)) >> 6;
  if ( v2 )
    return v2 == 1;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a1 - 1.0)) & _xmm) >= 0.00012207031 )
    goto LABEL_20;
  v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 4)) & _xmm);
  if ( v4 >= 0.00012207031 )
    goto LABEL_20;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 8)) & _xmm);
  if ( v5 >= 0.00012207031 )
    goto LABEL_20;
  v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm);
  if ( v6 >= 0.00012207031 )
    goto LABEL_20;
  v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)) & _xmm);
  if ( v7 >= 0.00012207031 )
    goto LABEL_20;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm);
  if ( v8 >= 0.00012207031
    || (v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 24)) & _xmm), v9 >= 0.00012207031)
    || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm), v10 >= 0.00012207031)
    || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 32)) & _xmm), v11 >= 0.00012207031)
    || (v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 36)) & _xmm), v12 >= 0.00012207031)
    || (v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 1.0)) & _xmm), v13 >= 0.00012207031)
    || (v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 44)) & _xmm), v14 >= 0.00012207031)
    || (v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm), v15 >= 0.00012207031) )
  {
LABEL_20:
    v16 = 0;
    v17 = 0;
    v18 = 0;
  }
  else
  {
    v16 = 1;
    v17 = 1;
    v18 = 1;
  }
  *(_BYTE *)(a1 + 64) &= 0xC3u;
  *(_BYTE *)(a1 + 64) |= (-16 - 32 * v17) & 0x30 | (-4 - 8 * v18) & 0xC;
  v19 = *(_BYTE *)(a1 + 64);
  if ( v16 )
  {
    *(_BYTE *)(a1 + 65) &= ~2u;
    *(_BYTE *)(a1 + 65) |= 0x3Du;
    *(_BYTE *)(a1 + 64) = v19 & 0x3F | 0x40;
  }
  return v16;
}
