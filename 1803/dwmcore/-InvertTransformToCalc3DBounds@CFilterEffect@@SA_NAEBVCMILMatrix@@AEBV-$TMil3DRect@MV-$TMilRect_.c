/*
 * XREFs of ?InvertTransformToCalc3DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18000A67C
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3@Z @ 0x18000A3DC (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CEffectBrush@@QEAA_NAEBV-$TMil3DRect@M.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18018E7AC (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x18000F1C4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 */

char __fastcall CFilterEffect::InvertTransformToCalc3DBounds(__int64 a1)
{
  char v1; // bl
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _OWORD v6[4]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+60h] [rbp-18h]

  v1 = 1;
  v2 = *(_OWORD *)(a1 + 16);
  v6[0] = *(_OWORD *)a1;
  v3 = *(_OWORD *)(a1 + 32);
  v6[1] = v2;
  v4 = *(_OWORD *)(a1 + 48);
  v6[2] = v3;
  v6[3] = v4;
  v7 = *(_DWORD *)(a1 + 64);
  if ( !CMILMatrix::Invert((CMILMatrix *)v6) )
    return 0;
  CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v6);
  return v1;
}
