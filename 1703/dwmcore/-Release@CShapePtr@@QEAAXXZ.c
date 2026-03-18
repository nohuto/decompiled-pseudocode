/*
 * XREFs of ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18000A520 (-IsDrawListCacheDirty@CContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@P.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E1D8 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18000F590 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z @ 0x18001E408 (-GetWindowClipShape@CWindowNode@@AEBAJPEAVCShapePtr@@@Z.c)
 *     ?HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18001E560 (-HitTestContent@CWindowNode@@UEAAJ_NAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ @ 0x18001EBC8 (-ConvertContextDependentClipToLocal@CCpuClip@@AEAAJXZ.c)
 *     ?ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z @ 0x180023584 (-ShapeDataFromGeometry@CDrawingContext@@CAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800297CC (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x180029940 (--1CGeometry@@MEAA@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029A4C (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800502B8 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ @ 0x180050528 (-IsDxShapeExclusionNeeded@CWindowNode@@AEBA_NXZ.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800528C0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180052FA0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x180053E58 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x180055120 (-GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z.c)
 *     ?GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800582B0 (-GetShapeDataCore@CRgnGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCMILMatrix@@@Z @ 0x18008CF00 (-IsDrawListCacheDirty@CSpriteVisualContent@@UEAA_NPEAVCDrawListCache@@PEAVCDrawingContext@@AEBUD.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18008D630 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800A91D0 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ @ 0x1801333F0 (-RemovePrimitiveClips@CCpuClip@@QEAAXXZ.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801348DC (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 *     ?AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z @ 0x18015C44C (-AddPrimitiveClip@CCpuClip@@QEAAJPEBVCShape@@PEBVCMILMatrix@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x1801625F4 (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z @ 0x180162678 (-GetDxClipShapeForHitTest@CWindowNode@@AEBAXPEAVCShapePtr@@@Z.c)
 *     ?GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801626D8 (-GetGeometryBounds@CWindowNode@@AEAAJPEAVCGeometry@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z @ 0x180162730 (-GetLastKnownGoodDxClipShape@CWindowNode@@AEAAJPEAVCShapePtr@@@Z.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x180162890 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x180162AFC (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18017798C (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18017B1F0 (-GetShapeDataCore@CGeometryGroup@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18017B440 (-GetShapeDataCore@CCombinedGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CShapePtr::Release(CRectanglesShape **this)
{
  CRectanglesShape *v2; // rcx
  CRegionShape *(__fastcall *v3)(CRegionShape *, char); // rax

  if ( *((_BYTE *)this + 8) )
  {
    v2 = *this;
    if ( v2 )
    {
      v3 = **(CRegionShape *(__fastcall ***)(CRegionShape *, char))v2;
      if ( v3 == CRectanglesShape::`scalar deleting destructor' )
      {
        CRectanglesShape::`scalar deleting destructor'(v2, 1);
      }
      else if ( v3 == CRegionShape::`vector deleting destructor' )
      {
        CRegionShape::`vector deleting destructor'(v2, 1);
      }
      else
      {
        v3(v2, 1);
      }
    }
  }
  *this = 0LL;
  *((_BYTE *)this + 8) = 0;
}
