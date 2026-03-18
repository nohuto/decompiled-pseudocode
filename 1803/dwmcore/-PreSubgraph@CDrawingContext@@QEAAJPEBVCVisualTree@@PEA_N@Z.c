/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180009D60 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180009F90 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000B418 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18000B6BC (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x18000BDF4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000BF08 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x18000C384 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000DED0 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x18001A52C (-NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024DA0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800275D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x180027F90 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18004BD70 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004F67C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x180051070 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180063CE0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180063F60 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z @ 0x1800640C0 (-IsRectangles@CRectanglesShape@@UEBA_NPEAI@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180064200 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180064290 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x180064A50 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180064EC0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18006661C (-PushClipRectForNode@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z @ 0x18006C62C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@1@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18006FA30 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18008B174 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008FE40 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800918D0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x180092EB0 (-GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18009DD60 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F390 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x1800A3C84 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A3F20 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B6B24 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B9544 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800BA0C0 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800BDCA0 (-AddMultipleAndSet@-$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScop.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x1800BDD0C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BE290 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x1800BF5E4 (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800D9FD4 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DA1A8 (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x1800DA9F8 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetProjectedShadowReceiver@CVisual@@QEBAPEAVCProjectedShadowReceiver@@XZ @ 0x18013C60C (-GetProjectedShadowReceiver@CVisual@@QEBAPEAVCProjectedShadowReceiver@@XZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18013CB04 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x1801403E4 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18015EF00 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1801619A4 (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x180161A3C (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180161B40 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x180161D08 (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x180163104 (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?cross@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@0@Z @ 0x1801850A4 (-cross@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@0@Z.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801A7810 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z @ 0x1801A8B0C (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801C77C4 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(CVisual **this, const struct CVisualTree *a2, bool *a3)
{
  void *v3; // r15
  int v4; // edi
  bool *v5; // r11
  CDrawingContext *v6; // rsi
  CVisual *v7; // r14
  struct CVisual *v8; // r8
  __int64 v9; // rcx
  int v10; // edx
  int *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r13d
  CMatrixStack *v16; // r12
  char (__fastcall *v17)(CCompositionSpotLight *, const struct CVisualTree *, const struct CVisual *); // r9
  int v18; // ebx
  __int64 v19; // rdx
  unsigned int v20; // r8d
  const struct CVisualTree *v21; // r10
  __int64 v22; // rax
  char *v23; // rcx
  CCompositionSpotLight *v24; // rbx
  __int64 v25; // rbx
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  char (__fastcall *v28)(CCompositionSpotLight *, const struct CVisualTree *, const struct CVisual *); // rax
  char IsValid; // al
  unsigned int *v30; // r15
  unsigned int v31; // ecx
  unsigned int v32; // eax
  void *v33; // r12
  unsigned __int64 v34; // rax
  unsigned int v35; // esi
  SIZE_T v36; // r8
  void *v37; // r14
  unsigned __int64 v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // ecx
  char *v41; // rcx
  unsigned int v42; // edx
  unsigned int v43; // eax
  unsigned int v44; // eax
  int v45; // eax
  __int64 (__fastcall *v46)(CResource *); // rax
  __int64 v47; // r8
  __int64 v48; // rdx
  unsigned int LightsCount; // eax
  char *v50; // r12
  __int64 v51; // r13
  __int64 v52; // rax
  struct CProcessAttribution *(__fastcall *v53)(CResource *); // rax
  __int64 v54; // rsi
  struct CProcessAttribution *v55; // rsi
  char v56; // cl
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  CDrawingContext *v58; // r13
  int v59; // ebx
  unsigned int v60; // ecx
  unsigned int v61; // eax
  unsigned __int64 v62; // rax
  unsigned int v63; // r14d
  SIZE_T v64; // r8
  unsigned int v65; // ecx
  unsigned __int64 v66; // rax
  unsigned int v67; // eax
  unsigned int v68; // ecx
  unsigned int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // edx
  int v72; // ebx
  int v73; // eax
  bool *v74; // rbx
  char v75; // r11
  __int64 v76; // rcx
  int v77; // eax
  unsigned int v78; // ecx
  unsigned int v79; // eax
  _DWORD *v80; // rcx
  int v81; // eax
  CMatrixStack *v82; // r15
  int v83; // eax
  CMILMatrix *v84; // rcx
  _QWORD *v85; // r9
  int v86; // r8d
  int v87; // eax
  float v88; // xmm2_4
  float v89; // xmm1_4
  float v90; // xmm3_4
  float v91; // xmm0_4
  __int64 v92; // rcx
  __int64 v93; // rax
  float v94; // xmm7_4
  float v95; // xmm6_4
  float v96; // xmm5_4
  char v97; // r9
  __int64 v98; // r13
  struct _LIST_ENTRY *v99; // rbx
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // rcx
  char (__fastcall *v103)(__int64, __int64, int, char); // rax
  char v104; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v106; // rcx
  unsigned int v107; // r8d
  unsigned int v108; // ecx
  _BYTE *v109; // rdx
  struct _LIST_ENTRY *v110; // rbx
  _DWORD *v111; // rsi
  __int64 v112; // rax
  int v113; // eax
  CDrawingContext *v114; // rcx
  int v115; // ecx
  bool v116; // cc
  struct _LIST_ENTRY *v117; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v119; // rcx
  float v120; // xmm1_4
  float v121; // edx
  float *v122; // rcx
  float v123; // xmm6_4
  __int64 v124; // rcx
  int v125; // edx
  int *v126; // rcx
  __int64 v127; // rbx
  __int64 (__fastcall *v128)(__int64, __int64); // rax
  char v129; // al
  int v130; // eax
  float v131; // xmm0_4
  float v132; // xmm6_4
  float v133; // xmm6_4
  CGeometry *v134; // rcx
  int v135; // eax
  int v136; // ebx
  CRectanglesShape *v137; // rcx
  __int64 (__fastcall *v138)(CRectanglesShape *, __int128 *, _QWORD); // rax
  int v139; // eax
  CRectanglesShape *(__fastcall *v140)(CRectanglesShape *, char); // rax
  __int64 v141; // rcx
  int v142; // edx
  int *v143; // rcx
  char v144; // al
  __int64 v145; // rcx
  int v146; // edx
  int *v147; // rcx
  __int64 (__fastcall *v148)(__int64, __int64); // rax
  char v149; // al
  char v150; // cl
  char v151; // al
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  __int64 v153; // r10
  char v154; // cl
  __int64 (__fastcall *v155)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  __int64 (__fastcall *v156)(_QWORD, _QWORD); // r9
  bool (__fastcall *v157)(__int64, int); // rax
  char v158; // al
  bool (__fastcall *v159)(CLayerVisual *); // rax
  bool v160; // al
  float v161; // xmm1_4
  __int64 v162; // rax
  bool v163; // zf
  int v164; // eax
  struct _LIST_ENTRY *v165; // r12
  __int64 v166; // r10
  CVisual *v167; // r13
  int v168; // esi
  struct _LIST_ENTRY *v169; // rbx
  struct _LIST_ENTRY *v170; // rax
  struct _LIST_ENTRY *v171; // rcx
  __int64 v172; // rcx
  char v173; // r15
  struct _LIST_ENTRY *v174; // r14
  struct _LIST_ENTRY *v175; // rdi
  int v176; // edx
  int *v177; // rcx
  CVisualReferenceController *v178; // rcx
  struct CVisual *(__fastcall *v179)(CVisualReferenceController *); // rax
  CVisual *VisualNoRef; // rax
  struct _LIST_ENTRY *TreeData; // rax
  CVisual *v182; // rcx
  struct _LIST_ENTRY *v183; // rax
  struct _LIST_ENTRY *v184; // rcx
  unsigned __int64 v185; // rax
  int updated; // eax
  bool v187; // cl
  struct _LIST_ENTRY *v188; // rax
  int v189; // eax
  __int128 *v190; // r15
  char v191; // r13
  int v192; // r12d
  char v193; // dl
  float v194; // xmm3_4
  float v195; // xmm1_4
  float v196; // xmm1_4
  float v197; // xmm1_4
  float v198; // xmm1_4
  float v199; // xmm1_4
  float v200; // xmm1_4
  float v201; // xmm1_4
  float v202; // xmm1_4
  float v203; // xmm1_4
  float v204; // xmm1_4
  float v205; // xmm3_4
  float v206; // xmm1_4
  float v207; // xmm1_4
  float v208; // xmm1_4
  CRegionShape *v209; // r14
  int ShapeData; // eax
  int v211; // esi
  CRectanglesShape *v212; // rbx
  __int64 (__fastcall *v213)(CRectanglesShape *, __m128 *, _QWORD); // rax
  int TightBounds; // eax
  CRectanglesShape *v215; // rcx
  char (__fastcall *v216)(CRegionShape *, unsigned int *); // rax
  char IsRectangles; // al
  __int64 (__fastcall *v218)(CRegionShape *, __m128 *, _BYTE *); // rax
  int v219; // eax
  __int64 v220; // rcx
  float v221; // xmm0_4
  float v222; // xmm1_4
  CRectanglesShape *(__fastcall *v223)(CRectanglesShape *, char); // rax
  bool (__fastcall *v224)(__int64, int); // rax
  char v225; // al
  __int64 v226; // rcx
  int v227; // edx
  int *v228; // rcx
  char v229; // r10
  int *v230; // r11
  struct _LIST_ENTRY *v231; // rax
  struct _LIST_ENTRY *v232; // rcx
  struct _LIST_ENTRY *v233; // rax
  struct _LIST_ENTRY *i; // rcx
  int v235; // eax
  const struct Windows::Foundation::Numerics::float4x4 *v236; // rdx
  struct _LIST_ENTRY *v237; // r10
  struct _LIST_ENTRY *v238; // rax
  struct _LIST_ENTRY *v239; // rcx
  int Blink; // ebx
  __int64 *v241; // rsi
  int v242; // eax
  int v243; // eax
  int v244; // eax
  int v245; // eax
  CMILMatrix *v246; // rax
  int v247; // eax
  __int64 v248; // rcx
  __int64 v249; // rax
  __int64 (__fastcall *v250)(CVisual *, _OWORD *, __int128 *, __int128 *, __int128 *, __int64 *); // rax
  int v251; // eax
  int v252; // eax
  struct _LIST_ENTRY *v253; // r10
  struct _LIST_ENTRY *v254; // rax
  struct _LIST_ENTRY *v255; // r11
  struct _LIST_ENTRY *v256; // rcx
  int v257; // r8d
  int v258; // eax
  __int128 v259; // xmm0
  CDrawingContext *v260; // rdx
  char v261; // r13
  char v262; // r12
  unsigned int v263; // esi
  unsigned int v264; // ebx
  _QWORD *v265; // r14
  int v266; // eax
  void **v267; // r9
  unsigned int v268; // ecx
  unsigned int v269; // eax
  unsigned __int64 v270; // rax
  unsigned int v271; // esi
  unsigned __int64 v272; // rax
  void *v273; // rbx
  CDrawingContext *v274; // rax
  unsigned int v275; // eax
  unsigned int v276; // ecx
  unsigned int v277; // eax
  __int128 v278; // xmm0
  __int128 v279; // xmm1
  __int128 v280; // xmm0
  __int128 v281; // xmm1
  int v282; // eax
  void **v283; // r9
  int v284; // r15d
  char v285; // r12
  unsigned int *v286; // r14
  unsigned int v287; // ecx
  unsigned int v288; // eax
  unsigned __int64 v289; // rax
  unsigned int v290; // esi
  unsigned __int64 v291; // rax
  void *v292; // rbx
  unsigned int v293; // eax
  unsigned int v294; // ecx
  int v295; // ebx
  float v296; // xmm0_4
  int v297; // eax
  unsigned int v298; // eax
  float v299; // xmm0_4
  float v300; // xmm11_4
  int v301; // eax
  float v302; // xmm0_4
  float v303; // xmm10_4
  int v304; // eax
  float v305; // xmm0_4
  float v306; // xmm9_4
  float v307; // xmm0_4
  __int64 *v308; // r15
  unsigned int v309; // ecx
  unsigned int v310; // eax
  unsigned __int64 v311; // rax
  unsigned int v312; // esi
  unsigned __int64 v313; // rax
  void *v314; // rbx
  unsigned int v315; // eax
  unsigned int v316; // ecx
  __int64 v317; // rcx
  unsigned int v318; // eax
  char *v319; // r12
  __int64 v320; // rax
  int v321; // ecx
  char v322; // r13
  float v323; // xmm0_4
  float v324; // xmm2_4
  int v325; // r14d
  bool v326; // si
  __int64 v327; // rbx
  char v328; // al
  int v329; // eax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rbx
  const struct CMILMatrix *TopByReference; // rax
  char v332; // si
  char v333; // r14
  int ImageSourceForEffectInput; // eax
  const struct CMILMatrix *v335; // rax
  int v336; // esi
  bool v337; // bl
  __int64 v338; // rcx
  int v339; // edx
  int *v340; // rcx
  char v341; // al
  int v343; // eax
  bool (__fastcall *v344)(CSpriteVisual *__hidden); // rax
  bool v345; // al
  __int64 (__fastcall *v346)(CVisual *, struct CDrawingContext *, unsigned __int64); // rax
  int v347; // eax
  unsigned int v348; // [rsp+20h] [rbp-E0h]
  char v349; // [rsp+40h] [rbp-C0h]
  bool v350[7]; // [rsp+41h] [rbp-BFh] BYREF
  CDrawingContext *v351; // [rsp+48h] [rbp-B8h]
  CVisual *v352; // [rsp+50h] [rbp-B0h]
  bool v353; // [rsp+58h] [rbp-A8h]
  _BYTE v354[15]; // [rsp+59h] [rbp-A7h] BYREF
  __int64 *v355; // [rsp+68h] [rbp-98h]
  CMatrixStack *v356; // [rsp+70h] [rbp-90h]
  unsigned int v357; // [rsp+78h] [rbp-88h] BYREF
  bool *v358; // [rsp+80h] [rbp-80h]
  __int64 v359; // [rsp+88h] [rbp-78h] BYREF
  float v360; // [rsp+90h] [rbp-70h] BYREF
  CRectanglesShape *v361; // [rsp+98h] [rbp-68h] BYREF
  char v362; // [rsp+A0h] [rbp-60h]
  __int64 v363; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v364[12]; // [rsp+B8h] [rbp-48h]
  float v365; // [rsp+C4h] [rbp-3Ch]
  __int128 v366; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v367; // [rsp+D8h] [rbp-28h]
  __int128 v368; // [rsp+E8h] [rbp-18h]
  __int128 v369; // [rsp+F8h] [rbp-8h]
  _BYTE v370[68]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v371; // [rsp+14Ch] [rbp+4Ch]
  int v372; // [rsp+154h] [rbp+54h]
  unsigned __int8 v373; // [rsp+158h] [rbp+58h]
  CRectanglesShape *v374; // [rsp+160h] [rbp+60h] BYREF
  char v375; // [rsp+168h] [rbp+68h]
  void *lpMem; // [rsp+170h] [rbp+70h] BYREF
  void *v377; // [rsp+178h] [rbp+78h] BYREF
  void *v378; // [rsp+180h] [rbp+80h] BYREF
  struct CVisual *v379; // [rsp+188h] [rbp+88h]
  struct CProcessAttribution *v380; // [rsp+190h] [rbp+90h] BYREF
  __int128 v381; // [rsp+198h] [rbp+98h]
  __int64 v382; // [rsp+1A8h] [rbp+A8h] BYREF
  int v383; // [rsp+1B0h] [rbp+B0h]
  __int64 v384; // [rsp+1B8h] [rbp+B8h] BYREF
  int v385; // [rsp+1C0h] [rbp+C0h]
  CRectanglesShape *v386; // [rsp+1C8h] [rbp+C8h] BYREF
  char v387; // [rsp+1D0h] [rbp+D0h]
  __int64 v388; // [rsp+1D8h] [rbp+D8h]
  CVisualReferenceController **v389; // [rsp+1E0h] [rbp+E0h]
  __int64 v390; // [rsp+1E8h] [rbp+E8h]
  __int64 v391; // [rsp+1F0h] [rbp+F0h]
  __int64 v392; // [rsp+1F8h] [rbp+F8h]
  __int64 v394; // [rsp+208h] [rbp+108h]
  __int128 v395; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v396[5]; // [rsp+220h] [rbp+120h] BYREF
  int v397; // [rsp+234h] [rbp+134h]
  int v398; // [rsp+238h] [rbp+138h]
  int v399; // [rsp+23Ch] [rbp+13Ch]
  CVisual *v400; // [rsp+248h] [rbp+148h] BYREF
  char v401; // [rsp+250h] [rbp+150h]
  char v402[8]; // [rsp+258h] [rbp+158h] BYREF
  float v403; // [rsp+260h] [rbp+160h]
  int v404; // [rsp+268h] [rbp+168h] BYREF
  __int128 v405; // [rsp+26Ch] [rbp+16Ch]
  int v406; // [rsp+27Ch] [rbp+17Ch]
  __int128 v407; // [rsp+280h] [rbp+180h] BYREF
  int v408; // [rsp+290h] [rbp+190h]
  _OWORD v409[4]; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v410; // [rsp+2E0h] [rbp+1E0h]
  char v411[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v412; // [rsp+2F4h] [rbp+1F4h]
  _OWORD v413[4]; // [rsp+2FCh] [rbp+1FCh] BYREF
  int v414; // [rsp+33Ch] [rbp+23Ch]
  __int128 v415; // [rsp+348h] [rbp+248h] BYREF
  __m128 v416; // [rsp+358h] [rbp+258h] BYREF
  __int128 v417; // [rsp+368h] [rbp+268h] BYREF
  __int64 v418[2]; // [rsp+378h] [rbp+278h] BYREF
  __m128 v419; // [rsp+388h] [rbp+288h] BYREF
  __m128 v420; // [rsp+398h] [rbp+298h]
  __int64 v421[2]; // [rsp+3A8h] [rbp+2A8h] BYREF
  __int64 v422[2]; // [rsp+3B8h] [rbp+2B8h] BYREF
  __int128 v423; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v424; // [rsp+3D8h] [rbp+2D8h]
  _DWORD v425[2]; // [rsp+3E0h] [rbp+2E0h] BYREF
  int v426; // [rsp+3E8h] [rbp+2E8h]
  int v427; // [rsp+3ECh] [rbp+2ECh]
  _DWORD v428[4]; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v429; // [rsp+400h] [rbp+300h]
  __int128 v430; // [rsp+408h] [rbp+308h] BYREF
  __int128 v431; // [rsp+418h] [rbp+318h] BYREF
  __int64 v432; // [rsp+428h] [rbp+328h]
  __int128 v433; // [rsp+430h] [rbp+330h] BYREF
  __int64 v434; // [rsp+440h] [rbp+340h]
  __int128 v435; // [rsp+448h] [rbp+348h] BYREF
  float v436[4]; // [rsp+458h] [rbp+358h] BYREF
  float v437[4]; // [rsp+468h] [rbp+368h] BYREF
  __int128 v438; // [rsp+478h] [rbp+378h]
  __int64 v439; // [rsp+488h] [rbp+388h]
  float v440[4]; // [rsp+490h] [rbp+390h] BYREF
  float v441[6]; // [rsp+4A0h] [rbp+3A0h] BYREF
  char v442[16]; // [rsp+4B8h] [rbp+3B8h] BYREF
  void *retaddr; // [rsp+598h] [rbp+498h]

  v3 = 0LL;
  v371 = 21887LL;
  v4 = 0;
  v5 = a3;
  v358 = a3;
  *(_QWORD *)&v354[7] = a2;
  v6 = (CDrawingContext *)this;
  v351 = (CDrawingContext *)this;
  v350[0] = 0;
  v7 = 0LL;
  v353 = 0;
  v363 = 0LL;
  *(_QWORD *)v364 = 1065353216LL;
  *(_DWORD *)&v364[8] = 0;
  v365 = 1.0;
  memset(v370, 0, 64);
  v372 = 0;
  v373 = 0;
  *(_DWORD *)&v370[64] = 1065353216;
  v352 = 0LL;
  if ( *((_BYTE *)this + 6520) )
  {
    if ( *((_BYTE *)this + 6521) )
      v7 = this[395];
    else
      v7 = (CVisual *)*((_QWORD *)this[816] + 3);
    v352 = v7;
  }
  v8 = this[396];
  v9 = *((_QWORD *)v7 + 27);
  v379 = v8;
  if ( (*(_BYTE *)(v9 + 4) & 1) == 0 )
    goto LABEL_13;
  v10 = *(_DWORD *)(v9 + 12);
  v11 = (int *)(v9 + 12);
  if ( (v10 & 0x7F000000) != 0x20000000 )
  {
    do
    {
      v11 = (int *)((char *)v11 + (v10 & 0xFFFFFF) + 4);
      v10 = *v11;
    }
    while ( (*v11 & 0x7F000000) != 0x20000000 );
  }
  v388 = *(_QWORD *)(v11 + 1);
  if ( v388
    && (int)((__int64)(*(_QWORD *)(v388 + 72) - *(_QWORD *)(v388 + 64)) >> 3) > 0
    && *((_DWORD *)CVisual::GetProjectedShadowReceiver(v7) + 23) == 1 )
  {
    v349 = 1;
  }
  else
  {
LABEL_13:
    v349 = 0;
  }
  if ( (*((_BYTE *)v7 + 94) & 2) != 0 || (*((_DWORD *)v7 + 22) & 0x400) == 0 )
  {
    v56 = 0;
    *v5 = 0;
    goto LABEL_731;
  }
  v12 = *((_QWORD *)v7 + 34);
  if ( (v12 & 2) != 0 )
    v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v12) = v12 & 1;
  v13 = 1LL;
  if ( !(_DWORD)v12 )
  {
    v14 = *((_QWORD *)v7 + 35);
    if ( (v14 & 2) != 0 )
      v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v14) = v14 & 1;
    if ( !(_DWORD)v14 )
    {
LABEL_94:
      v50 = (char *)v6 + 912;
      v51 = *(_QWORD *)(*((_QWORD *)v6 + 114) + 8LL * (unsigned int)(*((_DWORD *)v6 + 234) - 1));
      v52 = *(_QWORD *)v7;
      v359 = v51;
      v53 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(v52 + 120);
      if ( v53 == CResource::GetProcessAttributionNoRef )
      {
        v54 = *((_QWORD *)v7 + 6);
        if ( v54 )
          v55 = *(struct CProcessAttribution **)(v54 + 40);
        else
          v55 = 0LL;
      }
      else
      {
        if ( v53 == CWindowNode::GetProcessAttributionNoRef )
          ProcessAttributionNoRef = CWindowNode::GetProcessAttributionNoRef(v7);
        else
          ProcessAttributionNoRef = (struct CProcessAttribution *)((__int64 (__fastcall *)(CVisual *, __int64))v53)(
                                                                    v7,
                                                                    v13);
        v55 = ProcessAttributionNoRef;
      }
      if ( !v55 || v55 == (struct CProcessAttribution *)v51 )
      {
LABEL_139:
        v74 = v358;
        *v358 = 1;
        if ( (*((_BYTE *)v7 + 93) & 0xC) != 0 )
        {
          CVisual::GetHeatMapProperties(v7, &v407);
          v6 = v351;
          v405 = v407;
          v76 = *((_QWORD *)v351 + 4) + 1192LL;
          v404 = 2 - ((v75 & 4) != 0);
          v406 = v408;
          v77 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(v76, &v404);
          v4 = v77;
          if ( v77 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x2126u);
LABEL_142:
            v56 = v349;
            goto LABEL_731;
          }
        }
        else
        {
          v6 = v351;
        }
        v78 = *((_DWORD *)v7 + 24);
        if ( (_BYTE)v78 )
        {
          v396[0] = (unsigned __int8)v78;
          v396[4] = (v78 >> 8) & 3;
          v79 = v78;
          v396[3] = (v78 >> 14) & 0x1F;
          v80 = (_DWORD *)(*((_QWORD *)v6 + 4) + 1192LL);
          v396[1] = (int)(v79 << 18) >> 28;
          v396[2] = *((_DWORD *)v7 + 47);
          if ( *v80 && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() == 2 )
            v397 = 0;
          else
            v397 = *((_DWORD *)v7 + 48);
          v398 = *((_DWORD *)v7 + 49);
          v399 = *((_DWORD *)v7 + 50);
          v81 = CDrawingContext::PushRenderOptionsInternal(v6, v7, (const struct MilRenderOptions *)v396, 1);
          v4 = v81;
          if ( v81 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x2138u);
            goto LABEL_142;
          }
        }
        v82 = (CDrawingContext *)((char *)v6 + 480);
        v83 = *((_DWORD *)v6 + 120);
        v356 = (CDrawingContext *)((char *)v6 + 480);
        if ( v83 )
          v84 = (CMILMatrix *)(*((_QWORD *)v6 + 62) + 68LL * (unsigned int)(v83 - 1));
        else
          v84 = (CMILMatrix *)&CMILMatrix::Identity;
        CMILMatrix::Transform3DBoundsHelper<1>(v84);
        v85 = (_QWORD *)((char *)v6 + 1008);
        v86 = *((_DWORD *)v6 + 258);
        v355 = (__int64 *)((char *)v6 + 1008);
        if ( v86 && *(_DWORD *)(*v85 + 80LL * (unsigned int)(v86 - 1) + 4) && (v87 = *((_DWORD *)v6 + 768)) != 0 )
        {
          v420 = *(__m128 *)(*((_QWORD *)v6 + 386) + 16LL * (unsigned int)(v87 - 1));
          v88 = v420.m128_f32[2];
          v89 = v420.m128_f32[1];
          LODWORD(v90) = _mm_shuffle_ps(v420, v420, 255).m128_u32[0];
          v91 = v420.m128_f32[0];
        }
        else
        {
          v90 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
          v88 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
          v89 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
          v91 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        }
        if ( v86 && *(_DWORD *)(*v85 + 80LL * (unsigned int)(v86 - 1) + 8) )
        {
          v92 = 120LL * (unsigned int)(*((_DWORD *)v6 + 466) - 1);
          v93 = *((_QWORD *)v6 + 230);
          if ( *(float *)(v92 + v93 + 96) > v91 )
            v91 = *(float *)(v92 + v93 + 96);
          v94 = v89;
          if ( *(float *)(v92 + v93 + 100) > v89 )
          {
            v89 = *(float *)(v92 + v93 + 100);
            v94 = v89;
          }
          v95 = v88;
          if ( v88 > *(float *)(v92 + v93 + 104) )
          {
            v88 = *(float *)(v92 + v93 + 104);
            v95 = v88;
          }
          v96 = v90;
          if ( v90 > *(float *)(v92 + v93 + 108) )
          {
            v90 = *(float *)(v92 + v93 + 108);
            v96 = v90;
          }
          if ( v95 <= v91 || v96 <= v94 )
          {
            v90 = 0.0;
            v88 = 0.0;
            v89 = 0.0;
            v91 = 0.0;
          }
        }
        *(float *)v428 = v91;
        v429 = v424;
        *(float *)&v428[1] = v89;
        *(float *)&v428[2] = v88;
        *(float *)&v428[3] = v90;
        TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
          &v423,
          v428);
        v433 = v423;
        *(_OWORD *)v421 = v423;
        v434 = v424;
        if ( *((float *)&v423 + 2) <= *(float *)&v423 || *((float *)&v423 + 3) <= *((float *)&v423 + 1) )
        {
          v56 = 0;
          *v74 = 0;
          goto LABEL_731;
        }
        v98 = *(_QWORD *)&v354[7];
        if ( !*((_BYTE *)v6 + 6827) )
          goto LABEL_213;
        if ( *(_BYTE *)(*(_QWORD *)&v354[7] + 32LL) )
        {
          v99 = (struct _LIST_ENTRY *)((char *)v7 + 288);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(v7);
          if ( !TreeDataListHead || (v106 = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
          {
LABEL_198:
            if ( !*((_BYTE *)v6 + 6827) )
              goto LABEL_213;
            if ( *(_BYTE *)(v98 + 32) )
            {
              v110 = (struct _LIST_ENTRY *)((char *)v7 + 288);
            }
            else
            {
              v117 = CVisual::GetTreeDataListHead(v7);
              if ( !v117 )
                goto LABEL_213;
              Flink = v117->Flink;
              if ( v117->Flink == v117 )
                goto LABEL_213;
              while ( 1 )
              {
                v110 = Flink - 14;
                if ( Flink[2].Flink == (struct _LIST_ENTRY *)v98 )
                  break;
                Flink = Flink->Flink;
                if ( Flink == v117 )
                  goto LABEL_213;
              }
            }
            if ( v110 )
            {
              v111 = v110[2].Flink;
              if ( v111
                || (v112 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v110[1].Blink->Flink[20].Blink)(v110[1].Blink),
                    v110[2].Flink = (struct _LIST_ENTRY *)v112,
                    (v111 = (_DWORD *)v112) != 0LL) )
              {
                v113 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v111 + 24LL))(v111);
                v114 = v351;
                *((_DWORD *)v351 + 1690) = v113;
                v115 = *((_DWORD *)v114 + 1652);
                if ( v113 >= v115 )
                {
                  v116 = v111[3] < v115;
                  v6 = v351;
                  if ( !v116 )
                  {
LABEL_206:
                    v56 = 0;
                    *v358 = 0;
                    goto LABEL_731;
                  }
LABEL_730:
                  v56 = v349;
                  goto LABEL_731;
                }
              }
              v6 = v351;
            }
LABEL_213:
            v363 = (__int64)v7;
            v119 = *((_QWORD *)v7 + 27);
            if ( (*(_DWORD *)(v119 + 4) & 0x100000) != 0 )
            {
              v121 = *(float *)(v119 + 12);
              v122 = (float *)(v119 + 12);
              if ( (LODWORD(v121) & 0x7F000000) != 0xC000000 )
              {
                do
                {
                  v122 = (float *)((char *)v122 + (LODWORD(v121) & 0xFFFFFF) + 4);
                  v121 = *v122;
                }
                while ( (*(_DWORD *)v122 & 0x7F000000) != 0xC000000 );
              }
              v360 = v122[1];
              v120 = v360;
            }
            else
            {
              v120 = FLOAT_1_0;
            }
            v123 = FLOAT_1_0;
            v365 = fminf(1.0, fmaxf(v120, 0.0));
            v124 = *((_QWORD *)v7 + 27);
            if ( (*(_DWORD *)(v124 + 4) & 0x8000000) != 0 )
            {
              v125 = *(_DWORD *)(v124 + 12);
              v126 = (int *)(v124 + 12);
              if ( (v125 & 0x7F000000) != 0x5000000 )
              {
                do
                {
                  v126 = (int *)((char *)v126 + (v125 & 0xFFFFFF) + 4);
                  v125 = *v126;
                }
                while ( (*v126 & 0x7F000000) != 0x5000000 );
              }
              v394 = *(_QWORD *)(v126 + 1);
              v127 = v394;
              v128 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v394 + 48LL);
              if ( v128 == CEffectGroup::IsOfType )
                v129 = CEffectGroup::IsOfType(v394, 52LL);
              else
                v129 = v128(v394, 52LL);
              if ( v129 )
                v123 = *(double *)(v127 + 72);
            }
            v130 = *((_DWORD *)v6 + 776);
            v131 = fminf(1.0, fmaxf(v123, 0.0));
            if ( v130 )
              v132 = *(float *)(*((_QWORD *)v6 + 390) + 4LL * (unsigned int)(v130 - 1));
            else
              v132 = FLOAT_1_0;
            v133 = v132 * v131;
            *(float *)v364 = v133;
            v134 = (CGeometry *)*((_QWORD *)v7 + 30);
            if ( !v134 )
            {
LABEL_257:
              v141 = *((_QWORD *)v7 + 27);
              if ( (*(_DWORD *)(v141 + 4) & 0x20000000) != 0 )
              {
                v142 = *(_DWORD *)(v141 + 12);
                v143 = (int *)(v141 + 12);
                if ( (v142 & 0x7F000000) != 0x3000000 )
                {
                  do
                  {
                    v143 = (int *)((char *)v143 + (v142 & 0xFFFFFF) + 4);
                    v142 = *v143;
                  }
                  while ( (*v143 & 0x7F000000) != 0x3000000 );
                }
                v144 = BYTE1(v372);
                if ( *(_QWORD *)(v143 + 1) )
                  v144 = 1;
                BYTE1(v372) = v144;
              }
              v145 = *((_QWORD *)v7 + 27);
              if ( (*(_DWORD *)(v145 + 4) & 0x8000000) != 0 )
              {
                v146 = *(_DWORD *)(v145 + 12);
                v147 = (int *)(v145 + 12);
                if ( (v146 & 0x7F000000) != 0x5000000 )
                {
                  do
                  {
                    v147 = (int *)((char *)v147 + (v146 & 0xFFFFFF) + 4);
                    v146 = *v147;
                  }
                  while ( (*v147 & 0x7F000000) != 0x5000000 );
                }
                v392 = *(_QWORD *)(v147 + 1);
                v148 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v392 + 48LL);
                if ( v148 == CEffectGroup::IsOfType )
                  v149 = CEffectGroup::IsOfType(v392, 55LL);
                else
                  v149 = v148(v392, 55LL);
                v150 = v149;
                v151 = BYTE2(v372);
                if ( v150 )
                  v151 = 1;
                BYTE2(v372) = v151;
              }
              if ( (*(_DWORD *)(*((_QWORD *)v7 + 27) + 4LL) & 0x4000) != 0 )
              {
                (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v6 + 45) + 24LL))(*((_QWORD *)v6 + 45), v442);
                ColorSpace = CVisual::GetColorSpace(v7);
                v154 = v373;
                if ( ColorSpace != *(_DWORD *)(v153 + 8) )
                  v154 = 1;
                v373 = v154;
              }
              v155 = CWindowNode::IsOfType;
              v156 = CLayerVisual::IsOfType;
              v157 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
              if ( v157 != CVisual::IsOfType && (char *)v157 != (char *)CSpriteVisual::IsOfType )
              {
                if ( (char *)v157 == (char *)CWindowNode::IsOfType )
                  v158 = CWindowNode::IsOfType(v7, 85LL, CWindowNode::IsOfType, CLayerVisual::IsOfType);
                else
                  v158 = (char *)v157 == (char *)CLayerVisual::IsOfType
                       ? CLayerVisual::IsOfType(v7, 85LL)
                       : ((__int64 (__fastcall *)(CVisual *, __int64, _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD)))v157)(
                           v7,
                           85LL,
                           CWindowNode::IsOfType,
                           CLayerVisual::IsOfType);
                if ( v158 )
                {
                  v159 = *(bool (__fastcall **)(CLayerVisual *))(*(_QWORD *)v7 + 176LL);
                  v160 = v159 == CLayerVisual::HasNonDefaultTreeEffectInternal
                       ? CLayerVisual::HasNonDefaultTreeEffectInternal(v7)
                       : v159(v7);
                  if ( v160 || *((_QWORD *)v7 + 65) )
                    HIBYTE(v372) = 1;
                }
              }
              if ( v133 < 1.0 )
              {
                v161 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v133 - 1.0)) & _xmm);
                if ( v161 >= 0.0000011920929 )
                {
                  v162 = *((_QWORD *)v7 + 9);
                  if ( (v162 & 2) != 0 )
                    v162 = *(_QWORD *)(v162 & 0xFFFFFFFFFFFFFFFCuLL);
                  else
                    LODWORD(v162) = v162 & 1;
                  if ( !(_DWORD)v162 && (*((_BYTE *)v7 + 92) & 1) != 0 && *((_DWORD *)v6 + 65) != 4
                    || *((_DWORD *)v6 + 66) == 1
                    || *((_DWORD *)v7 + 25) == 1 )
                  {
                    *(_DWORD *)&v364[4] = 1;
                  }
                  else
                  {
                    *(_DWORD *)&v364[4] = 2;
                    if ( EventEnabled(
                           Microsoft_Windows_Dwm_Core_Provider_Context,
                           &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
                    {
                      v163 = (unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)v7 + 72)) == 0;
                      v164 = HIDWORD(v371);
                      if ( !v163 )
                      {
                        v164 = HIDWORD(v371) | 0x20;
                        HIDWORD(v371) |= 0x20u;
                      }
                      if ( (*((_BYTE *)v7 + 92) & 1) == 0 )
                        HIDWORD(v371) = v164 | 0x40;
                    }
                  }
                }
              }
              if ( (*(_DWORD *)(*((_QWORD *)v7 + 27) + 4LL) & 0x2000) != 0 )
                *(_DWORD *)&v364[8] = CVisual::GetResampleMode((__int64)v7);
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v364) & _xmm) < 0.0000011920929
                || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v365) & _xmm) < 0.0000011920929 )
              {
                if ( !qword_1802D6428 || !CDisplaySet::NeedsDesktopMoves(qword_1802D6428) )
                {
                  *v358 = 0;
                  goto LABEL_730;
                }
                CVisual::ClearAllMoveTransformsInSubtree(v7);
                if ( !*((_QWORD *)v6 + 846) )
                  *((_QWORD *)v6 + 846) = v7;
              }
              v165 = (struct _LIST_ENTRY *)&v370[4];
              v166 = *(_QWORD *)&v354[7];
              v167 = (CVisual *)*((_QWORD *)v6 + 395);
              if ( !(_BYTE)v372 )
                v165 = 0LL;
              v168 = -2003292412;
              if ( *(_BYTE *)(*(_QWORD *)&v354[7] + 32LL) )
              {
                v169 = (struct _LIST_ENTRY *)((char *)v167 + 288);
              }
              else
              {
                v170 = CVisual::GetTreeDataListHead(v167);
                if ( !v170 )
                  goto LABEL_360;
                v171 = v170->Flink;
                if ( v170->Flink == v170 )
                  goto LABEL_360;
                while ( 1 )
                {
                  v169 = v171 - 14;
                  if ( v171[2].Flink == (struct _LIST_ENTRY *)v166 )
                    break;
                  v171 = v171->Flink;
                  if ( v171 == v170 )
                    goto LABEL_360;
                }
              }
              if ( !v169 )
              {
LABEL_360:
                v187 = v350[0];
                goto LABEL_361;
              }
              v172 = *((_QWORD *)v167 + 27);
              v173 = 0;
              v168 = 0;
              v174 = 0LL;
              v175 = *(struct _LIST_ENTRY **)(*((_QWORD *)v167 + 2) + 384LL);
              if ( (*(_DWORD *)(v172 + 4) & 0x10000000) != 0 )
              {
                v176 = *(_DWORD *)(v172 + 12);
                v177 = (int *)(v172 + 12);
                if ( (v176 & 0x7F000000) != 0x4000000 )
                {
                  do
                  {
                    v177 = (int *)((char *)v177 + (v176 & 0xFFFFFF) + 4);
                    v176 = *v177;
                  }
                  while ( (*v177 & 0x7F000000) != 0x4000000 );
                }
                v389 = *(CVisualReferenceController ***)(v177 + 1);
                if ( v389 )
                {
                  v178 = *v389;
                  v179 = *(struct CVisual *(__fastcall **)(CVisualReferenceController *))(*(_QWORD *)*v389 + 152LL);
                  if ( v179 == CVisualReferenceController::GetVisualNoRef )
                    VisualNoRef = CVisualReferenceController::GetVisualNoRef(v178);
                  else
                    VisualNoRef = (CVisual *)((__int64 (__fastcall *)(CVisualReferenceController *, struct CVisual *(__fastcall *)(CVisualReferenceController *), _QWORD, __int64 (__fastcall *)(_QWORD, _QWORD)))v179)(
                                               v178,
                                               CVisualReferenceController::GetVisualNoRef,
                                               v155,
                                               v156);
                  if ( !VisualNoRef || ((__int64)v169[1].Flink & 4) != 0 && v169[13].Blink == v175 )
                  {
                    v166 = *(_QWORD *)&v354[7];
                  }
                  else
                  {
                    v173 = 1;
                    TreeData = CVisual::FindTreeData(VisualNoRef, *(const struct CVisualTree **)&v354[7]);
                    v166 = *(_QWORD *)&v354[7];
                    v174 = TreeData;
                    if ( TreeData )
                      goto LABEL_347;
                  }
                }
              }
              if ( v167 != *(CVisual **)(v166 + 24) )
              {
                v174 = 0LL;
                v182 = (CVisual *)*((_QWORD *)v167 + 10);
                if ( *(_BYTE *)(v166 + 32) )
                {
                  v174 = (struct _LIST_ENTRY *)((char *)v182 + 288);
                }
                else
                {
                  v183 = CVisual::GetTreeDataListHead(v182);
                  if ( v183 )
                  {
                    v184 = v183->Flink;
                    if ( v183->Flink != v183 )
                    {
                      while ( v184[2].Flink != (struct _LIST_ENTRY *)v166 )
                      {
                        v184 = v184->Flink;
                        if ( v184 == v183 )
                          goto LABEL_346;
                      }
                      v174 = v184 - 14;
                    }
                  }
                }
              }
LABEL_346:
              if ( !v174 )
              {
                v185 = 1LL;
LABEL_349:
                if ( v169[7].Blink < (struct _LIST_ENTRY *)v185 )
                {
                  updated = CVisual::UpdateWorldTransform(
                              (CComposition **)v167,
                              (CVisual **)v166,
                              (struct CTreeData *)v169,
                              v173,
                              (const struct CTreeData *)v174);
                  v168 = updated;
                  if ( updated < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x6ADu);
                }
                if ( v168 >= 0 )
                {
                  if ( !v169[7].Blink )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x70u);
                    v168 = -2003292412;
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x61Du);
                    v4 = -2003292412;
                    goto LABEL_358;
                  }
                  v366 = *(_OWORD *)&v169[2].Blink;
                  v367 = *(_OWORD *)&v169[3].Blink;
                  v368 = *(_OWORD *)&v169[4].Blink;
                  v369 = *(_OWORD *)&v169[5].Blink;
                  *(_DWORD *)v370 = v169[6].Blink;
                  v187 = ((__int64)v169[1].Flink & 2) != 0;
                  if ( v165 )
                  {
                    v188 = v169[7].Flink;
                    *v165 = *v188;
                    v165[1] = v188[1];
                    v165[2] = v188[2];
                    v165[3] = v188[3];
                    LODWORD(v165[4].Flink) = v188[4].Flink;
                  }
                  v7 = v352;
                  v82 = v356;
                  v168 = 0;
                  v166 = *(_QWORD *)&v354[7];
LABEL_361:
                  v4 = v168;
                  if ( v168 >= 0 )
                  {
                    if ( v187 || *(CVisual **)(v166 + 24) == v7 )
                    {
                      v6 = v351;
                      if ( !*((_BYTE *)v351 + 6604) )
                        CMILMatrix::Multiply((CMILMatrix *)&v366, (CDrawingContext *)((char *)v351 + 6536));
                      v189 = CDrawingContext::PushTransformInternal(v351, v7, (const struct CMILMatrix *)&v366, 0, 1);
                      v4 = v189;
                      if ( v189 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v189, 0x21CCu);
                        goto LABEL_730;
                      }
                    }
                    else
                    {
                      v6 = v351;
                      if ( !*((_BYTE *)v351 + 6604) )
                      {
                        if ( *(_DWORD *)v82 )
                          CWatermarkStack<CMILMatrix,8,2,8>::Top(v82, &v366, v155, v156);
                        else
                          CMILMatrix::SetToIdentity((CMILMatrix *)&v366);
                      }
                    }
                    if ( (_BYTE)v372 && !*((_BYTE *)v6 + 6604) )
                      CMILMatrix::Multiply((CMILMatrix *)&v370[4], (CDrawingContext *)((char *)v6 + 6536));
                    v190 = 0LL;
                    v191 = 0;
                    v192 = 0;
                    if ( !*((_QWORD *)v7 + 30) )
                      goto LABEL_445;
                    if ( SBYTE1(v371) >> 6 )
                    {
                      v193 = SBYTE1(v371) >> 6 == 1;
                    }
                    else
                    {
                      v193 = 0;
                      v194 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[12] - 0.0)) & _xmm);
                      if ( v194 < 0.000081380211 )
                      {
                        v195 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[28] - 0.0)) & _xmm);
                        if ( v195 < 0.000081380211 )
                        {
                          v196 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[60] - 0.0)) & _xmm);
                          if ( v196 < 0.000081380211 )
                            goto LABEL_388;
                        }
                        if ( v194 < 0.000081380211 )
                        {
                          v197 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[28] - 0.0)) & _xmm);
                          if ( v197 < 0.000081380211 )
                          {
                            v198 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[36] - 0.0)) & _xmm);
                            if ( v198 < 0.000081380211 )
                            {
                              v199 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[40] - 0.0)) & _xmm);
                              if ( v199 < 0.000081380211 )
                              {
                                v200 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[44] - 0.0)) & _xmm);
                                if ( v200 < 0.000081380211
                                  || (v201 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[44] - 1.0)) & _xmm),
                                      v201 < 0.000081380211) )
                                {
                                  v202 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[48] - 0.0)) & _xmm);
                                  if ( v202 < 0.000081380211 )
                                  {
                                    v203 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[60] - 0.0)) & _xmm);
                                    if ( v203 < 0.000081380211 )
                                    {
LABEL_388:
                                      v204 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v370[16]) & _xmm);
                                      v205 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v370[32]) & _xmm)
                                                   * 61440.0)
                                           + (float)(v204 * 61440.0);
                                      v206 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v370[64]) & _xmm);
                                      v207 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v205 + v206) - 1.0)) & _xmm);
                                      v193 = v207 < 0.000081380211;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      BYTE1(v371) = BYTE1(v371) & 0x3F | ((v193 << 7) - 64);
                    }
                    if ( !v193
                      || (v208 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[8] - 0.0)) & _xmm),
                          v208 >= 0.000081380211)
                      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[20] - 0.0)) & _xmm) >= 0.000081380211 )
                    {
                      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[4] - 0.0)) & _xmm) >= 0.000081380211
                        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v370[24] - 0.0)) & _xmm) >= 0.000081380211 )
                      {
                        goto LABEL_445;
                      }
                    }
                    v4 = 0;
                    v386 = 0LL;
                    v209 = 0LL;
                    v387 = 0;
                    v361 = 0LL;
                    v362 = 0;
                    ShapeData = CGeometry::GetShapeData(
                                  *((CGeometry **)v352 + 30),
                                  (const struct D2D_SIZE_F *)((char *)v352 + 132),
                                  (struct CShapePtr *)&v361);
                    v211 = ShapeData;
                    if ( ShapeData < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeData, 0xD7Du);
                    }
                    else
                    {
                      v212 = v361;
                      v211 = -2003292412;
                      if ( v361 )
                      {
                        v213 = *(__int64 (__fastcall **)(CRectanglesShape *, __m128 *, _QWORD))(*(_QWORD *)v361 + 32LL);
                        if ( (char *)v213 == (char *)CRectanglesShape::GetTightBounds )
                        {
                          TightBounds = CRectanglesShape::GetTightBounds((__int64)v361, (__int64)&v419, 0LL);
                        }
                        else if ( v213 == CRegionShape::GetTightBounds )
                        {
                          TightBounds = CRegionShape::GetTightBounds(v361, &v419, 0LL);
                        }
                        else
                        {
                          TightBounds = v213(v361, &v419, 0LL);
                        }
                        v211 = TightBounds;
                        if ( TightBounds < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x111u);
                        v212 = v361;
                      }
                      if ( v211 >= 0 )
                      {
                        LOBYTE(v190) = v362;
                        v215 = 0LL;
                        v387 = v362;
                        v209 = v212;
                        v361 = 0LL;
                        v362 = 0;
                        v386 = v212;
LABEL_410:
                        if ( v211 != -2003304438 )
                          v4 = v211;
                        if ( v362 && v215 )
                          (**(void (__fastcall ***)(CRectanglesShape *, __int64))v215)(v215, 1LL);
                        if ( v4 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x21E7u);
                          CShapePtr::Release(&v386);
                          v7 = v352;
                          v6 = v351;
                          goto LABEL_730;
                        }
                        if ( v209 )
                        {
                          v216 = *(char (__fastcall **)(CRegionShape *, unsigned int *))(*(_QWORD *)v212 + 40LL);
                          if ( v216 == CRectanglesShape::IsRectangles )
                            IsRectangles = CRectanglesShape::IsRectangles(v212, &v357);
                          else
                            IsRectangles = v216 == CRegionShape::IsRectangles
                                         ? CRegionShape::IsRectangles(v212, &v357)
                                         : v216(v212, &v357);
                          if ( IsRectangles && v357 == 1 )
                          {
                            v218 = *(__int64 (__fastcall **)(CRegionShape *, __m128 *, _BYTE *))(*(_QWORD *)v209 + 32LL);
                            if ( (char *)v218 == (char *)CRectanglesShape::GetTightBounds )
                            {
                              v219 = CRectanglesShape::GetTightBounds(
                                       (__int64)v209,
                                       (__int64)&v416,
                                       (CMILMatrix *)&v370[4]);
                            }
                            else if ( (char *)v218 == (char *)CRegionShape::GetTightBounds )
                            {
                              v219 = CRegionShape::GetTightBounds(v209, &v416, (__int64)&v370[4]);
                            }
                            else
                            {
                              v219 = v218(v209, &v416, &v370[4]);
                            }
                            if ( v219 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v219, 0x111u);
                            if ( v416.m128_f32[2] > v416.m128_f32[0] && v416.m128_f32[3] > v416.m128_f32[1] )
                            {
                              v220 = *((_QWORD *)v351 + 45);
                              v416.m128_f32[1] = v416.m128_f32[1] + -0.015625;
                              v416.m128_f32[0] = v416.m128_f32[0] + -0.015625;
                              v416.m128_f32[2] = v416.m128_f32[2] + 0.015625;
                              v416.m128_f32[3] = v416.m128_f32[3] + 0.015625;
                              (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v220 + 56LL))(v220, v425);
                              v221 = (float)v425[1];
                              v222 = (float)v427;
                              if ( (float)v426 <= (float)v425[0]
                                || v222 <= v221
                                || (float)v425[0] >= v416.m128_f32[0]
                                && v221 >= v416.m128_f32[1]
                                && v416.m128_f32[2] >= (float)v426
                                && v416.m128_f32[3] >= v222 )
                              {
                                v192 = 2;
                                v191 = 1;
                              }
                            }
                          }
                        }
                        if ( (_BYTE)v190 && v209 )
                        {
                          v223 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v209;
                          if ( v223 == CRectanglesShape::`scalar deleting destructor' )
                            CRectanglesShape::`scalar deleting destructor'(v209, 1);
                          else
                            v223(v209, 1);
                        }
                        v7 = v352;
                        v190 = 0LL;
LABEL_445:
                        v224 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v7 + 48LL);
                        if ( v224 != CVisual::IsOfType )
                        {
                          if ( (char *)v224 == (char *)CSpriteVisual::IsOfType
                            || ((char *)v224 != (char *)CWindowNode::IsOfType
                              ? ((char *)v224 != (char *)CLayerVisual::IsOfType
                               ? (v225 = v224((__int64)v7, 138))
                               : (v225 = CLayerVisual::IsOfType(v7, 138LL)))
                              : (v225 = CWindowNode::IsOfType(v7, 138LL, v155, v156)),
                                v225) )
                          {
                            v226 = *((_QWORD *)v7 + 27);
                            if ( (*(_DWORD *)(v226 + 4) & 0x100) != 0 )
                            {
                              v227 = *(_DWORD *)(v226 + 12);
                              v228 = (int *)(v226 + 12);
                              if ( (v227 & 0x7F000000) != 0x18000000 )
                              {
                                do
                                {
                                  v228 = (int *)((char *)v228 + (v227 & 0xFFFFFF) + 4);
                                  v227 = *v228;
                                }
                                while ( (*v228 & 0x7F000000) != 0x18000000 );
                              }
                              v390 = *(_QWORD *)(v228 + 1);
                              if ( v390 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v390 + 192LL))(v390) )
                                v192 = 5;
                            }
                          }
                        }
                        if ( HIBYTE(v372) )
                          v192 = 5;
                        v229 = *(_BYTE *)(*(_QWORD *)&v354[7] + 32LL);
                        if ( v229 )
                        {
                          v230 = (int *)((char *)v7 + 288);
                        }
                        else
                        {
                          v231 = CVisual::GetTreeDataListHead(v7);
                          if ( v231 )
                          {
                            v232 = v231->Flink;
                            if ( v231->Flink != v231 )
                            {
                              while ( v232[2].Flink != *(struct _LIST_ENTRY **)&v354[7] )
                              {
                                v232 = v232->Flink;
                                if ( v232 == v231 )
                                  goto LABEL_471;
                              }
                              v230 = (int *)&v232[-14];
                            }
                          }
                        }
LABEL_471:
                        if ( v7 != *(CVisual **)(*(_QWORD *)&v354[7] + 24LL) && !v229 )
                        {
                          v233 = CVisual::GetTreeDataListHead(*((CVisual **)v7 + 10));
                          if ( v233 )
                          {
                            for ( i = v233->Flink; i != v233; i = i->Flink )
                            {
                              if ( i[2].Flink == *(struct _LIST_ENTRY **)&v354[7] )
                                break;
                            }
                          }
                        }
                        v235 = CCpuClippingData::Update(v230 + 34, *(__int64 *)&v354[7], (__int64)v7, v192, v191);
                        v4 = v235;
                        if ( v235 < 0 )
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v235, 0x713u);
                        if ( v4 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x221Bu);
                          v6 = v351;
                          goto LABEL_730;
                        }
                        if ( *(_BYTE *)(*(_QWORD *)&v354[7] + 32LL) )
                        {
                          v237 = (struct _LIST_ENTRY *)((char *)v7 + 288);
                        }
                        else
                        {
                          v238 = CVisual::GetTreeDataListHead(v7);
                          if ( v238 )
                          {
                            v239 = v238->Flink;
                            if ( v238->Flink != v238 )
                            {
                              while ( v239[2].Flink != *(struct _LIST_ENTRY **)&v354[7] )
                              {
                                v239 = v239->Flink;
                                if ( v239 == v238 )
                                  goto LABEL_488;
                              }
                              v237 = v239 - 14;
                            }
                          }
                        }
LABEL_488:
                        Blink = (int)v237[8].Blink;
                        v241 = v355;
                        if ( !*((_BYTE *)v351 + 3136) && !*((_QWORD *)v351 + 846) )
                        {
                          if ( Blink == 5 )
                          {
                            if ( *(_BYTE *)(*v355 + 80LL * (unsigned int)(*((_DWORD *)v355 + 6) - 1)) )
                            {
                              CScopedClipStack::GetTopGpuClipInScope(v355, 1, (__int64)v440);
                              v242 = CDrawingContext::PushClippingScope(v351, v7, 0, 0LL, 1);
                              v4 = v242;
                              if ( v242 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v242, 0x2229u);
                                goto LABEL_763;
                              }
                              v243 = CDrawingContext::PushClipRectForNode((__int64)v351, (__int64)v7, v440, 1);
                              v4 = v243;
                              if ( v243 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v243, 0x222Bu);
LABEL_763:
                                v6 = v351;
                                goto LABEL_730;
                              }
                            }
                          }
                          else if ( Blink == 3 )
                          {
                            CScopedClipStack::GetTopGpuClipInScope(v355, 1, (__int64)v436);
                            v244 = CDrawingContext::PushClippingScope(
                                     v351,
                                     v7,
                                     1,
                                     (const struct CMILMatrix *)&v370[4],
                                     1);
                            v4 = v244;
                            if ( v244 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v244, 0x223Au);
                              goto LABEL_763;
                            }
                            v245 = CDrawingContext::PushClipRectForNode((__int64)v351, (__int64)v7, v436, 1);
                            v4 = v245;
                            if ( v245 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v245, 0x223Cu);
                              goto LABEL_763;
                            }
                          }
                        }
                        if ( ((_BYTE)v372
                           || __PAIR16__(BYTE1(v372), 0) != BYTE2(v372)
                           || __PAIR16__(HIBYTE(v372), 0) != v373
                           || *(_QWORD *)&v364[4]
                           || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v365 - 1.0)) & _xmm) >= 0.0000011920929)
                          && (!*(_DWORD *)(*((_QWORD *)v351 + 4) + 1192LL)
                           || *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() != 2) )
                        {
                          if ( *(_DWORD *)v356 )
                            v246 = (CMILMatrix *)(*((_QWORD *)v356 + 2) + 68LL * (unsigned int)(*(_DWORD *)v356 - 1));
                          else
                            v246 = (CMILMatrix *)&CMILMatrix::Identity;
                          CMILMatrix::Transform3DBoundsHelper<1>(v246);
                          v247 = *(_DWORD *)v356;
                          v432 = v439;
                          v410 = 0;
                          v431 = v438;
                          if ( v247 )
                          {
                            v248 = (unsigned int)(v247 - 1);
                            v249 = *((_QWORD *)v356 + 2);
                            v409[0] = *(_OWORD *)(68 * v248 + v249);
                            v409[1] = *(_OWORD *)(68 * v248 + v249 + 16);
                            v409[2] = *(_OWORD *)(68 * v248 + v249 + 32);
                            v409[3] = *(_OWORD *)(68 * v248 + v249 + 48);
                            v410 = *(_DWORD *)(68 * v248 + v249 + 64);
                          }
                          else
                          {
                            CMILMatrix::SetToIdentity((CMILMatrix *)v409);
                          }
                          v250 = *(__int64 (__fastcall **)(CVisual *, _OWORD *, __int128 *, __int128 *, __int128 *, __int64 *))(*(_QWORD *)v7 + 168LL);
                          if ( (char *)v250 == (char *)CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds )
                          {
                            v251 = CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                                     v7,
                                     (CMILMatrix *)v409,
                                     &v433,
                                     (__int64)&v431,
                                     &v430,
                                     (__int128 *)v422);
                          }
                          else if ( (char *)v250 == (char *)CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds )
                          {
                            v251 = CLayerVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                                     (CDropShadow **)v7,
                                     (__int64)v409,
                                     (__int64)&v433,
                                     (__int64)&v431,
                                     &v430,
                                     v422);
                          }
                          else
                          {
                            v251 = v250(v7, v409, &v433, &v431, &v430, v422);
                          }
                          v4 = v251;
                          if ( v251 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v251, 0xFB0u);
                          else
                            *(_OWORD *)v418 = *(_OWORD *)v422;
                          if ( v4 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2255u);
                            goto LABEL_763;
                          }
                          v252 = CDrawingContext::PushEffects(
                                   v351,
                                   (__int64)&v363,
                                   (__int64)v418,
                                   (__int64)v421,
                                   (__int64)v354);
                          v4 = v252;
                          if ( v252 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v252, 0x225Eu);
                            goto LABEL_763;
                          }
                          if ( v354[0] )
                          {
                            v6 = v351;
                            *v358 = 0;
                            goto LABEL_730;
                          }
                          if ( *(_BYTE *)(*(_QWORD *)&v354[7] + 32LL) )
                          {
                            v253 = (struct _LIST_ENTRY *)((char *)v7 + 288);
                          }
                          else
                          {
                            v254 = CVisual::GetTreeDataListHead(v7);
                            if ( v254 )
                            {
                              v256 = v254->Flink;
                              if ( v254->Flink != v254 )
                              {
                                while ( v256[2].Flink != v255 )
                                {
                                  v256 = v256->Flink;
                                  if ( v256 == v254 )
                                    goto LABEL_534;
                                }
                                v253 = v256 - 14;
                              }
                            }
                          }
LABEL_534:
                          Blink = (int)v253[8].Blink;
                        }
                        if ( *((_BYTE *)v351 + 3136) || *((_QWORD *)v351 + 846) || ((Blink - 2) & 0xFFFFFFFD) != 0 )
                        {
                          v6 = v351;
                          goto LABEL_668;
                        }
                        v257 = *((_DWORD *)v241 + 6);
                        if ( v257
                          && *(_DWORD *)(*v241 + 80LL * (unsigned int)(v257 - 1) + 4)
                          && (v258 = *((_DWORD *)v241 + 516)) != 0 )
                        {
                          v259 = *(_OWORD *)(v241[260] + 16LL * (unsigned int)(v258 - 1));
                        }
                        else
                        {
                          v259 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                        }
                        v415 = v259;
                        if ( v257 && *(_DWORD *)(*v241 + 80LL * (unsigned int)(v257 - 1) + 8) )
                          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                            (__int64)&v415,
                            120LL * (unsigned int)(*((_DWORD *)v241 + 214) - 1) + 96 + v241[104]);
                        if ( Blink == 2 )
                        {
                          v190 = (__int128 *)(80LL * (unsigned int)(*((_DWORD *)v241 + 6) - 1) + *v241 + 12);
                        }
                        else if ( Blink == 4 )
                        {
                          v190 = &v366;
                        }
                        v260 = v351;
                        v261 = 0;
                        v262 = 0;
                        v4 = 0;
                        v263 = 0;
                        v264 = 0;
                        if ( *((_DWORD *)v351 + 158) )
                        {
                          v265 = (_QWORD *)((char *)v351 + 608);
                          while ( 1 )
                          {
                            v266 = CD2DLayer::ApplyState(*(CD2DLayer **)(*v265 + 8LL * v264), v260);
                            v4 = v266;
                            if ( v266 < 0 )
                              break;
                            v260 = v351;
                            ++v263;
                            if ( ++v264 >= *((_DWORD *)v351 + 158) )
                              goto LABEL_554;
                          }
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v266, 0x1846u);
                        }
                        else
                        {
LABEL_554:
                          v265 = (_QWORD *)((char *)v260 + 608);
                          *((_DWORD *)v260 + 158) = 0;
                          DynArrayImpl<0>::ShrinkToSize((char *)v260 + 608, 8LL);
                        }
                        if ( v263 < *((_DWORD *)v351 + 158) && v263 )
                          DynArray<CD2DLayer *,0>::ShiftLeft(v265, v263);
                        if ( v4 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1828u);
                          v6 = v351;
                        }
                        else
                        {
                          v6 = v351;
                          if ( *((_BYTE *)v351 + 6826) )
                            *(_WORD *)((char *)v351 + 6825) = 1;
                        }
                        if ( v4 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1294u);
                          v7 = v352;
                          goto LABEL_592;
                        }
                        v268 = *((_DWORD *)v6 + 113);
                        v4 = 0;
                        v7 = v352;
                        v269 = *((_DWORD *)v6 + 112);
                        v419.m128_i32[0] = 3;
                        v419.m128_u64[1] = (unsigned __int64)v352;
                        lpMem = 0LL;
                        if ( v269 != v268 )
                          goto LABEL_574;
                        v270 = 2LL * v268;
                        if ( v270 > 0xFFFFFFFF )
                        {
                          v4 = -2147024362;
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
                        }
                        else
                        {
                          v271 = 2 * v268;
                          if ( (unsigned int)v270 <= 0x40 )
                            v271 = 64;
                          v4 = WPF::HrMalloc((WPF *)0x10, v271, (unsigned __int64)&lpMem, v267);
                          if ( v4 < 0 )
                          {
                            v277 = 84;
                          }
                          else
                          {
                            v4 = 0;
                            v272 = 16LL * *((unsigned int *)v351 + 112);
                            if ( v272 <= 0xFFFFFFFF )
                            {
                              v273 = lpMem;
                              memcpy_0(lpMem, *((const void **)v351 + 58), (unsigned int)v272);
                              operator delete(*((void **)v351 + 58));
                              v274 = v351;
                              *((_DWORD *)v351 + 113) = v271;
                              v6 = v274;
                              *((_QWORD *)v274 + 58) = v273;
                              v269 = *((_DWORD *)v274 + 112);
LABEL_574:
                              *(__m128 *)(*((_QWORD *)v6 + 58) + 16LL * v269) = v419;
                              v275 = *((_DWORD *)v6 + 118);
                              v276 = *((_DWORD *)v6 + 112) + 1;
                              *((_DWORD *)v6 + 112) = v276;
                              if ( v275 <= v276 )
                                v275 = v276;
                              *((_DWORD *)v6 + 118) = v275;
                              goto LABEL_581;
                            }
                            v4 = -2147024362;
                            v277 = 86;
                          }
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v277);
                          if ( lpMem )
                            HeapFree(WPF::g_processHeap, 0, lpMem);
                        }
                        v6 = v351;
LABEL_581:
                        if ( v4 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1299u);
                        }
                        else
                        {
                          v414 = 0;
                          v261 = 1;
                          v411[0] = 1;
                          v412 = 0LL;
                          if ( v190 )
                          {
                            v278 = *v190;
                            v279 = v190[1];
                            v414 = *((_DWORD *)v190 + 16);
                            v413[0] = v278;
                            v280 = v190[2];
                            v413[1] = v279;
                            v281 = v190[3];
                            v413[2] = v280;
                            v413[3] = v281;
                          }
                          else
                          {
                            CMILMatrix::SetToIdentity((CMILMatrix *)v413);
                          }
                          v282 = DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet(v355, v411);
                          v4 = v282;
                          if ( v282 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v282, 0x3Cu);
                          if ( v4 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x129Du);
                          else
                            v262 = 1;
                        }
LABEL_592:
                        if ( v4 < 0 )
                        {
                          if ( v262 )
                            --*((_DWORD *)v6 + 258);
                          if ( v261 )
                            CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                              (int *)v6 + 112,
                              0LL);
                          v348 = 8840;
                          goto LABEL_665;
                        }
                        v284 = *((_DWORD *)v6 + 64);
                        v419.m128_u64[1] = (unsigned __int64)v7;
                        v285 = 0;
                        v286 = (unsigned int *)((char *)v6 + 448);
                        v419.m128_i32[0] = 1;
                        v287 = *((_DWORD *)v6 + 113);
                        v4 = 0;
                        v288 = *((_DWORD *)v6 + 112);
                        v377 = 0LL;
                        if ( v288 != v287 )
                          goto LABEL_608;
                        v289 = 2LL * v287;
                        if ( v289 > 0xFFFFFFFF )
                        {
                          v4 = -2147024362;
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
                          goto LABEL_611;
                        }
                        v290 = 2 * v287;
                        if ( (unsigned int)v289 <= 0x40 )
                          v290 = 64;
                        v4 = WPF::HrMalloc((WPF *)0x10, v290, (unsigned __int64)&v377, v283);
                        if ( v4 < 0 )
                        {
                          v298 = 84;
                        }
                        else
                        {
                          v291 = 16LL * *v286;
                          v4 = 0;
                          if ( v291 <= 0xFFFFFFFF )
                          {
                            v292 = v377;
                            memcpy_0(v377, *((const void **)v286 + 2), (unsigned int)v291);
                            operator delete(*((void **)v286 + 2));
                            v288 = *v286;
                            *((_QWORD *)v286 + 2) = v292;
                            v286[1] = v290;
LABEL_608:
                            *(__m128 *)(*((_QWORD *)v286 + 2) + 16LL * v288) = v419;
                            v293 = v286[6];
                            v294 = *v286 + 1;
                            *v286 = v294;
                            if ( v293 <= v294 )
                              v293 = v294;
                            v286[6] = v293;
                            goto LABEL_611;
                          }
                          v4 = -2147024362;
                          v298 = 86;
                        }
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v298);
                        if ( v377 )
                          HeapFree(WPF::g_processHeap, 0, v377);
LABEL_611:
                        if ( v4 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1238u);
                          goto LABEL_660;
                        }
                        v285 = 1;
                        if ( v284 )
                        {
                          v295 = 0x7FFFFFFF;
                          v296 = *(float *)&v415 - 0.5;
                          if ( (float)(*(float *)&v415 - 0.5) < -2147483600.0 )
                          {
                            v297 = 0x80000000;
                          }
                          else if ( v296 >= 2147483600.0 )
                          {
                            v297 = 0x7FFFFFFF;
                          }
                          else
                          {
                            v297 = (int)ceilf_0(v296);
                          }
                          v299 = *((float *)&v415 + 1) - 0.5;
                          v300 = (float)v297;
                          if ( (float)(*((float *)&v415 + 1) - 0.5) < -2147483600.0 )
                          {
                            v301 = 0x80000000;
                          }
                          else if ( v299 >= 2147483600.0 )
                          {
                            v301 = 0x7FFFFFFF;
                          }
                          else
                          {
                            v301 = (int)ceilf_0(v299);
                          }
                          v302 = *((float *)&v415 + 2) - 0.5;
                          v303 = (float)v301;
                          if ( (float)(*((float *)&v415 + 2) - 0.5) < -2147483600.0 )
                          {
                            v304 = 0x80000000;
                          }
                          else if ( v302 >= 2147483600.0 )
                          {
                            v304 = 0x7FFFFFFF;
                          }
                          else
                          {
                            v304 = (int)ceilf_0(v302);
                          }
                          v305 = *((float *)&v415 + 3) - 0.5;
                          v306 = (float)v304;
                          if ( (float)(*((float *)&v415 + 3) - 0.5) < -2147483600.0 )
                          {
                            v295 = 0x80000000;
                          }
                          else if ( v305 < 2147483600.0 )
                          {
                            v307 = (float)(int)ceilf_0(v305);
                            goto LABEL_637;
                          }
                          v307 = (float)v295;
                        }
                        else
                        {
                          LODWORD(v300) = v415;
                          v303 = *((float *)&v415 + 1);
                          v306 = *((float *)&v415 + 2);
                          v307 = *((float *)&v415 + 3);
                        }
LABEL_637:
                        v308 = v355;
                        v418[0] = __PAIR64__(LODWORD(v303), LODWORD(v300));
                        v4 = 0;
                        v309 = *((_DWORD *)v355 + 517);
                        v310 = *((_DWORD *)v355 + 516);
                        v418[1] = __PAIR64__(LODWORD(v307), LODWORD(v306));
                        v378 = 0LL;
                        if ( v310 == v309 )
                        {
                          v311 = 2LL * v309;
                          if ( v311 > 0xFFFFFFFF )
                          {
                            v4 = -2147024362;
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_650:
                            if ( v4 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xE7u);
                            }
                            else
                            {
                              v317 = 10LL * (unsigned int)(*((_DWORD *)v308 + 6) - 1);
                              ++*(_DWORD *)(*v308 + 8 * v317 + 4);
                            }
                            if ( v4 >= 0 )
                            {
                              v6 = v351;
                              *((_BYTE *)v351 + 6825) = 1;
LABEL_661:
                              if ( v4 < 0 )
                              {
                                if ( v285 )
                                  CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                                    (int *)v286,
                                    0LL);
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2289u);
                                v7 = v352;
                                goto LABEL_730;
                              }
                              v7 = v352;
                              LODWORD(v190) = 0;
LABEL_668:
                              if ( *((_QWORD *)v6 + 846) )
                              {
                                CVisual::ExcludeFromVisibleRegion(v7, v421, v6);
                                goto LABEL_730;
                              }
                              if ( *((_BYTE *)v6 + 6828) )
                                CDrawingContext::UpdateMoveOptimizations(v6, v236, v421);
                              v319 = (char *)v6 + 3304;
                              v320 = 0LL;
                              v321 = *((_DWORD *)v6 + 826);
                              if ( v321 )
                                v320 = *((_QWORD *)v6 + 415) + 16LL * (unsigned int)(v321 - 1);
                              v322 = *(_BYTE *)(v320 + 8);
                              v323 = Windows::Foundation::Numerics::determinant(
                                       (Windows::Foundation::Numerics *)&v366,
                                       v236);
                              v324 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v323 - 0.0)) & _xmm);
                              if ( v324 >= 0.00000011920929 && _finite((float)(1.0 / v323)) )
                              {
                                LOBYTE(v190) = v323 < 0.0;
                                LOBYTE(v190) = (_DWORD)v190 == (float)((float)((float)((float)((float)(*((float *)&v366 + 3) * *(float *)&v367)
                                                                                             - (float)(*(float *)&v366 * *((float *)&v367 + 3)))
                                                                                     * *((float *)&v369 + 1))
                                                                             + (float)((float)((float)(*((float *)&v366 + 1) * *((float *)&v367 + 3))
                                                                                             - (float)(*((float *)&v366 + 3) * *((float *)&v367 + 1)))
                                                                                     * *(float *)&v369))
                                                                     + (float)((float)((float)(*(float *)&v366
                                                                                             * *((float *)&v367 + 1))
                                                                                     - (float)(*((float *)&v366 + 1)
                                                                                             * *(float *)&v367))
                                                                             * *((float *)&v369 + 3))) < 0.0;
                              }
                              else
                              {
                                v382 = v366;
                                v383 = DWORD2(v366);
                                v384 = v367;
                                v385 = DWORD2(v367);
                                Windows::Foundation::Numerics::cross(v402, &v382, &v384);
                                LOBYTE(v190) = v403 > 0.0;
                              }
                              if ( (*(_DWORD *)(*((_QWORD *)v7 + 27) + 4LL) & 0x8000000) == 0 )
                              {
                                v325 = *((_DWORD *)v7 + 25);
                                v326 = v379 && *((_DWORD *)v379 + 25) == 1;
                                v327 = *((_QWORD *)v352 + 9);
                                if ( (v327 & 2) != 0 )
                                  v327 = *(_QWORD *)(v327 & 0xFFFFFFFFFFFFFFFCuLL);
                                else
                                  LODWORD(v327) = v327 & 1;
                                v328 = (*(__int64 (**)(void))(*(_QWORD *)v352 + 176LL))();
                                if ( v325 == 1 )
                                  goto LABEL_688;
                                if ( !v326 )
                                {
                                  v7 = v352;
                                  goto LABEL_696;
                                }
                                if ( (_DWORD)v327 )
                                {
                                  v7 = v352;
                                }
                                else
                                {
LABEL_688:
                                  v7 = v352;
                                  if ( !v326 || !v328 )
                                    goto LABEL_696;
                                }
                                v6 = v351;
                              }
                              v400 = v7;
                              v401 = (char)v190;
                              v329 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                       v319,
                                       &v400);
                              v4 = v329;
                              if ( v329 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v329, 0x22A4u);
                                goto LABEL_730;
                              }
LABEL_696:
                              if ( !*((_BYTE *)v351 + 3136)
                                && !*((_QWORD *)v351 + 846)
                                && (*(_DWORD *)(*((_QWORD *)v7 + 27) + 4LL) & 0x10000) != 0 )
                              {
                                WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v7);
                                if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 356) )
                                {
                                  CScopedClipStack::GetTopGpuClipInScope(v355, 1, (__int64)v437);
                                  TopByReference = CMatrixStack::GetTopByReference(v356);
                                  CMILMatrix::Transform3DBoundsHelper<0>(
                                    TopByReference,
                                    (char *)WindowBackgroundTreatmentInternal + 144,
                                    v441);
                                  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                         v437,
                                         v441) )
                                  {
                                    v332 = 1;
                                    v333 = *((_BYTE *)WindowBackgroundTreatmentInternal + 359);
                                    if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 357)
                                      || !CWindowBackgroundTreatment::HasValidSource(
                                            WindowBackgroundTreatmentInternal,
                                            *((int (__fastcall ****)(const struct IRenderTarget *, GUID *, CHwDisplayRenderTarget **))v351
                                            + 45)) )
                                    {
                                      ImageSourceForEffectInput = CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
                                                                    (struct D2D_RECT_F *)WindowBackgroundTreatmentInternal,
                                                                    v351);
                                      v4 = ImageSourceForEffectInput;
                                      v332 = v333 == 0;
                                      if ( ImageSourceForEffectInput < 0 )
                                      {
                                        MilInstrumentationCheckHR_MaybeFailFast(
                                          0x14u,
                                          0LL,
                                          0,
                                          ImageSourceForEffectInput,
                                          0x22C7u);
                                        v7 = v352;
                                        v6 = v351;
                                        goto LABEL_730;
                                      }
                                    }
                                    if ( v333 )
                                    {
                                      FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(
                                        *(FRAME_TIME_INFO **)(*((_QWORD *)v351 + 4) + 376LL),
                                        v332);
                                      if ( !v332 )
                                        ++dword_1802D6300;
                                    }
                                    v335 = CMatrixStack::GetTopByReference(v356);
                                    CWindowBackgroundTreatment::SetWorldTransform(
                                      (__int64)WindowBackgroundTreatmentInternal,
                                      (__int64)v335,
                                      3);
                                    v7 = v352;
                                  }
                                }
                              }
                              v336 = *((_DWORD *)v7 + 25);
                              v337 = v379 && *((_DWORD *)v379 + 25) == 1;
                              if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v7 + 176LL))(v7) )
                                goto LABEL_719;
                              v338 = *((_QWORD *)v7 + 27);
                              if ( (*(_DWORD *)(v338 + 4) & 0x8000000) == 0 )
                                goto LABEL_718;
                              v339 = *(_DWORD *)(v338 + 12);
                              v340 = (int *)(v338 + 12);
                              if ( (v339 & 0x7F000000) != 0x5000000 )
                              {
                                do
                                {
                                  v340 = (int *)((char *)v340 + (v339 & 0xFFFFFF) + 4);
                                  v339 = *v340;
                                }
                                while ( (*v340 & 0x7F000000) != 0x5000000 );
                              }
                              v391 = *(_QWORD *)(v340 + 1);
                              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v391 + 48LL))(
                                     v391,
                                     55LL) )
                              {
LABEL_719:
                                v341 = 1;
                              }
                              else
                              {
LABEL_718:
                                v341 = 0;
                              }
                              if ( v336 == 1 )
                              {
                                if ( v337 )
                                {
                                  if ( !v341 )
                                    goto LABEL_723;
                                }
                                else if ( !(unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)v7 + 72)) )
                                {
                                  goto LABEL_723;
                                }
                                v6 = v351;
                                if ( !CVisual::HasBspPolygonList(v7) )
                                  goto LABEL_730;
                                v343 = CDrawingContext::DrawBspPolygonList(v351, v7, v379);
                                v4 = v343;
                                if ( v343 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v343, 0x2304u);
                                  goto LABEL_730;
                                }
                                ++*(_DWORD *)(v359 + 32);
                                goto LABEL_729;
                              }
LABEL_723:
                              v6 = v351;
                              v350[0] = 0;
                              if ( *((_DWORD *)v351 + 67) && v322 != (_BYTE)v190 )
                              {
                                if ( ((*(_DWORD *)(*((_QWORD *)v7 + 27) + 4LL) & 0x8000000) != 0
                                   || (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v7 + 176LL))(v7))
                                  && (_BYTE)v190
                                  && *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v319)
                                              + 8) != v322 )
                                {
LABEL_729:
                                  *v358 = 0;
                                  goto LABEL_730;
                                }
LABEL_757:
                                if ( !v350[0] )
                                  goto LABEL_730;
                                goto LABEL_729;
                              }
                              v344 = *(bool (__fastcall **)(CSpriteVisual *__hidden))(*(_QWORD *)v7 + 216LL);
                              if ( v344 == CVisual::HasContent )
                              {
                                v345 = *((_QWORD *)v7 + 31) != 0LL;
                              }
                              else
                              {
                                if ( v344 == CSpriteVisual::HasContent )
                                {
                                  if ( !*((_QWORD *)v7 + 31) && (*(_DWORD *)(*((_QWORD *)v7 + 27) + 4LL) & 0x100) == 0 )
                                    goto LABEL_730;
                                  goto LABEL_748;
                                }
                                v345 = v344(v7);
                              }
                              if ( !v345 )
                                goto LABEL_757;
LABEL_748:
                              v346 = *(__int64 (__fastcall **)(CVisual *, struct CDrawingContext *, unsigned __int64))(*(_QWORD *)v7 + 208LL);
                              if ( (char *)v346 == (char *)CSpriteVisual::RenderContent )
                              {
                                v347 = CSpriteVisual::RenderContent(v7, v351, v350);
                              }
                              else if ( v346 == CVisual::RenderContent )
                              {
                                v347 = CVisual::RenderContent(v7, v351, (unsigned __int64)v350);
                              }
                              else if ( (char *)v346 == (char *)CWindowNode::RenderContent )
                              {
                                v347 = CWindowNode::RenderContent(v7, v351, v350);
                              }
                              else
                              {
                                v347 = v346(v7, v351, (unsigned __int64)v350);
                              }
                              v4 = v347;
                              if ( v347 < 0 )
                              {
                                v348 = 8939;
LABEL_665:
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v348);
                                goto LABEL_730;
                              }
                              ++*(_DWORD *)(v359 + 32);
                              goto LABEL_757;
                            }
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x123Fu);
LABEL_660:
                            v6 = v351;
                            goto LABEL_661;
                          }
                          v312 = 2 * v309;
                          if ( (unsigned int)v311 <= 8 )
                            v312 = 8;
                          v4 = WPF::HrMalloc((WPF *)0x10, v312, (unsigned __int64)&v378, v283);
                          if ( v4 < 0 )
                          {
                            v318 = 84;
                          }
                          else
                          {
                            v313 = 16LL * *((unsigned int *)v308 + 516);
                            v4 = 0;
                            if ( v313 <= 0xFFFFFFFF )
                            {
                              v314 = v378;
                              memcpy_0(v378, (const void *)v308[260], (unsigned int)v313);
                              operator delete((void *)v308[260]);
                              v310 = *((_DWORD *)v308 + 516);
                              v308[260] = (__int64)v314;
                              *((_DWORD *)v308 + 517) = v312;
                              goto LABEL_647;
                            }
                            v4 = -2147024362;
                            v318 = 86;
                          }
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v318);
                          if ( v378 )
                            HeapFree(WPF::g_processHeap, 0, v378);
                          goto LABEL_650;
                        }
LABEL_647:
                        *(_OWORD *)(v308[260] + 16LL * v310) = *(_OWORD *)v418;
                        v315 = *((_DWORD *)v308 + 522);
                        v316 = *((_DWORD *)v308 + 516) + 1;
                        *((_DWORD *)v308 + 516) = v316;
                        if ( v315 <= v316 )
                          v315 = v316;
                        *((_DWORD *)v308 + 522) = v315;
                        goto LABEL_650;
                      }
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v211, 0xD7Eu);
                    }
                    v215 = v361;
                    v212 = 0LL;
                    goto LABEL_410;
                  }
LABEL_358:
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v168, 0x21BAu);
                  v7 = v352;
                  v6 = v351;
                  goto LABEL_730;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v168, 0x616u);
                v166 = *(_QWORD *)&v354[7];
                v7 = v352;
                v82 = v356;
                goto LABEL_360;
              }
LABEL_347:
              v185 = (unsigned __int64)v174[7].Blink;
              goto LABEL_349;
            }
            v374 = 0LL;
            v375 = 0;
            v135 = CGeometry::GetShapeData(
                     v134,
                     (const struct D2D_SIZE_F *)((char *)v7 + 132),
                     (struct CShapePtr *)&v374);
            v136 = v135;
            if ( v135 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v135, 0x62u);
            }
            else
            {
              v137 = v374;
              v136 = -2003292412;
              if ( v374 )
              {
                v138 = *(__int64 (__fastcall **)(CRectanglesShape *, __int128 *, _QWORD))(*(_QWORD *)v374 + 32LL);
                if ( (char *)v138 == (char *)CRectanglesShape::GetTightBounds )
                {
                  v139 = CRectanglesShape::GetTightBounds((__int64)v374, (__int64)&v417, 0LL);
                }
                else if ( (char *)v138 == (char *)CRegionShape::GetTightBounds )
                {
                  v139 = CRegionShape::GetTightBounds(v374, (__m128 *)&v417, 0LL);
                }
                else
                {
                  v139 = v138(v374, &v417, 0LL);
                }
                v136 = v139;
                if ( v139 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v139, 0x111u);
                v137 = v374;
              }
              if ( v136 >= 0 )
                goto LABEL_244;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v136, 0x63u);
            }
            v137 = v374;
LABEL_244:
            if ( v136 == -2003304438 )
            {
              v136 = 0;
              v417 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            }
            if ( v375 && v137 )
            {
              v140 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v137;
              if ( v140 == CRectanglesShape::`scalar deleting destructor' )
                CRectanglesShape::`scalar deleting destructor'(v137, 1);
              else
                v140(v137, 1);
            }
            if ( v136 >= 0
              && (*(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < *(float *)&v417
               || *((float *)&v417 + 2) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                          + 2))
              && (*((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < *((float *)&v417 + 1)
               || *((float *)&v417 + 3) < *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                          + 3)) )
            {
              *(_OWORD *)&v370[4] = _xmm;
              LOBYTE(v372) = 1;
              *(_OWORD *)&v370[20] = _xmm;
              LOWORD(v371) = 32085;
              *(_OWORD *)&v370[36] = _xmm;
              *(_OWORD *)&v370[52] = _xmm;
            }
            goto LABEL_257;
          }
          while ( 1 )
          {
            v99 = v106 - 14;
            if ( v106[2].Flink == *(struct _LIST_ENTRY **)&v354[7] )
              break;
            v106 = v106->Flink;
            if ( v106 == TreeDataListHead )
              goto LABEL_198;
          }
        }
        if ( v99 )
        {
          v100 = (__int64)v99[2].Flink;
          if ( v100
            || (v100 = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v99[1].Blink->Flink[20].Blink)(v99[1].Blink),
                (v99[2].Flink = (struct _LIST_ENTRY *)v100) != 0LL) )
          {
            v101 = *(unsigned int *)(v100 + 12);
            v102 = *(_QWORD *)(*((_QWORD *)v6 + 843) + 392LL);
            v435 = *(_OWORD *)v421;
            v103 = *(char (__fastcall **)(__int64, __int64, int, char))(*(_QWORD *)v102 + 56LL);
            v104 = v103 == CArrayBasedCoverageSet::IsFullyCovered
                 ? CArrayBasedCoverageSet::IsCovered(v102, (__int64)&v435, v101, v97)
                 : ((__int64 (__fastcall *)(__int64, __int128 *, __int64))v103)(v102, &v435, v101);
            if ( v104 )
            {
              if ( !qword_1802D6428 )
                goto LABEL_206;
              v107 = *((_DWORD *)qword_1802D6428 + 18);
              v108 = 0;
              if ( !v107 )
                goto LABEL_206;
              while ( 1 )
              {
                v109 = *(_BYTE **)(*((_QWORD *)qword_1802D6428 + 6) + 8LL * v108);
                if ( v109[329] || v109[328] || v109[232] )
                  break;
                if ( ++v108 >= v107 )
                {
                  v56 = 0;
                  *v358 = 0;
                  goto LABEL_731;
                }
              }
              if ( !*((_QWORD *)v6 + 846) )
                *((_QWORD *)v6 + 846) = v7;
            }
          }
        }
        goto LABEL_198;
      }
      v58 = v351;
      v59 = 0;
      v359 = (__int64)v55;
      LODWORD(v381) = 10;
      *((_QWORD *)&v381 + 1) = v7;
      v60 = *((_DWORD *)v351 + 113);
      v61 = *((_DWORD *)v351 + 112);
      if ( v61 == v60 )
      {
        v62 = 2LL * v60;
        if ( v62 > 0xFFFFFFFF )
        {
          v59 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
          goto LABEL_126;
        }
        v63 = 2 * v60;
        if ( (unsigned int)v62 <= 0x40 )
          v63 = 64;
        v59 = 0;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v63 <= 0x10 )
        {
          v59 = -2147024809;
        }
        else
        {
          v64 = 16LL * v63;
          if ( !v64 )
            v64 = 1LL;
          v3 = HeapAlloc(WPF::g_processHeap, 0, v64);
          if ( !v3 )
            v59 = -2147024882;
        }
        if ( v59 < 0 )
        {
          v69 = 84;
LABEL_129:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, v69);
          if ( v3 )
            HeapFree(WPF::g_processHeap, 0, v3);
          goto LABEL_126;
        }
        v65 = -1;
        v66 = 16LL * *((unsigned int *)v351 + 112);
        if ( v66 <= 0xFFFFFFFF )
          v65 = 16 * *((_DWORD *)v351 + 112);
        v59 = 0;
        if ( v66 > 0xFFFFFFFF )
        {
          v59 = -2147024362;
          v69 = 86;
          goto LABEL_129;
        }
        memcpy_0(v3, *((const void **)v351 + 58), v65);
        operator delete(*((void **)v351 + 58));
        v61 = *((_DWORD *)v351 + 112);
        *((_QWORD *)v351 + 58) = v3;
        *((_DWORD *)v58 + 113) = v63;
      }
      *(_OWORD *)(*((_QWORD *)v58 + 58) + 16LL * v61) = v381;
      v67 = *((_DWORD *)v58 + 118);
      v68 = *((_DWORD *)v58 + 112) + 1;
      *((_DWORD *)v58 + 112) = v68;
      if ( v67 <= v68 )
        v67 = v68;
      *((_DWORD *)v58 + 118) = v67;
LABEL_126:
      if ( v59 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v59, retaddr);
      v70 = *((_DWORD *)v50 + 6);
      v380 = v55;
      v71 = v70 + 1;
      v72 = v70 + 1 < v70 ? 0x80070216 : 0;
      if ( v70 + 1 < v70 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v72, 0xB5u);
      }
      else if ( v71 > *((_DWORD *)v50 + 5) )
      {
        v73 = DynArrayImpl<0>::AddMultipleAndSet(v50, 8LL, 1LL, &v380);
        v72 = v73;
        if ( v73 >= 0 )
        {
LABEL_138:
          v7 = v352;
          goto LABEL_139;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v50 + 8LL * v70) = v380;
        *((_DWORD *)v50 + 6) = v71;
      }
      if ( v72 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v72, retaddr);
      goto LABEL_138;
    }
  }
  v15 = LODWORD(v360);
  v16 = (CMatrixStack *)&v359;
  v356 = (CMatrixStack *)&v359;
  v17 = CCompositionSpotLight::IsValid;
  v359 = 0x100000000LL;
  while ( 1 )
  {
    v18 = *(_DWORD *)v16;
    v19 = *(unsigned int *)v16;
    LODWORD(v355) = 0;
    if ( (unsigned int)CVisual::GetLightsCount(v7, v19, 0LL, v17) )
      break;
LABEL_92:
    v16 = (CMatrixStack *)((char *)v16 + 4);
    v356 = v16;
    if ( v16 == (CMatrixStack *)&v360 )
    {
      v350[0] = v353;
      goto LABEL_94;
    }
  }
  while ( 1 )
  {
    if ( v18 )
    {
      v23 = (char *)v7 + 280;
      v22 = *((_QWORD *)v7 + 35);
      if ( (v22 & 2) != 0 )
        v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v22) = v22 & 1;
    }
    else
    {
      v22 = *((_QWORD *)v7 + 34);
      if ( (v22 & 2) != 0 )
      {
        v23 = (char *)v7 + 280;
        v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
        LODWORD(v22) = v22 & 1;
        v23 = (char *)v7 + 280;
      }
    }
    if ( v20 >= (unsigned int)v22 )
    {
LABEL_34:
      v24 = 0LL;
      goto LABEL_44;
    }
    if ( v18 )
    {
      v27 = CPtrArrayBase::operator[](v23, v20);
      v20 = (unsigned int)v355;
      v24 = (CCompositionSpotLight *)v27;
    }
    else
    {
      v25 = *((_QWORD *)v7 + 34);
      if ( (v25 & 2) != 0 )
        v26 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v26 = *((_QWORD *)v7 + 34) & 1LL;
      if ( v20 >= v26 )
        goto LABEL_34;
      if ( v26 == 1 )
      {
        v24 = (CCompositionSpotLight *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
        _mm_lfence();
        v24 = *(CCompositionSpotLight **)((*((_QWORD *)v7 + 34) & 0xFFFFFFFFFFFFFFFCuLL) + 8LL * v20 + 16);
      }
    }
LABEL_44:
    if ( *((_BYTE *)v24 + 154) )
      break;
LABEL_91:
    v18 = *(_DWORD *)v16;
    v47 = v20 + 1;
    v48 = *(unsigned int *)v16;
    LODWORD(v355) = v47;
    LightsCount = CVisual::GetLightsCount(v7, v48, v47, v17);
    if ( v20 >= LightsCount )
      goto LABEL_92;
  }
  v28 = *(char (__fastcall **)(CCompositionSpotLight *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)v24 + 184LL);
  if ( v28 == v17 )
    IsValid = CCompositionSpotLight::IsValid(v24, v21, v7);
  else
    IsValid = v28(v24, v21, v7);
  if ( !IsValid )
    goto LABEL_90;
  LODWORD(v381) = 9;
  v30 = (unsigned int *)((char *)v6 + 448);
  *((_QWORD *)&v381 + 1) = v7;
  v31 = *((_DWORD *)v6 + 113);
  v4 = 0;
  v32 = *((_DWORD *)v6 + 112);
  v33 = 0LL;
  if ( v32 != v31 )
    goto LABEL_66;
  v34 = 2LL * v31;
  if ( v34 > 0xFFFFFFFF )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_69;
  }
  v35 = 2 * v31;
  if ( (unsigned int)v34 <= 0x40 )
    v35 = 64;
  v4 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v35 <= 0x10 )
  {
    v4 = -2147024809;
LABEL_61:
    v37 = 0LL;
  }
  else
  {
    v36 = 16LL * v35;
    if ( !v36 )
      v36 = 1LL;
    v33 = HeapAlloc(WPF::g_processHeap, 0, v36);
    v37 = v33;
    if ( !v33 )
    {
      v4 = -2147024882;
      goto LABEL_61;
    }
  }
  if ( v4 < 0 )
  {
    v44 = 84;
LABEL_76:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v44);
    if ( v37 )
      HeapFree(WPF::g_processHeap, 0, v37);
    goto LABEL_69;
  }
  v38 = 16LL * *v30;
  v4 = 0;
  if ( v38 > 0xFFFFFFFF )
  {
    v4 = -2147024362;
    v44 = 86;
    goto LABEL_76;
  }
  memcpy_0(v33, *((const void **)v30 + 2), (unsigned int)v38);
  operator delete(*((void **)v30 + 2));
  v32 = *v30;
  *((_QWORD *)v30 + 2) = v33;
  v30[1] = v35;
LABEL_66:
  *(_OWORD *)(*((_QWORD *)v30 + 2) + 16LL * v32) = v381;
  v39 = v30[6];
  v40 = *v30 + 1;
  *v30 = v40;
  if ( v39 <= v40 )
    v39 = v40;
  v30[6] = v39;
LABEL_69:
  if ( v4 >= 0 )
  {
    v6 = v351;
    v16 = v356;
    *(_QWORD *)&v395 = v24;
    v41 = (char *)v351 + 672;
    v42 = *((_DWORD *)v351 + 174);
    DWORD2(v395) = *(_DWORD *)v356;
    v43 = v42 + 1;
    if ( v42 + 1 >= v42 )
      v15 = v42 + 1;
    v4 = v43 < v42 ? 0x80070216 : 0;
    if ( v43 >= v42 )
    {
      if ( v15 <= *((_DWORD *)v351 + 173) )
      {
        *(_OWORD *)(*(_QWORD *)v41 + 16LL * v42) = v395;
        *((_DWORD *)v41 + 6) = v15;
        goto LABEL_81;
      }
      v45 = DynArrayImpl<0>::AddMultipleAndSet(v41, 16LL, 1LL, &v395);
      v4 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0xC0u);
        goto LABEL_81;
      }
      goto LABEL_82;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
LABEL_81:
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x20u);
    }
    else
    {
LABEL_82:
      v46 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v24 + 8LL);
      if ( v46 == CResource::AddRef )
        CResource::AddRef(v24);
      else
        v46(v24);
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x277Cu);
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
        (int *)v30,
        0LL);
      goto LABEL_97;
    }
    v7 = v352;
    v3 = 0LL;
LABEL_90:
    v17 = CCompositionSpotLight::IsValid;
    v20 = (unsigned int)v355;
    goto LABEL_91;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2779u);
  v6 = v351;
LABEL_97:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2102u);
  v56 = v349;
  v7 = v352;
LABEL_731:
  if ( *((_BYTE *)v6 + 6832) && v56 )
    CVisual::RenderProjectedShadows(v7, v6);
  return (unsigned int)v4;
}
