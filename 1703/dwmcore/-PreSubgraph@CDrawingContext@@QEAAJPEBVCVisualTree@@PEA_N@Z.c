/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A0130 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18000CD58 (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18000D8F8 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000FB20 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z @ 0x1800104DC (-ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x180010518 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180012FCC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18001344C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800134A0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x180013C3C (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV-$TMilRect_@MUMi.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180013C90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800297CC (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18004ECE0 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004FEC0 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180051D10 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x18006EE60 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006F050 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x18006F3A0 (-IntersectsWithAntiOccluder@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointA.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FBE0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18007258C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180085014 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800881FC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18008ADF0 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18008C920 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18008D630 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800931E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180094050 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180094110 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180094270 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180094F80 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18009A848 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009AD9C (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A0FE0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800A12C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800A64B0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800ABFD4 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B4190 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B779C (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BBD88 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800BF36C (-AddMultipleAndSet@-$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScop.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF3E8 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCProcessAttribution@@$0A@@@QEAAJPEFBQEAVCProcessAttribution@@I@Z @ 0x1800BF944 (-AddMultipleAndSet@-$DynArray@PEAVCProcessAttribution@@$0A@@@QEAAJPEFBQEAVCProcessAttribution@@I.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800C0830 (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800C0848 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x1800C14B0 (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C1AC0 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800CF668 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CF90C (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetLightsCount@CVisual@@QEBAIXZ @ 0x1800D2BFC (-GetLightsCount@CVisual@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18012B71C (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?PushProcessAttribution@CDrawingContext@@AEAAXPEBVCVisual@@PEAVCProcessAttribution@@@Z @ 0x18012CEA8 (-PushProcessAttribution@CDrawingContext@@AEAAXPEBVCVisual@@PEAVCProcessAttribution@@@Z.c)
 *     ?RegisterForEnergyReporting@CProcessAttribution@@AEAAXXZ @ 0x18013293C (-RegisterForEnergyReporting@CProcessAttribution@@AEAAXXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x1801349B4 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18014B1C0 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18014C828 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetHeatMapColor@CVisual@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18014C870 (-GetHeatMapColor@CVisual@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?Push@?$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18014D160 (-Push@-$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z @ 0x18014D5FC (-PushLight@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCCompositionLight@@@Z.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x18014E298 (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?CompareByProcess@CProcessAttribution@@SAHPEBV1@0@Z @ 0x18014E5F8 (-CompareByProcess@CProcessAttribution@@SAHPEBV1@0@Z.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@I@Z @ 0x180160818 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@I@Z.c)
 *     ?cross@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@0@Z @ 0x180173154 (-cross@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@0@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180178460 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801868D0 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  struct CDrawingContext *v3; // r13
  bool *v4; // r12
  int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rax
  unsigned int v9; // ebx
  struct CCompositionLight *LightAtNoRef; // r14
  int ImageSourceForEffectInput; // eax
  CProcessAttribution *v12; // rbx
  const struct CProcessAttribution *v13; // rcx
  CProcessAttribution *v14; // rcx
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  void *v18; // rcx
  _QWORD *v19; // r14
  int v20; // r8d
  int v21; // eax
  float v22; // xmm3_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  __int64 v26; // rcx
  __int64 v27; // rax
  float v28; // xmm4_4
  float v29; // xmm4_4
  float v30; // xmm4_4
  float v31; // xmm4_4
  __int64 v32; // rdx
  unsigned int v33; // xmm8_4
  unsigned int v34; // xmm9_4
  unsigned int v35; // xmm6_4
  unsigned int v36; // xmm7_4
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rbx
  int v40; // r14d
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  _QWORD *v43; // rbx
  char (__fastcall *v44)(__int64, __int64, int); // rax
  unsigned int v45; // r9d
  char v46; // r11
  char v47; // al
  __int64 v48; // r8
  float v49; // xmm2_4
  float v50; // xmm3_4
  int v51; // eax
  float v52; // xmm1_4
  float v53; // xmm0_4
  unsigned int v54; // r8d
  __int64 v55; // rcx
  __int64 v56; // rbx
  _DWORD *v57; // rbx
  int v58; // eax
  int v59; // ecx
  struct _LIST_ENTRY *v60; // rax
  struct _LIST_ENTRY *v61; // rcx
  __int64 v62; // rcx
  float v63; // xmm6_4
  int v64; // edx
  int *v65; // rcx
  __int64 v66; // rbx
  bool (__fastcall *v67)(__int64, int); // rax
  bool v68; // al
  __int64 v69; // rcx
  float v70; // xmm2_4
  float v71; // xmm1_4
  float *v72; // rcx
  int v73; // eax
  float v74; // xmm6_4
  float v75; // xmm6_4
  CComponentTransform2D **v76; // r14
  int v77; // r15d
  CComponentTransform2D *v78; // rbx
  int ShapeDataWorker; // eax
  CShape *v80; // rbx
  char v81; // dl
  struct D2D_SIZE_F *v82; // rbx
  __int64 (__fastcall *v83)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  CComponentTransform2D *v85; // rcx
  int v86; // eax
  __int64 (__fastcall *v87)(CShape *, __int128 *, _QWORD); // rax
  int TightBounds; // eax
  CShape *v89; // rbx
  CRectanglesShape *(__fastcall *v90)(CRectanglesShape *, char); // rax
  void **v91; // r14
  __int64 v92; // rcx
  int Current; // eax
  struct CThreadContext *v94; // rcx
  __int64 v95; // rcx
  unsigned int *v96; // rcx
  char v97; // al
  __int64 v98; // rcx
  __int64 v99; // r8
  int v100; // edx
  int *v101; // rcx
  bool (__fastcall *v102)(__int64, int); // rax
  char v103; // al
  char v104; // cl
  char v105; // al
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  char v107; // cl
  int v108; // r10d
  __int64 v109; // rcx
  int v110; // edx
  int *v111; // rcx
  char v112; // al
  float v113; // xmm1_4
  __int64 v114; // rax
  __int64 v115; // rax
  int v116; // eax
  _BYTE *v117; // r12
  struct CVisualTree *v118; // r8
  CVisual *v119; // r15
  int v120; // ebx
  char v121; // r14
  _QWORD *v122; // rdi
  __int64 v123; // rcx
  int v124; // edx
  int *v125; // rcx
  _QWORD *v126; // rax
  bool v127; // cl
  unsigned int v128; // r14d
  char v129; // bl
  struct _LIST_ENTRY *TreeData; // r11
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v132; // r10
  CVisual **v133; // r10
  CVisual *v134; // rcx
  struct _LIST_ENTRY *v135; // rax
  struct _LIST_ENTRY *v136; // rcx
  unsigned __int64 Blink; // rax
  int updated; // eax
  __int64 v139; // rax
  char v140; // di
  int v141; // r12d
  char v142; // dl
  float v143; // xmm3_4
  float v144; // xmm1_4
  float v145; // xmm1_4
  float v146; // xmm1_4
  float v147; // xmm1_4
  float v148; // xmm1_4
  float v149; // xmm1_4
  float v150; // xmm1_4
  float v151; // xmm1_4
  float v152; // xmm1_4
  float v153; // xmm1_4
  float v154; // xmm3_4
  float v155; // xmm1_4
  float v156; // xmm1_4
  float v157; // xmm1_4
  CComponentTransform2D **v158; // r14
  CComponentTransform2D *v159; // rbx
  int v160; // eax
  CRectanglesShape *v161; // rbx
  char v162; // dl
  struct D2D_SIZE_F *v163; // rbx
  __int64 (__fastcall *v164)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int v165; // eax
  CComponentTransform2D *v166; // rcx
  int v167; // eax
  __int64 (__fastcall *v168)(CRectanglesShape *, __int128 *, _QWORD); // rax
  int v169; // eax
  CRectanglesShape *(__fastcall *v170)(CRectanglesShape *, char); // rax
  CComponentTransform2D *v171; // rbx
  int v172; // eax
  CRegionShape *v173; // rbx
  char v174; // al
  struct D2D_SIZE_F *v175; // rbx
  __int64 (__fastcall *v176)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int v177; // eax
  CComponentTransform2D *v178; // rcx
  int v179; // eax
  char (__fastcall *v180)(CRegionShape *, unsigned int *); // rax
  unsigned int v181; // eax
  char IsRectangles; // al
  void (__fastcall *v183)(CRegionShape *, __m128 *, _BYTE *); // rax
  __int64 v184; // rcx
  float v185; // xmm0_4
  float v186; // xmm1_4
  CRectanglesShape *(__fastcall *v187)(CRectanglesShape *, char); // rax
  __int64 (__fastcall *v188)(_QWORD, _QWORD); // rdx
  bool (__fastcall *v189)(__int64, int); // rax
  char v190; // al
  __int64 v191; // rcx
  struct CVisualTree *v192; // r15
  __int64 v193; // r9
  char v194; // r8
  __int64 v195; // rcx
  int v196; // edx
  int *v197; // rcx
  _QWORD *v198; // rax
  __int64 v199; // rcx
  int v200; // edx
  int *v201; // rcx
  __int64 **i; // rax
  int v203; // eax
  struct CDrawingContext *v204; // rdx
  _QWORD *v205; // r8
  __int64 v206; // rcx
  int v207; // edx
  int *v208; // rcx
  struct CDrawingContext *v209; // rax
  char *v210; // r12
  int v211; // ebx
  int v212; // eax
  void *v213; // rax
  int v214; // eax
  int v215; // edx
  __int64 v216; // rcx
  __int64 v217; // rax
  __int64 (__fastcall *v218)(__int64, _OWORD *, __int128 *, __int128 *, __int64 *, __int64 *); // rax
  struct CEffect *EffectInternal; // rbx
  bool (__fastcall *v220)(__int64, int); // rax
  bool v221; // al
  int v222; // eax
  char v223; // bl
  __int64 (__fastcall *v224)(__int64, __int64); // rax
  char v225; // al
  CVisual *v226; // rcx
  __int64 *TreeEffectInternal; // rax
  int v228; // eax
  struct _LIST_ENTRY *v229; // r10
  struct _LIST_ENTRY *v230; // rax
  struct _LIST_ENTRY *v231; // rcx
  int v232; // r8d
  int v233; // eax
  __int128 v234; // xmm0
  __int128 *v235; // r13
  struct CDrawingContext *v236; // rdx
  char v237; // r12
  unsigned int v238; // ebx
  _QWORD *v239; // r15
  int v240; // eax
  struct CDrawingContext *v241; // r15
  __int64 v242; // r8
  unsigned int v243; // eax
  int v244; // eax
  unsigned int v245; // r8d
  void **v246; // r9
  unsigned int v247; // r14d
  int v248; // eax
  int v249; // eax
  void *v250; // rbx
  unsigned int v251; // eax
  unsigned int v252; // ecx
  char v253; // bl
  __int128 v254; // xmm0
  __int128 v255; // xmm1
  __int128 v256; // xmm0
  __int128 v257; // xmm1
  char *v258; // r14
  int v259; // eax
  void *v260; // r8
  int v261; // r12d
  unsigned int *v262; // r14
  char v263; // r13
  unsigned int v264; // eax
  int v265; // eax
  void **v266; // r9
  unsigned int v267; // r15d
  int v268; // eax
  int v269; // eax
  void *v270; // rbx
  unsigned int v271; // ecx
  int v272; // ebx
  float v273; // xmm0_4
  int v274; // eax
  float v275; // xmm0_4
  float v276; // xmm11_4
  int v277; // eax
  float v278; // xmm0_4
  float v279; // xmm10_4
  int v280; // eax
  float v281; // xmm0_4
  float v282; // xmm9_4
  float v283; // xmm0_4
  size_t v284; // r12
  unsigned int v285; // eax
  int v286; // eax
  void **v287; // r9
  unsigned int v288; // r15d
  int v289; // eax
  int v290; // eax
  void *v291; // rbx
  unsigned int v292; // eax
  unsigned int v293; // ecx
  __int64 v294; // rcx
  int v295; // ecx
  __int64 v296; // rax
  unsigned __int8 v297; // r15
  float v298; // xmm0_4
  float v299; // xmm2_4
  char v300; // r12
  int v301; // ecx
  bool v302; // dl
  __int64 v303; // rax
  bool v304; // al
  int v305; // ecx
  CSpriteVisualContent **WindowBackgroundTreatmentInternal; // rax
  CSpriteVisualContent **v307; // rbx
  char v308; // r14
  bool v309; // r15
  __int64 v310; // rax
  int v311; // r14d
  bool v312; // bl
  __int64 v313; // rcx
  int v314; // eax
  int v315; // r8d
  int *v316; // rcx
  char v317; // al
  struct CDrawingContext *v318; // rcx
  int v319; // edx
  bool v320; // zf
  struct CVisual *v321; // r11
  CProcessAttribution *v322; // rcx
  __int64 (__fastcall *v323)(CSpriteVisual *); // rax
  char v324; // al
  __int64 (__fastcall *v325)(CWindowNode *, struct CDrawingContext *, bool *); // rax
  int v326; // eax
  CProcessAttribution *v327; // rsi
  __int64 v328; // rcx
  int v329; // eax
  int v330; // ebx
  unsigned int v332; // [rsp+20h] [rbp-E0h]
  bool v333; // [rsp+40h] [rbp-C0h] BYREF
  bool v334; // [rsp+41h] [rbp-BFh]
  _WORD v335[7]; // [rsp+42h] [rbp-BEh] BYREF
  char v336; // [rsp+50h] [rbp-B0h]
  struct CDrawingContext *v337; // [rsp+58h] [rbp-A8h]
  CRectanglesShape *v338; // [rsp+60h] [rbp-A0h] BYREF
  char v339; // [rsp+68h] [rbp-98h]
  struct CVisualTree *v340; // [rsp+70h] [rbp-90h]
  CShape *v341; // [rsp+78h] [rbp-88h] BYREF
  char v342; // [rsp+80h] [rbp-80h]
  unsigned int v343; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v344; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v345; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v346; // [rsp+94h] [rbp-6Ch] BYREF
  bool *v347; // [rsp+98h] [rbp-68h]
  CProcessAttribution *v348; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int Size; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int Size_4; // [rsp+ACh] [rbp-54h] BYREF
  float v351[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v352; // [rsp+C0h] [rbp-40h]
  __int64 v353; // [rsp+C8h] [rbp-38h]
  float v354; // [rsp+D0h] [rbp-30h]
  __int128 v355; // [rsp+D4h] [rbp-2Ch] BYREF
  __int128 v356; // [rsp+E4h] [rbp-1Ch]
  __int128 v357; // [rsp+F4h] [rbp-Ch]
  __int128 v358; // [rsp+104h] [rbp+4h]
  _BYTE v359[68]; // [rsp+114h] [rbp+14h] BYREF
  __int64 v360; // [rsp+158h] [rbp+58h]
  int v361; // [rsp+160h] [rbp+60h]
  unsigned __int8 v362; // [rsp+164h] [rbp+64h]
  size_t v363; // [rsp+170h] [rbp+70h] BYREF
  __int64 v364; // [rsp+178h] [rbp+78h]
  int v365; // [rsp+180h] [rbp+80h] BYREF
  void *lpMem; // [rsp+188h] [rbp+88h] BYREF
  void *v367; // [rsp+190h] [rbp+90h] BYREF
  void *v368; // [rsp+198h] [rbp+98h] BYREF
  float v369; // [rsp+1A0h] [rbp+A0h] BYREF
  float v370; // [rsp+1A4h] [rbp+A4h]
  struct D2D_SIZE_F v371; // [rsp+1A8h] [rbp+A8h] BYREF
  struct D2D_SIZE_F v372; // [rsp+1B0h] [rbp+B0h] BYREF
  struct D2D_SIZE_F v373; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD v374[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  struct CDrawingContext *v375; // [rsp+1C8h] [rbp+C8h]
  __int64 v376; // [rsp+1D0h] [rbp+D0h] BYREF
  int v377; // [rsp+1D8h] [rbp+D8h]
  __int64 v378; // [rsp+1E0h] [rbp+E0h] BYREF
  int v379; // [rsp+1E8h] [rbp+E8h]
  struct CShape *v380; // [rsp+1F0h] [rbp+F0h] BYREF
  struct CShape *v381; // [rsp+1F8h] [rbp+F8h] BYREF
  _QWORD *v382; // [rsp+200h] [rbp+100h]
  __int64 ***v383; // [rsp+208h] [rbp+108h]
  struct CThreadContext *v384; // [rsp+210h] [rbp+110h] BYREF
  __int64 v385; // [rsp+218h] [rbp+118h]
  struct CShape *v386; // [rsp+220h] [rbp+120h] BYREF
  __int64 v388; // [rsp+230h] [rbp+130h]
  _QWORD *v389; // [rsp+238h] [rbp+138h]
  _QWORD *v390; // [rsp+240h] [rbp+140h]
  _DWORD v391[10]; // [rsp+248h] [rbp+148h] BYREF
  _QWORD v392[4]; // [rsp+270h] [rbp+170h] BYREF
  __int128 v393; // [rsp+290h] [rbp+190h]
  __int64 v394; // [rsp+2A0h] [rbp+1A0h]
  int v395; // [rsp+2A8h] [rbp+1A8h]
  __int64 v396; // [rsp+2ACh] [rbp+1ACh]
  __int64 v397; // [rsp+2C0h] [rbp+1C0h] BYREF
  char v398; // [rsp+2C8h] [rbp+1C8h]
  _OWORD v399[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v400; // [rsp+310h] [rbp+210h]
  char v401[4]; // [rsp+320h] [rbp+220h] BYREF
  __int64 v402; // [rsp+324h] [rbp+224h]
  _OWORD v403[4]; // [rsp+32Ch] [rbp+22Ch] BYREF
  int v404; // [rsp+36Ch] [rbp+26Ch]
  struct _D3DCOLORVALUE v405; // [rsp+370h] [rbp+270h] BYREF
  _BYTE v406[64]; // [rsp+380h] [rbp+280h] BYREF
  int v407; // [rsp+3C0h] [rbp+2C0h]
  _BYTE v408[80]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _BYTE v409[80]; // [rsp+420h] [rbp+320h] BYREF
  __m128 v410; // [rsp+470h] [rbp+370h]
  __int128 v411; // [rsp+480h] [rbp+380h] BYREF
  __m128 v412; // [rsp+490h] [rbp+390h] BYREF
  __int64 v413[2]; // [rsp+4A0h] [rbp+3A0h] BYREF
  __int128 v414; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int128 v415; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int128 v416; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int128 v417; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int128 v418; // [rsp+4F0h] [rbp+3F0h] BYREF
  __int64 v419[2]; // [rsp+500h] [rbp+400h] BYREF
  __int128 v420; // [rsp+510h] [rbp+410h] BYREF
  __int64 v421; // [rsp+520h] [rbp+420h]
  __int128 v422; // [rsp+528h] [rbp+428h] BYREF
  __int64 v423; // [rsp+538h] [rbp+438h]
  __int128 v424; // [rsp+540h] [rbp+440h] BYREF
  _DWORD v425[2]; // [rsp+550h] [rbp+450h] BYREF
  int v426; // [rsp+558h] [rbp+458h]
  int v427; // [rsp+55Ch] [rbp+45Ch]
  __int64 v428[2]; // [rsp+560h] [rbp+460h] BYREF
  _DWORD v429[4]; // [rsp+570h] [rbp+470h] BYREF
  __int64 v430; // [rsp+580h] [rbp+480h]
  struct D2D_MATRIX_3X2_F v431; // [rsp+588h] [rbp+488h] BYREF
  __int128 v432; // [rsp+5A0h] [rbp+4A0h] BYREF
  __int64 v433; // [rsp+5B0h] [rbp+4B0h]
  _BYTE v434[16]; // [rsp+5B8h] [rbp+4B8h] BYREF
  _BYTE v435[16]; // [rsp+5C8h] [rbp+4C8h] BYREF
  __int128 v436; // [rsp+5D8h] [rbp+4D8h] BYREF
  __int64 v437; // [rsp+5E8h] [rbp+4E8h]
  struct D2D_MATRIX_3X2_F v438; // [rsp+5F0h] [rbp+4F0h] BYREF
  struct D2D_MATRIX_3X2_F v439; // [rsp+608h] [rbp+508h] BYREF
  void *retaddr; // [rsp+6F8h] [rbp+5F8h]

  v3 = this;
  v337 = this;
  v347 = a3;
  v360 = 21887LL;
  v4 = a3;
  v6 = 0;
  v340 = a2;
  v334 = 0;
  v7 = 0LL;
  v352 = 0LL;
  v353 = 1065353216LL;
  v354 = 1.0;
  memset(v359, 0, 64);
  v361 = 0;
  v362 = 0;
  *(_DWORD *)&v359[64] = 1065353216;
  if ( *((_BYTE *)this + 6456) )
  {
    if ( *((_BYTE *)this + 6457) )
      v7 = *((_QWORD *)this + 383);
    else
      v7 = *(_QWORD *)(*((_QWORD *)this + 808) + 24LL);
  }
  v320 = (*(_BYTE *)(v7 + 90) & 0x20) == 0;
  v364 = *((_QWORD *)this + 384);
  if ( !v320 || (*(_BYTE *)(v7 + 88) & 0x20) != 0 )
  {
    *a3 = 0;
    return (unsigned int)v6;
  }
  v8 = *(_QWORD *)(v7 + 256);
  if ( (v8 & 2) != 0 )
    v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v8) = v8 & 1;
  if ( (_DWORD)v8 )
  {
    v9 = 0;
    if ( CVisual::GetLightsCount((CVisual *)v7) )
    {
      while ( 1 )
      {
        LightAtNoRef = CVisual::GetLightAtNoRef((CVisual *)v7, v9);
        if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionLight *, const struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef + 160LL))(
               LightAtNoRef,
               a2,
               v7) )
        {
          ImageSourceForEffectInput = CDrawingContext::PushLight(v3, (const struct CVisual *)v7, LightAtNoRef);
          v6 = ImageSourceForEffectInput;
          if ( ImageSourceForEffectInput < 0 )
            break;
        }
        if ( ++v9 >= CVisual::GetLightsCount((CVisual *)v7) )
          goto LABEL_15;
      }
      v332 = 8740;
      goto LABEL_23;
    }
  }
LABEL_15:
  v12 = *(CProcessAttribution **)(*((_QWORD *)v3 + 102) + 8LL * (unsigned int)(*((_DWORD *)v3 + 210) - 1));
  v348 = v12;
  if ( CEnergyReporter::s_reportingEnabled )
  {
    v13 = *(const struct CProcessAttribution **)(v7 + 248);
    if ( v13 )
    {
      if ( (unsigned int)CProcessAttribution::CompareByProcess(v13, v12) )
      {
        v348 = v14;
        CDrawingContext::PushProcessAttribution(v3, (const struct CVisual *)v7, v14);
      }
    }
  }
  *v4 = 1;
  if ( *(_BYTE *)(v7 + 89) >= 0x80u )
  {
    CVisual::GetHeatMapColor((CVisual *)v7, &v405);
    ImageSourceForEffectInput = CWatermarkStack<_D3DCOLORVALUE,2,2,2>::Push(*((_QWORD *)v3 + 4) + 1232LL, &v405);
    v6 = ImageSourceForEffectInput;
    if ( ImageSourceForEffectInput < 0 )
    {
      v332 = 8780;
LABEL_23:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ImageSourceForEffectInput, v332);
      return (unsigned int)v6;
    }
  }
  v15 = *(_DWORD *)(v7 + 92);
  if ( (_BYTE)v15 )
  {
    v391[0] = (unsigned __int8)v15;
    v391[4] = (v15 >> 8) & 3;
    v391[1] = (int)(v15 << 18) >> 28;
    v391[2] = *(_DWORD *)(v7 + 184);
    v391[5] = *(_DWORD *)(v7 + 188);
    v391[6] = *(_DWORD *)(v7 + 192);
    v16 = *(_DWORD *)(v7 + 196);
    v391[3] = (v15 >> 14) & 0x1F;
    v391[7] = v16;
    ImageSourceForEffectInput = CDrawingContext::PushRenderOptionsInternal(
                                  v3,
                                  (const struct CVisual *)v7,
                                  (const struct MilRenderOptions *)v391,
                                  1);
    v6 = ImageSourceForEffectInput;
    if ( ImageSourceForEffectInput < 0 )
    {
      v332 = 8798;
      goto LABEL_23;
    }
  }
  v17 = *((_DWORD *)v3 + 118);
  if ( v17 )
    v18 = (void *)(*((_QWORD *)v3 + 61) + 68LL * (unsigned int)(v17 - 1));
  else
    v18 = &CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v18, v7 + 136, (float *)&v420);
  v19 = (_QWORD *)((char *)v3 + 912);
  v20 = *((_DWORD *)v3 + 234);
  v363 = (size_t)v3 + 912;
  if ( v20 && *(_DWORD *)(*v19 + 80LL * (unsigned int)(v20 - 1) + 4) && (v21 = *((_DWORD *)v3 + 744)) != 0 )
  {
    v410 = *(__m128 *)(*((_QWORD *)v3 + 374) + 16LL * (unsigned int)(v21 - 1));
    v22 = v410.m128_f32[0];
    v23 = v410.m128_f32[2];
    LODWORD(v24) = _mm_shuffle_ps(v410, v410, 255).m128_u32[0];
    v25 = v410.m128_f32[1];
  }
  else
  {
    v24 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v23 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v25 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v22 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v410 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v20 && *(_DWORD *)(*v19 + 80LL * (unsigned int)(v20 - 1) + 8) )
  {
    v26 = 120LL * (unsigned int)(*((_DWORD *)v3 + 442) - 1);
    v27 = *((_QWORD *)v3 + 218);
    v28 = *(float *)(v26 + v27 + 96);
    if ( v28 > v22 )
    {
      v410.m128_i32[0] = *(_DWORD *)(v26 + v27 + 96);
      v22 = v28;
    }
    v29 = *(float *)(v26 + v27 + 100);
    if ( v29 > v25 )
    {
      v410.m128_i32[1] = *(_DWORD *)(v26 + v27 + 100);
      v25 = v29;
    }
    v30 = *(float *)(v26 + v27 + 104);
    if ( v23 > v30 )
    {
      v410.m128_i32[2] = *(_DWORD *)(v26 + v27 + 104);
      v23 = v30;
    }
    v31 = *(float *)(v26 + v27 + 108);
    if ( v24 > v31 )
    {
      v410.m128_i32[3] = *(_DWORD *)(v26 + v27 + 108);
      v24 = v31;
    }
    if ( v23 <= v22 || v24 <= v25 )
    {
      v24 = 0.0;
      v23 = 0.0;
      v25 = 0.0;
      v22 = 0.0;
      v410 = 0uLL;
    }
  }
  *(float *)&v429[1] = v25;
  v430 = v421;
  *(float *)v429 = v22;
  *(float *)&v429[2] = v23;
  *(float *)&v429[3] = v24;
  TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v420,
    v429);
  v33 = v420;
  v34 = DWORD2(v420);
  v35 = DWORD1(v420);
  v36 = HIDWORD(v420);
  v422 = v420;
  v418 = v420;
  v423 = v421;
  if ( *((float *)&v420 + 2) <= *(float *)&v420 || *((float *)&v420 + 3) <= *((float *)&v420 + 1) )
  {
LABEL_107:
    *v4 = 0;
    return (unsigned int)v6;
  }
  if ( !*((_BYTE *)v3 + 6771) )
    goto LABEL_112;
  if ( *((_QWORD *)v3 + 835) )
  {
    if ( *((_BYTE *)a2 + 32) )
    {
      v37 = v7 + 264;
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v7);
      if ( !TreeDataListHead )
        goto LABEL_97;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_97;
      while ( 1 )
      {
        v37 = (__int64)&Flink[-14];
        if ( (const struct CVisualTree *)Flink[2].Flink == a2 )
          break;
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_97;
      }
    }
    if ( v37 )
    {
      if ( !*(_QWORD *)(v37 + 32) )
        *(_QWORD *)(v37 + 32) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v37 + 24) + 280LL))(*(_QWORD *)(v37 + 24));
      v38 = *(_QWORD *)(v37 + 32);
      if ( v38 )
      {
        v39 = *((_QWORD *)v3 + 835);
        v40 = *(_DWORD *)(v38 + 12);
        if ( *(_BYTE *)(v39 + 728) )
        {
          CMILMatrix::Transform2DBoundsHelper<0>(v39 + 800, (__int64)&v418, (float *)&v424);
          v415 = v424;
        }
        else
        {
          *(_QWORD *)&v415 = __PAIR64__(v35, v33);
          *((_QWORD *)&v415 + 1) = __PAIR64__(v36, v34);
        }
        v43 = *(_QWORD **)(v39 + 304);
        v44 = *(char (__fastcall **)(__int64, __int64, int))(*v43 + 48LL);
        if ( v44 == CArrayBasedCoverageSet::IsFullyCovered )
        {
          CArrayBasedCoverageSet::IntersectsWithAntiOccluder((__int64)v43, (__int64)&v415, v40, &v365);
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v415) )
          {
LABEL_68:
            v47 = 1;
          }
          else
          {
            v48 = 0LL;
            *(_OWORD *)v413 = v415;
            if ( v45 )
            {
              v32 = v43[3];
              v49 = *((float *)&v413[1] + 1);
              v50 = *((float *)v413 + 1);
              do
              {
                v51 = *(_DWORD *)(v32 + 20 * v48 + 16);
                if ( v51 >= v40 )
                  break;
                if ( (!v46 || v51 > v365)
                  && *(float *)v413 >= *(float *)(v32 + 20 * v48)
                  && *(float *)(v32 + 20 * v48 + 8) >= *(float *)&v413[1] )
                {
                  v52 = *(float *)(v32 + 20 * v48 + 4);
                  v53 = *(float *)(v32 + 20 * v48 + 12);
                  if ( v50 < v52 )
                  {
                    if ( v53 >= v49 && v49 > v52 )
                      v49 = *(float *)(v32 + 20 * v48 + 4);
                  }
                  else
                  {
                    if ( v53 >= v49 )
                      goto LABEL_68;
                    if ( v53 > v50 )
                      v50 = *(float *)(v32 + 20 * v48 + 12);
                  }
                }
                v48 = (unsigned int)(v48 + 1);
              }
              while ( (unsigned int)v48 < v45 );
            }
            v47 = 0;
          }
        }
        else
        {
          v47 = v44((__int64)v43, (__int64)&v415, v40);
        }
        if ( v47 )
        {
          if ( !qword_18023E528 )
            goto LABEL_107;
          v54 = *((_DWORD *)qword_18023E528 + 18);
          v32 = 0LL;
          if ( !v54 )
            goto LABEL_107;
          while ( 1 )
          {
            v55 = *(_QWORD *)(*((_QWORD *)qword_18023E528 + 6) + 8 * v32);
            if ( *(_BYTE *)(v55 + 299) || *(_BYTE *)(v55 + 298) || *(_BYTE *)(v55 + 212) || *(_DWORD *)(v55 + 208) )
              break;
            v32 = (unsigned int)(v32 + 1);
            if ( (unsigned int)v32 >= v54 )
            {
              *v4 = 0;
              return (unsigned int)v6;
            }
          }
          if ( !*((_QWORD *)v3 + 838) )
            *((_QWORD *)v3 + 838) = v7;
        }
      }
    }
  }
LABEL_97:
  if ( *((_BYTE *)v3 + 6771) && *((_QWORD *)v3 + 835) )
  {
    if ( *((_BYTE *)a2 + 32) )
    {
      v56 = v7 + 264;
    }
    else
    {
      v60 = CVisual::GetTreeDataListHead((CVisual *)v7);
      if ( !v60 )
        goto LABEL_112;
      v61 = v60->Flink;
      if ( v60->Flink == v60 )
        goto LABEL_112;
      while ( 1 )
      {
        v56 = (__int64)&v61[-14];
        if ( (const struct CVisualTree *)v61[2].Flink == a2 )
          break;
        v61 = v61->Flink;
        if ( v61 == v60 )
          goto LABEL_112;
      }
    }
    if ( v56 )
    {
      if ( !*(_QWORD *)(v56 + 32) )
        *(_QWORD *)(v56 + 32) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v56 + 24) + 280LL))(*(_QWORD *)(v56 + 24));
      v57 = *(_DWORD **)(v56 + 32);
      if ( v57 )
      {
        v58 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v57 + 24LL))(v57);
        v59 = *((_DWORD *)v3 + 1636);
        *((_DWORD *)v3 + 1674) = v58;
        if ( v58 >= v59 )
        {
          if ( v57[3] < v59 )
            return (unsigned int)v6;
          goto LABEL_107;
        }
      }
    }
  }
LABEL_112:
  v352 = v7;
  v62 = *(_QWORD *)(v7 + 208);
  v63 = FLOAT_1_0;
  if ( (*(_DWORD *)(v62 + 4) & 0x8000000) != 0 )
  {
    v64 = *(_DWORD *)(v62 + 12);
    v65 = (int *)(v62 + 12);
    if ( (v64 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v65 = (int *)((char *)v65 + (v64 & 0xFFFFFF) + 4);
        v64 = *v65;
      }
      while ( (*v65 & 0x7F000000) != 0x5000000 );
    }
    v385 = *(_QWORD *)(v65 + 1);
    v66 = v385;
    v67 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v385 + 48LL);
    if ( v67 == CEffectGroup::IsOfType )
      v68 = CEffectGroup::IsOfType(v385, 7);
    else
      v68 = v67(v385, 7);
    if ( v68 )
      v63 = *(double *)(v66 + 72);
  }
  v69 = *(_QWORD *)(v7 + 208);
  v70 = fminf(1.0, fmaxf(v63, 0.0));
  if ( (*(_DWORD *)(v69 + 4) & 0x100000) != 0 )
  {
    v32 = *(unsigned int *)(v69 + 12);
    v72 = (float *)(v69 + 12);
    if ( (v32 & 0x7F000000) != 0xC000000 )
    {
      do
      {
        v72 = (float *)((char *)v72 + (v32 & 0xFFFFFF) + 4);
        v32 = *(unsigned int *)v72;
      }
      while ( (*(_DWORD *)v72 & 0x7F000000) != 0xC000000 );
    }
    v370 = v72[1];
    v71 = v370;
  }
  else
  {
    v71 = FLOAT_1_0;
  }
  v73 = *((_DWORD *)v3 + 752);
  v354 = fminf(1.0, fmaxf(v71, 0.0));
  if ( v73 )
    v74 = *(float *)(*((_QWORD *)v3 + 378) + 4LL * (unsigned int)(v73 - 1));
  else
    v74 = v351[0];
  v75 = v74 * v70;
  *(float *)&v353 = v75;
  v76 = *(CComponentTransform2D ***)(v7 + 232);
  if ( v76 )
  {
    v77 = 0;
    v341 = 0LL;
    v342 = 0;
    if ( *((_BYTE *)v76 + 96) || (v78 = v76[2], GetCurrentThreadId() != *((_DWORD *)v78 + 148)) )
    {
      v81 = *((_BYTE *)v76 + 96);
      if ( v81 || ((_BYTE)v76[4] & 1) != 0 || !v76[10] )
      {
        v82 = 0LL;
        if ( v81 )
          v82 = (struct D2D_SIZE_F *)(v7 + 128);
        v83 = (__int64 (__fastcall *)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))*((_QWORD *)*v76 + 19);
        if ( v83 == CRectangleGeometry::GetShapeDataCore )
          ShapeDataCore = CRectangleGeometry::GetShapeDataCore(
                            (CRectangleGeometry *)v76,
                            v82,
                            (struct CShapePtr *)&v341);
        else
          ShapeDataCore = v83((CRectangleGeometry *)v76, v82, (struct CShapePtr *)&v341);
        v77 = ShapeDataCore;
        if ( ShapeDataCore < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataCore, 0x7Fu);
        }
        else
        {
          v85 = v76[9];
          if ( v85 )
          {
            v371 = 0LL;
            if ( v82 )
              v371 = *v82;
            if ( v341 )
            {
              CComponentTransform2D::GetRealization(v85, &v371, &v431);
              v392[2] = *(_QWORD *)&v431.m[1][0];
              v392[0] = *(_QWORD *)&v431.m11;
              v393 = _xmm;
              v394 = *(_QWORD *)&v431.m[2][0];
              v396 = 1065353216LL;
              v392[1] = 0LL;
              v392[3] = 0LL;
              v395 = 0;
              v86 = CShape::CopyShape(v341, (const struct CMILMatrix *)v392, &v386);
              v77 = v86;
              if ( v86 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v86, 0x92u);
              }
              else
              {
                CShapePtr::Release((CShapePtr *)&v341);
                v341 = v386;
                v342 = 1;
              }
            }
          }
        }
        if ( v77 >= 0 )
          goto LABEL_157;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x5Du);
      }
      else
      {
        v341 = v76[10];
        v342 = 0;
      }
    }
    else
    {
      if ( ((_BYTE)v76[4] & 1) == 0 )
      {
LABEL_134:
        v80 = v76[10];
        CShapePtr::Release((CShapePtr *)&v341);
        v341 = v80;
        v342 = 0;
        goto LABEL_156;
      }
      ShapeDataWorker = CGeometry::GetShapeDataWorker((CGeometry *)v76, v7 + 128, (struct CShapePtr *)(v76 + 10));
      v77 = ShapeDataWorker;
      if ( ShapeDataWorker >= 0 )
      {
        *((_DWORD *)v76 + 8) &= ~1u;
        goto LABEL_134;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataWorker, 0x4Eu);
    }
LABEL_156:
    if ( v77 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0x26u);
LABEL_165:
      if ( v77 == -2003304438 )
      {
        v77 = 0;
        v416 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      if ( v342 )
      {
        v89 = v341;
        if ( v341 )
        {
          v90 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v341;
          if ( v90 == CRectanglesShape::`scalar deleting destructor' )
          {
            v91 = (void **)((char *)v341 + 8);
            *(_QWORD *)v341 = &CRectanglesShape::`vftable';
            *((_DWORD *)v89 + 8) = 0;
            DynArrayImpl<0>::ShrinkToSize((__int64)v89 + 8, 0x10u);
            v92 = *((_QWORD *)v89 + 7);
            if ( v92 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
              *((_QWORD *)v89 + 7) = 0LL;
            }
            if ( *((_QWORD *)v89 + 1) != *((_QWORD *)v89 + 2) )
            {
              WPF::ProcessHeapImpl::Free(*v91);
              *v91 = 0LL;
            }
            Current = CThreadContext::GetCurrent(&v384);
            if ( Current < 0 )
            {
              ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
              JUMPOUT(0x1800A5ECCLL);
            }
            v94 = v384;
            if ( *((_DWORD *)v384 + 3) >= *((_DWORD *)v384 + 2) )
            {
              WPF::ProcessHeapImpl::Free(v89);
            }
            else
            {
              *(_QWORD *)v89 = *((_QWORD *)v384 + 2);
              ++*((_DWORD *)v94 + 3);
              *((_QWORD *)v94 + 2) = v89;
            }
          }
          else
          {
            v90(v341, 1);
          }
        }
      }
      if ( v77 >= 0
        && (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v416
         || *((float *)&v416 + 2) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
        && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *((float *)&v416 + 1)
         || *((float *)&v416 + 3) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
      {
        *(_OWORD *)&v359[4] = _xmm;
        LOBYTE(v361) = 1;
        *(_OWORD *)&v359[20] = _xmm;
        LOWORD(v360) = 32085;
        *(_OWORD *)&v359[36] = _xmm;
        *(_OWORD *)&v359[52] = _xmm;
      }
      v4 = v347;
      goto LABEL_186;
    }
LABEL_157:
    v87 = *(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)v341 + 32LL);
    if ( (char *)v87 == (char *)CRectanglesShape::GetTightBounds )
    {
      TightBounds = CRectanglesShape::GetTightBounds((__int64)v341, (__int64)&v416, 0LL);
    }
    else if ( (char *)v87 == (char *)CRegionShape::GetTightBounds )
    {
      TightBounds = CRegionShape::GetTightBounds(v341, (__m128 *)&v416, 0LL);
    }
    else
    {
      TightBounds = v87(v341, &v416, 0LL);
    }
    v77 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x27u);
    goto LABEL_165;
  }
LABEL_186:
  v95 = *(_QWORD *)(v7 + 208);
  if ( (*(_DWORD *)(v95 + 4) & 0x20000000) != 0 )
  {
    v32 = *(unsigned int *)(v95 + 12);
    v96 = (unsigned int *)(v95 + 12);
    if ( (v32 & 0x7F000000) != 0x3000000 )
    {
      do
      {
        v96 = (unsigned int *)((char *)v96 + (v32 & 0xFFFFFF) + 4);
        v32 = *v96;
      }
      while ( (*v96 & 0x7F000000) != 0x3000000 );
    }
    v97 = BYTE1(v361);
    if ( *(_QWORD *)(v96 + 1) )
      v97 = 1;
    BYTE1(v361) = v97;
  }
  v98 = *(_QWORD *)(v7 + 208);
  v99 = 8LL;
  if ( (*(_DWORD *)(v98 + 4) & 0x8000000) != 0 )
  {
    v100 = *(_DWORD *)(v98 + 12);
    v101 = (int *)(v98 + 12);
    if ( (v100 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v101 = (int *)((char *)v101 + (v100 & 0xFFFFFF) + 4);
        v100 = *v101;
      }
      while ( (*v101 & 0x7F000000) != 0x5000000 );
    }
    v388 = *(_QWORD *)(v101 + 1);
    v102 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v388 + 48LL);
    if ( v102 == CEffectGroup::IsOfType )
      v103 = CEffectGroup::IsOfType(v388, 8);
    else
      v103 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v102)(v388, 8LL, 8LL);
    v104 = v103;
    v105 = BYTE2(v361);
    if ( v104 )
      v105 = 1;
    BYTE2(v361) = v105;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 208) + 4LL) & 0x2000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v3 + 46) + 40LL))(*((_QWORD *)v3 + 46), v32, v99);
    ColorSpace = CVisual::GetColorSpace((CVisual *)v7);
    v107 = v362;
    if ( ColorSpace != v108 )
      v107 = 1;
    v362 = v107;
  }
  v109 = *(_QWORD *)(v7 + 208);
  if ( (*(_DWORD *)(v109 + 4) & 0x10000) != 0 )
  {
    v110 = *(_DWORD *)(v109 + 12);
    v111 = (int *)(v109 + 12);
    if ( (v110 & 0x7F000000) != 0x10000000 )
    {
      do
      {
        v111 = (int *)((char *)v111 + (v110 & 0xFFFFFF) + 4);
        v110 = *v111;
      }
      while ( (*v111 & 0x7F000000) != 0x10000000 );
    }
    v389 = *(_QWORD **)(v111 + 1);
    if ( v389 )
    {
      v112 = HIBYTE(v361);
      if ( *v389 )
        v112 = 1;
      HIBYTE(v361) = v112;
    }
  }
  if ( v75 < 1.0 )
  {
    v113 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v75 - 1.0)) & _xmm);
    if ( v113 >= 0.0000011920929 )
    {
      v114 = *(_QWORD *)(v7 + 72);
      if ( (v114 & 2) != 0 )
        v114 = *(_QWORD *)(v114 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v114) = v114 & 1;
      if ( !(_DWORD)v114 && (*(_BYTE *)(v7 + 89) & 1) != 0 && *((_DWORD *)v3 + 67) != 4
        || *((_DWORD *)v3 + 68) == 1
        || *(_DWORD *)(v7 + 96) == 1 )
      {
        HIDWORD(v353) = 1;
      }
      else
      {
        HIDWORD(v353) = 2;
        if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
        {
          v115 = *(_QWORD *)(v7 + 72);
          if ( (v115 & 2) != 0 )
            v115 = *(_QWORD *)(v115 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v115) = v115 & 1;
          v320 = (_DWORD)v115 == 0;
          v116 = HIDWORD(v360);
          if ( !v320 )
          {
            v116 = HIDWORD(v360) | 0x20;
            HIDWORD(v360) |= 0x20u;
          }
          if ( (*(_BYTE *)(v7 + 89) & 1) == 0 )
            HIDWORD(v360) = v116 | 0x40;
        }
      }
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v353) & _xmm) < 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v354) & _xmm) < 0.0000011920929 )
  {
    if ( !qword_18023E528 || !CDisplaySet::NeedsDesktopMoves(qword_18023E528) )
      goto LABEL_107;
    CVisual::ClearAllMoveTransformsInSubtree((struct CVisual *)v7);
    if ( !*((_QWORD *)v3 + 838) )
      *((_QWORD *)v3 + 838) = v7;
  }
  v117 = &v359[4];
  v118 = v340;
  v119 = (CVisual *)*((_QWORD *)v3 + 383);
  if ( !(_BYTE)v361 )
    v117 = 0LL;
  v120 = -2003292412;
  v121 = *((_BYTE *)v340 + 32);
  if ( v121 )
  {
    v122 = (_QWORD *)((char *)v119 + 264);
  }
  else
  {
    v123 = *((_QWORD *)v119 + 26);
    if ( (*(_DWORD *)(v123 + 4) & 0x80000) == 0 )
      goto LABEL_248;
    v124 = *(_DWORD *)(v123 + 12);
    v125 = (int *)(v123 + 12);
    if ( (v124 & 0x7F000000) != 0xD000000 )
    {
      do
      {
        v125 = (int *)((char *)v125 + (v124 & 0xFFFFFF) + 4);
        v124 = *v125;
      }
      while ( (*v125 & 0x7F000000) != 0xD000000 );
    }
    v390 = *(_QWORD **)(v125 + 1);
    if ( !v390 )
      goto LABEL_248;
    v126 = (_QWORD *)*v390;
    if ( (_QWORD *)*v390 == v390 )
      goto LABEL_248;
    while ( 1 )
    {
      v122 = v126 - 28;
      if ( (struct CVisualTree *)v126[4] == v340 )
        break;
      v126 = (_QWORD *)*v126;
      if ( v126 == v390 )
        goto LABEL_248;
    }
  }
  if ( !v122 )
  {
LABEL_248:
    v127 = 0;
    v128 = 0;
    goto LABEL_249;
  }
  v129 = 0;
  TreeData = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)v119 + 26) + 4LL) & 0x10000000) != 0 )
  {
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal(v119);
    if ( (v122[2] & 4) == 0 || v122[27] != v132 )
    {
      v129 = 1;
      TreeData = CVisual::FindTreeData(*(CVisual **)(*(_QWORD *)TransformParentDataInternal + 8LL), v340);
      if ( TreeData )
      {
        v133 = (CVisual **)v340;
LABEL_277:
        Blink = (unsigned __int64)TreeData[7].Blink;
        goto LABEL_271;
      }
    }
  }
  v133 = (CVisual **)v340;
  if ( v119 != *((CVisual **)v340 + 3) )
  {
    v134 = (CVisual *)*((_QWORD *)v119 + 10);
    if ( v121 )
    {
      TreeData = (struct _LIST_ENTRY *)((char *)v134 + 264);
    }
    else
    {
      v135 = CVisual::GetTreeDataListHead(v134);
      if ( v135 )
      {
        v136 = v135->Flink;
        if ( v135->Flink != v135 )
        {
          while ( (CVisual **)v136[2].Flink != v133 )
          {
            v136 = v136->Flink;
            if ( v136 == v135 )
              goto LABEL_269;
          }
          TreeData = v136 - 14;
        }
      }
    }
  }
LABEL_269:
  if ( TreeData )
    goto LABEL_277;
  Blink = 1LL;
LABEL_271:
  if ( v122[15] < Blink )
  {
    updated = CVisual::UpdateWorldTransform(
                v119,
                v133,
                (struct CTreeData *)v122,
                v129,
                (const struct CTreeData *)TreeData);
    v120 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x60Au);
    if ( v120 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v120, 0x570u);
      v118 = v340;
      goto LABEL_248;
    }
  }
  v128 = 0;
  v120 = 0;
  if ( !v122[15] )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x70u);
    v120 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x577u);
    v6 = -2003292412;
    goto LABEL_283;
  }
  v355 = *(_OWORD *)(v122 + 5);
  v356 = *(_OWORD *)(v122 + 7);
  v357 = *(_OWORD *)(v122 + 9);
  v358 = *(_OWORD *)(v122 + 11);
  *(_DWORD *)v359 = *((_DWORD *)v122 + 26);
  v127 = (v122[2] & 2) != 0;
  if ( v117 )
  {
    v139 = v122[14];
    *(_OWORD *)v117 = *(_OWORD *)v139;
    *((_OWORD *)v117 + 1) = *(_OWORD *)(v139 + 16);
    *((_OWORD *)v117 + 2) = *(_OWORD *)(v139 + 32);
    *((_OWORD *)v117 + 3) = *(_OWORD *)(v139 + 48);
    *((_DWORD *)v117 + 16) = *(_DWORD *)(v139 + 64);
  }
  v118 = v340;
  v334 = v127;
LABEL_249:
  v6 = v120;
  if ( v120 < 0 )
  {
LABEL_283:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v120, 0x22D1u);
    return (unsigned int)v6;
  }
  if ( v127 || *((_QWORD *)v118 + 3) == v7 )
  {
    if ( !*((_BYTE *)v3 + 6540) )
      CMILMatrix::Multiply((CMILMatrix *)&v355, (struct CDrawingContext *)((char *)v3 + 6472));
    ImageSourceForEffectInput = CDrawingContext::PushTransformInternal(
                                  v3,
                                  (const struct CVisual *)v7,
                                  (const struct CMILMatrix *)&v355,
                                  0,
                                  1);
    v6 = ImageSourceForEffectInput;
    if ( ImageSourceForEffectInput < 0 )
    {
      v332 = 8931;
      goto LABEL_23;
    }
  }
  else if ( !*((_BYTE *)v3 + 6540) )
  {
    if ( *((_DWORD *)v3 + 118) )
      CWatermarkStack<CMILMatrix,8,2,8>::Top((__int64)v3 + 472, (__int64)&v355);
    else
      CMILMatrix::operator=((__int64)&v355);
  }
  if ( (_BYTE)v361 && !*((_BYTE *)v3 + 6540) )
    CMILMatrix::Multiply((CMILMatrix *)&v359[4], (struct CDrawingContext *)((char *)v3 + 6472));
  v140 = 0;
  v141 = 0;
  if ( !*(_QWORD *)(v7 + 232) )
    goto LABEL_425;
  if ( SBYTE1(v360) >> 6 )
  {
    v142 = SBYTE1(v360) >> 6 == 1;
  }
  else
  {
    v142 = 0;
    v143 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[12] - 0.0)) & _xmm);
    if ( v143 < 0.00012207031 )
    {
      v144 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[28] - 0.0)) & _xmm);
      if ( v144 < 0.00012207031 )
      {
        v145 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[60] - 0.0)) & _xmm);
        if ( v145 < 0.00012207031 )
          goto LABEL_305;
      }
      if ( v143 < 0.00012207031 )
      {
        v146 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[28] - 0.0)) & _xmm);
        if ( v146 < 0.00012207031 )
        {
          v147 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[36] - 0.0)) & _xmm);
          if ( v147 < 0.00012207031 )
          {
            v148 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[40] - 0.0)) & _xmm);
            if ( v148 < 0.00012207031 )
            {
              v149 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[44] - 0.0)) & _xmm);
              if ( v149 < 0.00012207031
                || (v150 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[44] - 1.0)) & _xmm),
                    v150 < 0.00012207031) )
              {
                v151 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[48] - 0.0)) & _xmm);
                if ( v151 < 0.00012207031 )
                {
                  v152 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[60] - 0.0)) & _xmm);
                  if ( v152 < 0.00012207031 )
                  {
LABEL_305:
                    v153 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v359[16]) & _xmm);
                    v154 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v359[32]) & _xmm) * 40960.0)
                         + (float)(v153 * 40960.0);
                    v155 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v359[64]) & _xmm);
                    v156 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v154 + v155) - 1.0)) & _xmm);
                    v142 = v156 < 0.00012207031;
                  }
                }
              }
            }
          }
        }
      }
    }
    BYTE1(v360) = BYTE1(v360) & 0x3F | ((v142 << 7) - 64);
  }
  if ( !v142
    || (v157 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[8] - 0.0)) & _xmm), v157 >= 0.00012207031)
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[20] - 0.0)) & _xmm) >= 0.00012207031 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[4] - 0.0)) & _xmm) >= 0.00012207031
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v359[24] - 0.0)) & _xmm) >= 0.00012207031 )
    {
      goto LABEL_425;
    }
  }
  v158 = *(CComponentTransform2D ***)(v7 + 232);
  *(_QWORD *)&v335[3] = 0LL;
  v336 = 0;
  v6 = 0;
  v338 = 0LL;
  v339 = 0;
  if ( *((_BYTE *)v158 + 96) || (v159 = v158[2], GetCurrentThreadId() != *((_DWORD *)v159 + 148)) )
  {
    v162 = *((_BYTE *)v158 + 96);
    if ( v162 || ((_BYTE)v158[4] & 1) != 0 || !v158[10] )
    {
      v163 = 0LL;
      if ( v162 )
        v163 = (struct D2D_SIZE_F *)(v7 + 128);
      v164 = (__int64 (__fastcall *)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))*((_QWORD *)*v158 + 19);
      if ( v164 == CRectangleGeometry::GetShapeDataCore )
        v165 = CRectangleGeometry::GetShapeDataCore((CRectangleGeometry *)v158, v163, (struct CShapePtr *)&v338);
      else
        v165 = v164((CRectangleGeometry *)v158, v163, (struct CShapePtr *)&v338);
      v6 = v165;
      if ( v165 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v165, 0x7Fu);
      }
      else
      {
        v166 = v158[9];
        if ( v166 )
        {
          v372 = 0LL;
          if ( v163 )
            v372 = *v163;
          if ( v338 )
          {
            CComponentTransform2D::GetRealization(v166, &v372, &v439);
            CMILMatrix::CMILMatrix((CMILMatrix *)v408, &v439);
            v167 = CShape::CopyShape(v338, (const struct CMILMatrix *)v408, &v380);
            v6 = v167;
            if ( v167 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v167, 0x92u);
            }
            else
            {
              CShapePtr::Release((CShapePtr *)&v338);
              v338 = v380;
              v339 = 1;
            }
          }
        }
      }
      if ( v6 >= 0 )
        goto LABEL_340;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x5Du);
    }
    else
    {
      v338 = v158[10];
      v339 = 0;
    }
  }
  else
  {
    if ( ((_BYTE)v158[4] & 1) == 0 )
    {
LABEL_317:
      v161 = v158[10];
      CShapePtr::Release((CShapePtr *)&v338);
      v338 = v161;
      v339 = 0;
      goto LABEL_339;
    }
    v160 = CGeometry::GetShapeDataWorker((CGeometry *)v158, v7 + 128, (struct CShapePtr *)(v158 + 10));
    v6 = v160;
    if ( v160 >= 0 )
    {
      *((_DWORD *)v158 + 8) &= ~1u;
      goto LABEL_317;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v160, 0x4Eu);
  }
LABEL_339:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x26u);
    goto LABEL_348;
  }
LABEL_340:
  v168 = *(__int64 (__fastcall **)(CRectanglesShape *, __int128 *, _QWORD))(*(_QWORD *)v338 + 32LL);
  if ( (char *)v168 == (char *)CRectanglesShape::GetTightBounds )
  {
    v169 = CRectanglesShape::GetTightBounds((__int64)v338, (__int64)&v417, 0LL);
  }
  else if ( (char *)v168 == (char *)CRegionShape::GetTightBounds )
  {
    v169 = CRegionShape::GetTightBounds(v338, (__m128 *)&v417, 0LL);
  }
  else
  {
    v169 = v168(v338, &v417, 0LL);
  }
  v6 = v169;
  if ( v169 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v169, 0x27u);
LABEL_348:
  if ( v6 == -2003304438 )
  {
    v6 = 0;
    v417 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v339 && v338 )
  {
    v170 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v338;
    if ( v170 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v338, 1);
    else
      v170(v338, 1);
  }
  v338 = 0LL;
  v339 = 0;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF13u);
    goto LABEL_395;
  }
  if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v417
     || *((float *)&v417 + 2) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
    && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *((float *)&v417 + 1)
     || *((float *)&v417 + 3) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
  {
    v6 = 0;
    if ( !*((_BYTE *)v158 + 96) )
    {
      v171 = v158[2];
      if ( GetCurrentThreadId() == *((_DWORD *)v171 + 148) )
      {
        if ( ((_BYTE)v158[4] & 1) == 0 )
        {
LABEL_365:
          v173 = v158[10];
          CShapePtr::Release((CShapePtr *)&v335[3]);
          *(_QWORD *)&v335[3] = v173;
          v336 = 0;
LABEL_392:
          if ( v6 >= 0 )
            goto LABEL_396;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF1Au);
          goto LABEL_395;
        }
        v172 = CGeometry::GetShapeDataWorker((CGeometry *)v158, v7 + 128, (struct CShapePtr *)(v158 + 10));
        v6 = v172;
        if ( v172 >= 0 )
        {
          *((_DWORD *)v158 + 8) &= ~1u;
          goto LABEL_365;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v172, 0x4Eu);
LABEL_391:
        v173 = *(CRegionShape **)&v335[3];
        goto LABEL_392;
      }
    }
    v174 = *((_BYTE *)v158 + 96);
    if ( !v174 && ((_BYTE)v158[4] & 1) == 0 )
    {
      v173 = v158[10];
      if ( v173 )
      {
        if ( v336 && *(_QWORD *)&v335[3] )
          (***(void (__fastcall ****)(_QWORD, __int64))&v335[3])(*(_QWORD *)&v335[3], 1LL);
        *(_QWORD *)&v335[3] = v173;
        v336 = 0;
        goto LABEL_392;
      }
    }
    v175 = 0LL;
    if ( v174 )
      v175 = (struct D2D_SIZE_F *)(v7 + 128);
    v176 = (__int64 (__fastcall *)(CRectangleGeometry *, const struct D2D_SIZE_F *, struct CShapePtr *))*((_QWORD *)*v158 + 19);
    if ( v176 == CRectangleGeometry::GetShapeDataCore )
      v177 = CRectangleGeometry::GetShapeDataCore((CRectangleGeometry *)v158, v175, (struct CShapePtr *)&v335[3]);
    else
      v177 = v176((CRectangleGeometry *)v158, v175, (struct CShapePtr *)&v335[3]);
    v6 = v177;
    if ( v177 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v177, 0x7Fu);
    }
    else
    {
      v178 = v158[9];
      if ( v178 )
      {
        v373 = 0LL;
        if ( v175 )
          v373 = *v175;
        v173 = *(CRegionShape **)&v335[3];
        if ( !*(_QWORD *)&v335[3] )
          goto LABEL_389;
        CComponentTransform2D::GetRealization(v178, &v373, &v438);
        CMILMatrix::CMILMatrix((CMILMatrix *)v409, &v438);
        v179 = CShape::CopyShape(*(CShape **)&v335[3], (const struct CMILMatrix *)v409, &v381);
        v6 = v179;
        if ( v179 >= 0 )
        {
          CShapePtr::Release((CShapePtr *)&v335[3]);
          v173 = v381;
          *(_QWORD *)&v335[3] = v381;
          v336 = 1;
LABEL_389:
          if ( v6 >= 0 )
            goto LABEL_396;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x5Du);
          goto LABEL_391;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v179, 0x92u);
      }
    }
    v173 = *(CRegionShape **)&v335[3];
    goto LABEL_389;
  }
LABEL_395:
  v173 = *(CRegionShape **)&v335[3];
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x22FEu);
    CShapePtr::Release((CShapePtr *)&v335[3]);
    return (unsigned int)v6;
  }
LABEL_396:
  v180 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)v173 + 40LL);
  if ( v180 == CRectanglesShape::IsRectangles )
  {
    v181 = *((_DWORD *)v173 + 8);
    v343 = v181;
  }
  else
  {
    if ( v180 == CRegionShape::IsRectangles )
      IsRectangles = CRegionShape::IsRectangles(v173, &v343);
    else
      IsRectangles = v180(v173, &v343);
    if ( !IsRectangles )
    {
LABEL_418:
      v173 = *(CRegionShape **)&v335[3];
      goto LABEL_419;
    }
    v173 = *(CRegionShape **)&v335[3];
    v181 = v343;
  }
  if ( v181 == 1 )
  {
    v183 = *(void (__fastcall **)(CRegionShape *, __m128 *, _BYTE *))(*(_QWORD *)v173 + 32LL);
    if ( (char *)v183 == (char *)CRectanglesShape::GetTightBounds )
    {
      CRectanglesShape::GetTightBounds((__int64)v173, (__int64)&v412, (__int64)&v359[4]);
    }
    else if ( (char *)v183 == (char *)CRegionShape::GetTightBounds )
    {
      CRegionShape::GetTightBounds(v173, &v412, (__int64)&v359[4]);
    }
    else
    {
      v183(v173, &v412, &v359[4]);
    }
    if ( v412.m128_f32[2] > v412.m128_f32[0] && v412.m128_f32[3] > v412.m128_f32[1] )
    {
      v184 = *((_QWORD *)v3 + 46);
      v412.m128_f32[0] = v412.m128_f32[0] + -0.015625;
      v412.m128_f32[1] = v412.m128_f32[1] + -0.015625;
      v412.m128_f32[2] = v412.m128_f32[2] + 0.015625;
      v412.m128_f32[3] = v412.m128_f32[3] + 0.015625;
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v184 + 72LL))(v184, v425);
      v185 = (float)v425[1];
      v186 = (float)v427;
      if ( (float)v426 <= (float)v425[0]
        || v186 <= v185
        || (float)v425[0] >= v412.m128_f32[0]
        && v185 >= v412.m128_f32[1]
        && v412.m128_f32[2] >= (float)v426
        && v412.m128_f32[3] >= v186 )
      {
        v173 = *(CRegionShape **)&v335[3];
        v141 = 2;
        v140 = 1;
        goto LABEL_420;
      }
    }
    goto LABEL_418;
  }
LABEL_419:
  v140 = 0;
LABEL_420:
  if ( v336 && v173 )
  {
    v187 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v173;
    if ( v187 == CRectanglesShape::`scalar deleting destructor' )
      CRectanglesShape::`scalar deleting destructor'(v173, 1);
    else
      v187(v173, 1);
  }
  v128 = 0;
LABEL_425:
  v188 = CLayerVisual::IsOfType;
  v189 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
  if ( v189 != CVisual::IsOfType )
  {
    if ( v189 == CSpriteVisual::IsOfType
      || (v189 != CWindowNode::IsOfType
        ? ((char *)v189 != (char *)CLayerVisual::IsOfType
         ? (v190 = v189(v7, 32))
         : (v190 = CLayerVisual::IsOfType(v7, 32LL)))
        : (v190 = CWindowNode::IsOfType(v7, 32)),
          v190) )
    {
      v191 = *(_QWORD *)(v7 + 496);
      if ( v191 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v191 + 176LL))(v191, v188) )
          v141 = 5;
      }
    }
  }
  if ( HIBYTE(v361) )
    v141 = 5;
  v192 = v340;
  v193 = 0LL;
  v194 = *((_BYTE *)v340 + 32);
  if ( v194 )
  {
    v193 = v7 + 264;
  }
  else
  {
    v195 = *(_QWORD *)(v7 + 208);
    if ( (*(_DWORD *)(v195 + 4) & 0x80000) != 0 )
    {
      v196 = *(_DWORD *)(v195 + 12);
      v197 = (int *)(v195 + 12);
      if ( (v196 & 0x7F000000) != 0xD000000 )
      {
        do
        {
          v197 = (int *)((char *)v197 + (v196 & 0xFFFFFF) + 4);
          v196 = *v197;
        }
        while ( (*v197 & 0x7F000000) != 0xD000000 );
      }
      v382 = *(_QWORD **)(v197 + 1);
      if ( v382 )
      {
        v198 = (_QWORD *)*v382;
        if ( (_QWORD *)*v382 != v382 )
        {
          while ( (struct CVisualTree *)v198[4] != v340 )
          {
            v198 = (_QWORD *)*v198;
            if ( v198 == v382 )
              goto LABEL_451;
          }
          v193 = (__int64)(v198 - 28);
        }
      }
    }
  }
LABEL_451:
  if ( v7 != *((_QWORD *)v340 + 3) && !v194 )
  {
    v199 = *(_QWORD *)(*(_QWORD *)(v7 + 80) + 208LL);
    if ( (*(_DWORD *)(v199 + 4) & 0x80000) != 0 )
    {
      v200 = *(_DWORD *)(v199 + 12);
      v201 = (int *)(v199 + 12);
      if ( (v200 & 0x7F000000) != 0xD000000 )
      {
        do
        {
          v201 = (int *)((char *)v201 + (v200 & 0xFFFFFF) + 4);
          v200 = *v201;
        }
        while ( (*v201 & 0x7F000000) != 0xD000000 );
      }
      v383 = *(__int64 ****)(v201 + 1);
      if ( v383 )
      {
        for ( i = *v383; i != (__int64 **)v383; i = (__int64 **)*i )
        {
          if ( i[4] == (__int64 *)v340 )
            break;
        }
      }
    }
  }
  v203 = CCpuClippingData::Update(v193 + 136, (__int64)v340, v7, v141, v140);
  v6 = v203;
  if ( v203 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v203, 0x671u);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x2332u);
    return (unsigned int)v6;
  }
  v205 = 0LL;
  if ( *((_BYTE *)v192 + 32) )
  {
    v205 = (_QWORD *)(v7 + 264);
  }
  else
  {
    v206 = *(_QWORD *)(v7 + 208);
    if ( (*(_DWORD *)(v206 + 4) & 0x80000) != 0 )
    {
      v207 = *(_DWORD *)(v206 + 12);
      v208 = (int *)(v206 + 12);
      if ( (v207 & 0x7F000000) != 0xD000000 )
      {
        do
        {
          v208 = (int *)((char *)v208 + (v207 & 0xFFFFFF) + 4);
          v207 = *v208;
        }
        while ( (*v208 & 0x7F000000) != 0xD000000 );
      }
      v375 = *(struct CDrawingContext **)(v208 + 1);
      v204 = v375;
      if ( v375 )
      {
        v209 = *(struct CDrawingContext **)v375;
        if ( *(struct CDrawingContext **)v375 != v375 )
        {
          while ( *((struct CVisualTree **)v209 + 4) != v192 )
          {
            v209 = *(struct CDrawingContext **)v209;
            if ( v209 == v375 )
              goto LABEL_474;
          }
          v205 = (_QWORD *)((char *)v209 - 224);
        }
      }
    }
  }
LABEL_474:
  v210 = (char *)v3 + 912;
  v211 = *((_DWORD *)v205 + 34);
  if ( !*((_BYTE *)v3 + 3040) && !*((_QWORD *)v3 + 838) )
  {
    if ( v211 == 5 )
    {
      if ( *(_BYTE *)(*((_QWORD *)v3 + 114) + 80LL * (unsigned int)(*((_DWORD *)v3 + 234) - 1)) )
      {
        CScopedClipStack::GetTopGpuClipInScope((__int64 *)v3 + 114, 1, (__int64)v434);
        ImageSourceForEffectInput = CDrawingContext::PushClippingScope(v3, (const struct CVisual *)v7, 0, 0LL, 1);
        v6 = ImageSourceForEffectInput;
        if ( ImageSourceForEffectInput < 0 )
        {
          v332 = 9024;
          goto LABEL_23;
        }
        ImageSourceForEffectInput = CDrawingContext::PushClipRectForNode((__int64)v3, v7, (int)v434, 1);
        v6 = ImageSourceForEffectInput;
        if ( ImageSourceForEffectInput < 0 )
        {
          v332 = 9026;
          goto LABEL_23;
        }
      }
    }
    else if ( v211 == 3 )
    {
      CScopedClipStack::GetTopGpuClipInScope((__int64 *)v3 + 114, 1, (__int64)v435);
      ImageSourceForEffectInput = CDrawingContext::PushClippingScope(
                                    v3,
                                    (const struct CVisual *)v7,
                                    1,
                                    (const struct CMILMatrix *)&v359[4],
                                    1);
      v6 = ImageSourceForEffectInput;
      if ( ImageSourceForEffectInput < 0 )
      {
        v332 = 9041;
        goto LABEL_23;
      }
      ImageSourceForEffectInput = CDrawingContext::PushClipRectForNode((__int64)v3, v7, (int)v435, 1);
      v6 = ImageSourceForEffectInput;
      if ( ImageSourceForEffectInput < 0 )
      {
        v332 = 9043;
        goto LABEL_23;
      }
    }
  }
  if ( (_BYTE)v361
    || __PAIR16__(BYTE1(v361), 0) != BYTE2(v361)
    || __PAIR16__(HIBYTE(v361), 0) != v362
    || HIDWORD(v353)
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v354 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v212 = *((_DWORD *)v3 + 118);
    if ( v212 )
      v213 = (void *)(*((_QWORD *)v3 + 61) + 68LL * (unsigned int)(v212 - 1));
    else
      v213 = &CMILMatrix::Identity;
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)v213, v7 + 160, (float *)&v436);
    v214 = *((_DWORD *)v3 + 118);
    v433 = v437;
    v400 = 0;
    v432 = v436;
    if ( v214 )
    {
      v216 = (unsigned int)(v214 - 1);
      v217 = *((_QWORD *)v3 + 61);
      v399[0] = *(_OWORD *)(68 * v216 + v217);
      v399[1] = *(_OWORD *)(68 * v216 + v217 + 16);
      v399[2] = *(_OWORD *)(68 * v216 + v217 + 32);
      v399[3] = *(_OWORD *)(68 * v216 + v217 + 48);
      v215 = 0;
      v400 = *(_DWORD *)(68 * v216 + v217 + 64);
    }
    else
    {
      CMILMatrix::operator=((__int64)v399);
    }
    v218 = *(__int64 (__fastcall **)(__int64, _OWORD *, __int128 *, __int128 *, __int64 *, __int64 *))(*(_QWORD *)v7 + 144LL);
    if ( (char *)v218 == (char *)CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds )
    {
      v6 = v215;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 208) + 4LL) & 0x8000000) != 0
        && ((EffectInternal = CVisual::GetEffectInternal((CVisual *)v7),
             v220 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)EffectInternal + 48LL),
             v220 != CEffectGroup::IsOfType)
          ? (v221 = v220((__int64)EffectInternal, 8))
          : (v221 = CEffectGroup::IsOfType((__int64)EffectInternal, 8)),
            v221) )
      {
        v222 = (*(__int64 (__fastcall **)(struct CEffect *, _OWORD *, __int128 *, __int128 *, __int64 *, __int64 *))(*(_QWORD *)EffectInternal + 168LL))(
                 EffectInternal,
                 v399,
                 &v422,
                 &v432,
                 v419,
                 v413);
        v6 = v222;
        if ( v222 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v222, 0xC47u);
      }
      else
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 208) + 4LL) & 0x10000) == 0 )
          goto LABEL_514;
        v223 = 0;
        v224 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL);
        if ( v224 == CLayerVisual::IsOfType )
          v225 = CLayerVisual::IsOfType(v7, 33LL);
        else
          v225 = v224(v7, 33LL);
        if ( v225 )
          v223 = *(_BYTE *)(v7 + 504);
        if ( CVisual::GetEffectiveSize((CVisual *)v7, &v369, v351) || v223 )
        {
          *(float *)v374 = v369;
          *(float *)&v374[1] = v351[0];
          TreeEffectInternal = (__int64 *)CVisual::GetTreeEffectInternal(v226);
          CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
            TreeEffectInternal,
            (_OWORD *)(v7 + 160),
            (__int64)v374,
            (__int64)v399,
            &v422,
            (__int64)&v432,
            v419,
            v413);
        }
        else
        {
LABEL_514:
          *(_OWORD *)v419 = v422;
          *(_OWORD *)v413 = v422;
        }
      }
    }
    else
    {
      if ( (char *)v218 == (char *)CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds )
        v228 = CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                 (CVisual *)v7,
                 (__int64)v399,
                 (__int64)&v422,
                 (__int64)&v432,
                 v419,
                 v413);
      else
        v228 = v218(v7, v399, &v422, &v432, v419, v413);
      v6 = v228;
    }
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1140u);
    else
      *(_OWORD *)v428 = *(_OWORD *)v413;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x236Cu);
      return (unsigned int)v6;
    }
    ImageSourceForEffectInput = CDrawingContext::PushEffects(v3, (__int64)v428, (__int64)&v418, (__int64)v335);
    v6 = ImageSourceForEffectInput;
    if ( ImageSourceForEffectInput < 0 )
    {
      v332 = 9077;
      goto LABEL_23;
    }
    if ( LOBYTE(v335[0]) )
    {
LABEL_743:
      *v347 = 0;
      return (unsigned int)v6;
    }
    v128 = 0;
    if ( *((_BYTE *)v192 + 32) )
    {
      v229 = (struct _LIST_ENTRY *)(v7 + 264);
    }
    else
    {
      v230 = CVisual::GetTreeDataListHead((CVisual *)v7);
      if ( v230 )
      {
        v231 = v230->Flink;
        if ( v230->Flink != v230 )
        {
          while ( 1 )
          {
            v204 = (struct CDrawingContext *)&v231[-14];
            if ( (struct CVisualTree *)v231[2].Flink == v192 )
              break;
            v231 = v231->Flink;
            if ( v231 == v230 )
              goto LABEL_534;
          }
          v229 = v231 - 14;
        }
      }
    }
LABEL_534:
    v211 = (int)v229[8].Blink;
  }
  if ( *((_BYTE *)v3 + 3040) )
    goto LABEL_662;
  if ( *((_QWORD *)v3 + 838) )
    goto LABEL_753;
  if ( ((v211 - 2) & 0xFFFFFFFD) != 0 )
  {
LABEL_662:
    if ( !*((_QWORD *)v3 + 838) )
    {
      if ( *((_BYTE *)v3 + 6772) )
        CDrawingContext::UpdateMoveOptimizations(v3, v204, &v418);
      v295 = *((_DWORD *)v3 + 802);
      v296 = 0LL;
      if ( v295 )
        v296 = *((_QWORD *)v3 + 403) + 16LL * (unsigned int)(v295 - 1);
      v297 = *(_BYTE *)(v296 + 8);
      v333 = v297;
      v298 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)&v355, v204);
      v299 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v298 - 0.0)) & _xmm);
      if ( v299 >= 0.00000011920929 && _finite((float)(1.0 / v298)) )
      {
        v300 = v298 < 0.0 == (float)((float)((float)((float)((float)(*((float *)&v355 + 1) * *((float *)&v356 + 3))
                                                           - (float)(*((float *)&v355 + 3) * *((float *)&v356 + 1)))
                                                   * *(float *)&v358)
                                           + (float)((float)((float)(*((float *)&v355 + 3) * *(float *)&v356)
                                                           - (float)(*(float *)&v355 * *((float *)&v356 + 3)))
                                                   * *((float *)&v358 + 1)))
                                   + (float)((float)((float)(*(float *)&v355 * *((float *)&v356 + 1))
                                                   - (float)(*((float *)&v355 + 1) * *(float *)&v356))
                                           * *((float *)&v358 + 3))) < 0.0;
      }
      else
      {
        v378 = v355;
        v379 = DWORD2(v355);
        v376 = v356;
        v377 = DWORD2(v356);
        Windows::Foundation::Numerics::cross(&v414, &v378, &v376);
        v300 = *((float *)&v414 + 2) > 0.0;
      }
      v301 = *(_DWORD *)(*(_QWORD *)(v7 + 208) + 4LL);
      if ( (v301 & 0x8000000) != 0 )
        goto LABEL_684;
      v302 = v364 && *(_DWORD *)(v364 + 96) == 1;
      v303 = *(_QWORD *)(v7 + 72);
      if ( (v303 & 2) != 0 )
        v303 = *(_QWORD *)(v303 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v303) = v303 & 1;
      v304 = (_DWORD)v303 != 0;
      v305 = v301 & 0x10000;
      if ( *(_DWORD *)(v7 + 96) != 1 )
      {
        if ( !v302 )
          goto LABEL_685;
        if ( v304 )
          goto LABEL_684;
      }
      if ( v302 && v305 )
      {
LABEL_684:
        v397 = v7;
        v398 = v300;
        ImageSourceForEffectInput = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                      (char *)v3 + 3208,
                                      &v397);
        v6 = ImageSourceForEffectInput;
        if ( ImageSourceForEffectInput < 0 )
        {
          v332 = 9147;
          goto LABEL_23;
        }
      }
LABEL_685:
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 208) + 4LL) & 0x8000) != 0 )
      {
        WindowBackgroundTreatmentInternal = (CSpriteVisualContent **)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v7);
        HIBYTE(v335[0]) = 0;
        v307 = WindowBackgroundTreatmentInternal;
        v308 = 1;
        v309 = CWindowBackgroundTreatment::ContainsBackdropBrush(WindowBackgroundTreatmentInternal, (bool *)v335 + 1);
        if ( *((_BYTE *)v307 + 276) )
        {
          if ( *((_BYTE *)v307 + 279) )
          {
            ImageSourceForEffectInput = CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
                                          (CWindowBackgroundTreatment *)v307,
                                          v337);
            v6 = ImageSourceForEffectInput;
            v308 = !v309;
            if ( ImageSourceForEffectInput < 0 )
            {
              v332 = 9172;
              goto LABEL_23;
            }
          }
        }
        if ( v309 )
        {
          v310 = **(_QWORD **)(*((_QWORD *)v337 + 4) + 392LL);
          if ( v308 )
            ++*(_DWORD *)(v310 + 1176);
          else
            ++*(_DWORD *)(v310 + 1180);
        }
        v407 = 0;
        ImageSourceForEffectInput = CVisual::GetWorldTransform((CVisual *)v7, (__int64)v340, 3, (__int64)v406, 0LL, 0LL);
        v6 = ImageSourceForEffectInput;
        if ( ImageSourceForEffectInput < 0 )
        {
          v332 = 9182;
          goto LABEL_23;
        }
        CWindowBackgroundTreatment::SetWorldTransform((__int64)v307, (__int64)v406, 3);
        v297 = v333;
      }
      v311 = *(_DWORD *)(v7 + 96);
      v312 = v364 && *(_DWORD *)(v364 + 96) == 1;
      v313 = *(_QWORD *)(v7 + 208);
      v314 = *(_DWORD *)(v313 + 4);
      if ( (v314 & 0x10000) != 0 )
        goto LABEL_707;
      if ( (v314 & 0x8000000) == 0 )
        goto LABEL_706;
      v315 = *(_DWORD *)(v313 + 12);
      v316 = (int *)(v313 + 12);
      if ( (v315 & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v316 = (int *)((char *)v316 + (v315 & 0xFFFFFF) + 4);
          v315 = *v316;
        }
        while ( (*v316 & 0x7F000000) != 0x5000000 );
      }
      v340 = *(struct CVisualTree **)(v316 + 1);
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *, __int64))(*(_QWORD *)v340 + 48LL))(v340, 8LL) )
LABEL_707:
        v317 = 1;
      else
LABEL_706:
        v317 = 0;
      if ( v311 == 1 )
      {
        if ( v312 )
        {
          if ( !v317 )
            goto LABEL_711;
        }
        else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v7 + 72)) )
        {
          goto LABEL_711;
        }
        if ( !CVisual::HasBspPolygonList((CVisual *)v7) )
          return (unsigned int)v6;
        ImageSourceForEffectInput = CDrawingContext::DrawBspPolygonList(v337, (struct CVisual *)v7, v321);
        v6 = ImageSourceForEffectInput;
        if ( ImageSourceForEffectInput >= 0 )
        {
          v322 = v348;
          *((_BYTE *)v348 + 39) = 1;
          CProcessAttribution::RegisterForEnergyReporting(v322);
          *v347 = 0;
          return (unsigned int)v6;
        }
        v332 = 9223;
        goto LABEL_23;
      }
LABEL_711:
      v318 = v337;
      v333 = 0;
      if ( *((_DWORD *)v337 + 69) && v297 != v300 )
      {
        v319 = *(_DWORD *)(*(_QWORD *)(v7 + 208) + 4LL);
        if ( (v319 & 0x8000000) == 0 && (v319 & 0x10000) == 0 || !v300 )
          return (unsigned int)v6;
        v320 = *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference((char *)v3 + 3208)
                        + 8) == v297;
        goto LABEL_742;
      }
      v323 = *(__int64 (__fastcall **)(CSpriteVisual *))(*(_QWORD *)v7 + 176LL);
      if ( (char *)v323 == (char *)CVisual::HasContent )
      {
        v324 = *(_QWORD *)(v7 + 240) != 0LL;
      }
      else
      {
        if ( v323 == CSpriteVisual::HasContent )
        {
          if ( !*(_QWORD *)(v7 + 240) && !*(_QWORD *)(v7 + 496) )
            return (unsigned int)v6;
          goto LABEL_730;
        }
        v324 = v323((CSpriteVisual *)v7);
        v318 = v337;
      }
      if ( !v324 )
      {
LABEL_741:
        v320 = !v333;
LABEL_742:
        if ( v320 )
          return (unsigned int)v6;
        goto LABEL_743;
      }
LABEL_730:
      v325 = *(__int64 (__fastcall **)(CWindowNode *, struct CDrawingContext *, bool *))(*(_QWORD *)v7 + 168LL);
      if ( (char *)v325 == (char *)CSpriteVisual::RenderContent )
      {
        v326 = CSpriteVisual::RenderContent((CDropShadow **)v7, v318, &v333);
      }
      else if ( (char *)v325 == (char *)CVisual::RenderContent )
      {
        v326 = CVisual::RenderContent((CVisual *)v7, (unsigned __int64)v318, &v333);
      }
      else if ( v325 == CWindowNode::RenderContent )
      {
        v326 = CWindowNode::RenderContent((CWindowNode *)v7, v318, &v333);
      }
      else
      {
        v326 = v325((CWindowNode *)v7, v318, &v333);
      }
      v6 = v326;
      if ( v326 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v326, 0x23EEu);
        return (unsigned int)v6;
      }
      v327 = v348;
      v320 = *((_BYTE *)v348 + 36) == 0;
      *((_BYTE *)v348 + 39) = 1;
      if ( v320 )
      {
        v328 = *((_QWORD *)v327 + 3);
        v348 = v327;
        if ( CEnergyReporter::s_reportingEnabled )
        {
          if ( *(_DWORD *)(v328 + 32) < 0x400u )
          {
            v329 = DynArray<CProcessAttribution *,0>::AddMultipleAndSet(v328 + 8, &v348);
            v330 = v329;
            if ( v329 < 0 )
              MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, v329, 0x58u);
            else
              _InterlockedIncrement((volatile signed __int32 *)v348 + 2);
            if ( v330 >= 0 )
              *((_BYTE *)v327 + 36) = 1;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147467259, 0x51u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147467259, 0x4Cu);
        }
      }
      goto LABEL_741;
    }
LABEL_753:
    CVisual::ExcludeFromVisibleRegion((CVisual *)v7, (__int64)&v418, v3);
    return (unsigned int)v6;
  }
  v232 = *((_DWORD *)v3 + 234);
  if ( v232 && *(_DWORD *)(*(_QWORD *)v210 + 80LL * (unsigned int)(v232 - 1) + 4) && (v233 = *((_DWORD *)v3 + 744)) != 0 )
    v234 = *(_OWORD *)(*((_QWORD *)v3 + 374) + 16LL * (unsigned int)(v233 - 1));
  else
    v234 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v411 = v234;
  if ( v232 && *(_DWORD *)(*(_QWORD *)v210 + 80LL * (unsigned int)(v232 - 1) + 8) )
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
      (__int64)&v411,
      120LL * (unsigned int)(*((_DWORD *)v3 + 442) - 1) + 96 + *((_QWORD *)v3 + 218));
  v235 = 0LL;
  if ( v211 == 2 )
  {
    v235 = (__int128 *)(80LL * (unsigned int)(*((_DWORD *)v210 + 6) - 1) + *(_QWORD *)v210 + 12LL);
  }
  else if ( v211 == 4 )
  {
    v235 = &v355;
  }
  v236 = v337;
  v237 = 0;
  v6 = 0;
  v238 = 0;
  if ( *((_DWORD *)v337 + 156) )
  {
    v239 = (_QWORD *)((char *)v337 + 600);
    while ( 1 )
    {
      v240 = CD2DLayer::ApplyState(*(CD2DLayer **)(*v239 + 8LL * v238), v236);
      v6 = v240;
      if ( v240 < 0 )
        break;
      v236 = v337;
      ++v128;
      if ( ++v238 >= *((_DWORD *)v337 + 156) )
        goto LABEL_554;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v240, 0x19ECu);
  }
  else
  {
LABEL_554:
    v239 = (_QWORD *)((char *)v236 + 600);
    *((_DWORD *)v236 + 156) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v236 + 600, 8u);
  }
  if ( v128 < *((_DWORD *)v337 + 156) && v128 )
    DynArray<CD2DLayer *,0>::ShiftLeft(v239, v128);
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x19CEu);
    v241 = v337;
  }
  else
  {
    v241 = v337;
    if ( *((_BYTE *)v337 + 6770) )
      *(_WORD *)((char *)v337 + 6769) = 1;
  }
  v242 = 64LL;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x145Eu);
    goto LABEL_590;
  }
  v243 = *((_DWORD *)v241 + 111);
  v6 = 0;
  LODWORD(v414) = 3;
  *((_QWORD *)&v414 + 1) = v7;
  lpMem = 0LL;
  if ( *((_DWORD *)v241 + 110) != v243 )
    goto LABEL_571;
  v344 = 0;
  Size = 0;
  v244 = ULongLongToUInt(2LL * v243, &v344);
  v6 = v244;
  if ( v244 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v244, 0x4Cu);
    goto LABEL_574;
  }
  v247 = v344;
  if ( v344 <= v245 )
    v247 = v245;
  v344 = v247;
  v248 = WPF::HrMalloc((WPF *)0x10, v247, (unsigned __int64)&lpMem, v246);
  v6 = v248;
  if ( v248 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v248, 0x54u);
  }
  else
  {
    v249 = ULongLongToUInt(16LL * *((unsigned int *)v241 + 110), &Size);
    v6 = v249;
    if ( v249 >= 0 )
    {
      v250 = lpMem;
      memcpy_0(lpMem, *((const void **)v241 + 57), Size);
      WPF::ProcessHeapImpl::Free(*((void **)v241 + 57));
      *((_QWORD *)v241 + 57) = v250;
      *((_DWORD *)v241 + 111) = v247;
LABEL_571:
      *(_OWORD *)(*((_QWORD *)v241 + 57) + 16LL * *((unsigned int *)v241 + 110)) = v414;
      v251 = *((_DWORD *)v241 + 116);
      v252 = ++*((_DWORD *)v241 + 110);
      if ( v251 > v252 )
        v252 = v251;
      *((_DWORD *)v241 + 116) = v252;
      goto LABEL_574;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v249, 0x56u);
  }
  v242 = (__int64)lpMem;
  if ( lpMem )
    HeapFree(WPF::g_processHeap, 0, lpMem);
LABEL_574:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1463u);
LABEL_590:
    v253 = 0;
    v258 = (char *)v241 + 912;
    goto LABEL_591;
  }
  v253 = 1;
  v404 = 0;
  v401[0] = 1;
  v402 = 0LL;
  if ( v235 )
  {
    v254 = *v235;
    v255 = v235[1];
    v404 = *((_DWORD *)v235 + 16);
    v403[0] = v254;
    v256 = v235[2];
    v403[1] = v255;
    v257 = v235[3];
    v403[2] = v256;
    v403[3] = v257;
  }
  else
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)v403);
  }
  v258 = (char *)v241 + 912;
  v259 = DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet((char *)v241 + 912, v401, v242);
  v6 = v259;
  if ( v259 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v259, 0x3Cu);
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1467u);
  else
    v237 = 1;
LABEL_591:
  if ( v6 < 0 )
  {
    if ( v237 )
      --*((_DWORD *)v258 + 6);
    if ( v253 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)v241 + 440, 0LL, v260);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x239Fu);
    return (unsigned int)v6;
  }
  v261 = *((_DWORD *)v241 + 66);
  v262 = (unsigned int *)((char *)v241 + 440);
  *((_QWORD *)&v414 + 1) = v7;
  v367 = 0LL;
  LODWORD(v414) = 1;
  v263 = 0;
  v264 = *((_DWORD *)v241 + 111);
  v6 = 0;
  if ( *((_DWORD *)v241 + 110) != v264 )
    goto LABEL_604;
  v345 = 0;
  Size_4 = 0;
  v265 = ULongLongToUInt(2LL * v264, &v345);
  v6 = v265;
  if ( v265 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v265, 0x4Cu);
    goto LABEL_607;
  }
  v267 = v345;
  if ( v345 <= 0x40 )
    v267 = 64;
  v345 = v267;
  v268 = WPF::HrMalloc((WPF *)0x10, v267, (unsigned __int64)&v367, v266);
  v6 = v268;
  if ( v268 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v268, 0x54u);
  }
  else
  {
    v269 = ULongLongToUInt(16LL * *v262, &Size_4);
    v6 = v269;
    if ( v269 >= 0 )
    {
      v270 = v367;
      memcpy_0(v367, *((const void **)v262 + 2), Size_4);
      WPF::ProcessHeapImpl::Free(*((void **)v262 + 2));
      *((_QWORD *)v262 + 2) = v270;
      v262[1] = v267;
LABEL_604:
      *(_OWORD *)(*((_QWORD *)v262 + 2) + 16LL * (*v262)++) = v414;
      v271 = *v262;
      if ( v262[6] > *v262 )
        v271 = v262[6];
      v262[6] = v271;
      goto LABEL_607;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v269, 0x56u);
  }
  v260 = v367;
  if ( v367 )
    HeapFree(WPF::g_processHeap, 0, v367);
LABEL_607:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1402u);
    goto LABEL_657;
  }
  v263 = 1;
  if ( v261 )
  {
    v272 = 0x7FFFFFFF;
    v273 = *(float *)&v411 - 0.5;
    if ( (float)(*(float *)&v411 - 0.5) < -2147483600.0 )
    {
      v274 = 0x80000000;
    }
    else if ( v273 >= 2147483600.0 )
    {
      v274 = 0x7FFFFFFF;
    }
    else
    {
      v274 = (int)ceilf_0(v273);
    }
    v275 = *((float *)&v411 + 1) - 0.5;
    v276 = (float)v274;
    if ( (float)(*((float *)&v411 + 1) - 0.5) < -2147483600.0 )
    {
      v277 = 0x80000000;
    }
    else if ( v275 >= 2147483600.0 )
    {
      v277 = 0x7FFFFFFF;
    }
    else
    {
      v277 = (int)ceilf_0(v275);
    }
    v278 = *((float *)&v411 + 2) - 0.5;
    v279 = (float)v277;
    if ( (float)(*((float *)&v411 + 2) - 0.5) < -2147483600.0 )
    {
      v280 = 0x80000000;
    }
    else if ( v278 >= 2147483600.0 )
    {
      v280 = 0x7FFFFFFF;
    }
    else
    {
      v280 = (int)ceilf_0(v278);
    }
    v281 = *((float *)&v411 + 3) - 0.5;
    v282 = (float)v280;
    if ( (float)(*((float *)&v411 + 3) - 0.5) < -2147483600.0 )
    {
      v272 = 0x80000000;
    }
    else if ( v281 < 2147483600.0 )
    {
      v283 = (float)(int)ceilf_0(v281);
      goto LABEL_635;
    }
    v283 = (float)v272;
  }
  else
  {
    LODWORD(v276) = v411;
    v279 = *((float *)&v411 + 1);
    v282 = *((float *)&v411 + 2);
    v283 = *((float *)&v411 + 3);
  }
LABEL_635:
  v284 = v363;
  *(_QWORD *)&v414 = __PAIR64__(LODWORD(v279), LODWORD(v276));
  v6 = 0;
  v285 = *(_DWORD *)(v363 + 2068);
  *((_QWORD *)&v414 + 1) = __PAIR64__(LODWORD(v283), LODWORD(v282));
  v368 = 0LL;
  if ( *(_DWORD *)(v363 + 2064) != v285 )
  {
LABEL_642:
    *(_OWORD *)(*(_QWORD *)(v284 + 2080) + 16LL * *(unsigned int *)(v284 + 2064)) = v414;
    v292 = *(_DWORD *)(v284 + 2088);
    v293 = ++*(_DWORD *)(v284 + 2064);
    if ( v292 > v293 )
      v293 = v292;
    *(_DWORD *)(v284 + 2088) = v293;
    goto LABEL_645;
  }
  v346 = 0;
  LODWORD(v363) = 0;
  v286 = ULongLongToUInt(2LL * v285, &v346);
  v6 = v286;
  if ( v286 >= 0 )
  {
    v288 = v346;
    if ( v346 <= 8 )
      v288 = 8;
    v346 = v288;
    v289 = WPF::HrMalloc((WPF *)0x10, v288, (unsigned __int64)&v368, v287);
    v6 = v289;
    if ( v289 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v289, 0x54u);
    }
    else
    {
      v290 = ULongLongToUInt(16LL * *(unsigned int *)(v284 + 2064), (unsigned int *)&v363);
      v6 = v290;
      if ( v290 >= 0 )
      {
        v291 = v368;
        memcpy_0(v368, *(const void **)(v284 + 2080), (unsigned int)v363);
        WPF::ProcessHeapImpl::Free(*(void **)(v284 + 2080));
        *(_QWORD *)(v284 + 2080) = v291;
        *(_DWORD *)(v284 + 2068) = v288;
        goto LABEL_642;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v290, 0x56u);
    }
    v260 = v368;
    if ( v368 )
      HeapFree(WPF::g_processHeap, 0, v368);
    goto LABEL_645;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v286, 0x4Cu);
LABEL_645:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE7u);
  }
  else
  {
    v294 = 10LL * (unsigned int)(*(_DWORD *)(v284 + 24) - 1);
    ++*(_DWORD *)(*(_QWORD *)v284 + 8 * v294 + 4);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1409u);
  }
  else
  {
    v204 = v337;
    *((_BYTE *)v337 + 6769) = 1;
  }
LABEL_657:
  if ( v6 >= 0 )
  {
    v3 = v337;
    goto LABEL_662;
  }
  if ( v263 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v262, 0LL, v260);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x23A0u);
  return (unsigned int)v6;
}
