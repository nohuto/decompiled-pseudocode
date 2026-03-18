/*
 * XREFs of ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x180011214
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x1800108B4 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAAXAEBV-$TMilRect_@MUM.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18016F338 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180012220 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 */

char __fastcall CFilterEffect::InvertTransformToCalc3DBounds(__int128 *a1)
{
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  char v3; // bl
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // [rsp+20h] [rbp-49h]
  __int128 v12; // [rsp+50h] [rbp-19h]
  __int128 v13; // [rsp+70h] [rbp+7h] BYREF
  __int128 v14; // [rsp+80h] [rbp+17h]
  __int128 v15; // [rsp+90h] [rbp+27h]
  __int128 v16; // [rsp+A0h] [rbp+37h]
  int v17; // [rsp+B0h] [rbp+47h]

  v1 = *a1;
  v2 = a1[1];
  v3 = 1;
  v17 = *((_DWORD *)a1 + 16);
  v13 = v1;
  v4 = a1[2];
  v14 = v2;
  v5 = a1[3];
  v15 = v4;
  LODWORD(v4) = *((_DWORD *)a1 + 8);
  v16 = v5;
  if ( *(float *)&v4 == 0.0 && *((float *)a1 + 9) == 0.0 && *((float *)a1 + 10) == 0.0 && *((float *)a1 + 11) == 0.0 )
  {
    v9 = *a1;
    v17 = 0;
    v11 = v9;
    v10 = a1[1];
    v15 = _xmm;
    v12 = a1[3];
    v14 = v10;
    v13 = v11;
    v16 = v12;
  }
  if ( !CMILMatrix::Invert((CMILMatrix *)&v13) )
    return 0;
  CMILMatrix::Transform3DBoundsHelper<1>(&v13, v7, v6);
  return v3;
}
