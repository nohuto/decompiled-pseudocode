/*
 * XREFs of ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18005B220 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 * Callees:
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001D840 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800222A0 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x180022320 (-HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024790 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800247B0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024FA0 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180025110 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x180027E70 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033400 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180034434 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045A3C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x18004E548 (-GetParentTreeData@CVisual@@AEBAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004E5FC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18004E930 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x18004E990 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18004EEAC (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x180054420 (-HasAntialiasedContent@CVisual@@MEBA_NXZ.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180054C68 (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z @ 0x180054E4C (-GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z.c)
 *     ?GetWorldBounds2D@CPreComputeContext@@AEAA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180055A98 (-GetWorldBounds2D@CPreComputeContext@@AEAA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180059138 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180059A5C (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x18006AD50 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180070580 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CColorBrush@@UEBA_NXZ @ 0x180070BB0 (-IsEmptyDrawing@CColorBrush@@UEBA_NXZ.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180070CF0 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007B590 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800829C0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CLayerVisual@@UEAA_NXZ @ 0x180083470 (-HasNonEmptyContent@CLayerVisual@@UEAA_NXZ.c)
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180087820 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180087AC0 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180087AF4 (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@.c)
 *     ??8?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV0@@Z @ 0x180087B44 (--8-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3D.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096C0C (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097F70 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x18009A4E0 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800A06F0 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800B1B20 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z @ 0x1800B1D9C (-ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B53B0 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800B8C54 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x1800BC454 (-AddMultipleAndSet@-$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INP.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18011A3F4 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x18011A5C8 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     McTemplateU0p @ 0x180145834 (McTemplateU0p.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x1801CF5B8 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1801CF8DC (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801CF914 (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801CF9CC (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x1801D086C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::PostSubgraph(CPreComputeContext *this, __int64 a2, bool *a3, __int64 a4)
{
  __int64 v4; // rbx
  struct CVisualTree *v5; // r12
  bool v6; // zf
  struct CSpriteVisualContent *v8; // r15
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  _BOOL8 (__fastcall *v13)(CVisual *); // rax
  __int64 v14; // rcx
  bool v15; // di
  __int64 v16; // rax
  __int64 (__fastcall *v17)(_QWORD, _QWORD); // r8
  __int64 v18; // rax
  int v19; // edi
  char (__fastcall *v20)(CSpriteVisual *); // rax
  CMaskBrush *v21; // rcx
  int v22; // ecx
  char v23; // dl
  __int64 v24; // rax
  int v25; // ecx
  int v26; // edi
  __int64 v27; // rax
  bool (__fastcall *v29)(CRenderData *); // rax
  char IsEmptyDrawing; // al
  unsigned __int64 TopLevelWindow; // rax
  unsigned int v32; // r10d
  _QWORD *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // edx
  int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  __int64 (__fastcall *v39)(CSurfaceBrush *, struct CDrawingContext *, bool *); // rax
  char IsReadyToDraw; // al
  bool (__fastcall *v41)(__int64, int); // rax
  char v42; // al
  char HasNonEmptyContent; // al
  int v44; // eax
  unsigned int *j; // rcx
  struct CSpriteVisualContent *v46; // rdi
  __int64 (__fastcall *v47)(_QWORD, _QWORD); // rax
  __int64 (__fastcall *v48)(_QWORD, _QWORD); // rax
  int v49; // edx
  int *v50; // rcx
  struct CSpriteVisualContent *v51; // rsi
  __int64 (__fastcall *v52)(_QWORD, _QWORD); // rax
  __int64 (__fastcall *v53)(_QWORD, _QWORD); // rax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  unsigned int *k; // rcx
  __int64 v58; // rax
  unsigned int *m; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rdi
  struct _LIST_ENTRY *v62; // r10
  CVisual *v63; // rcx
  unsigned __int64 Blink; // rax
  int v65; // eax
  char (__fastcall *v66)(CSpriteVisual *); // rax
  char HasAntialiasedContent; // al
  float v68; // xmm6_4
  int v69; // eax
  void *v70; // rcx
  float v71; // xmm1_4
  float v72; // xmm2_4
  float v73; // xmm7_4
  float v74; // xmm5_4
  int v75; // eax
  __int128 v76; // xmm6
  float v77; // xmm3_4
  float v78; // xmm4_4
  float v79; // xmm0_4
  __int64 v80; // r12
  int v81; // eax
  int v82; // eax
  const struct CVisualTree *v83; // r15
  int v84; // r13d
  unsigned int i; // r12d
  __int64 v86; // rax
  __int64 v87; // rcx
  CCompositionSpotLight *v88; // rcx
  bool (*v89)(CCompositionSpotLight *__hidden, const struct CVisualTree *, const struct CVisual *); // rax
  char IsValid; // al
  __int128 v91; // xmm0
  void (*v92)(void); // rax
  struct CWindowBackgroundTreatment *v93; // r13
  float v94; // xmm0_4
  bool v95; // al
  bool v96; // r12
  bool v97; // di
  __int64 v98; // r10
  __int64 v99; // rax
  int v100; // eax
  bool v101; // al
  char v102; // di
  __int64 v103; // r13
  float v104; // xmm6_4
  float v105; // xmm7_4
  float v106; // xmm8_4
  float v107; // xmm9_4
  CGeometry *v108; // rcx
  struct _LIST_ENTRY *TreeData; // rax
  __int128 v110; // xmm0
  struct CWindowBackgroundTreatment *v111; // rax
  __int128 v112; // xmm0
  __int64 v113; // xmm1_8
  int v114; // eax
  __int64 v115; // rcx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  __int128 v117; // xmm1
  __int128 v118; // xmm0
  __int128 v119; // xmm1
  int WorldTransform; // eax
  float InflateSizeForAntiAliasing; // xmm0_4
  __int64 v122; // r10
  unsigned int v123; // edx
  __int64 v124; // rcx
  unsigned int v125; // eax
  __int64 v126; // rax
  __int64 v127; // rcx
  int v128; // eax
  int v129; // eax
  __int64 v130; // rcx
  __int64 v131; // rax
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v133; // r11
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v135; // r11
  struct _LIST_ENTRY *Flink; // rcx
  bool HasEffects; // r12
  int v138; // eax
  struct CBspNode *v139; // rdx
  int v140; // eax
  int v141; // eax
  unsigned int v142; // [rsp+20h] [rbp-E0h]
  bool v143; // [rsp+30h] [rbp-D0h] BYREF
  char v144; // [rsp+31h] [rbp-CFh] BYREF
  bool v145; // [rsp+32h] [rbp-CEh]
  struct CVisualTree *v146; // [rsp+38h] [rbp-C8h]
  _DWORD v147[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v148; // [rsp+48h] [rbp-B8h] BYREF
  _OWORD v149[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v150; // [rsp+90h] [rbp-70h]
  _OWORD v151[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v152; // [rsp+E0h] [rbp-20h]
  _BYTE v153[24]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v154[24]; // [rsp+108h] [rbp+8h] BYREF
  __int64 InputHandle; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v156[5]; // [rsp+128h] [rbp+28h] BYREF
  void *lpMem; // [rsp+150h] [rbp+50h]
  int v158; // [rsp+158h] [rbp+58h]
  __int64 v159; // [rsp+160h] [rbp+60h]
  struct CSpriteVisualContent *v160[2]; // [rsp+170h] [rbp+70h] BYREF

  *a3 = 1;
  v4 = *((_QWORD *)this + 57);
  v5 = (struct CVisualTree *)a2;
  v6 = *(_BYTE *)(a2 + 32) == 0;
  v8 = (struct CSpriteVisualContent *)*((_QWORD *)this + 58);
  v146 = (struct CVisualTree *)a2;
  v9 = (__int64 *)(v4 + 264);
  v160[0] = v8;
  v10 = *(_QWORD *)(v4 + 264);
  v11 = v4 + 280;
  if ( v6 )
    v11 = 0LL;
  *(_QWORD *)v153 = v11;
  if ( (v10 & 2) != 0 )
    v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v10) = v10 & 1;
  if ( (_DWORD)v10
    || ((v12 = *(_QWORD *)(v4 + 272), (v12 & 2) != 0)
      ? (v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL))
      : (LODWORD(v12) = v12 & 1),
        (_DWORD)v12) )
  {
    a3 = (bool *)v147;
    v147[0] = 0;
    *(_QWORD *)v154 = v147;
    v147[1] = 1;
    v83 = (const struct CVisualTree *)a2;
    while ( 1 )
    {
      v84 = *(_DWORD *)a3;
      for ( i = 0; i < (unsigned int)CVisual::GetLightsCount(v4, v84); ++i )
      {
        if ( v84 )
        {
          v86 = *(_QWORD *)(v4 + 272);
          if ( (v86 & 2) == 0 )
          {
LABEL_172:
            LODWORD(v86) = v86 & 1;
            goto LABEL_173;
          }
        }
        else
        {
          v86 = *v9;
          if ( (*v9 & 2) == 0 )
            goto LABEL_172;
        }
        v86 = *(_QWORD *)(v86 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_173:
        if ( i >= (unsigned int)v86 )
        {
          v88 = 0LL;
        }
        else
        {
          if ( v84 )
            v87 = v4 + 272;
          else
            v87 = v4 + 264;
          v88 = (CCompositionSpotLight *)CPtrArrayBase::operator[](v87, i);
        }
        v89 = *(bool (**)(CCompositionSpotLight *__hidden, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)v88 + 184LL);
        if ( v89 == CCompositionSpotLight::IsValid )
          IsValid = CCompositionSpotLight::IsValid(v88, v83, (const struct CVisual *)v4);
        else
          IsValid = ((__int64 (__fastcall *)(CCompositionSpotLight *, const struct CVisualTree *, __int64))v89)(
                      v88,
                      v83,
                      v4);
        if ( IsValid )
        {
          v91 = *(_OWORD *)(*((_QWORD *)this + 25) + 16LL * (unsigned int)--*((_DWORD *)this + 56));
          if ( (_QWORD)v91 )
          {
            v92 = *(void (**)(void))(*(_QWORD *)v91 + 16LL);
            if ( (char *)v92 == (char *)CResource::Release )
              CResource::Release((CResource *)v91);
            else
              v92();
          }
        }
      }
      a3 = (bool *)(*(_QWORD *)v154 + 4LL);
      *(_QWORD *)v154 = a3;
      if ( a3 == (bool *)&v148 )
      {
        v11 = *(_QWORD *)v153;
        v8 = v160[0];
        v5 = v146;
        break;
      }
    }
  }
  if ( (*(_BYTE *)(v4 + 88) & 1) != 0 )
  {
    if ( (*(_BYTE *)(v4 + 93) & 0x10) != 0
      && !(unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v4 + 164) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0p(v115, &EVTDESC_PROCESS_VISUAL_FIRSTFRAME, v4);
      *(_BYTE *)(v4 + 93) &= ~0x10u;
    }
    v37 = CVisual::ConvertInnerToOuterBounds((CVisual *)v4, a2, (__int64)a3, a4);
    v26 = v37;
    if ( v37 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x205u);
      return (unsigned int)v26;
    }
  }
  v13 = *(_BOOL8 (__fastcall **)(CVisual *))(*(_QWORD *)v4 + 304LL);
  if ( v13 == CVisual::HasAtlasedContent )
  {
    v14 = *(_QWORD *)(v4 + 240);
    v15 = 0;
    if ( v14 )
    {
      v41 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v14 + 48LL);
      if ( v41 == CRenderData::IsOfType )
      {
        v42 = CRenderData::IsOfType(v14, 98);
      }
      else if ( (char *)v41 == (char *)CPrimitiveGroupLayerClip::IsOfType )
      {
        v42 = CPrimitiveGroupLayerClip::IsOfType(v14, 98LL);
      }
      else if ( v41 == CMaskBrush::IsOfType )
      {
        v42 = CMaskBrush::IsOfType(v14, 98);
      }
      else if ( v41 == CSurfaceBrush::IsOfType )
      {
        v42 = CSurfaceBrush::IsOfType(v14, 98);
      }
      else if ( (char *)v41 == (char *)CColorBrush::IsOfType )
      {
        v42 = CColorBrush::IsOfType(v14, 98LL);
      }
      else
      {
        v42 = v41(v14, 98);
      }
      v15 = v42 != 0;
    }
  }
  else
  {
    v15 = v13((CVisual *)v4);
  }
  if ( v15 )
    *(_DWORD *)(v4 + 88) |= 0x100u;
  v16 = *(_QWORD *)(v4 + 208);
  v17 = CEffectGroup::IsOfType;
  if ( (*(_DWORD *)(v16 + 4) & 0x8000000) != 0 )
  {
    a2 = *(unsigned int *)(v16 + 12);
    for ( j = (unsigned int *)(v16 + 12); (*j & 0x7F000000) != 0x5000000; a2 = *j )
      j = (unsigned int *)((char *)j + (a2 & 0xFFFFFF) + 4);
    v160[0] = *(struct CSpriteVisualContent **)(j + 1);
    v46 = v160[0];
    v47 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v160[0] + 48LL);
    if ( v47 != CEffectGroup::IsOfType )
    {
      if ( ((unsigned __int8 (__fastcall *)(struct CSpriteVisualContent *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v47)(
             v160[0],
             128LL,
             CEffectGroup::IsOfType) )
      {
LABEL_75:
        if ( v46 )
          *(_DWORD *)(v4 + 88) |= 0x80u;
        goto LABEL_15;
      }
      v17 = CEffectGroup::IsOfType;
    }
    v48 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v46 + 48LL);
    if ( v48 != CEffectGroup::IsOfType
      && !((unsigned __int8 (__fastcall *)(struct CSpriteVisualContent *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v48)(
            v46,
            47LL,
            CEffectGroup::IsOfType) )
    {
      goto LABEL_15;
    }
    v46 = (struct CSpriteVisualContent *)*((_QWORD *)v46 + 11);
    goto LABEL_75;
  }
LABEL_15:
  v18 = *(_QWORD *)(v4 + 208);
  v19 = 0;
  if ( (*(_DWORD *)(v18 + 4) & 0x2000000) != 0 )
  {
    a2 = *(unsigned int *)(v18 + 12);
    for ( k = (unsigned int *)(v18 + 12); (*k & 0x7F000000) != 0x7000000; a2 = *k )
      k = (unsigned int *)((char *)k + (a2 & 0xFFFFFF) + 4);
    v160[0] = *(struct CSpriteVisualContent **)(k + 1);
    if ( v160[0] )
    {
      v58 = *((_QWORD *)v160[0] + 16);
      if ( v58 )
      {
        if ( *(_QWORD *)(v58 + 96) )
        {
          *(_DWORD *)(v4 + 88) |= 0x200u;
          v19 = 16;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v4 + 94) & 2) != 0 )
    v19 = 16;
  v20 = *(char (__fastcall **)(CSpriteVisual *))(*(_QWORD *)v4 + 224LL);
  if ( (char *)v20 != (char *)CVisual::HasNonEmptyContent )
  {
    if ( v20 == CSpriteVisual::HasNonEmptyContent )
    {
      HasNonEmptyContent = CSpriteVisual::HasNonEmptyContent((CSpriteVisual *)v4);
    }
    else if ( (char *)v20 == (char *)CLayerVisual::HasNonEmptyContent )
    {
      HasNonEmptyContent = CLayerVisual::HasNonEmptyContent((CLayerVisual *)v4);
    }
    else if ( (char *)v20 == (char *)CWindowNode::HasNonEmptyContent )
    {
      HasNonEmptyContent = CWindowNode::HasNonEmptyContent((CWindowNode *)v4);
    }
    else
    {
      HasNonEmptyContent = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v20)(
                             v4,
                             a2,
                             v17);
    }
    if ( !HasNonEmptyContent )
      goto LABEL_20;
LABEL_59:
    *(_DWORD *)(v4 + 88) |= 0x400u;
    goto LABEL_20;
  }
  v21 = *(CMaskBrush **)(v4 + 240);
  if ( !v21 )
    goto LABEL_20;
  a2 = (__int64)CRenderData::IsEmptyDrawing;
  v29 = *(bool (__fastcall **)(CRenderData *))(*(_QWORD *)v21 + 192LL);
  if ( v29 == CRenderData::IsEmptyDrawing )
  {
    IsEmptyDrawing = *((_BYTE *)v21 + 137);
    goto LABEL_42;
  }
  if ( (char *)v29 == (char *)CSpriteVisualContent::IsEmptyDrawing )
  {
    v38 = *(_QWORD *)v21;
    v143 = 0;
    v39 = *(__int64 (__fastcall **)(CSurfaceBrush *, struct CDrawingContext *, bool *))(v38 + 240);
    if ( v39 == CMaskBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CMaskBrush::IsReadyToDraw(v21, 0LL, &v143);
    }
    else if ( v39 == CSurfaceBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CSurfaceBrush::IsReadyToDraw(v21, 0LL, &v143);
    }
    else if ( (char *)v39 == (char *)CEffectBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CEffectBrush::IsReadyToDraw(v21, 0LL, &v143);
    }
    else if ( (char *)v39 == (char *)CNineGridBrush::IsReadyToDraw )
    {
      IsReadyToDraw = CNineGridBrush::IsReadyToDraw(v21, 0LL, &v143);
    }
    else
    {
      IsReadyToDraw = v39(v21, 0LL, &v143);
    }
    if ( !IsReadyToDraw || v143 )
      goto LABEL_20;
    goto LABEL_59;
  }
  if ( (char *)v29 == (char *)CPrimitiveGroup::IsEmptyDrawing )
  {
    IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v21);
  }
  else if ( v29 == CAtlasedRectsGroup::IsEmptyDrawing )
  {
    IsEmptyDrawing = CAtlasedRectsGroup::IsEmptyDrawing(v21);
  }
  else if ( v29 == CColorBrush::IsEmptyDrawing )
  {
    IsEmptyDrawing = CColorBrush::IsEmptyDrawing(v21);
  }
  else
  {
    IsEmptyDrawing = ((__int64 (__fastcall *)(CMaskBrush *, bool (__fastcall *)(CColorBrush *__hidden), __int64 (__fastcall *)(_QWORD, _QWORD)))v29)(
                       v21,
                       CColorBrush::IsEmptyDrawing,
                       v17);
  }
LABEL_42:
  if ( !IsEmptyDrawing )
    *(_DWORD *)(v4 + 88) |= 0x400u;
LABEL_20:
  if ( v8 )
  {
    v22 = (v19 << 7) | *((_DWORD *)v8 + 22) ^ ((unsigned __int16)*((_DWORD *)v8 + 22) ^ (unsigned __int16)(*((_DWORD *)v8 + 22) | *(_DWORD *)(v4 + 88))) & 0xF80;
    *((_DWORD *)v8 + 22) = v22;
    if ( (v22 & 1) != 0 )
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        (char *)v8 + 164,
        v4 + 140,
        v17);
  }
  if ( (*(_BYTE *)(v4 + 256) & 2) != 0 )
  {
    v102 = 0;
    v103 = v4;
    v104 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v105 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v106 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v107 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    *(_OWORD *)v160 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v151[0] = _xmm;
    v152 = 32085;
    v151[1] = _xmm;
    v151[2] = _xmm;
    v151[3] = _xmm;
    while ( (*(_DWORD *)(*(_QWORD *)(v103 + 208) + 4LL) & 0x10000) == 0 )
    {
      v144 = 0;
      v150 = 0;
      LODWORD(v159) = 0;
      CVisual::CalcEffectiveTransform(
        v103,
        (const struct D2D_SIZE_F *)5,
        0LL,
        &v144,
        (CMILMatrix *)v149,
        (__int64)&InputHandle);
      CMILMatrix::Multiply((const struct CMILMatrix *)v151, (const struct CMILMatrix *)v149, (struct CMILMatrix *)v151);
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)v160) )
      {
        CMILMatrix::Transform2DBoundsHelper<0>(v149, v160, v160);
        v107 = *((float *)&v160[1] + 1);
        v106 = *(float *)&v160[1];
        v105 = *((float *)v160 + 1);
        v104 = *(float *)v160;
      }
      v108 = *(CGeometry **)(v103 + 232);
      if ( v108 )
      {
        *(_QWORD *)v154 = 0LL;
        v154[8] = 0;
        if ( (int)CGeometry::GetShapeData(v108, (const struct D2D_SIZE_F *)(v103 + 132), (struct CShapePtr *)v154) >= 0
          && (int)CShapePtr::GetTightBounds(v154, v153, &InputHandle) >= 0 )
        {
          if ( *(float *)v153 > v104 )
          {
            LODWORD(v160[0]) = *(_DWORD *)v153;
            v104 = *(float *)v153;
          }
          if ( *(float *)&v153[4] > v105 )
          {
            HIDWORD(v160[0]) = *(_DWORD *)&v153[4];
            v105 = *(float *)&v153[4];
          }
          if ( v106 > *(float *)&v153[8] )
          {
            LODWORD(v160[1]) = *(_DWORD *)&v153[8];
            v106 = *(float *)&v153[8];
          }
          if ( v107 > *(float *)&v153[12] )
          {
            HIDWORD(v160[1]) = *(_DWORD *)&v153[12];
            v107 = *(float *)&v153[12];
          }
          if ( v106 <= v104 || v107 <= v105 )
          {
            v107 = 0.0;
            v106 = 0.0;
            v105 = 0.0;
            v104 = 0.0;
            v160[1] = 0LL;
            v160[0] = 0LL;
          }
        }
        CShapePtr::Release((CShapePtr *)v154);
      }
      TreeData = CVisual::FindTreeData((CVisual *)v103, v5);
      if ( TreeData && CVisual::GetParentTreeData((CVisual *)v103, v5, (struct CTreeData *)TreeData, &v143) && v143 )
        v102 = 1;
      v103 = *(_QWORD *)(v103 + 80);
      if ( !v103 )
        goto LABEL_24;
    }
    if ( v102 )
    {
      WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v103);
      v117 = *((_OWORD *)WindowBackgroundTreatmentInternal + 10);
      v149[0] = *((_OWORD *)WindowBackgroundTreatmentInternal + 9);
      v118 = *((_OWORD *)WindowBackgroundTreatmentInternal + 11);
      v149[1] = v117;
      v119 = *((_OWORD *)WindowBackgroundTreatmentInternal + 12);
      LODWORD(WindowBackgroundTreatmentInternal) = *((_DWORD *)WindowBackgroundTreatmentInternal + 52);
      v149[2] = v118;
      v149[3] = v119;
      v150 = (int)WindowBackgroundTreatmentInternal;
      if ( !CMILMatrix::Invert((CMILMatrix *)v149) )
        goto LABEL_24;
      LODWORD(v159) = 0;
      WorldTransform = CVisual::GetWorldTransform(
                         (CVisual *)v4,
                         (struct _LIST_ENTRY *)v5,
                         1,
                         (__int64)&InputHandle,
                         0LL,
                         0LL);
      v26 = WorldTransform;
      if ( WorldTransform < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0x286u);
        return (unsigned int)v26;
      }
      CMILMatrix::Multiply(
        (const struct CMILMatrix *)&InputHandle,
        (const struct CMILMatrix *)v149,
        (struct CMILMatrix *)v151);
    }
    v110 = *(_OWORD *)(v4 + 164);
    *(_QWORD *)&v154[16] = *(_QWORD *)(v4 + 180);
    *(_OWORD *)v154 = v110;
    CMILMatrix::Transform3DBoundsHelper<0>(v151, v154, v153);
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)v160) )
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
        v153,
        v160);
    if ( !(unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v153) )
    {
      v111 = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v103);
      if ( *((_BYTE *)v111 + 284) )
      {
        TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
          (char *)v111 + 72,
          v153,
          v17);
      }
      else
      {
        v112 = *(_OWORD *)v153;
        *((_BYTE *)v111 + 284) = 1;
        v113 = *(_QWORD *)&v153[16];
        *(_OWORD *)((char *)v111 + 72) = v112;
        *((_QWORD *)v111 + 11) = v113;
      }
    }
  }
LABEL_24:
  if ( (*(_BYTE *)(v4 + 92) & 2) != 0 )
  {
    v44 = *((_DWORD *)this + 34);
    if ( v44 )
      *((_DWORD *)this + 34) = v44 - 1;
  }
  if ( (*(_BYTE *)(v4 + 92) & 4) != 0 )
  {
    v56 = *((_DWORD *)this + 42);
    if ( v56 )
      *((_DWORD *)this + 42) = v56 - 1;
  }
  if ( (*(_BYTE *)(v4 + 256) & 1) != 0 )
  {
    v160[0] = 0LL;
    if ( CVisual::GetContentAsSpriteNoRef((CVisual *)v4, v160) )
      *(_BYTE *)(v4 + 512) &= ~1u;
    if ( CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
           (int *)this + 26,
           v153) )
    {
      InflateSizeForAntiAliasing = CPreComputeContext::GetInflateSizeForAntiAliasing(this, (const struct CVisual *)v4);
      CPreComputeContext::GetWorldBounds2D((__int64)this, (__int64)v160, v4 + 140, InflateSizeForAntiAliasing);
      if ( (*(_BYTE *)(v4 + 93) & 0x40) != 0 )
      {
        v122 = *((_QWORD *)this + 76);
        v123 = (unsigned int)v146;
        *(_QWORD *)v154 = v4;
        v124 = *(unsigned int *)(v122 + 40);
        *(_OWORD *)&v154[8] = *(_OWORD *)v160;
        v125 = v124 + 1;
        if ( (int)v124 + 1 >= (unsigned int)v124 )
          v123 = v124 + 1;
        v26 = v125 < (unsigned int)v124 ? 0x80070216 : 0;
        if ( v125 < (unsigned int)v124 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0xB5u);
        }
        else if ( v123 > *(_DWORD *)(v122 + 36) )
        {
          v128 = DynArrayImpl<0>::AddMultipleAndSet(v122 + 16, 24LL, 1LL, v154);
          v26 = v128;
          if ( v128 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v128, 0xC0u);
        }
        else
        {
          v126 = *(_QWORD *)(v122 + 16);
          v127 = 3 * v124;
          *(_OWORD *)(v126 + 8 * v127) = *(_OWORD *)v154;
          *(_QWORD *)(v126 + 8 * v127 + 16) = *(_QWORD *)&v154[16];
          *(_DWORD *)(v122 + 40) = v123;
        }
        if ( v26 < 0 )
        {
          v142 = 711;
          goto LABEL_344;
        }
      }
      if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)v153, (float *)v160) )
      {
        v129 = CDirtyRegion::Add(*((CDirtyRegion **)this + 75), v4, 1, (__m128 *)v160);
        v26 = v129;
        if ( v129 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v129, 0x2CCu);
          return (unsigned int)v26;
        }
        *(_BYTE *)(v4 + 512) |= 1u;
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 208) + 4LL) & 0x10000) != 0 )
  {
    v93 = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v4);
    if ( CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
           (int *)this + 26,
           v153) )
    {
      if ( *((_BYTE *)v93 + 284) )
      {
        v144 = 0;
        v94 = CPreComputeContext::GetInflateSizeForAntiAliasing(this, (const struct CVisual *)v4);
        CPreComputeContext::GetWorldBounds2D((__int64)this, (__int64)v160, (__int64)v93 + 72, v94);
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)v153, (float *)v160) )
        {
          v114 = CDirtyRegion::Add(*((CDirtyRegion **)this + 75), v4, 1, (__m128 *)v160);
          v26 = v114;
          if ( v114 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v114, 0x2EAu);
            return (unsigned int)v26;
          }
          v144 = 1;
        }
        v143 = 0;
        v95 = CWindowBackgroundTreatment::ContainsBackdropBrush(v93, &v143);
        v96 = v143;
        v97 = v95;
        v145 = v95;
        if ( v143 && *((_BYTE *)v146 + 32) )
        {
          v98 = *((_QWORD *)this + 76);
          *(_QWORD *)v153 = v4;
          v99 = *(unsigned int *)(v98 + 40);
          *(_OWORD *)&v153[8] = *(_OWORD *)v160;
          a2 = (unsigned int)(v99 + 1);
          if ( (unsigned int)a2 < (unsigned int)v99 )
          {
            v26 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_196:
            if ( v26 < 0 )
            {
              v142 = 756;
              goto LABEL_344;
            }
            v97 = v145;
            goto LABEL_198;
          }
          if ( (unsigned int)a2 > *(_DWORD *)(v98 + 36) )
          {
            v100 = DynArrayImpl<0>::AddMultipleAndSet(v98 + 16, 24LL, 1LL, v153);
            v26 = v100;
            if ( v100 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v100, 0xC0u);
            goto LABEL_196;
          }
          v130 = 3 * v99;
          v131 = *(_QWORD *)(v98 + 16);
          *(_OWORD *)(v131 + 8 * v130) = *(_OWORD *)v153;
          *(_QWORD *)(v131 + 8 * v130 + 16) = *(_QWORD *)&v153[16];
          *(_DWORD *)(v98 + 40) = a2;
        }
LABEL_198:
        if ( *((_BYTE *)v93 + 285)
          && (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::operator==(
                                (char *)v93 + 72,
                                (char *)v93 + 120)
          && CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(v93) )
        {
          v101 = v96
              && *(_QWORD *)(*(_QWORD *)this + 472LL) - *((_QWORD *)v93 + 37) < CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta;
          if ( !v97 || v101 || !v144 )
            *((_BYTE *)v93 + 286) = 0;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v4 + 88) & 4) != 0 )
  {
    --*(_DWORD *)(*((_QWORD *)this + 75) + 2696LL);
    if ( *((_DWORD *)this + 110) || *(char *)(v4 + 88) < 0 )
    {
      v68 = FLOAT_4_0;
    }
    else
    {
      v66 = *(char (__fastcall **)(CSpriteVisual *))(*(_QWORD *)v4 + 312LL);
      if ( (char *)v66 == (char *)CVisual::HasAntialiasedContent )
      {
        HasAntialiasedContent = CVisual::HasAntialiasedContent((CVisual *)v4);
      }
      else if ( v66 == CSpriteVisual::HasAntialiasedContent )
      {
        HasAntialiasedContent = CSpriteVisual::HasAntialiasedContent((CSpriteVisual *)v4);
      }
      else
      {
        HasAntialiasedContent = ((__int64 (__fastcall *)(__int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v66)(
                                  v4,
                                  a2,
                                  v17);
      }
      if ( HasAntialiasedContent )
        v68 = FLOAT_0_5;
      else
        v68 = 0.0;
    }
    v69 = *((_DWORD *)this + 34);
    if ( v69 )
      v70 = (void *)(*((_QWORD *)this + 19) + 68LL * (unsigned int)(v69 - 1));
    else
      v70 = &CMILMatrix::Identity;
    CMILMatrix::Transform3DBoundsHelper<1>(v70, v4 + 140, v160, a4);
    v71 = *(float *)v160;
    v72 = *((float *)v160 + 1);
    v73 = *(float *)&v160[1];
    v74 = *((float *)&v160[1] + 1);
    if ( v68 > 0.0 && *(float *)&v160[1] > *(float *)v160 && *((float *)&v160[1] + 1) > *((float *)v160 + 1) )
    {
      v71 = *(float *)v160 - v68;
      v72 = *((float *)v160 + 1) - v68;
      v73 = v68 + *(float *)&v160[1];
      v74 = v68 + *((float *)&v160[1] + 1);
    }
    v75 = *((_DWORD *)this + 42);
    if ( v75 )
    {
      v76 = *(_OWORD *)(*((_QWORD *)this + 23) + 16LL * (unsigned int)(v75 - 1));
      *(_OWORD *)v160 = v76;
      if ( v71 > *(float *)&v76 )
        *(float *)&v76 = v71;
      v77 = *((float *)v160 + 1);
      if ( v72 > *((float *)v160 + 1) )
        v77 = v72;
      v78 = *(float *)&v160[1];
      if ( *(float *)&v160[1] > v73 )
        v78 = v73;
      v79 = *((float *)&v160[1] + 1);
      if ( *((float *)&v160[1] + 1) > v74 )
        v79 = v74;
      if ( v78 <= *(float *)&v76 || v79 <= v77 )
      {
        v79 = 0.0;
        v78 = 0.0;
        v77 = 0.0;
        LODWORD(v76) = 0;
      }
      v160[0] = (struct CSpriteVisualContent *)__PAIR64__(LODWORD(v77), v76);
      LODWORD(v71) = v76;
      v72 = v77;
      v160[1] = (struct CSpriteVisualContent *)__PAIR64__(LODWORD(v79), LODWORD(v78));
      v73 = v78;
      v74 = v79;
    }
    else
    {
      v160[0] = (struct CSpriteVisualContent *)__PAIR64__(LODWORD(v72), LODWORD(v71));
      v160[1] = (struct CSpriteVisualContent *)__PAIR64__(LODWORD(v74), LODWORD(v73));
    }
    v26 = 0;
    v80 = *((_QWORD *)this + 75);
    if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v71
      && v73 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
      || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v72
      && v74 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
    {
      CDirtyRegion::SetFullDirty(*((CDirtyRegion **)this + 75));
    }
    if ( !*(_BYTE *)(v80 + 2722) && !*(_DWORD *)(v80 + 2696) )
    {
      v81 = CDirtyRegion::_Add((CDirtyRegion *)v80, v4, 1, (__m128 *)v160);
      v26 = v81;
      if ( v81 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x1A7u);
    }
    if ( v26 < 0 )
    {
      v142 = 802;
      goto LABEL_344;
    }
  }
  if ( v11 )
  {
    v23 = *(_BYTE *)(v4 + 92);
    if ( (v23 & 8) != 0 )
    {
      v17 = (__int64 (__fastcall *)(_QWORD, _QWORD))((*(int *)(v4 + 88) >> 7) & 4);
      if ( ((v23 & 0x10) != 0) != (((*(int *)(v4 + 88) >> 7) & 4) != 0) )
      {
        *(_BYTE *)(v4 + 92) = v23 & 0xEF | ((_DWORD)v17 != 0 ? 0x10 : 0);
        TopLevelWindow = CVisual::GetTopLevelWindow((CVisual *)v4);
        v33 = (_QWORD *)((char *)this + 536);
        *(_QWORD *)v153 = TopLevelWindow;
        v34 = *((unsigned int *)this + 140);
        *(_DWORD *)&v153[8] = (v32 >> 4) & 1;
        v35 = v34 + 1;
        if ( (int)v34 + 1 < (unsigned int)v34 )
        {
          v26 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
          goto LABEL_49;
        }
        if ( v35 > *((_DWORD *)this + 139) )
        {
          v36 = DynArrayImpl<0>::AddMultipleAndSet(v33, 16LL, 1LL, v153);
          v26 = v36;
          if ( v36 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0xC0u);
LABEL_49:
          if ( v26 < 0 )
          {
            v142 = 812;
LABEL_344:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, v142);
            return (unsigned int)v26;
          }
          goto LABEL_31;
        }
        *(_OWORD *)(*v33 + 16 * v34) = *(_OWORD *)v153;
        *((_DWORD *)this + 140) = v35;
      }
    }
LABEL_31:
    v24 = *(_QWORD *)(v4 + 208);
    v25 = *(_DWORD *)(v24 + 4);
    if ( (v25 & 0x2000000) != 0 )
    {
      v17 = (__int64 (__fastcall *)(_QWORD, _QWORD))*(unsigned int *)(v24 + 12);
      for ( m = (unsigned int *)(v24 + 12); (*m & 0x7F000000) != 0x7000000; v17 = (__int64 (__fastcall *)(_QWORD, _QWORD))*m )
        m = (unsigned int *)((char *)m + ((unsigned int)v17 & 0xFFFFFF) + 4);
      v160[0] = *(struct CSpriteVisualContent **)(m + 1);
      if ( v160[0] )
      {
        v60 = *((_QWORD *)v160[0] + 16);
        if ( v60 )
        {
          if ( *(_QWORD *)(v60 + 96) )
          {
            v61 = *(_QWORD *)(v11 + 120);
            if ( v61 == *(_QWORD *)(*(_QWORD *)(v4 + 16) + 360LL) )
              goto LABEL_115;
            v62 = 0LL;
            if ( (v25 & 0x10000000) != 0 )
            {
              TransformParentDataInternal = CVisual::GetTransformParentDataInternal((CVisual *)v4);
              if ( (*(_BYTE *)(v11 + 16) & 4) == 0 || *(_QWORD *)(v11 + 216) != v133 )
              {
                v62 = CVisual::FindTreeData(*(CVisual **)(*(_QWORD *)TransformParentDataInternal + 8LL), v146);
                if ( v62 )
                  goto LABEL_113;
              }
            }
            if ( v4 != *((_QWORD *)v146 + 3) )
            {
              v63 = *(CVisual **)(v4 + 80);
              if ( *((_BYTE *)v146 + 32) )
              {
                v62 = (struct _LIST_ENTRY *)((char *)v63 + 280);
              }
              else
              {
                TreeDataListHead = CVisual::GetTreeDataListHead(v63);
                if ( TreeDataListHead )
                {
                  Flink = TreeDataListHead->Flink;
                  if ( TreeDataListHead->Flink != TreeDataListHead )
                  {
                    while ( Flink[2].Flink != v135 )
                    {
                      Flink = Flink->Flink;
                      if ( Flink == TreeDataListHead )
                        goto LABEL_112;
                    }
                    v62 = Flink - 14;
                  }
                }
              }
            }
LABEL_112:
            if ( v62 )
LABEL_113:
              Blink = (unsigned __int64)v62[7].Blink;
            else
              Blink = 1LL;
            if ( v61 < Blink )
            {
LABEL_115:
              InputHandle = CVisual::GetInputHandle((CVisual *)v4);
              CInputManager::CopyTransform((const struct CMILMatrix *)(v11 + 40), (struct tagINPUT_TRANSFORM *)v156);
              v65 = DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet((char *)this + 568, &InputHandle);
              v26 = v65;
              if ( v65 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x339u);
                return (unsigned int)v26;
              }
            }
          }
        }
      }
    }
  }
  v26 = 0;
  if ( *((_DWORD *)this + 178) && (v8 && *((_DWORD *)v8 + 25) == 1 || CVisual::IsPreserve3DRoot((CVisual *)v4, v8)) )
  {
    HasEffects = CVisual::IsSimple3DRootOrHasEffects((CVisual *)v4, v8);
    v138 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
             (CPreComputeContext *)((char *)this + 616),
             (struct CVisual *)v4,
             HasEffects);
    v26 = v138;
    if ( v138 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v138, 0x16Bu);
    }
    else
    {
      if ( CVisual::IsPreserve3DRoot((CVisual *)v4, v8) )
      {
        *(_QWORD *)((char *)&v156[3] + 4) = 0LL;
        lpMem = 0LL;
        v158 = 0;
        *(_QWORD *)((char *)&v156[2] + 4) = 1LL;
        HIDWORD(InputHandle) = 0;
        v156[0] = 0LL;
        v156[1] = 0LL;
        v159 = v4;
        v139 = *(struct CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((char *)this + 616);
        if ( v139 )
        {
          v140 = CBspPolygonListBuilder::BuildPolygonList((CBspPolygonListBuilder *)&InputHandle, v139);
          v26 = v140;
          if ( v140 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v140, 0x174u);
LABEL_334:
            WPF::ProcessHeapImpl::Free(lpMem);
            goto LABEL_33;
          }
        }
        CBspPreComputeHelper::PopStacksForBspRootVisual((CPreComputeContext *)((char *)this + 616), v139);
        if ( *((_DWORD *)this + 178) )
        {
          if ( HasEffects )
          {
            v141 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
                     (CPreComputeContext *)((char *)this + 616),
                     (struct CVisual *)v4,
                     1);
            v26 = v141;
            if ( v141 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v141, 0x17Cu);
              goto LABEL_334;
            }
          }
        }
        WPF::ProcessHeapImpl::Free(lpMem);
      }
      if ( v8 && *((_DWORD *)v8 + 25) == 1 )
        CBspPreComputeHelper::PopStacksForBspChildVisual(
          (CPreComputeContext *)((char *)this + 616),
          (const struct CVisual *)v4);
    }
  }
LABEL_33:
  if ( v26 < 0 )
  {
    v142 = 829;
    goto LABEL_344;
  }
  if ( (*(_BYTE *)(v4 + 96) & 2) != 0 )
  {
    v55 = *((_DWORD *)this + 2);
    if ( v55 )
      *((_DWORD *)this + 2) = v55 - 1;
  }
  if ( (*(_BYTE *)(v4 + 96) & 8) != 0 )
  {
    v54 = *((_DWORD *)this + 10);
    if ( v54 )
      *((_DWORD *)this + 10) = v54 - 1;
  }
  if ( *(char *)(v4 + 96) < 0 )
  {
    v82 = *((_DWORD *)this + 18);
    if ( v82 )
      *((_DWORD *)this + 18) = v82 - 1;
  }
  v27 = *(_QWORD *)(v4 + 208);
  if ( (*(_DWORD *)(v27 + 4) & 0x8000000) != 0 )
  {
    v49 = *(_DWORD *)(v27 + 12);
    v50 = (int *)(v27 + 12);
    if ( (v49 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v50 = (int *)((char *)v50 + (v49 & 0xFFFFFF) + 4);
        v49 = *v50;
      }
      while ( (*v50 & 0x7F000000) != 0x5000000 );
    }
    v160[0] = *(struct CSpriteVisualContent **)(v50 + 1);
    v51 = v160[0];
    v52 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v160[0] + 48LL);
    if ( v52 == CEffectGroup::IsOfType
      || !((unsigned __int8 (__fastcall *)(struct CSpriteVisualContent *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v52)(
            v160[0],
            128LL,
            v17) )
    {
      v53 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v51 + 48LL);
      if ( v53 != CEffectGroup::IsOfType
        && !((unsigned __int8 (__fastcall *)(struct CSpriteVisualContent *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v53)(
              v51,
              47LL,
              v17) )
      {
        goto LABEL_38;
      }
      v51 = (struct CSpriteVisualContent *)*((_QWORD *)v51 + 11);
    }
    if ( v51 )
      --*((_DWORD *)this + 110);
  }
LABEL_38:
  *(_DWORD *)(v4 + 88) &= 0xFFFFFF80;
  *(_BYTE *)(v4 + 92) &= 0xF9u;
  return (unsigned int)v26;
}
