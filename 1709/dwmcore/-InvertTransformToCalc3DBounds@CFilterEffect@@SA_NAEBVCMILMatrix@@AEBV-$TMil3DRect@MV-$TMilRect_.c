/*
 * XREFs of ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x1800831F8
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x180082780 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV-$TMilRect_@MUM.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x1801643E0 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180059138 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 */

char __fastcall CFilterEffect::InvertTransformToCalc3DBounds(
        __int128 *a1,
        __int64 a2,
        struct Windows::Foundation::Numerics::float4x4 *a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  char v5; // bl
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int *v8; // r8
  __int64 v9; // r9
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // [rsp+20h] [rbp-49h]
  __int128 v14; // [rsp+50h] [rbp-19h]
  __int128 v15; // [rsp+70h] [rbp+7h] BYREF
  __int128 v16; // [rsp+80h] [rbp+17h]
  __int128 v17; // [rsp+90h] [rbp+27h]
  __int128 v18; // [rsp+A0h] [rbp+37h]
  int v19; // [rsp+B0h] [rbp+47h]

  v3 = *a1;
  v4 = a1[1];
  v5 = 1;
  v19 = *((_DWORD *)a1 + 16);
  v15 = v3;
  v6 = a1[2];
  v16 = v4;
  v7 = a1[3];
  v17 = v6;
  LODWORD(v6) = *((_DWORD *)a1 + 8);
  v18 = v7;
  if ( *(float *)&v6 == 0.0 && *((float *)a1 + 9) == 0.0 && *((float *)a1 + 10) == 0.0 && *((float *)a1 + 11) == 0.0 )
  {
    v11 = *a1;
    v19 = 0;
    v13 = v11;
    v12 = a1[1];
    v17 = _xmm;
    v14 = a1[3];
    v16 = v12;
    v15 = v13;
    v18 = v14;
  }
  if ( !CMILMatrix::Invert((CMILMatrix *)&v15, a2, a3) )
    return 0;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v15, v9, v8);
  return v5;
}
