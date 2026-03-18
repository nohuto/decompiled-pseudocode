/*
 * XREFs of ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0
 * Callers:
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18000F730 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18006B500 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A3F20 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800A6304 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18013D41C (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     TryFillRenderState @ 0x180171A60 (TryFillRenderState.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180186480 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801D46A0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020AB80 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::Is2DAffine<1>(__int64 a1, char a2)
{
  char v2; // al
  char v3; // al
  char v5; // r9
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4

  v2 = 0;
  if ( a2 )
  {
    v3 = *(char *)(a1 + 65) >> 6;
    if ( v3 )
      return v3 == 1;
    v2 = 1;
  }
  v5 = 0;
  if ( a2 )
  {
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 8) - 0.0)) & _xmm);
    if ( v6 < 0.000081380211 )
    {
      v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 24) - 0.0)) & _xmm);
      if ( v7 < 0.000081380211 )
      {
        v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 56) - 0.0)) & _xmm);
        if ( v8 < 0.000081380211 )
          goto LABEL_9;
      }
    }
  }
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 8) - 0.0)) & _xmm);
  if ( v13 < 0.000081380211 )
  {
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 24) - 0.0)) & _xmm);
    if ( v14 < 0.000081380211 )
    {
      v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 32) - 0.0)) & _xmm);
      if ( v15 < 0.000081380211 )
      {
        v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 36) - 0.0)) & _xmm);
        if ( v16 < 0.000081380211 )
        {
          v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 0.0)) & _xmm);
          if ( v17 < 0.000081380211
            || (v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 40) - 1.0)) & _xmm),
                v18 < 0.000081380211) )
          {
            v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 44) - 0.0)) & _xmm);
            if ( v19 < 0.000081380211 )
            {
              v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 56) - 0.0)) & _xmm);
              if ( v20 < 0.000081380211 )
              {
LABEL_9:
                v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm);
                v10 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm) * 61440.0)
                    + (float)(v9 * 61440.0);
                v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 60)) & _xmm);
                v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v10 + v11) - 1.0)) & _xmm);
                v5 = v12 < 0.000081380211;
              }
            }
          }
        }
      }
    }
  }
  if ( v2 )
  {
    *(_BYTE *)(a1 + 65) &= 0x3Fu;
    *(_BYTE *)(a1 + 65) |= (v5 << 7) - 64;
  }
  return v5;
}
