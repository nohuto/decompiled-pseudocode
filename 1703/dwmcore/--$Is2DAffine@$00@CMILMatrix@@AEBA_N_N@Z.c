/*
 * XREFs of ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099C10
 * Callers:
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E1D8 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x1800114D0 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098D54 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x18009A530 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB7E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE9D4 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180173C60 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18018E454 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B0490 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILMatrix::Is2DAffine<1>(__int64 a1, char a2)
{
  char v2; // al
  char v3; // al
  unsigned __int8 v5; // r9
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
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  float v20; // xmm1_4
  float v21; // xmm1_4

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
    v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 8)) & _xmm);
    if ( v6 < 0.00012207031 )
    {
      v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 24)) & _xmm);
      if ( v7 < 0.00012207031 )
      {
        v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 56)) & _xmm);
        if ( v8 < 0.00012207031 )
          goto LABEL_9;
      }
    }
  }
  v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 8)) & _xmm);
  if ( v13 < 0.00012207031 )
  {
    v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 24)) & _xmm);
    if ( v14 < 0.00012207031 )
    {
      v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 32)) & _xmm);
      if ( v15 < 0.00012207031 )
      {
        v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 36)) & _xmm);
        if ( v16 < 0.00012207031 )
        {
          v17 = *(float *)(a1 + 40);
          v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17) & _xmm);
          if ( v18 < 0.00012207031
            || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v17 - 1.0)) & _xmm), v19 < 0.00012207031) )
          {
            v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 44)) & _xmm);
            if ( v20 < 0.00012207031 )
            {
              v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 56)) & _xmm);
              if ( v21 < 0.00012207031 )
              {
LABEL_9:
                v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 12)) & _xmm);
                v10 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)) & _xmm) * 40960.0)
                    + (float)(v9 * 40960.0);
                v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(a1 + 60)) & _xmm);
                v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v10 + v11) - 1.0)) & _xmm);
                v5 = v12 < 0.00012207031;
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
