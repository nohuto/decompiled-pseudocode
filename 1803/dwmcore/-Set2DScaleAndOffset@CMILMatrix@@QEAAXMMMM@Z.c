/*
 * XREFs of ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x1801C714C
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18015F438 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180175210 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180176318 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180186A50 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAVCMILMatrix@@@Z @ 0x1801C3A3C (-CalculateSurfaceSizeAndMapping@CDeviceAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@PEAI1PEAV.c)
 *     ?CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPEAI2PEAVCMILMatrix@@PEAVCMilPoint2F@@@Z @ 0x1801C418C (-CalculateSurfaceSizeAndMapping@CViewportAlignedIntermediateRealizer@@AEAAXPEAUMilRectF@@0PEAHPE.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Set2DScaleAndOffset(CMILMatrix *this, float a2, float a3, float a4, float a5)
{
  float v5; // xmm1_4
  char v6; // al
  float v7; // xmm1_4

  *((float *)this + 13) = a5;
  *(float *)this = a2;
  *((float *)this + 12) = a4;
  *(_QWORD *)((char *)this + 60) = 1065353216LL;
  *((float *)this + 5) = a3;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 1065353216LL;
  *((_DWORD *)this + 14) = 0;
  *((_WORD *)this + 32) = 32064;
  v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a2 - 1.0)) & _xmm);
  if ( v5 >= 0.000081380211
    || (v6 = 84, v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a3 - 1.0)) & _xmm), v7 >= 0.000081380211) )
  {
    v6 = 124;
  }
  *((_BYTE *)this + 64) = v6;
}
