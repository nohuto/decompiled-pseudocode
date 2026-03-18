/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005B770 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x1800108E4 (-NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180022550 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180034D40 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800350E0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800357A0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180036300 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036B80 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180036CD8 (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18003CC3C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180040F90 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045A3C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x180045A8C (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045B10 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004E5FC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18004E918 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18004E930 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180050F3C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058B10 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180059098 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x1800596D4 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18005B04C (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800818D0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@3PEAV2@4@Z @ 0x1800824F4 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAAXAEBV-$TMilRect_@MUMi.c)
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180083430 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180083440 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180087A00 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180092A80 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180095178 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096EA0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800983A4 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098CC0 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009A570 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x18009C490 (-GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800A06F0 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z @ 0x1800B1D9C (-ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800B1DD4 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800B20A4 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B2150 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800B3CAC (-AddMultipleAndSet@-$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScop.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800B5BDC (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800B5EE0 (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x1800B6ADC (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18011A620 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x18011D8C0 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18013C558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18013DA70 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetHeatMapColor@CVisual@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18013DAB8 (-GetHeatMapColor@CVisual@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?Push@?$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18013DCAC (-Push@-$CWatermarkStack@U_D3DCOLORVALUE@@$01$01$01@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x18013F2BC (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013F3D8 (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?cross@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@0@Z @ 0x18015BEA8 (-cross@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@0@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180176DBC (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x18017709C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x180190AFC (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(struct CVisual **this, const struct CVisualTree *a2, bool *a3)
{
  CCompositionSpotLight *v3; // r11
  int v4; // edi
  struct CVisualTree *v5; // r9
  CDrawingContext *v6; // r12
  struct CVisual *v7; // rsi
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  float v11; // r14d
  void **v12; // rax
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  bool (*v15)(CCompositionSpotLight *__hidden, const struct CVisualTree *, const struct CVisual *); // r10
  __int64 v16; // rax
  CCompositionSpotLight *v17; // rbx
  __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  bool (*v20)(CCompositionSpotLight *__hidden, const struct CVisualTree *, const struct CVisual *); // rax
  char IsValid; // al
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  float *v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // eax
  __int64 (__fastcall *v29)(CMILCOMBase *); // rax
  unsigned int LightsCount; // eax
  float *v31; // r15
  struct CProcessAttribution *v32; // rcx
  __int64 v33; // rax
  struct CProcessAttribution *(__fastcall *v34)(CWindowNode *__hidden); // rax
  __int64 v35; // r14
  struct CProcessAttribution *v36; // r14
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  __int64 v38; // rax
  int v39; // ebx
  void *v40; // r13
  unsigned __int64 v41; // rax
  unsigned int v42; // r12d
  SIZE_T v43; // r8
  unsigned __int64 v44; // rax
  CDrawingContext *v45; // rax
  unsigned int v46; // eax
  unsigned int v47; // ecx
  __int64 v48; // rcx
  float v49; // edx
  unsigned int v50; // eax
  int v51; // ebx
  int v52; // eax
  bool *v53; // r13
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  void *v59; // rcx
  _QWORD *v60; // r9
  int v61; // r8d
  int v62; // eax
  float v63; // xmm3_4
  float v64; // xmm1_4
  float v65; // xmm2_4
  float v66; // xmm0_4
  __int64 v67; // rcx
  __int64 v68; // rax
  char v69; // r9
  struct CVisualTree *v70; // r15
  struct _LIST_ENTRY *v71; // rbx
  struct _LIST_ENTRY *v72; // rax
  __int64 Blink_high; // r8
  __int64 v74; // rcx
  char (__fastcall *v75)(__int64, __int64, int, char); // rax
  char v76; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v79; // r8d
  unsigned int v80; // ecx
  _BYTE *v81; // rdx
  struct _LIST_ENTRY *v82; // rbx
  struct _LIST_ENTRY *v83; // rbx
  int v84; // eax
  int v85; // ecx
  struct _LIST_ENTRY *v86; // rax
  struct _LIST_ENTRY *v87; // rcx
  __int64 v88; // rcx
  float v89; // xmm1_4
  float v90; // edx
  float *v91; // rcx
  float v92; // xmm6_4
  __int64 v93; // rcx
  int v94; // edx
  int *v95; // rcx
  __int64 v96; // rbx
  __int64 (__fastcall *v97)(__int64, __int64); // rax
  char v98; // al
  int v99; // eax
  float v100; // xmm0_4
  float v101; // xmm6_4
  float v102; // xmm6_4
  __int64 (__fastcall *v103)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // r8
  __int64 v104; // r14
  int v105; // r15d
  __int64 v106; // rbx
  int ShapeDataWorker; // eax
  CRegionShape *v108; // rbx
  char v109; // dl
  struct D2D_SIZE_F *v110; // rbx
  __int64 (__fastcall *v111)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  CComponentTransform2D *v113; // rcx
  int v114; // eax
  __int64 (__fastcall *v115)(CRegionShape *, __int128 *, _QWORD); // rax
  int TightBounds; // eax
  CRectanglesShape *(__fastcall *v117)(CRectanglesShape *, char); // rax
  __int64 v118; // rcx
  void *v119; // rcx
  int Current; // eax
  struct CThreadContext *v121; // rcx
  __int64 v122; // rcx
  int v123; // edx
  int *v124; // rcx
  char v125; // al
  __int64 v126; // rcx
  int v127; // edx
  int *v128; // rcx
  __int64 (__fastcall *v129)(__int64, __int64, _QWORD); // rax
  char v130; // al
  char v131; // cl
  char v132; // al
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  __int64 v134; // r10
  char v135; // cl
  CVisual *v136; // r8
  __int64 (__fastcall *v137)(_QWORD, _QWORD, _QWORD, _QWORD); // rdx
  __int64 (__fastcall *v138)(_QWORD, _QWORD, _QWORD, _QWORD); // r9
  bool (__fastcall *v139)(__int64, int); // rax
  char v140; // al
  bool (__fastcall *v141)(CLayerVisual *__hidden); // rax
  bool v142; // al
  __int64 v143; // rax
  int v144; // eax
  struct _LIST_ENTRY *v145; // r13
  struct CVisualTree *v146; // r11
  CVisual *v147; // r15
  int v148; // r14d
  char v149; // di
  struct _LIST_ENTRY *v150; // rbx
  struct _LIST_ENTRY *v151; // rax
  struct _LIST_ENTRY *v152; // rcx
  bool v153; // r12
  struct CTreeData *v154; // r10
  struct CTreeData *TreeData; // rax
  CVisual *v156; // rcx
  struct _LIST_ENTRY *v157; // rax
  struct _LIST_ENTRY *v158; // rcx
  unsigned __int64 v159; // rax
  int updated; // eax
  bool v161; // cl
  struct _LIST_ENTRY *v162; // rax
  CRegionShape *v163; // r15
  int v164; // eax
  char v165; // bl
  int v166; // r13d
  char v167; // dl
  float v168; // xmm3_4
  float v169; // xmm1_4
  float v170; // xmm1_4
  float v171; // xmm1_4
  float v172; // xmm1_4
  float v173; // xmm1_4
  float v174; // xmm1_4
  float v175; // xmm1_4
  float v176; // xmm1_4
  float v177; // xmm1_4
  float v178; // xmm1_4
  float v179; // xmm3_4
  float v180; // xmm1_4
  float v181; // xmm1_4
  float v182; // xmm1_4
  __int64 v183; // r14
  __int64 v184; // rbx
  int v185; // eax
  CRegionShape *v186; // rbx
  char v187; // dl
  struct D2D_SIZE_F *v188; // rbx
  __int64 (__fastcall *v189)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int v190; // eax
  CComponentTransform2D *v191; // rcx
  int v192; // eax
  __int64 (__fastcall *v193)(CRegionShape *, __int128 *, _QWORD); // rax
  int v194; // eax
  CRectanglesShape *(__fastcall *v195)(CRectanglesShape *, char); // rax
  __int64 v196; // rcx
  void *v197; // rcx
  int v198; // eax
  struct CThreadContext *v199; // rcx
  __int64 v200; // rbx
  int v201; // eax
  CRegionShape *v202; // rbx
  char v203; // al
  struct D2D_SIZE_F *v204; // rbx
  __int64 (__fastcall *v205)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int v206; // eax
  CComponentTransform2D *v207; // rcx
  int v208; // eax
  char (__fastcall *v209)(CRegionShape *, unsigned int *); // rax
  unsigned int v210; // eax
  char IsRectangles; // al
  __int64 (__fastcall *v212)(CRegionShape *, __m128 *, __int64); // rax
  int v213; // eax
  __int64 v214; // rcx
  float v215; // xmm0_4
  float v216; // xmm1_4
  CRegionShape *v217; // rbx
  CRectanglesShape *(__fastcall *v218)(CRectanglesShape *, char); // rax
  __int64 v219; // rcx
  void *v220; // rcx
  int v221; // eax
  struct CThreadContext *v222; // rcx
  bool (__fastcall *v223)(__int64, int); // rax
  char v224; // al
  __int64 v225; // rcx
  int v226; // edx
  int *v227; // rcx
  struct CVisualTree *v228; // r14
  char v229; // r10
  struct _LIST_ENTRY *v230; // r11
  struct _LIST_ENTRY *v231; // rax
  struct _LIST_ENTRY *v232; // rcx
  struct _LIST_ENTRY *v233; // rax
  struct _LIST_ENTRY *i; // rcx
  int v235; // eax
  const struct Windows::Foundation::Numerics::float4x4 *v236; // rdx
  __int64 v237; // r9
  struct _LIST_ENTRY *v238; // r10
  struct _LIST_ENTRY *v239; // rax
  struct _LIST_ENTRY *v240; // rcx
  _QWORD *v241; // r15
  int Blink; // ebx
  int v243; // eax
  int v244; // eax
  int v245; // eax
  int v246; // eax
  int v247; // eax
  void *v248; // rax
  __int64 v249; // r8
  __int64 v250; // r9
  int v251; // eax
  int v252; // edx
  __int64 v253; // rcx
  __int64 v254; // rax
  __int64 (__usercall *v255)@<rax>(CVisual *@<rcx>, __int64, __int64); // rax
  struct CEffect *EffectInternal; // rbx
  __int64 (__fastcall *v257)(struct CEffect *, __int64); // rax
  char v258; // al
  int v259; // eax
  __int64 v260; // rax
  __int64 (*v261)(void); // rax
  int v262; // eax
  int v263; // eax
  __int128 *v264; // r11
  struct _LIST_ENTRY *v265; // rax
  struct _LIST_ENTRY *v266; // r10
  struct _LIST_ENTRY *v267; // rcx
  int v268; // r8d
  int v269; // eax
  __int128 v270; // xmm0
  __int128 *v271; // r13
  CDrawingContext *v272; // rdx
  char v273; // r12
  unsigned int v274; // r14d
  unsigned int v275; // ebx
  _QWORD *v276; // r15
  int v277; // eax
  CDrawingContext *v278; // r15
  unsigned int v279; // eax
  int v280; // eax
  void **v281; // r9
  unsigned int v282; // r14d
  int v283; // eax
  int v284; // eax
  void *v285; // rbx
  unsigned int v286; // eax
  unsigned int v287; // ecx
  char v288; // bl
  __int128 v289; // xmm0
  __int128 v290; // xmm1
  __int128 v291; // xmm0
  __int128 v292; // xmm1
  char *v293; // r14
  int v294; // eax
  int v295; // r12d
  unsigned int *v296; // r14
  char v297; // r13
  unsigned int v298; // eax
  int v299; // eax
  void **v300; // r9
  unsigned int v301; // r15d
  int v302; // eax
  int v303; // eax
  void *v304; // rbx
  unsigned int v305; // ecx
  int v306; // ebx
  float v307; // xmm0_4
  int v308; // eax
  float v309; // xmm0_4
  float v310; // xmm11_4
  int v311; // eax
  float v312; // xmm0_4
  float v313; // xmm10_4
  int v314; // eax
  float v315; // xmm0_4
  float v316; // xmm9_4
  float v317; // xmm0_4
  struct CProcessAttribution *v318; // rbx
  int v319; // eax
  __int64 v320; // rcx
  char *v321; // r13
  int v322; // ecx
  __int64 v323; // rax
  float v324; // xmm0_4
  float v325; // xmm2_4
  bool v326; // r12
  int v327; // r15d
  bool v328; // r14
  __int64 v329; // rbx
  char v330; // al
  int v331; // eax
  CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  CWindowBackgroundTreatment *v333; // r14
  char v334; // bl
  bool v335; // r15
  int ImageSourceForEffectInput; // eax
  int WorldTransform; // eax
  struct CVisual *v338; // r15
  int v339; // r14d
  bool v340; // bl
  __int64 v341; // rcx
  int v342; // r8d
  int *v343; // rcx
  char v344; // al
  struct CDrawingContext *v345; // rcx
  char v346; // bl
  int v347; // eax
  bool *v348; // r8
  bool (__fastcall *v349)(CVisual *__hidden); // rax
  bool v350; // al
  __int64 (__fastcall *v351)(CSpriteVisual *, struct CDrawingContext *, bool *); // rax
  int v352; // eax
  unsigned int v354; // [rsp+20h] [rbp-E0h]
  bool v355[8]; // [rsp+40h] [rbp-C0h] BYREF
  CDrawingContext *v356; // [rsp+48h] [rbp-B8h]
  bool v357[8]; // [rsp+50h] [rbp-B0h] BYREF
  CRegionShape *v358; // [rsp+58h] [rbp-A8h] BYREF
  char v359; // [rsp+60h] [rbp-A0h]
  struct CVisualTree *v360; // [rsp+68h] [rbp-98h]
  CRegionShape *v361; // [rsp+70h] [rbp-90h] BYREF
  char v362; // [rsp+78h] [rbp-88h]
  CRegionShape *v363; // [rsp+80h] [rbp-80h] BYREF
  char v364; // [rsp+88h] [rbp-78h]
  float v365; // [rsp+90h] [rbp-70h] BYREF
  struct CProcessAttribution *v366; // [rsp+98h] [rbp-68h]
  unsigned int v367; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v368; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned int v369; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int Size; // [rsp+ACh] [rbp-54h] BYREF
  unsigned int Size_4; // [rsp+B0h] [rbp-50h] BYREF
  bool *v372; // [rsp+B8h] [rbp-48h]
  struct CProcessAttribution *v373; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v374; // [rsp+C8h] [rbp-38h]
  struct CVisual *v375; // [rsp+D0h] [rbp-30h]
  _BYTE v376[12]; // [rsp+D8h] [rbp-28h]
  float v377; // [rsp+E4h] [rbp-1Ch]
  __int128 v378; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v379; // [rsp+F8h] [rbp-8h]
  __int128 v380; // [rsp+108h] [rbp+8h]
  __int128 v381; // [rsp+118h] [rbp+18h]
  _BYTE v382[68]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v383; // [rsp+16Ch] [rbp+6Ch]
  int v384; // [rsp+174h] [rbp+74h]
  unsigned __int8 v385; // [rsp+178h] [rbp+78h]
  float v386; // [rsp+180h] [rbp+80h]
  float v387; // [rsp+184h] [rbp+84h] BYREF
  _DWORD v388[2]; // [rsp+188h] [rbp+88h] BYREF
  void *lpMem; // [rsp+190h] [rbp+90h] BYREF
  void *v390; // [rsp+198h] [rbp+98h] BYREF
  struct CVisual *v391; // [rsp+1A0h] [rbp+A0h]
  void **v392; // [rsp+1A8h] [rbp+A8h]
  struct D2D_SIZE_F v393; // [rsp+1B0h] [rbp+B0h] BYREF
  struct D2D_SIZE_F v394; // [rsp+1B8h] [rbp+B8h] BYREF
  struct D2D_SIZE_F v395; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v396; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD v397[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v398; // [rsp+1E0h] [rbp+E0h] BYREF
  int v399; // [rsp+1E8h] [rbp+E8h]
  __int64 v400; // [rsp+1F0h] [rbp+F0h] BYREF
  int v401; // [rsp+1F8h] [rbp+F8h]
  struct CThreadContext *v402; // [rsp+200h] [rbp+100h] BYREF
  struct CShape *v403; // [rsp+208h] [rbp+108h] BYREF
  struct CThreadContext *v404; // [rsp+210h] [rbp+110h] BYREF
  __int64 v405; // [rsp+218h] [rbp+118h]
  struct CShape *v406; // [rsp+220h] [rbp+120h] BYREF
  struct CThreadContext *v407; // [rsp+228h] [rbp+128h] BYREF
  __int64 v409; // [rsp+238h] [rbp+138h]
  __int128 v410; // [rsp+240h] [rbp+140h] BYREF
  __int64 v411; // [rsp+250h] [rbp+150h]
  struct CShape *v412; // [rsp+258h] [rbp+158h] BYREF
  _DWORD v413[12]; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v414[4]; // [rsp+290h] [rbp+190h] BYREF
  __int128 v415; // [rsp+2B0h] [rbp+1B0h]
  __int64 v416; // [rsp+2C0h] [rbp+1C0h]
  int v417; // [rsp+2C8h] [rbp+1C8h]
  __int64 v418; // [rsp+2CCh] [rbp+1CCh]
  struct CVisual *v419; // [rsp+2E0h] [rbp+1E0h] BYREF
  bool v420; // [rsp+2E8h] [rbp+1E8h]
  char v421[8]; // [rsp+2F0h] [rbp+1F0h] BYREF
  float v422; // [rsp+2F8h] [rbp+1F8h]
  _OWORD v423[4]; // [rsp+300h] [rbp+200h] BYREF
  int v424; // [rsp+340h] [rbp+240h]
  char v425[4]; // [rsp+350h] [rbp+250h] BYREF
  __int64 v426; // [rsp+354h] [rbp+254h]
  _OWORD v427[4]; // [rsp+35Ch] [rbp+25Ch] BYREF
  int v428; // [rsp+39Ch] [rbp+29Ch]
  struct _D3DCOLORVALUE v429; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE v430[64]; // [rsp+3B0h] [rbp+2B0h] BYREF
  int v431; // [rsp+3F0h] [rbp+2F0h]
  _BYTE v432[80]; // [rsp+400h] [rbp+300h] BYREF
  _BYTE v433[80]; // [rsp+450h] [rbp+350h] BYREF
  __int128 v434; // [rsp+4A0h] [rbp+3A0h] BYREF
  __m128 v435; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int128 v436; // [rsp+4C0h] [rbp+3C0h] BYREF
  __int128 v437; // [rsp+4D0h] [rbp+3D0h] BYREF
  __int128 v438; // [rsp+4E0h] [rbp+3E0h] BYREF
  __int128 v439; // [rsp+4F0h] [rbp+3F0h] BYREF
  __m128 v440; // [rsp+500h] [rbp+400h]
  __int64 v441[2]; // [rsp+510h] [rbp+410h] BYREF
  __int128 v442; // [rsp+520h] [rbp+420h] BYREF
  __int64 v443; // [rsp+530h] [rbp+430h]
  __int128 v444; // [rsp+538h] [rbp+438h] BYREF
  _DWORD v445[2]; // [rsp+548h] [rbp+448h] BYREF
  int v446; // [rsp+550h] [rbp+450h]
  int v447; // [rsp+554h] [rbp+454h]
  __int64 v448[2]; // [rsp+558h] [rbp+458h] BYREF
  _DWORD v449[4]; // [rsp+568h] [rbp+468h] BYREF
  _DWORD v450[4]; // [rsp+578h] [rbp+478h] BYREF
  __int64 v451; // [rsp+588h] [rbp+488h]
  struct D2D_MATRIX_3X2_F v452; // [rsp+590h] [rbp+490h] BYREF
  __int128 v453; // [rsp+5A8h] [rbp+4A8h] BYREF
  __int64 v454; // [rsp+5B8h] [rbp+4B8h]
  __int128 v455; // [rsp+5C0h] [rbp+4C0h] BYREF
  __int64 v456; // [rsp+5D0h] [rbp+4D0h]
  char v457; // [rsp+5D8h] [rbp+4D8h] BYREF
  char v458; // [rsp+5E8h] [rbp+4E8h] BYREF
  __int128 v459; // [rsp+5F8h] [rbp+4F8h] BYREF
  __int64 v460; // [rsp+608h] [rbp+508h]
  char v461[16]; // [rsp+610h] [rbp+510h] BYREF
  struct D2D_MATRIX_3X2_F v462; // [rsp+620h] [rbp+520h] BYREF
  struct D2D_MATRIX_3X2_F v463; // [rsp+638h] [rbp+538h] BYREF
  void *retaddr; // [rsp+728h] [rbp+628h]

  v3 = 0LL;
  v383 = 21887LL;
  v4 = 0;
  v5 = a2;
  v372 = a3;
  v6 = (CDrawingContext *)this;
  v360 = a2;
  v356 = (CDrawingContext *)this;
  v7 = 0LL;
  v355[0] = 0;
  v357[1] = 0;
  v375 = 0LL;
  *(_QWORD *)v376 = 1065353216LL;
  *(_DWORD *)&v376[8] = 0;
  v377 = 1.0;
  memset(v382, 0, 64);
  v384 = 0;
  v385 = 0;
  *(_DWORD *)&v382[64] = 1065353216;
  if ( *((_BYTE *)this + 6520) )
  {
    if ( *((_BYTE *)this + 6521) )
      v7 = this[395];
    else
      v7 = (struct CVisual *)*((_QWORD *)this[816] + 3);
  }
  v8 = (*((_BYTE *)v7 + 93) & 0x20) == 0;
  v391 = this[396];
  if ( !v8 || (*((_DWORD *)v7 + 22) & 0x400) == 0 )
  {
    *a3 = 0;
    return (unsigned int)v4;
  }
  v9 = *((_QWORD *)v7 + 33);
  if ( (v9 & 2) != 0 )
    v9 = *(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v9) = v9 & 1;
  if ( (_DWORD)v9
    || ((v10 = *((_QWORD *)v7 + 34), (v10 & 2) == 0)
      ? (LODWORD(v10) = v10 & 1)
      : (v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL)),
        (_DWORD)v10) )
  {
    v11 = v365;
    v12 = (void **)v388;
    v392 = (void **)v388;
    v388[0] = 0;
    v388[1] = 1;
    do
    {
      v13 = *(_DWORD *)v12;
      v14 = (unsigned int)v3;
      if ( (unsigned int)CVisual::GetLightsCount(v7, *(unsigned int *)v12, a3, v5) )
      {
        while ( 1 )
        {
          *(float *)&v366 = v11;
          if ( v13 )
            v16 = *((_QWORD *)v7 + 34);
          else
            v16 = *((_QWORD *)v7 + 33);
          if ( (v16 & 2) != 0 )
            v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v16) = v16 & 1;
          if ( v14 >= (unsigned int)v16 )
            goto LABEL_24;
          if ( !v13 )
            break;
          v17 = (CCompositionSpotLight *)CPtrArrayBase::operator[]((char *)v7 + 272, v14);
LABEL_34:
          v20 = *(bool (**)(CCompositionSpotLight *__hidden, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)v17 + 184LL);
          if ( v20 == v15 )
            IsValid = CCompositionSpotLight::IsValid(v17, v5, v7);
          else
            IsValid = ((__int64 (__fastcall *)(CCompositionSpotLight *, struct CVisualTree *, struct CVisual *))v20)(
                        v17,
                        v5,
                        v7);
          if ( !IsValid )
            goto LABEL_57;
          LODWORD(v396) = 9;
          *((_QWORD *)&v396 + 1) = v7;
          v24 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)v6 + 448, &v396);
          v4 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x2664u);
LABEL_55:
            if ( v4 < 0 )
            {
              v354 = 8179;
              goto LABEL_64;
            }
            goto LABEL_56;
          }
          v25 = (float *)((char *)v356 + 672);
          *(_QWORD *)&v410 = v17;
          DWORD2(v410) = v13;
          v26 = *((_DWORD *)v356 + 174);
          v27 = v26 + 1;
          LODWORD(v11) = v26 + 1;
          if ( v26 + 1 < v26 )
            v11 = *(float *)&v366;
          v4 = v27 < v26 ? 0x80070216 : 0;
          if ( v27 < v26 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
          }
          else if ( LODWORD(v11) > *((_DWORD *)v356 + 173) )
          {
            v28 = DynArrayImpl<0>::AddMultipleAndSet(v25, 16LL, 1LL, &v410);
            v4 = v28;
            if ( v28 >= 0 )
              goto LABEL_48;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xC0u);
          }
          else
          {
            *(_OWORD *)(*(_QWORD *)v25 + 16LL * v26) = v410;
            v25[6] = v11;
          }
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x20u);
            goto LABEL_52;
          }
LABEL_48:
          v29 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)v17 + 8LL);
          if ( v29 == CMILCOMBase::InternalAddRef )
            CMILCOMBase::InternalAddRef(v17);
          else
            v29(v17);
LABEL_52:
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2667u);
            CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
              (char *)v6 + 448,
              0LL);
            goto LABEL_55;
          }
LABEL_56:
          v6 = v356;
LABEL_57:
          ++v14;
          LightsCount = CVisual::GetLightsCount(v7, v13, v22, v23);
          v5 = v360;
          v15 = CCompositionSpotLight::IsValid;
          v3 = 0LL;
          if ( v14 >= LightsCount )
            goto LABEL_58;
        }
        v18 = *((_QWORD *)v7 + 33);
        if ( (v18 & 2) != 0 )
          v19 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v19 = *((_QWORD *)v7 + 33) & 1LL;
        if ( v14 < v19 )
        {
          if ( v19 == 1 )
          {
            v17 = (CCompositionSpotLight *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
          }
          else
          {
            _mm_lfence();
            v17 = *(CCompositionSpotLight **)((*((_QWORD *)v7 + 33) & 0xFFFFFFFFFFFFFFFCuLL) + 8LL * v14 + 16);
          }
          goto LABEL_34;
        }
LABEL_24:
        v17 = v3;
        goto LABEL_34;
      }
LABEL_58:
      v12 = (void **)((char *)v392 + 4);
      v392 = v12;
    }
    while ( v12 != &lpMem );
    v355[0] = v357[1];
  }
  v31 = (float *)((char *)v6 + 912);
  v32 = *(struct CProcessAttribution **)(*((_QWORD *)v6 + 114) + 8LL * (unsigned int)(*((_DWORD *)v6 + 234) - 1));
  v33 = *(_QWORD *)v7;
  v366 = v32;
  v34 = *(struct CProcessAttribution *(__fastcall **)(CWindowNode *__hidden))(v33 + 120);
  if ( v34 == CResource::GetProcessAttributionNoRef )
  {
    v35 = *((_QWORD *)v7 + 6);
    if ( v35 )
      v36 = *(struct CProcessAttribution **)(v35 + 40);
    else
      v36 = v3;
  }
  else
  {
    if ( v34 == CWindowNode::GetProcessAttributionNoRef )
      ProcessAttributionNoRef = CWindowNode::GetProcessAttributionNoRef(v7);
    else
      ProcessAttributionNoRef = (struct CProcessAttribution *)((__int64 (__fastcall *)(struct CVisual *, struct CProcessAttribution *(__fastcall *)(CResource *__hidden), bool *, struct CVisualTree *))v34)(
                                                                v7,
                                                                CResource::GetProcessAttributionNoRef,
                                                                a3,
                                                                v5);
    v32 = v366;
    v36 = ProcessAttributionNoRef;
  }
  if ( !v36 || v36 == v32 )
    goto LABEL_106;
  v38 = *((unsigned int *)v6 + 113);
  v39 = 0;
  v366 = v36;
  v40 = 0LL;
  LODWORD(v396) = 10;
  *((_QWORD *)&v396 + 1) = v7;
  if ( *((_DWORD *)v6 + 112) != (_DWORD)v38 )
    goto LABEL_88;
  v41 = 2 * v38;
  if ( v41 > 0xFFFFFFFF )
  {
    v39 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
  }
  else
  {
    v42 = v41;
    if ( (unsigned int)v41 <= 0x40 )
      v42 = 64;
    v39 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v42 <= 0x10 )
    {
      v39 = -2147024809;
    }
    else
    {
      v43 = 16LL * v42;
      if ( !v43 )
        v43 = 1LL;
      v40 = HeapAlloc(WPF::g_processHeap, 0, v43);
      if ( !v40 )
        v39 = -2147024882;
    }
    if ( v39 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x54u);
    }
    else
    {
      v39 = 0;
      v44 = 16LL * *((unsigned int *)v356 + 112);
      if ( v44 <= 0xFFFFFFFF )
      {
        memcpy_0(v40, *((const void **)v356 + 58), (unsigned int)v44);
        WPF::ProcessHeapImpl::Free(*((void **)v356 + 58));
        v45 = v356;
        *((_DWORD *)v356 + 113) = v42;
        v6 = v45;
        *((_QWORD *)v45 + 58) = v40;
LABEL_88:
        *(_OWORD *)(*((_QWORD *)v6 + 58) + 16LL * *((unsigned int *)v6 + 112)) = v396;
        v46 = *((_DWORD *)v6 + 118);
        v47 = ++*((_DWORD *)v6 + 112);
        if ( v46 > v47 )
          v47 = v46;
        *((_DWORD *)v6 + 118) = v47;
        goto LABEL_95;
      }
      v39 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v40 )
      HeapFree(WPF::g_processHeap, 0, v40);
  }
  v6 = v356;
LABEL_95:
  if ( v39 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v39, retaddr);
  v48 = *((unsigned int *)v31 + 6);
  v49 = v365;
  v373 = v36;
  v50 = v48 + 1;
  if ( (int)v48 + 1 >= (unsigned int)v48 )
    LODWORD(v49) = v48 + 1;
  v51 = v50 < (unsigned int)v48 ? 0x80070216 : 0;
  if ( v50 < (unsigned int)v48 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0xB5u);
  }
  else if ( LODWORD(v49) > *((_DWORD *)v31 + 5) )
  {
    v52 = DynArrayImpl<0>::AddMultipleAndSet(v31, 8LL, 1LL, &v373);
    v51 = v52;
    if ( v52 >= 0 )
      goto LABEL_106;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v31 + 8 * v48) = v373;
    v31[6] = v49;
  }
  if ( v51 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v51, retaddr);
LABEL_106:
  v53 = v372;
  *v372 = 1;
  if ( *((char *)v7 + 92) < 0 )
  {
    CVisual::GetHeatMapColor(v7, &v429);
    v54 = CWatermarkStack<_D3DCOLORVALUE,2,2,2>::Push(*((_QWORD *)v6 + 4) + 1168LL, &v429);
    v4 = v54;
    if ( v54 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x2015u);
      return (unsigned int)v4;
    }
  }
  v55 = *((_DWORD *)v7 + 24);
  if ( (_BYTE)v55 )
  {
    v413[0] = (unsigned __int8)v55;
    v413[4] = (v55 >> 8) & 3;
    v413[1] = (int)(v55 << 18) >> 28;
    v413[2] = *((_DWORD *)v7 + 47);
    v413[5] = *((_DWORD *)v7 + 48);
    v413[6] = *((_DWORD *)v7 + 49);
    v56 = *((_DWORD *)v7 + 50);
    v413[3] = (v55 >> 14) & 0x1F;
    v413[7] = v56;
    v57 = CDrawingContext::PushRenderOptionsInternal(v6, v7, (const struct MilRenderOptions *)v413, 1);
    v4 = v57;
    if ( v57 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x2027u);
      return (unsigned int)v4;
    }
  }
  v58 = *((_DWORD *)v6 + 120);
  if ( v58 )
    v59 = (void *)(*((_QWORD *)v6 + 62) + 68LL * (unsigned int)(v58 - 1));
  else
    v59 = &CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>(v59, (char *)v7 + 140, &v442, v5);
  v60 = (_QWORD *)((char *)v6 + 1008);
  v61 = *((_DWORD *)v6 + 258);
  v373 = (CDrawingContext *)((char *)v6 + 1008);
  if ( v61 && *(_DWORD *)(*v60 + 80LL * (unsigned int)(v61 - 1) + 4) && (v62 = *((_DWORD *)v6 + 768)) != 0 )
  {
    v440 = *(__m128 *)(*((_QWORD *)v6 + 386) + 16LL * (unsigned int)(v62 - 1));
    v63 = v440.m128_f32[0];
    v64 = v440.m128_f32[2];
    LODWORD(v65) = _mm_shuffle_ps(v440, v440, 255).m128_u32[0];
    v66 = v440.m128_f32[1];
  }
  else
  {
    v65 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v64 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v66 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v63 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v61 && *(_DWORD *)(*v60 + 80LL * (unsigned int)(v61 - 1) + 8) )
  {
    v67 = 120LL * (unsigned int)(*((_DWORD *)v6 + 466) - 1);
    v68 = *((_QWORD *)v6 + 230);
    if ( *(float *)(v67 + v68 + 96) > v63 )
      v63 = *(float *)(v67 + v68 + 96);
    if ( *(float *)(v67 + v68 + 100) > v66 )
      v66 = *(float *)(v67 + v68 + 100);
    if ( v64 > *(float *)(v67 + v68 + 104) )
      v64 = *(float *)(v67 + v68 + 104);
    if ( v65 > *(float *)(v67 + v68 + 108) )
      v65 = *(float *)(v67 + v68 + 108);
    if ( v64 <= v63 || v65 <= v66 )
    {
      v65 = 0.0;
      v64 = 0.0;
      v66 = 0.0;
      v63 = 0.0;
    }
  }
  *(float *)&v450[1] = v66;
  v451 = v443;
  *(float *)v450 = v63;
  *(float *)&v450[2] = v64;
  *(float *)&v450[3] = v65;
  TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v442,
    v450);
  v453 = v442;
  *(_OWORD *)v441 = v442;
  v454 = v443;
  if ( *((float *)&v442 + 2) <= *(float *)&v442 || *((float *)&v442 + 3) <= *((float *)&v442 + 1) )
  {
LABEL_171:
    *v53 = 0;
    return (unsigned int)v4;
  }
  v70 = v360;
  if ( !*((_BYTE *)v6 + 6827) )
    goto LABEL_176;
  if ( *((_QWORD *)v6 + 843) )
  {
    if ( *((_BYTE *)v360 + 32) )
    {
      v71 = (struct _LIST_ENTRY *)((char *)v7 + 280);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v7);
      if ( !TreeDataListHead )
        goto LABEL_161;
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink == TreeDataListHead )
        goto LABEL_161;
      while ( 1 )
      {
        v71 = Flink - 14;
        if ( (struct CVisualTree *)Flink[2].Flink == v360 )
          break;
        Flink = Flink->Flink;
        if ( Flink == TreeDataListHead )
          goto LABEL_161;
      }
    }
    if ( v71 )
    {
      if ( !v71[2].Flink )
        v71[2].Flink = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v71[1].Blink->Flink[20].Flink)(v71[1].Blink);
      v72 = v71[2].Flink;
      if ( v72 )
      {
        Blink_high = HIDWORD(v72->Blink);
        v74 = *(_QWORD *)(*((_QWORD *)v6 + 843) + 392LL);
        v438 = *(_OWORD *)v441;
        v75 = *(char (__fastcall **)(__int64, __int64, int, char))(*(_QWORD *)v74 + 56LL);
        v76 = v75 == CArrayBasedCoverageSet::IsFullyCovered
            ? CArrayBasedCoverageSet::IsCovered(v74, (__int64)&v438, Blink_high, v69)
            : ((__int64 (__fastcall *)(__int64, __int128 *, __int64))v75)(v74, &v438, Blink_high);
        if ( v76 )
        {
          if ( !qword_18026EEA8 )
            goto LABEL_171;
          v79 = *((_DWORD *)qword_18026EEA8 + 18);
          v80 = 0;
          if ( !v79 )
            goto LABEL_171;
          while ( 1 )
          {
            v81 = *(_BYTE **)(*((_QWORD *)qword_18026EEA8 + 6) + 8LL * v80);
            if ( v81[309] || v81[308] || v81[208] )
              break;
            if ( ++v80 >= v79 )
            {
              *v53 = 0;
              return (unsigned int)v4;
            }
          }
          if ( !*((_QWORD *)v6 + 846) )
            *((_QWORD *)v6 + 846) = v7;
        }
      }
    }
  }
LABEL_161:
  if ( *((_BYTE *)v6 + 6827) && *((_QWORD *)v6 + 843) )
  {
    if ( *((_BYTE *)v70 + 32) )
    {
      v82 = (struct _LIST_ENTRY *)((char *)v7 + 280);
    }
    else
    {
      v86 = CVisual::GetTreeDataListHead(v7);
      if ( !v86 )
        goto LABEL_176;
      v87 = v86->Flink;
      if ( v86->Flink == v86 )
        goto LABEL_176;
      while ( 1 )
      {
        v82 = v87 - 14;
        if ( (struct CVisualTree *)v87[2].Flink == v70 )
          break;
        v87 = v87->Flink;
        if ( v87 == v86 )
          goto LABEL_176;
      }
    }
    if ( v82 )
    {
      if ( !v82[2].Flink )
        v82[2].Flink = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v82[1].Blink->Flink[20].Flink)(v82[1].Blink);
      v83 = v82[2].Flink;
      if ( v83 )
      {
        v84 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v83->Flink[1].Blink)(v83);
        v85 = *((_DWORD *)v6 + 1652);
        *((_DWORD *)v6 + 1690) = v84;
        if ( v84 >= v85 )
        {
          if ( SHIDWORD(v83->Blink) < v85 )
            return (unsigned int)v4;
          goto LABEL_171;
        }
      }
    }
  }
LABEL_176:
  v375 = v7;
  v88 = *((_QWORD *)v7 + 26);
  if ( (*(_DWORD *)(v88 + 4) & 0x100000) != 0 )
  {
    v90 = *(float *)(v88 + 12);
    v91 = (float *)(v88 + 12);
    if ( (LODWORD(v90) & 0x7F000000) != 0xC000000 )
    {
      do
      {
        v91 = (float *)((char *)v91 + (LODWORD(v90) & 0xFFFFFF) + 4);
        v90 = *v91;
      }
      while ( (*(_DWORD *)v91 & 0x7F000000) != 0xC000000 );
    }
    v386 = v91[1];
    v89 = v386;
  }
  else
  {
    v89 = FLOAT_1_0;
  }
  v92 = FLOAT_1_0;
  v377 = fminf(1.0, fmaxf(v89, 0.0));
  v93 = *((_QWORD *)v7 + 26);
  if ( (*(_DWORD *)(v93 + 4) & 0x8000000) != 0 )
  {
    v94 = *(_DWORD *)(v93 + 12);
    v95 = (int *)(v93 + 12);
    if ( (v94 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v95 = (int *)((char *)v95 + (v94 & 0xFFFFFF) + 4);
        v94 = *v95;
      }
      while ( (*v95 & 0x7F000000) != 0x5000000 );
    }
    v405 = *(_QWORD *)(v95 + 1);
    v96 = v405;
    v97 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v405 + 48LL);
    if ( v97 == CEffectGroup::IsOfType )
      v98 = CEffectGroup::IsOfType(v405, 47LL);
    else
      v98 = v97(v405, 47LL);
    if ( v98 )
      v92 = *(double *)(v96 + 72);
  }
  v99 = *((_DWORD *)v6 + 776);
  v100 = fminf(1.0, fmaxf(v92, 0.0));
  if ( v99 )
    v101 = *(float *)(*((_QWORD *)v6 + 390) + 4LL * (unsigned int)(v99 - 1));
  else
    v101 = FLOAT_1_0;
  v102 = v101 * v100;
  v103 = CRectangleGeometry::GetShapeDataCore;
  *(float *)v376 = v102;
  v104 = *((_QWORD *)v7 + 29);
  if ( v104 )
  {
    v105 = 0;
    v363 = 0LL;
    v364 = 0;
    if ( !*(_BYTE *)(v104 + 96) )
    {
      v106 = *(_QWORD *)(v104 + 16);
      if ( GetCurrentThreadId() == *(_DWORD *)(v106 + 560) )
      {
        if ( (*(_BYTE *)(v104 + 32) & 1) == 0 )
        {
LABEL_198:
          v108 = *(CRegionShape **)(v104 + 80);
          CShapePtr::Release((CShapePtr *)&v363);
          v363 = v108;
          v364 = 0;
          goto LABEL_223;
        }
        ShapeDataWorker = CGeometry::GetShapeDataWorker(
                            (CGeometry *)v104,
                            (const struct D2D_SIZE_F *)((char *)v7 + 132),
                            (struct CShapePtr *)(v104 + 80));
        v105 = ShapeDataWorker;
        if ( ShapeDataWorker >= 0 )
        {
          *(_DWORD *)(v104 + 32) &= ~1u;
          goto LABEL_198;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataWorker, 0x4Eu);
        goto LABEL_222;
      }
      v103 = CRectangleGeometry::GetShapeDataCore;
    }
    v109 = *(_BYTE *)(v104 + 96);
    if ( !v109 && (*(_BYTE *)(v104 + 32) & 1) == 0 )
    {
      v108 = *(CRegionShape **)(v104 + 80);
      if ( v108 )
      {
        v363 = *(CRegionShape **)(v104 + 80);
        v364 = 0;
        goto LABEL_223;
      }
    }
    v110 = 0LL;
    if ( v109 )
      v110 = (struct D2D_SIZE_F *)((char *)v7 + 132);
    v111 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)v104 + 176LL);
    if ( v111 == CRectangleGeometry::GetShapeDataCore )
      ShapeDataCore = CRectangleGeometry::GetShapeDataCore((CRectangleGeometry *)v104, v110, (struct CShapePtr *)&v363);
    else
      ShapeDataCore = v111((CRectangleGeometry *)v104, v110, (struct CShapePtr *)&v363);
    v105 = ShapeDataCore;
    if ( ShapeDataCore < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataCore, 0x80u);
    }
    else
    {
      v113 = *(CComponentTransform2D **)(v104 + 72);
      if ( v113 )
      {
        v393 = 0LL;
        if ( v110 )
          v393 = *v110;
        v108 = v363;
        if ( !v363 )
          goto LABEL_220;
        CComponentTransform2D::GetRealization(v113, &v393, &v452);
        v414[2] = *(_QWORD *)&v452.m[1][0];
        v414[0] = *(_QWORD *)&v452.m11;
        v415 = _xmm;
        v416 = *(_QWORD *)&v452.m[2][0];
        v418 = 1065353216LL;
        v414[1] = 0LL;
        v414[3] = 0LL;
        v417 = 0;
        v114 = CShape::CopyShape(v363, (const struct CMILMatrix *)v414, &v406);
        v105 = v114;
        if ( v114 >= 0 )
        {
          CShapePtr::Release((CShapePtr *)&v363);
          v108 = v406;
          v363 = v406;
          v364 = 1;
LABEL_220:
          if ( v105 >= 0 )
            goto LABEL_224;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v105, 0x5Du);
LABEL_222:
          v108 = v363;
LABEL_223:
          if ( v105 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v105, 0x26u);
            goto LABEL_236;
          }
LABEL_224:
          v105 = -2003292412;
          if ( v108 )
          {
            v115 = *(__int64 (__fastcall **)(CRegionShape *, __int128 *, _QWORD))(*(_QWORD *)v108 + 32LL);
            if ( (char *)v115 == (char *)CRectanglesShape::GetTightBounds )
            {
              TightBounds = CRectanglesShape::GetTightBounds((__int64)v108, (__int64)&v436, 0LL);
            }
            else if ( (char *)v115 == (char *)CRegionShape::GetTightBounds )
            {
              TightBounds = CRegionShape::GetTightBounds(v108, (__m128 *)&v436, 0LL);
            }
            else
            {
              TightBounds = v115(v108, &v436, 0LL);
            }
            v105 = TightBounds;
            if ( TightBounds < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x102u);
            v108 = v363;
          }
          if ( v105 >= 0 )
            goto LABEL_237;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v105, 0x27u);
LABEL_236:
          v108 = v363;
LABEL_237:
          if ( v105 == -2003304438 )
          {
            v105 = 0;
            v436 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          }
          if ( v364 && v108 )
          {
            v117 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v108;
            if ( v117 == CRectanglesShape::`scalar deleting destructor' )
            {
              *(_QWORD *)v108 = &CRectanglesShape::`vftable';
              *((_DWORD *)v108 + 8) = 0;
              DynArrayImpl<0>::ShrinkToSize((char *)v108 + 8, 16LL);
              v118 = *((_QWORD *)v108 + 7);
              if ( v118 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
                *((_QWORD *)v108 + 7) = 0LL;
              }
              v119 = (void *)*((_QWORD *)v108 + 1);
              if ( v119 != *((void **)v108 + 2) )
              {
                WPF::ProcessHeapImpl::Free(v119);
                *((_QWORD *)v108 + 1) = 0LL;
              }
              Current = CThreadContext::GetCurrent(&v407);
              if ( Current < 0 )
                ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
              v121 = v407;
              if ( *((_DWORD *)v407 + 3) >= *((_DWORD *)v407 + 2) )
              {
                WPF::ProcessHeapImpl::Free(v108);
              }
              else
              {
                *(_QWORD *)v108 = *((_QWORD *)v407 + 2);
                ++*((_DWORD *)v121 + 3);
                *((_QWORD *)v121 + 2) = v108;
              }
            }
            else
            {
              v117(v108, 1);
            }
          }
          if ( v105 >= 0
            && (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v436
             || *((float *)&v436 + 2) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
            && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *((float *)&v436 + 1)
             || *((float *)&v436 + 3) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
          {
            *(_OWORD *)&v382[4] = _xmm;
            LOBYTE(v384) = 1;
            *(_OWORD *)&v382[20] = _xmm;
            LOWORD(v383) = 32085;
            *(_OWORD *)&v382[36] = _xmm;
            *(_OWORD *)&v382[52] = _xmm;
          }
          v6 = v356;
          goto LABEL_258;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v114, 0x94u);
      }
    }
    v108 = v363;
    goto LABEL_220;
  }
LABEL_258:
  v122 = *((_QWORD *)v7 + 26);
  if ( (*(_DWORD *)(v122 + 4) & 0x20000000) != 0 )
  {
    v123 = *(_DWORD *)(v122 + 12);
    v124 = (int *)(v122 + 12);
    if ( (v123 & 0x7F000000) != 0x3000000 )
    {
      do
      {
        v124 = (int *)((char *)v124 + (v123 & 0xFFFFFF) + 4);
        v123 = *v124;
      }
      while ( (*v124 & 0x7F000000) != 0x3000000 );
    }
    v125 = BYTE1(v384);
    if ( *(_QWORD *)(v124 + 1) )
      v125 = 1;
    BYTE1(v384) = v125;
  }
  v126 = *((_QWORD *)v7 + 26);
  if ( (*(_DWORD *)(v126 + 4) & 0x8000000) != 0 )
  {
    v127 = *(_DWORD *)(v126 + 12);
    v128 = (int *)(v126 + 12);
    if ( (v127 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v128 = (int *)((char *)v128 + (v127 & 0xFFFFFF) + 4);
        v127 = *v128;
      }
      while ( (*v128 & 0x7F000000) != 0x5000000 );
    }
    v411 = *(_QWORD *)(v128 + 1);
    v129 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v411 + 48LL);
    if ( (char *)v129 == (char *)CEffectGroup::IsOfType )
      v130 = CEffectGroup::IsOfType(v411, 49LL);
    else
      v130 = v129(v411, 49LL, v103);
    v131 = v130;
    v132 = BYTE2(v384);
    if ( v131 )
      v132 = 1;
    BYTE2(v384) = v132;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v7 + 26) + 4LL) & 0x4000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, char *, __int64 (__fastcall *)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *)))(**((_QWORD **)v6 + 45) + 24LL))(
      *((_QWORD *)v6 + 45),
      v461,
      v103);
    ColorSpace = CVisual::GetColorSpace(v7);
    v135 = v385;
    if ( ColorSpace != *(_DWORD *)(v134 + 8) )
      v135 = 1;
    v385 = v135;
  }
  v136 = (CVisual *)&CVisual::IsOfType;
  v137 = CLayerVisual::IsOfType;
  v138 = CWindowNode::IsOfType;
  v139 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
  if ( (char *)v139 != (char *)&CVisual::IsOfType && v139 != CSpriteVisual::IsOfType )
  {
    if ( (char *)v139 == (char *)CLayerVisual::IsOfType )
      v140 = CLayerVisual::IsOfType(v7, 79LL, &CVisual::IsOfType, CWindowNode::IsOfType);
    else
      v140 = (char *)v139 == (char *)CWindowNode::IsOfType
           ? CWindowNode::IsOfType(v7, 79LL, &CVisual::IsOfType, CWindowNode::IsOfType)
           : ((__int64 (__fastcall *)(struct CVisual *, __int64, void *, _QWORD))v139)(
               v7,
               79LL,
               &CVisual::IsOfType,
               CWindowNode::IsOfType);
    if ( v140 )
    {
      v141 = *(bool (__fastcall **)(CLayerVisual *__hidden))(*(_QWORD *)v7 + 176LL);
      v142 = v141 == CLayerVisual::HasNonDefaultTreeEffectInternal
           ? CLayerVisual::HasNonDefaultTreeEffectInternal(v7)
           : v141(v7);
      if ( v142 || *((_QWORD *)v7 + 64) )
        HIBYTE(v384) = 1;
    }
  }
  if ( v102 < 1.0 && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v102 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v143 = *((_QWORD *)v7 + 9);
    if ( (v143 & 2) != 0 )
      v143 = *(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v143) = v143 & 1;
    if ( !(_DWORD)v143 && (*((_BYTE *)v7 + 92) & 1) != 0 && *((_DWORD *)v6 + 65) != 4
      || *((_DWORD *)v6 + 66) == 1
      || *((_DWORD *)v7 + 25) == 1 )
    {
      *(_DWORD *)&v376[4] = 1;
    }
    else
    {
      *(_DWORD *)&v376[4] = 2;
      if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
      {
        v8 = (unsigned int)CPtrArrayBase::GetCount((struct CVisual *)((char *)v7 + 72)) == 0;
        v144 = HIDWORD(v383);
        if ( !v8 )
        {
          v144 = HIDWORD(v383) | 0x20;
          HIDWORD(v383) |= 0x20u;
        }
        if ( (*((_BYTE *)v7 + 92) & 1) == 0 )
          HIDWORD(v383) = v144 | 0x40;
      }
    }
  }
  if ( (*(_DWORD *)(*((_QWORD *)v7 + 26) + 4LL) & 0x2000) != 0 )
    *(_DWORD *)&v376[8] = CVisual::GetResampleMode(v7, v137, v136, v138);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v376) & _xmm) < 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v377) & _xmm) < 0.0000011920929 )
  {
    if ( !qword_18026EEA8 || !CDisplaySet::NeedsDesktopMoves(qword_18026EEA8) )
      goto LABEL_171;
    CVisual::ClearAllMoveTransformsInSubtree(v7);
    if ( !*((_QWORD *)v6 + 846) )
      *((_QWORD *)v6 + 846) = v7;
  }
  v145 = (struct _LIST_ENTRY *)&v382[4];
  v146 = v360;
  v147 = (CVisual *)*((_QWORD *)v6 + 395);
  if ( !(_BYTE)v384 )
    v145 = 0LL;
  v148 = -2003292412;
  v149 = *((_BYTE *)v360 + 32);
  if ( v149 )
  {
    v150 = (struct _LIST_ENTRY *)((char *)v147 + 280);
  }
  else
  {
    v151 = CVisual::GetTreeDataListHead(*((CVisual **)v6 + 395));
    if ( !v151 )
      goto LABEL_352;
    v152 = v151->Flink;
    if ( v151->Flink == v151 )
      goto LABEL_352;
    while ( 1 )
    {
      v150 = v152 - 14;
      if ( (struct CVisualTree *)v152[2].Flink == v146 )
        break;
      v152 = v152->Flink;
      if ( v152 == v151 )
        goto LABEL_352;
    }
  }
  if ( !v150 )
  {
LABEL_352:
    v161 = v355[0];
    v163 = 0LL;
    goto LABEL_353;
  }
  v153 = 0;
  v148 = 0;
  v154 = 0LL;
  if ( (*(_DWORD *)(*((_QWORD *)v147 + 26) + 4LL) & 0x10000000) != 0 )
  {
    v136 = *(CVisual **)(*(_QWORD *)CVisual::GetTransformParentDataInternal(v147) + 8LL);
    if ( ((__int64)v150[1].Flink & 4) == 0 || v150[13].Blink != *(struct _LIST_ENTRY **)(*((_QWORD *)v147 + 2) + 360LL) )
    {
      v153 = 1;
      TreeData = CVisual::FindTreeData(v136, v146);
      v146 = v360;
      v154 = TreeData;
      if ( TreeData )
        goto LABEL_339;
    }
  }
  if ( v147 != *((CVisual **)v146 + 3) )
  {
    v156 = (CVisual *)*((_QWORD *)v147 + 10);
    if ( v149 )
    {
      v154 = (CVisual *)((char *)v156 + 280);
    }
    else
    {
      v157 = CVisual::GetTreeDataListHead(v156);
      if ( v157 )
      {
        v158 = v157->Flink;
        if ( v157->Flink != v157 )
        {
          while ( (struct CVisualTree *)v158[2].Flink != v146 )
          {
            v158 = v158->Flink;
            if ( v158 == v157 )
              goto LABEL_338;
          }
          v154 = (struct CTreeData *)&v158[-14];
        }
      }
    }
  }
LABEL_338:
  if ( v154 )
LABEL_339:
    v159 = *((_QWORD *)v154 + 15);
  else
    v159 = 1LL;
  if ( v150[7].Blink < (struct _LIST_ENTRY *)v159 )
  {
    updated = CVisual::UpdateWorldTransform(v147, v146, (struct CTreeData *)v150, v153, v154);
    v148 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x63Bu);
  }
  if ( v148 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v148, 0x59Bu);
    v146 = v360;
    v6 = v356;
    goto LABEL_352;
  }
  if ( !v150[7].Blink )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x70u);
    v148 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x5A2u);
    v4 = -2003292412;
LABEL_350:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v148, 0x209Au);
    return (unsigned int)v4;
  }
  v378 = *(_OWORD *)&v150[2].Blink;
  v379 = *(_OWORD *)&v150[3].Blink;
  v380 = *(_OWORD *)&v150[4].Blink;
  v381 = *(_OWORD *)&v150[5].Blink;
  *(_DWORD *)v382 = v150[6].Blink;
  v161 = ((__int64)v150[1].Flink & 2) != 0;
  if ( v145 )
  {
    v162 = v150[7].Flink;
    *v145 = *v162;
    v145[1] = v162[1];
    v145[2] = v162[2];
    v145[3] = v162[3];
    LODWORD(v145[4].Flink) = v162[4].Flink;
  }
  v6 = v356;
  v163 = 0LL;
  v146 = v360;
  v148 = 0;
LABEL_353:
  v4 = v148;
  if ( v148 < 0 )
    goto LABEL_350;
  if ( v161 || *((struct CVisual **)v146 + 3) == v7 )
  {
    if ( !*((_BYTE *)v6 + 6604) )
      CMILMatrix::Multiply((CMILMatrix *)&v378, (CDrawingContext *)((char *)v6 + 6536));
    v164 = CDrawingContext::PushTransformInternal(v6, v7, (const struct CMILMatrix *)&v378, 0, 1);
    v4 = v164;
    if ( v164 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v164, 0x20ACu);
      return (unsigned int)v4;
    }
  }
  else if ( !*((_BYTE *)v6 + 6604) )
  {
    CMatrixStack::Top((CDrawingContext *)((char *)v6 + 480), (struct CMILMatrix *)&v378);
  }
  if ( (_BYTE)v384 && !*((_BYTE *)v6 + 6604) )
    CMILMatrix::Multiply((CMILMatrix *)&v382[4], (CDrawingContext *)((char *)v6 + 6536));
  v165 = 0;
  v166 = 0;
  v8 = *((_QWORD *)v7 + 29) == 0LL;
  v355[0] = 0;
  if ( v8 )
    goto LABEL_520;
  if ( SBYTE1(v383) >> 6 )
  {
    v167 = SBYTE1(v383) >> 6 == 1;
  }
  else
  {
    v167 = 0;
    v168 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[12] - 0.0)) & _xmm);
    if ( v168 < 0.000081380211 )
    {
      v169 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[28] - 0.0)) & _xmm);
      if ( v169 < 0.000081380211 )
      {
        v170 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[60] - 0.0)) & _xmm);
        if ( v170 < 0.000081380211 )
          goto LABEL_378;
      }
      if ( v168 < 0.000081380211 )
      {
        v171 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[28] - 0.0)) & _xmm);
        if ( v171 < 0.000081380211 )
        {
          v172 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[36] - 0.0)) & _xmm);
          if ( v172 < 0.000081380211 )
          {
            v173 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[40] - 0.0)) & _xmm);
            if ( v173 < 0.000081380211 )
            {
              v174 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[44] - 0.0)) & _xmm);
              if ( v174 < 0.000081380211
                || (v175 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[44] - 1.0)) & _xmm),
                    v175 < 0.000081380211) )
              {
                v176 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[48] - 0.0)) & _xmm);
                if ( v176 < 0.000081380211 )
                {
                  v177 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[60] - 0.0)) & _xmm);
                  if ( v177 < 0.000081380211 )
                  {
LABEL_378:
                    v178 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v382[16]) & _xmm);
                    v179 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v382[32]) & _xmm) * 61440.0)
                         + (float)(v178 * 61440.0);
                    v180 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v382[64]) & _xmm);
                    v181 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v179 + v180) - 1.0)) & _xmm);
                    v167 = v181 < 0.000081380211;
                  }
                }
              }
            }
          }
        }
      }
    }
    BYTE1(v383) = BYTE1(v383) & 0x3F | ((v167 << 7) - 64);
  }
  if ( !v167
    || (v182 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[8] - 0.0)) & _xmm), v182 >= 0.000081380211)
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[20] - 0.0)) & _xmm) >= 0.000081380211 )
  {
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[4] - 0.0)) & _xmm) >= 0.000081380211
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v382[24] - 0.0)) & _xmm) >= 0.000081380211 )
    {
      goto LABEL_520;
    }
  }
  v183 = *((_QWORD *)v7 + 29);
  v361 = 0LL;
  v362 = 0;
  v358 = 0LL;
  v4 = 0;
  v359 = 0;
  if ( !*(_BYTE *)(v183 + 96) )
  {
    v184 = *(_QWORD *)(v183 + 16);
    if ( GetCurrentThreadId() == *(_DWORD *)(v184 + 560) )
    {
      if ( (*(_BYTE *)(v183 + 32) & 1) == 0 )
      {
LABEL_390:
        v186 = *(CRegionShape **)(v183 + 80);
        CShapePtr::Release((CShapePtr *)&v358);
        v358 = v186;
        v359 = 0;
        goto LABEL_414;
      }
      v185 = CGeometry::GetShapeDataWorker(
               (CGeometry *)v183,
               (const struct D2D_SIZE_F *)((char *)v7 + 132),
               (struct CShapePtr *)(v183 + 80));
      v4 = v185;
      if ( v185 >= 0 )
      {
        *(_DWORD *)(v183 + 32) &= ~1u;
        goto LABEL_390;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v185, 0x4Eu);
      goto LABEL_413;
    }
  }
  v187 = *(_BYTE *)(v183 + 96);
  if ( !v187 && (*(_BYTE *)(v183 + 32) & 1) == 0 )
  {
    v186 = *(CRegionShape **)(v183 + 80);
    if ( v186 )
    {
      v358 = *(CRegionShape **)(v183 + 80);
      v359 = 0;
      goto LABEL_414;
    }
  }
  v188 = 0LL;
  if ( v187 )
    v188 = (struct D2D_SIZE_F *)((char *)v7 + 132);
  v189 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)v183 + 176LL);
  if ( v189 == CRectangleGeometry::GetShapeDataCore )
    v190 = CRectangleGeometry::GetShapeDataCore((CRectangleGeometry *)v183, v188, (struct CShapePtr *)&v358);
  else
    v190 = v189((CRectangleGeometry *)v183, v188, (struct CShapePtr *)&v358);
  v4 = v190;
  if ( v190 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v190, 0x80u);
    goto LABEL_410;
  }
  v191 = *(CComponentTransform2D **)(v183 + 72);
  if ( !v191 )
  {
LABEL_410:
    v186 = v358;
    goto LABEL_411;
  }
  v394 = 0LL;
  if ( v188 )
    v394 = *v188;
  v186 = v358;
  if ( !v358 )
    goto LABEL_411;
  CComponentTransform2D::GetRealization(v191, &v394, &v463);
  CMILMatrix::CMILMatrix((CMILMatrix *)v432, &v463);
  v192 = CShape::CopyShape(v358, (const struct CMILMatrix *)v432, &v412);
  v4 = v192;
  if ( v192 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v192, 0x94u);
    goto LABEL_410;
  }
  CShapePtr::Release((CShapePtr *)&v358);
  v186 = v412;
  v358 = v412;
  v359 = 1;
LABEL_411:
  if ( v4 >= 0 )
    goto LABEL_415;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5Du);
LABEL_413:
  v186 = v358;
LABEL_414:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x26u);
    goto LABEL_427;
  }
LABEL_415:
  v4 = -2003292412;
  if ( v186 )
  {
    v193 = *(__int64 (__fastcall **)(CRegionShape *, __int128 *, _QWORD))(*(_QWORD *)v186 + 32LL);
    if ( (char *)v193 == (char *)CRectanglesShape::GetTightBounds )
    {
      v194 = CRectanglesShape::GetTightBounds((__int64)v186, (__int64)&v437, 0LL);
    }
    else if ( (char *)v193 == (char *)CRegionShape::GetTightBounds )
    {
      v194 = CRegionShape::GetTightBounds(v186, (__m128 *)&v437, 0LL);
    }
    else
    {
      v194 = v193(v186, &v437, 0LL);
    }
    v4 = v194;
    if ( v194 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v194, 0x102u);
    v186 = v358;
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x27u);
LABEL_427:
    v186 = v358;
  }
  if ( v4 == -2003304438 )
  {
    v4 = 0;
    v437 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v359 && v186 )
  {
    v195 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v186;
    if ( v195 == CRectanglesShape::`scalar deleting destructor' )
    {
      *(_QWORD *)v186 = &CRectanglesShape::`vftable';
      *((_DWORD *)v186 + 8) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)v186 + 8, 16LL);
      v196 = *((_QWORD *)v186 + 7);
      if ( v196 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 16LL))(v196);
        *((_QWORD *)v186 + 7) = 0LL;
      }
      v197 = (void *)*((_QWORD *)v186 + 1);
      if ( v197 != *((void **)v186 + 2) )
      {
        WPF::ProcessHeapImpl::Free(v197);
        *((_QWORD *)v186 + 1) = 0LL;
      }
      v198 = CThreadContext::GetCurrent(&v402);
      if ( v198 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v198, retaddr);
      v199 = v402;
      if ( *((_DWORD *)v402 + 3) >= *((_DWORD *)v402 + 2) )
      {
        WPF::ProcessHeapImpl::Free(v186);
        v163 = 0LL;
      }
      else
      {
        *(_QWORD *)v186 = *((_QWORD *)v402 + 2);
        ++*((_DWORD *)v199 + 3);
        v163 = 0LL;
        *((_QWORD *)v199 + 2) = v186;
      }
    }
    else
    {
      v195(v186, 1);
    }
  }
  v358 = 0LL;
  v359 = 0;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xD45u);
  }
  else if ( (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v437
          || *((float *)&v437 + 2) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
         && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *((float *)&v437 + 1)
          || *((float *)&v437 + 3) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
  {
    v4 = 0;
    if ( *(_BYTE *)(v183 + 96) || (v200 = *(_QWORD *)(v183 + 16), GetCurrentThreadId() != *(_DWORD *)(v200 + 560)) )
    {
      v203 = *(_BYTE *)(v183 + 96);
      if ( v203 || (*(_BYTE *)(v183 + 32) & 1) != 0 || (v163 = *(CRegionShape **)(v183 + 80)) == 0LL )
      {
        v204 = (struct D2D_SIZE_F *)v163;
        if ( v203 )
          v204 = (struct D2D_SIZE_F *)((char *)v7 + 132);
        v205 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)v183 + 176LL);
        if ( v205 == CRectangleGeometry::GetShapeDataCore )
          v206 = CRectangleGeometry::GetShapeDataCore((CRectangleGeometry *)v183, v204, (struct CShapePtr *)&v361);
        else
          v206 = v205((CRectangleGeometry *)v183, v204, (struct CShapePtr *)&v361);
        v4 = v206;
        if ( v206 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v206, 0x80u);
        }
        else
        {
          v207 = *(CComponentTransform2D **)(v183 + 72);
          if ( v207 )
          {
            v395 = 0LL;
            if ( v204 )
              v395 = *v204;
            if ( v361 )
            {
              CComponentTransform2D::GetRealization(v207, &v395, &v462);
              CMILMatrix::CMILMatrix((CMILMatrix *)v433, &v462);
              v208 = CShape::CopyShape(v361, (const struct CMILMatrix *)v433, &v403);
              v4 = v208;
              if ( v208 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v208, 0x94u);
              }
              else
              {
                CShapePtr::Release((CShapePtr *)&v361);
                v361 = v403;
                v362 = 1;
              }
            }
          }
        }
        if ( v4 >= 0 )
          goto LABEL_481;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x5Du);
      }
      else
      {
        if ( v362 && v361 )
          (**(void (__fastcall ***)(CRegionShape *, __int64))v361)(v361, 1LL);
        v361 = v163;
        v163 = 0LL;
        v362 = 0;
      }
      goto LABEL_477;
    }
    if ( (*(_BYTE *)(v183 + 32) & 1) != 0 )
    {
      v201 = CGeometry::GetShapeDataWorker(
               (CGeometry *)v183,
               (const struct D2D_SIZE_F *)((char *)v7 + 132),
               (struct CShapePtr *)(v183 + 80));
      v4 = v201;
      if ( v201 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v201, 0x4Eu);
        goto LABEL_477;
      }
      *(_DWORD *)(v183 + 32) &= ~1u;
    }
    v202 = *(CRegionShape **)(v183 + 80);
    CShapePtr::Release((CShapePtr *)&v361);
    v361 = v202;
    v362 = 0;
LABEL_477:
    if ( v4 >= 0 )
      goto LABEL_481;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xD4Cu);
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x20C7u);
    CShapePtr::Release((CShapePtr *)&v361);
    return (unsigned int)v4;
  }
LABEL_481:
  if ( !v361 )
    goto LABEL_507;
  v209 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)v361 + 40LL);
  if ( v209 != CRectanglesShape::IsRectangles )
  {
    if ( v209 == CRegionShape::IsRectangles )
      IsRectangles = CRegionShape::IsRectangles(v361, &v367);
    else
      IsRectangles = v209(v361, &v367);
    if ( IsRectangles )
    {
      v210 = v367;
      goto LABEL_489;
    }
LABEL_507:
    v6 = v356;
    goto LABEL_508;
  }
  v210 = *((_DWORD *)v361 + 8);
LABEL_489:
  if ( v210 != 1 )
    goto LABEL_507;
  if ( v361 )
  {
    v212 = *(__int64 (__fastcall **)(CRegionShape *, __m128 *, __int64))(*(_QWORD *)v361 + 32LL);
    if ( (char *)v212 == (char *)CRectanglesShape::GetTightBounds )
      v213 = CRectanglesShape::GetTightBounds((__int64)v361, (__int64)&v435, (__int64)&v382[4]);
    else
      v213 = v212 == CRegionShape::GetTightBounds
           ? CRegionShape::GetTightBounds(v361, &v435, (__int64)&v382[4])
           : v212(v361, &v435, (__int64)&v382[4]);
    if ( v213 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v213, 0x102u);
  }
  if ( v435.m128_f32[2] <= v435.m128_f32[0] )
    goto LABEL_507;
  v6 = v356;
  if ( v435.m128_f32[3] > v435.m128_f32[1] )
  {
    v214 = *((_QWORD *)v356 + 45);
    v435.m128_f32[0] = v435.m128_f32[0] + -0.015625;
    v435.m128_f32[1] = v435.m128_f32[1] + -0.015625;
    v435.m128_f32[2] = v435.m128_f32[2] + 0.015625;
    v435.m128_f32[3] = v435.m128_f32[3] + 0.015625;
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v214 + 56LL))(v214, v445);
    v215 = (float)v445[1];
    v216 = (float)v447;
    if ( (float)v446 <= (float)v445[0]
      || v216 <= v215
      || (float)v445[0] >= v435.m128_f32[0]
      && v215 >= v435.m128_f32[1]
      && v435.m128_f32[2] >= (float)v446
      && v435.m128_f32[3] >= v216 )
    {
      v165 = 1;
      v166 = 2;
      v355[0] = 1;
      goto LABEL_509;
    }
  }
LABEL_508:
  v165 = 0;
LABEL_509:
  if ( v362 )
  {
    v217 = v361;
    if ( v361 )
    {
      v218 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v361;
      if ( v218 == CRectanglesShape::`scalar deleting destructor' )
      {
        *(_QWORD *)v361 = &CRectanglesShape::`vftable';
        *((_DWORD *)v217 + 8) = (_DWORD)v163;
        DynArrayImpl<0>::ShrinkToSize((char *)v217 + 8, 16LL);
        v219 = *((_QWORD *)v217 + 7);
        if ( v219 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v219 + 16LL))(v219);
          *((_QWORD *)v217 + 7) = v163;
        }
        v220 = (void *)*((_QWORD *)v217 + 1);
        if ( v220 != *((void **)v217 + 2) )
        {
          WPF::ProcessHeapImpl::Free(v220);
          *((_QWORD *)v217 + 1) = v163;
        }
        v221 = CThreadContext::GetCurrent(&v404);
        if ( v221 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v221, retaddr);
        v222 = v404;
        if ( *((_DWORD *)v404 + 3) >= *((_DWORD *)v404 + 2) )
        {
          WPF::ProcessHeapImpl::Free(v217);
        }
        else
        {
          *(_QWORD *)v217 = *((_QWORD *)v404 + 2);
          ++*((_DWORD *)v222 + 3);
          *((_QWORD *)v222 + 2) = v217;
        }
      }
      else
      {
        v218(v361, 1);
      }
    }
    v165 = v355[0];
  }
LABEL_520:
  v223 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
  if ( (char *)v223 != (char *)&CVisual::IsOfType )
  {
    if ( v223 == CSpriteVisual::IsOfType
      || ((char *)v223 != (char *)CLayerVisual::IsOfType
        ? ((char *)v223 != (char *)CWindowNode::IsOfType
         ? (v224 = v223((__int64)v7, 123))
         : (v224 = CWindowNode::IsOfType(v7, 123LL, v136, v138)))
        : (v224 = CLayerVisual::IsOfType(v7, 123LL, v136, v138)),
          v224) )
    {
      v225 = *((_QWORD *)v7 + 26);
      if ( (*(_DWORD *)(v225 + 4) & 0x100) != 0 )
      {
        v226 = *(_DWORD *)(v225 + 12);
        v227 = (int *)(v225 + 12);
        if ( (v226 & 0x7F000000) != 0x18000000 )
        {
          do
          {
            v227 = (int *)((char *)v227 + (v226 & 0xFFFFFF) + 4);
            v226 = *v227;
          }
          while ( (*v227 & 0x7F000000) != 0x18000000 );
        }
        v409 = *(_QWORD *)(v227 + 1);
        if ( v409 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v409 + 192LL))(v409) )
          v166 = 5;
      }
    }
  }
  if ( HIBYTE(v384) )
    v166 = 5;
  v228 = v360;
  v229 = *((_BYTE *)v360 + 32);
  if ( v229 )
  {
    v230 = (struct _LIST_ENTRY *)((char *)v7 + 280);
  }
  else
  {
    v231 = CVisual::GetTreeDataListHead(v7);
    if ( v231 )
    {
      v232 = v231->Flink;
      if ( v231->Flink != v231 )
      {
        while ( (struct CVisualTree *)v232[2].Flink != v228 )
        {
          v232 = v232->Flink;
          if ( v232 == v231 )
            goto LABEL_547;
        }
        v230 = v232 - 14;
      }
    }
  }
LABEL_547:
  if ( v7 != *((struct CVisual **)v228 + 3) && !v229 )
  {
    v233 = CVisual::GetTreeDataListHead(*((CVisual **)v7 + 10));
    if ( v233 )
    {
      for ( i = v233->Flink; i != v233; i = i->Flink )
      {
        if ( (struct CVisualTree *)i[2].Flink == v228 )
          break;
      }
    }
  }
  v235 = CCpuClippingData::Update((int *)&v230[8].Blink, (__int64)v228, v7, v166, v165);
  v4 = v235;
  if ( v235 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v235, 0x6A1u);
  if ( v4 < 0 )
  {
    v354 = 8443;
    goto LABEL_64;
  }
  if ( *((_BYTE *)v228 + 32) )
  {
    v238 = (struct _LIST_ENTRY *)((char *)v7 + 280);
  }
  else
  {
    v239 = CVisual::GetTreeDataListHead(v7);
    if ( v239 )
    {
      v240 = v239->Flink;
      if ( v239->Flink != v239 )
      {
        while ( (struct CVisualTree *)v240[2].Flink != v228 )
        {
          v240 = v240->Flink;
          if ( v240 == v239 )
            goto LABEL_564;
        }
        v238 = v240 - 14;
      }
    }
  }
LABEL_564:
  v241 = (_QWORD *)((char *)v6 + 1008);
  Blink = (int)v238[8].Blink;
  if ( !*((_BYTE *)v6 + 3136) && !*((_QWORD *)v6 + 846) )
  {
    if ( Blink == 5 )
    {
      if ( *(_BYTE *)(*((_QWORD *)v6 + 126) + 80LL * (unsigned int)(*((_DWORD *)v6 + 258) - 1)) )
      {
        CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)v6 + 1008), 1);
        v243 = CDrawingContext::PushClippingScope(v6, v7, 0, 0LL, 1);
        v4 = v243;
        if ( v243 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v243, 0x2109u);
          return (unsigned int)v4;
        }
        v244 = CDrawingContext::PushClipRectForNode((__int64)v6, (int)v7, (int)&v457, 1);
        v4 = v244;
        if ( v244 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v244, 0x210Bu);
          return (unsigned int)v4;
        }
      }
    }
    else if ( Blink == 3 )
    {
      CScopedClipStack::GetTopGpuClipInScope((CDrawingContext *)((char *)v6 + 1008), 1);
      v245 = CDrawingContext::PushClippingScope(v6, v7, 1, (const struct CMILMatrix *)&v382[4], 1);
      v4 = v245;
      if ( v245 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v245, 0x211Au);
        return (unsigned int)v4;
      }
      v246 = CDrawingContext::PushClipRectForNode((__int64)v6, (int)v7, (int)&v458, 1);
      v4 = v246;
      if ( v246 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v246, 0x211Cu);
        return (unsigned int)v4;
      }
    }
  }
  if ( !(_BYTE)v384
    && __PAIR16__(BYTE1(v384), 0) == BYTE2(v384)
    && __PAIR16__(HIBYTE(v384), 0) == v385
    && !*(_QWORD *)&v376[4]
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v377 - 1.0)) & _xmm) < 0.0000011920929 )
  {
    v264 = 0LL;
  }
  else
  {
    v247 = *((_DWORD *)v6 + 120);
    if ( v247 )
      v248 = (void *)(*((_QWORD *)v6 + 62) + 68LL * (unsigned int)(v247 - 1));
    else
      v248 = &CMILMatrix::Identity;
    CMILMatrix::Transform3DBoundsHelper<1>(v248, (char *)v7 + 164, &v459, v237);
    v251 = *((_DWORD *)v6 + 120);
    v456 = v460;
    v424 = 0;
    v455 = v459;
    if ( v251 )
    {
      v253 = (unsigned int)(v251 - 1);
      v254 = *((_QWORD *)v6 + 62);
      v423[0] = *(_OWORD *)(68 * v253 + v254);
      v423[1] = *(_OWORD *)(68 * v253 + v254 + 16);
      v423[2] = *(_OWORD *)(68 * v253 + v254 + 32);
      v423[3] = *(_OWORD *)(68 * v253 + v254 + 48);
      v252 = 0;
      v424 = *(_DWORD *)(68 * v253 + v254 + 64);
    }
    else
    {
      CMILMatrix::operator=(v423, 0LL, v249, v250);
    }
    v255 = *(__int64 (__usercall **)@<rax>(CVisual *@<rcx>, __int64, __int64))(*(_QWORD *)v7 + 168LL);
    if ( v255 == CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds )
    {
      v4 = v252;
      if ( (*(_DWORD *)(*((_QWORD *)v7 + 26) + 4LL) & 0x8000000) != 0
        && ((EffectInternal = CVisual::GetEffectInternal(v7),
             v257 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL),
             (char *)v257 != (char *)CEffectGroup::IsOfType)
          ? (v258 = v257(EffectInternal, 49LL))
          : (v258 = CEffectGroup::IsOfType(EffectInternal, 49LL)),
            v258) )
      {
        v259 = (*(__int64 (__fastcall **)(struct CEffect *, _OWORD *, __int128 *, __int128 *, __int128 *, __int128 *))(*(_QWORD *)EffectInternal + 200LL))(
                 EffectInternal,
                 v423,
                 &v453,
                 &v455,
                 &v444,
                 &v439);
        v4 = v259;
        if ( v259 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v259, 0xC80u);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)v7 + 176LL))(v7)
             && (CVisual::GetEffectiveSize(v7, &v387, &v365) || *((_BYTE *)v7 + 528)) )
      {
        v260 = *(_QWORD *)v7;
        *(float *)v397 = v387;
        v261 = *(__int64 (**)(void))(v260 + 184);
        *(float *)&v397[1] = v365;
        v262 = v261();
        CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
          v262,
          (_DWORD)v7 + 164,
          (unsigned int)v397,
          (unsigned int)v423,
          (__int64)&v453,
          (__int64)&v455,
          (__int64)&v444,
          (__int64)&v439);
      }
      else
      {
        v444 = v453;
        v439 = v453;
      }
    }
    else
    {
      v4 = ((__int64 (__fastcall *)(struct CVisual *, _OWORD *, __int128 *, __int128 *, __int128 *, __int128 *))v255)(
             v7,
             v423,
             &v453,
             &v455,
             &v444,
             &v439);
    }
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xF2Fu);
    else
      *(_OWORD *)v448 = v439;
    if ( v4 < 0 )
    {
      v354 = 8501;
      goto LABEL_64;
    }
    v263 = CDrawingContext::PushEffects(v6, (__int64)v448, (__int64)v441, (__int64)v357);
    v4 = v263;
    if ( v263 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v263, 0x213Eu);
      return (unsigned int)v4;
    }
    if ( v357[0] )
      goto LABEL_786;
    v264 = 0LL;
    if ( *((_BYTE *)v228 + 32) )
    {
      Blink = *((_DWORD *)v7 + 104);
    }
    else
    {
      v265 = CVisual::GetTreeDataListHead(v7);
      if ( v265 )
      {
        v267 = v265->Flink;
        if ( v265->Flink != v265 )
        {
          while ( (struct CVisualTree *)v267[2].Flink != v228 )
          {
            v267 = v267->Flink;
            if ( v267 == v265 )
            {
              Blink = (int)v266[8].Blink;
              goto LABEL_618;
            }
          }
          v266 = v267 - 14;
        }
      }
      Blink = (int)v266[8].Blink;
    }
  }
LABEL_618:
  if ( !*((_BYTE *)v6 + 3136) )
  {
    if ( *((_QWORD *)v6 + 846) )
    {
LABEL_811:
      CVisual::ExcludeFromVisibleRegion(v7, v441, v6);
      return (unsigned int)v4;
    }
    if ( ((Blink - 2) & 0xFFFFFFFD) == 0 )
    {
      v268 = *((_DWORD *)v6 + 258);
      if ( v268 && *(_DWORD *)(*v241 + 80LL * (unsigned int)(v268 - 1) + 4) && (v269 = *((_DWORD *)v6 + 768)) != 0 )
        v270 = *(_OWORD *)(*((_QWORD *)v6 + 386) + 16LL * (unsigned int)(v269 - 1));
      else
        v270 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v434 = v270;
      if ( v268 && *(_DWORD *)(*v241 + 80LL * (unsigned int)(v268 - 1) + 8) )
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
          (__int64)&v434,
          120LL * (unsigned int)(*((_DWORD *)v6 + 466) - 1) + 96 + *((_QWORD *)v6 + 230));
      v271 = v264;
      if ( Blink == 2 )
      {
        v271 = (__int128 *)(80LL * (unsigned int)(*((_DWORD *)v6 + 258) - 1) + *v241 + 12LL);
      }
      else if ( Blink == 4 )
      {
        v271 = &v378;
      }
      v272 = v356;
      v273 = 0;
      v4 = (int)v264;
      v274 = (unsigned int)v264;
      v275 = (unsigned int)v264;
      if ( *((_DWORD *)v356 + 158) )
      {
        v276 = (_QWORD *)((char *)v356 + 608);
        while ( 1 )
        {
          v277 = CD2DLayer::ApplyState(*(CD2DLayer **)(*v276 + 8LL * v275), v272);
          v4 = v277;
          if ( v277 < 0 )
            break;
          v272 = v356;
          ++v274;
          if ( ++v275 >= *((_DWORD *)v356 + 158) )
          {
            LODWORD(v264) = 0;
            goto LABEL_638;
          }
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v277, 0x17C6u);
      }
      else
      {
LABEL_638:
        v276 = (_QWORD *)((char *)v272 + 608);
        *((_DWORD *)v272 + 158) = (_DWORD)v264;
        DynArrayImpl<0>::ShrinkToSize((char *)v272 + 608, 8LL);
      }
      if ( v274 < *((_DWORD *)v356 + 158) && v274 )
        DynArray<CD2DLayer *,0>::ShiftLeft(v276, v274);
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x17A8u);
        v278 = v356;
      }
      else
      {
        v278 = v356;
        if ( *((_BYTE *)v356 + 6826) )
          *(_WORD *)((char *)v356 + 6825) = 1;
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1214u);
        goto LABEL_674;
      }
      v279 = *((_DWORD *)v278 + 113);
      v4 = 0;
      LODWORD(v438) = 3;
      *((_QWORD *)&v438 + 1) = v7;
      lpMem = 0LL;
      if ( *((_DWORD *)v278 + 112) != v279 )
        goto LABEL_655;
      v368 = 0;
      Size_4 = 0;
      v280 = ULongLongToUInt(2LL * v279, &v368);
      v4 = v280;
      if ( v280 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v280, 0x4Cu);
LABEL_658:
        if ( v4 >= 0 )
        {
          v288 = 1;
          v428 = 0;
          v425[0] = 1;
          v426 = 0LL;
          if ( v271 )
          {
            v289 = *v271;
            v290 = v271[1];
            v428 = *((_DWORD *)v271 + 16);
            v427[0] = v289;
            v291 = v271[2];
            v427[1] = v290;
            v292 = v271[3];
            v427[2] = v291;
            v427[3] = v292;
          }
          else
          {
            CMILMatrix::SetToIdentity((CMILMatrix *)v427);
          }
          v293 = (char *)v278 + 1008;
          v294 = DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet((char *)v278 + 1008, v425);
          v4 = v294;
          if ( v294 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v294, 0x3Cu);
          if ( v4 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x121Du);
          else
            v273 = 1;
LABEL_675:
          if ( v4 < 0 )
          {
            if ( v273 )
              --*((_DWORD *)v293 + 6);
            if ( v288 )
              CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                (char *)v278 + 448,
                0LL);
            v354 = 8552;
            goto LABEL_64;
          }
          v295 = *((_DWORD *)v278 + 64);
          v296 = (unsigned int *)((char *)v278 + 448);
          *((_QWORD *)&v438 + 1) = v7;
          v390 = 0LL;
          LODWORD(v438) = 1;
          v297 = 0;
          v298 = *((_DWORD *)v278 + 113);
          v4 = 0;
          if ( *((_DWORD *)v278 + 112) != v298 )
            goto LABEL_688;
          v369 = 0;
          Size = 0;
          v299 = ULongLongToUInt(2LL * v298, &v369);
          v4 = v299;
          if ( v299 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v299, 0x4Cu);
            goto LABEL_691;
          }
          v301 = v369;
          if ( v369 <= 0x40 )
            v301 = 64;
          v302 = WPF::HrMalloc((WPF *)0x10, v301, (unsigned __int64)&v390, v300);
          v4 = v302;
          if ( v302 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v302, 0x54u);
          }
          else
          {
            v303 = ULongLongToUInt(16LL * *v296, &Size);
            v4 = v303;
            if ( v303 >= 0 )
            {
              v304 = v390;
              memcpy_0(v390, *((const void **)v296 + 2), Size);
              WPF::ProcessHeapImpl::Free(*((void **)v296 + 2));
              *((_QWORD *)v296 + 2) = v304;
              v296[1] = v301;
LABEL_688:
              *(_OWORD *)(*((_QWORD *)v296 + 2) + 16LL * (*v296)++) = v438;
              v305 = *v296;
              if ( v296[6] > *v296 )
                v305 = v296[6];
              v296[6] = v305;
              goto LABEL_691;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v303, 0x56u);
          }
          if ( v390 )
            HeapFree(WPF::g_processHeap, 0, v390);
LABEL_691:
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x11B8u);
            goto LABEL_726;
          }
          v297 = 1;
          if ( !v295 )
          {
            v310 = *(float *)&v434;
            v313 = *((float *)&v434 + 1);
            v316 = *((float *)&v434 + 2);
            v317 = *((float *)&v434 + 3);
            goto LABEL_719;
          }
          v306 = 0x7FFFFFFF;
          v307 = *(float *)&v434 - 0.5;
          if ( (float)(*(float *)&v434 - 0.5) < -2147483600.0 )
          {
            v308 = 0x80000000;
          }
          else if ( v307 >= 2147483600.0 )
          {
            v308 = 0x7FFFFFFF;
          }
          else
          {
            v308 = (int)ceilf_0(v307);
          }
          v309 = *((float *)&v434 + 1) - 0.5;
          v310 = (float)v308;
          if ( (float)(*((float *)&v434 + 1) - 0.5) < -2147483600.0 )
          {
            v311 = 0x80000000;
          }
          else if ( v309 >= 2147483600.0 )
          {
            v311 = 0x7FFFFFFF;
          }
          else
          {
            v311 = (int)ceilf_0(v309);
          }
          v312 = *((float *)&v434 + 2) - 0.5;
          v313 = (float)v311;
          if ( (float)(*((float *)&v434 + 2) - 0.5) < -2147483600.0 )
          {
            v314 = 0x80000000;
          }
          else if ( v312 >= 2147483600.0 )
          {
            v314 = 0x7FFFFFFF;
          }
          else
          {
            v314 = (int)ceilf_0(v312);
          }
          v315 = *((float *)&v434 + 3) - 0.5;
          v316 = (float)v314;
          if ( (float)(*((float *)&v434 + 3) - 0.5) < -2147483600.0 )
          {
            v306 = 0x80000000;
          }
          else if ( v315 < 2147483600.0 )
          {
            v317 = (float)(int)ceilf_0(v315);
LABEL_719:
            v318 = v373;
            *(float *)v449 = v310;
            *(float *)&v449[1] = v313;
            *(float *)&v449[2] = v316;
            *(float *)&v449[3] = v317;
            v319 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
                     (char *)v373 + 2064,
                     v449);
            v4 = v319;
            if ( v319 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v319, 0xE7u);
            }
            else
            {
              v320 = 10LL * (unsigned int)(*((_DWORD *)v318 + 6) - 1);
              ++*(_DWORD *)(*(_QWORD *)v318 + 8 * v320 + 4);
            }
            if ( v4 >= 0 )
            {
              v6 = v356;
              *((_BYTE *)v356 + 6825) = 1;
              goto LABEL_727;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x11BFu);
LABEL_726:
            v6 = v356;
LABEL_727:
            if ( v4 < 0 )
            {
              if ( v297 )
                CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                  v296,
                  0LL);
              v354 = 8553;
              goto LABEL_64;
            }
            goto LABEL_731;
          }
          v317 = (float)v306;
          goto LABEL_719;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1219u);
LABEL_674:
        v288 = 0;
        v293 = (char *)v278 + 1008;
        goto LABEL_675;
      }
      v282 = v368;
      if ( v368 <= 0x40 )
        v282 = 64;
      v283 = WPF::HrMalloc((WPF *)0x10, v282, (unsigned __int64)&lpMem, v281);
      v4 = v283;
      if ( v283 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v283, 0x54u);
      }
      else
      {
        v284 = ULongLongToUInt(16LL * *((unsigned int *)v278 + 112), &Size_4);
        v4 = v284;
        if ( v284 >= 0 )
        {
          v285 = lpMem;
          memcpy_0(lpMem, *((const void **)v278 + 58), Size_4);
          WPF::ProcessHeapImpl::Free(*((void **)v278 + 58));
          *((_QWORD *)v278 + 58) = v285;
          *((_DWORD *)v278 + 113) = v282;
LABEL_655:
          *(_OWORD *)(*((_QWORD *)v278 + 58) + 16LL * *((unsigned int *)v278 + 112)) = v438;
          v286 = *((_DWORD *)v278 + 118);
          v287 = ++*((_DWORD *)v278 + 112);
          if ( v286 > v287 )
            v287 = v286;
          *((_DWORD *)v278 + 118) = v287;
          goto LABEL_658;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v284, 0x56u);
      }
      if ( lpMem )
        HeapFree(WPF::g_processHeap, 0, lpMem);
      goto LABEL_658;
    }
  }
LABEL_731:
  if ( *((_QWORD *)v6 + 846) )
    goto LABEL_811;
  if ( *((_BYTE *)v6 + 6828) )
    CDrawingContext::UpdateMoveOptimizations(v6, v236, v441);
  v321 = (char *)v6 + 3304;
  v322 = *((_DWORD *)v6 + 826);
  v323 = 0LL;
  if ( v322 )
    v323 = *((_QWORD *)v6 + 415) + 16LL * (unsigned int)(v322 - 1);
  v357[0] = *(_BYTE *)(v323 + 8);
  v324 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)&v378, v236);
  v325 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v324 - 0.0)) & _xmm);
  if ( v325 >= 0.00000011920929 && _finite((float)(1.0 / v324)) )
  {
    v326 = v324 < 0.0 == (float)((float)((float)((float)((float)(*((float *)&v378 + 3) * *(float *)&v379)
                                                       - (float)(*(float *)&v378 * *((float *)&v379 + 3)))
                                               * *((float *)&v381 + 1))
                                       + (float)((float)((float)(*((float *)&v378 + 1) * *((float *)&v379 + 3))
                                                       - (float)(*((float *)&v378 + 3) * *((float *)&v379 + 1)))
                                               * *(float *)&v381))
                               + (float)((float)((float)(*(float *)&v378 * *((float *)&v379 + 1))
                                               - (float)(*((float *)&v378 + 1) * *(float *)&v379))
                                       * *((float *)&v381 + 3))) < 0.0;
  }
  else
  {
    v400 = v378;
    v401 = DWORD2(v378);
    v398 = v379;
    v399 = DWORD2(v379);
    Windows::Foundation::Numerics::cross(v421, &v400, &v398);
    v326 = v422 > 0.0;
  }
  if ( (*(_DWORD *)(*((_QWORD *)v7 + 26) + 4LL) & 0x8000000) != 0 )
    goto LABEL_753;
  v327 = *((_DWORD *)v7 + 25);
  v328 = v391 && *((_DWORD *)v391 + 25) == 1;
  v329 = *((_QWORD *)v7 + 9);
  if ( (v329 & 2) != 0 )
    v329 = *(_QWORD *)(v329 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v329) = v329 & 1;
  v330 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)v7 + 176LL))(v7);
  if ( v327 != 1 )
  {
    if ( !v328 )
      goto LABEL_754;
    if ( (_DWORD)v329 )
      goto LABEL_753;
  }
  if ( v328 && v330 )
  {
LABEL_753:
    v419 = v7;
    v420 = v326;
    v331 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(v321, &v419);
    v4 = v331;
    if ( v331 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v331, 0x2184u);
      return (unsigned int)v4;
    }
  }
LABEL_754:
  if ( (*(_DWORD *)(*((_QWORD *)v7 + 26) + 4LL) & 0x10000) != 0 )
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v7);
    v357[2] = 0;
    v333 = WindowBackgroundTreatmentInternal;
    v334 = 1;
    v335 = CWindowBackgroundTreatment::ContainsBackdropBrush(WindowBackgroundTreatmentInternal, &v357[2]);
    if ( *((_BYTE *)v333 + 284) )
    {
      if ( *((_BYTE *)v333 + 286) )
      {
        ImageSourceForEffectInput = CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(v333, v356);
        v4 = ImageSourceForEffectInput;
        v334 = !v335;
        if ( ImageSourceForEffectInput < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ImageSourceForEffectInput, 0x219Du);
          return (unsigned int)v4;
        }
      }
    }
    if ( v335 )
    {
      FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(
        *(FRAME_TIME_INFO **)(*((_QWORD *)v356 + 4) + 352LL),
        v334);
      if ( !v334 )
        ++dword_18026EDC0;
    }
    v431 = 0;
    WorldTransform = CVisual::GetWorldTransform(v7, v360, 3LL, v430, 0LL, 0LL);
    v4 = WorldTransform;
    if ( WorldTransform < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0x21B1u);
      return (unsigned int)v4;
    }
    CWindowBackgroundTreatment::SetWorldTransform(v333, v430, 3LL);
  }
  v338 = v391;
  v339 = *((_DWORD *)v7 + 25);
  v340 = v391 && *((_DWORD *)v391 + 25) == 1;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)v7 + 176LL))(v7) )
    goto LABEL_775;
  v341 = *((_QWORD *)v7 + 26);
  if ( (*(_DWORD *)(v341 + 4) & 0x8000000) == 0 )
    goto LABEL_774;
  v342 = *(_DWORD *)(v341 + 12);
  v343 = (int *)(v341 + 12);
  if ( (v342 & 0x7F000000) != 0x5000000 )
  {
    do
    {
      v343 = (int *)((char *)v343 + (v342 & 0xFFFFFF) + 4);
      v342 = *v343;
    }
    while ( (*v343 & 0x7F000000) != 0x5000000 );
  }
  v374 = *(_QWORD *)(v343 + 1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v374 + 48LL))(v374, 49LL) )
LABEL_775:
    v344 = 1;
  else
LABEL_774:
    v344 = 0;
  if ( v339 != 1 )
    goto LABEL_779;
  if ( !v340 )
  {
    if ( !(unsigned int)CPtrArrayBase::GetCount((struct CVisual *)((char *)v7 + 72)) )
      goto LABEL_779;
LABEL_788:
    if ( CVisual::HasBspPolygonList(v7) )
    {
      v347 = CDrawingContext::DrawBspPolygonList(v356, v7, v338);
      v4 = v347;
      if ( v347 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v347, 0x21DAu);
      }
      else
      {
        v348 = v372;
        ++*((_DWORD *)v366 + 8);
        *v348 = 0;
      }
    }
    return (unsigned int)v4;
  }
  if ( v344 )
    goto LABEL_788;
LABEL_779:
  v345 = v356;
  v355[0] = 0;
  if ( *((_DWORD *)v356 + 67) )
  {
    v346 = v357[0];
    if ( v357[0] != v326 )
    {
      if ( ((*(_DWORD *)(*((_QWORD *)v7 + 26) + 4LL) & 0x8000000) != 0
         || (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)v7 + 176LL))(v7))
        && v326
        && *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v321) + 8) != v346 )
      {
        goto LABEL_786;
      }
      goto LABEL_785;
    }
  }
  v349 = *(bool (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v7 + 216LL);
  if ( v349 == CVisual::HasContent )
  {
    v350 = *((_QWORD *)v7 + 30) != 0LL;
    goto LABEL_799;
  }
  if ( (char *)v349 != (char *)CSpriteVisual::HasContent )
  {
    v350 = v349(v7);
    v345 = v356;
LABEL_799:
    if ( !v350 )
      goto LABEL_785;
    goto LABEL_800;
  }
  if ( *((_QWORD *)v7 + 30) || (*(_DWORD *)(*((_QWORD *)v7 + 26) + 4LL) & 0x100) != 0 )
  {
LABEL_800:
    v351 = *(__int64 (__fastcall **)(CSpriteVisual *, struct CDrawingContext *, bool *))(*(_QWORD *)v7 + 208LL);
    if ( v351 == CVisual::RenderContent )
    {
      v352 = CVisual::RenderContent(v7, v345, v355);
    }
    else if ( v351 == CSpriteVisual::RenderContent )
    {
      v352 = CSpriteVisual::RenderContent(v7, v345, v355);
    }
    else if ( v351 == CWindowNode::RenderContent )
    {
      v352 = CWindowNode::RenderContent(v7, v345, v355);
    }
    else
    {
      v352 = v351(v7, v345, v355);
    }
    v4 = v352;
    if ( v352 >= 0 )
    {
      ++*((_DWORD *)v366 + 8);
LABEL_785:
      if ( !v355[0] )
        return (unsigned int)v4;
LABEL_786:
      *v372 = 0;
      return (unsigned int)v4;
    }
    v354 = 8641;
LABEL_64:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v354);
  }
  return (unsigned int)v4;
}
