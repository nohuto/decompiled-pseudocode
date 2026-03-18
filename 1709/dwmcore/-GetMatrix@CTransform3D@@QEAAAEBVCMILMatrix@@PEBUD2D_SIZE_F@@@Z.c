/*
 * XREFs of ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18009677C
 * Callers:
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18003CBF0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18005C264 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCH.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18005D430 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z @ 0x18005D740 (-PushTransform@COcclusionContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x18007CD40 (-GetTilePropertyCurrentValues@CTileLegacyMilBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBru.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18009653C (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B43F0 (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x18014A020 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x18015B160 (-CalcEyePointOrVector@CCompositionLight@@IEBA-AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x18015CA6C (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?RealizeGradientPoints@CLinearGradientLegacyMilBrush@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPoint2F@@11@Z @ 0x180181C14 (-RealizeGradientPoints@CLinearGradientLegacyMilBrush@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B4800 (-GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B4D10 (-GetRealization@CMatrixTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

const struct CMILMatrix *__fastcall CTransform3D::GetMatrix(CTransform3D *this, const struct D2D_SIZE_F *a2)
{
  int v3; // ecx
  char v4; // al
  struct CMILMatrix *v6; // r8
  void (*v7)(CTranslateTransform *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax

  v3 = *((_DWORD *)this + 8) & 1;
  v4 = v3;
  if ( a2 )
  {
    if ( !(_BYTE)v3
      && *((_BYTE *)this + 148)
      && (*((float *)this + 35) != a2->width || *((float *)this + 36) != a2->height) )
    {
      v4 = 1;
    }
    *(struct D2D_SIZE_F *)((char *)this + 140) = *a2;
  }
  if ( v4 )
  {
    v6 = (CTransform3D *)((char *)this + 72);
    v7 = *(void (**)(CTranslateTransform *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)this + 168LL);
    if ( v7 == CMatrixTransform::GetRealization )
    {
      CMatrixTransform::GetRealization(this, a2, v6);
    }
    else if ( v7 == CTranslateTransform::GetRealization )
    {
      CTranslateTransform::GetRealization(this, a2, v6);
    }
    else
    {
      ((void (__fastcall *)(CTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *))v7)(this, a2, v6);
    }
    *((_DWORD *)this + 8) &= ~1u;
  }
  return (CTransform3D *)((char *)this + 72);
}
