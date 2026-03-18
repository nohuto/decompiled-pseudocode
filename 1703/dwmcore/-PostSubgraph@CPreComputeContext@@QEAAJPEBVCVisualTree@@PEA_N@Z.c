/*
 * XREFs of ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18009F610 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 * Callees:
 *     ?ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z @ 0x1800104DC (-ContainsBackdropBrush@CWindowBackgroundTreatment@@QEAA_NPEA_N@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180010B50 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z @ 0x180010EA0 (-EnsureBrushGraph@CEffectBrush@@MEAAJ_N@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180012220 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x180012F7C (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z @ 0x1800133B0 (-GetParentTreeData@CVisual@@AEAAPEBVCTreeData@@PEBVCVisualTree@@PEAV2@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18001344C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800134A0 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x180013760 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z @ 0x18001FE1C (-GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z.c)
 *     ?GetWorldBounds2D@CPreComputeContext@@AEAA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001FE78 (-GetWorldBounds2D@CPreComputeContext@@AEAA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x180020EE4 (-AddMultipleAndSet@-$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INP.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022DEC (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180029978 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037CE0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037F70 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800380B0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800393B0 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800393D0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180039790 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x18004CA50 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x180051C80 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180052FA0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FE88 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FFCC (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?HasAntialiasedContent@CVisual@@MEBA_NXZ @ 0x180084A70 (-HasAntialiasedContent@CVisual@@MEBA_NXZ.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x180084B5C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180087B20 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180088340 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008BF10 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x18008C660 (-HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180092DA8 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098D54 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800AEE10 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AF020 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B4010 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 *     ?IsEmpty@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B4250 (-IsEmpty@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BF9D0 (-IsOfType@CNineGridBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800BFA40 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0260 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C0CC4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0D30 (-IsOfType@CLinearGradientBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800C6554 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18012B4B0 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801782E0 (-AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180178318 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x1801B3098 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1801B33BC (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801B33F4 (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801B34AC (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x1801B4314 (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::PostSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 v7; // rbx
  char (__fastcall *v8)(CWindowNode *); // rax
  float *v9; // rcx
  char v10; // cl
  char v11; // cl
  char v12; // cl
  char v13; // cl
  char v14; // al
  void *v15; // r13
  __int64 v16; // rcx
  char (__fastcall *v17)(CSpriteVisual *); // rax
  char HasAntialiasedContent; // al
  float v19; // xmm6_4
  int v20; // eax
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm5_4
  float v24; // xmm7_4
  int v25; // eax
  __int128 v26; // xmm6
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm0_4
  int v30; // r14d
  __int64 v31; // r12
  int v32; // eax
  unsigned __int8 v33; // cl
  char v34; // al
  __int64 v35; // rax
  char v36; // al
  int v38; // eax
  float InflateSizeForAntiAliasing; // xmm0_4
  __int128 v40; // xmm0
  __int64 v41; // rax
  unsigned int v42; // edx
  int v43; // eax
  bool (__fastcall *v44)(CRenderData *); // rax
  _BOOL8 (__fastcall *v45)(__int64, int); // rax
  char v46; // al
  __int64 v47; // rdx
  int v48; // eax
  char IsEmptyDrawing; // al
  float *v50; // rcx
  unsigned __int8 (*v51)(void); // rax
  __int64 v52; // rax
  bool (__fastcall *v53)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *); // r9
  char IsReadyToDraw; // al
  __int64 v55; // rax
  bool (__fastcall *v56)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *); // r9
  char v57; // al
  unsigned __int8 v58; // dl
  unsigned __int64 TopLevelWindow; // rax
  unsigned int v60; // r10d
  _QWORD *v61; // rcx
  __int64 v62; // rax
  unsigned int v63; // edx
  int v64; // eax
  int v65; // edx
  int *v66; // rcx
  _QWORD *v67; // rdi
  bool (__fastcall *v68)(__int64, int); // rax
  bool (__fastcall *v69)(__int64, int); // rax
  _QWORD *v70; // r14
  __int64 (__fastcall *v71)(CEffectBrush *, char); // rax
  CEffectBrush *v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 (__fastcall *v75)(_QWORD *, __int64); // rax
  char v76; // al
  int v77; // edx
  int v78; // eax
  int v79; // eax
  char HasNonEmptyContent; // al
  int v81; // eax
  float *v82; // rdx
  int v83; // eax
  __int128 v84; // xmm0
  int v85; // eax
  __int64 v86; // r9
  int v87; // eax
  struct CMILMatrix *v88; // r8
  CDirtyRegion *v89; // rdx
  __int64 (__fastcall *v90)(CWindowNode *, CDirtyRegion *, struct CMILMatrix *, int, float *); // rax
  int v91; // eax
  int v92; // eax
  __int64 v93; // rcx
  struct CWindowBackgroundTreatment *v94; // rax
  struct CWindowBackgroundTreatment *v95; // r12
  CVisual *v96; // rcx
  unsigned int v97; // r8d
  int v98; // eax
  __int64 v99; // rcx
  __int64 v101; // r14
  float v102; // xmm6_4
  float v103; // xmm7_4
  float v104; // xmm8_4
  float v105; // xmm9_4
  CGeometry *v106; // rcx
  struct _LIST_ENTRY *TreeData; // rax
  const struct CTreeData *ParentTreeData; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  __int128 v110; // xmm1
  __int128 v111; // xmm0
  __int128 v112; // xmm1
  __int64 v113; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v114; // r8
  int v115; // r10d
  int WorldTransform; // eax
  __int128 v117; // xmm0
  struct CWindowBackgroundTreatment *v118; // rax
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rax
  bool v122; // al
  bool v123; // r14
  float v124; // xmm0_4
  __int128 *WorldBounds2D; // rax
  __int64 v126; // rcx
  unsigned int v127; // edx
  __int128 v128; // xmm0
  unsigned int v129; // eax
  __int64 v130; // rax
  __int64 v131; // rcx
  int v132; // eax
  __int128 v133; // xmm0
  bool v134; // al
  bool HasEffects; // r12
  int v136; // eax
  struct CBspNode *v137; // rdx
  int v138; // eax
  int v139; // eax
  float *v140; // [rsp+20h] [rbp-E0h]
  unsigned int v141; // [rsp+20h] [rbp-E0h]
  bool v142; // [rsp+30h] [rbp-D0h] BYREF
  bool v143; // [rsp+31h] [rbp-CFh] BYREF
  int v144; // [rsp+34h] [rbp-CCh]
  _QWORD *v145; // [rsp+38h] [rbp-C8h]
  _OWORD v146[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v147; // [rsp+80h] [rbp-80h]
  _OWORD v148[4]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v149; // [rsp+D0h] [rbp-30h]
  __int128 v150; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v151; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v152; // [rsp+100h] [rbp+0h]
  _BYTE v153[24]; // [rsp+108h] [rbp+8h] BYREF
  __int64 InputHandle; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v155[5]; // [rsp+128h] [rbp+28h] BYREF
  void *lpMem; // [rsp+150h] [rbp+50h]
  int v157; // [rsp+158h] [rbp+58h]
  __int64 v158; // [rsp+160h] [rbp+60h]

  *a3 = 1;
  v3 = 0LL;
  v5 = *((_QWORD *)this + 24);
  v7 = *((_QWORD *)this + 23);
  if ( *((_BYTE *)a2 + 32) )
    v3 = v7 + 264;
  if ( (*(_BYTE *)(v7 + 88) & 1) != 0 )
  {
    if ( (*(_BYTE *)(v7 + 90) & 0x10) != 0
      && !(unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v7 + 160) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_x(v99, &EVTDESC_PROCESS_VISUAL_FIRSTFRAME, v7);
      *(_BYTE *)(v7 + 90) &= ~0x10u;
    }
    v38 = CVisual::ConvertInnerToOuterBounds((CVisual *)v7);
    v30 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x1CBu);
      return (unsigned int)v30;
    }
  }
  v8 = *(char (__fastcall **)(CWindowNode *))(*(_QWORD *)v7 + 184LL);
  if ( (char *)v8 != (char *)CVisual::HasNonEmptyContent )
  {
    if ( v8 == CSpriteVisual::HasNonEmptyContent )
    {
      v50 = *(float **)(v7 + 240);
      if ( v50 )
      {
        v51 = *(unsigned __int8 (**)(void))(*(_QWORD *)v50 + 176LL);
        if ( (char *)v51 == (char *)CSpriteVisualContent::IsEmptyDrawing )
        {
          v52 = *(_QWORD *)v50;
          v142 = 0;
          v53 = *(bool (__fastcall **)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *))(v52 + 224);
          if ( (char *)v53 == (char *)CMaskBrush::IsReadyToDraw )
          {
            IsReadyToDraw = CMaskBrush::IsReadyToDraw((CMaskBrush *)v50, 0LL, &v142);
          }
          else if ( (char *)v53 == (char *)CSurfaceBrush::IsReadyToDraw )
          {
            IsReadyToDraw = CSurfaceBrush::IsReadyToDraw((CSurfaceBrush *)v50, 0LL, &v142);
          }
          else if ( v53 == CNineGridBrush::IsReadyToDraw )
          {
            IsReadyToDraw = CNineGridBrush::IsReadyToDraw((CNineGridBrush *)v50, 0LL, &v142);
          }
          else if ( (char *)v53 == (char *)CEffectBrush::IsReadyToDraw )
          {
            IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v50, 0LL, &v142);
          }
          else
          {
            IsReadyToDraw = v53((CNineGridBrush *)v50, 0LL, &v142);
          }
          if ( IsReadyToDraw && !v142 )
          {
            v10 = 0;
            goto LABEL_7;
          }
        }
        else if ( (char *)v51 == (char *)CColorBrush::IsEmptyDrawing )
        {
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v50[23]) & _xmm) >= 0.0000011920929 )
            goto LABEL_101;
        }
        else if ( !v51() )
        {
          goto LABEL_101;
        }
      }
      v93 = *(_QWORD *)(v7 + 496);
      if ( !v93 )
        goto LABEL_6;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v93 + 176LL))(v93) )
        goto LABEL_6;
    }
    else
    {
      if ( v8 == CWindowNode::HasNonEmptyContent )
        HasNonEmptyContent = CWindowNode::HasNonEmptyContent((CWindowNode *)v7);
      else
        HasNonEmptyContent = v8((CWindowNode *)v7);
      if ( !HasNonEmptyContent )
        goto LABEL_6;
    }
LABEL_101:
    v10 = 0;
    goto LABEL_7;
  }
  v9 = *(float **)(v7 + 240);
  if ( !v9 )
    goto LABEL_6;
  v44 = *(bool (__fastcall **)(CRenderData *))(*(_QWORD *)v9 + 176LL);
  if ( v44 == CRenderData::IsEmptyDrawing )
  {
    IsEmptyDrawing = *((_BYTE *)v9 + 138);
    goto LABEL_87;
  }
  if ( (char *)v44 == (char *)CSpriteVisualContent::IsEmptyDrawing )
  {
    v55 = *(_QWORD *)v9;
    v142 = 0;
    v56 = *(bool (__fastcall **)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *))(v55 + 224);
    if ( (char *)v56 == (char *)CMaskBrush::IsReadyToDraw )
    {
      v57 = CMaskBrush::IsReadyToDraw((CMaskBrush *)v9, 0LL, &v142);
    }
    else if ( (char *)v56 == (char *)CSurfaceBrush::IsReadyToDraw )
    {
      v57 = CSurfaceBrush::IsReadyToDraw((CSurfaceBrush *)v9, 0LL, &v142);
    }
    else if ( v56 == CNineGridBrush::IsReadyToDraw )
    {
      v57 = CNineGridBrush::IsReadyToDraw((CNineGridBrush *)v9, 0LL, &v142);
    }
    else if ( (char *)v56 == (char *)CEffectBrush::IsReadyToDraw )
    {
      v57 = CEffectBrush::IsReadyToDraw((CEffectBrush *)v9, 0LL, &v142);
    }
    else
    {
      v57 = v56((CNineGridBrush *)v9, 0LL, &v142);
    }
    if ( !v57 || v142 )
      goto LABEL_6;
    goto LABEL_101;
  }
  if ( v44 != CColorBrush::IsEmptyDrawing )
  {
    if ( (char *)v44 == (char *)CPrimitiveGroup::IsEmptyDrawing )
    {
      IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing((CPrimitiveGroup *)v9);
    }
    else if ( v44 == CAtlasedRectsGroup::IsEmptyDrawing )
    {
      IsEmptyDrawing = CAtlasedRectsGroup::IsEmptyDrawing((CAtlasedRectsGroup *)v9);
    }
    else
    {
      IsEmptyDrawing = ((__int64 (*)(void))v44)();
    }
LABEL_87:
    if ( IsEmptyDrawing )
      goto LABEL_6;
    goto LABEL_101;
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9[23]) & _xmm) >= 0.0000011920929 )
  {
    v10 = 0;
    goto LABEL_7;
  }
LABEL_6:
  v10 = 1;
LABEL_7:
  v11 = *(_BYTE *)(v7 + 88) & ((32 * v10) | 0xDF);
  *(_BYTE *)(v7 + 88) = v11;
  if ( v5 )
  {
    v12 = *(_BYTE *)(v5 + 88) & (v11 | 0xDF);
    *(_BYTE *)(v5 + 88) = v12;
    v13 = *(_BYTE *)(v7 + 88) & 0x40 | v12;
    *(_BYTE *)(v5 + 88) = v13;
    v14 = v13 | *(_BYTE *)(v7 + 88) & 0x80;
    *(_BYTE *)(v5 + 88) = v14;
    if ( (v14 & 1) != 0 )
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
        v5 + 160,
        v7 + 136);
    if ( v3 && (*(_BYTE *)(v3 + 224) & 2) != 0 )
      *(_BYTE *)(v5 + 488) |= 2u;
  }
  v15 = &CMILMatrix::Identity;
  if ( (*(_BYTE *)(v7 + 88) & 0x10) != 0 )
  {
    v82 = 0LL;
    if ( *((_DWORD *)this + 34) )
    {
      v83 = *((_DWORD *)this + 34);
      if ( v83 )
      {
        v84 = *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)(v83 - 1));
      }
      else
      {
        v84 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v150 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      v151 = v84;
      v82 = (float *)&v151;
    }
    v85 = *((_DWORD *)this + 2);
    if ( !v85 )
    {
      v30 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x200u);
      return (unsigned int)v30;
    }
    v86 = *(unsigned int *)(*((_QWORD *)this + 3) + 4LL * (unsigned int)(v85 - 1));
    v87 = *((_DWORD *)this + 26);
    v88 = v87
        ? (struct CMILMatrix *)(*((_QWORD *)this + 15) + 68LL * (unsigned int)(v87 - 1))
        : (struct CMILMatrix *)&CMILMatrix::Identity;
    v140 = v82;
    v89 = (CDirtyRegion *)*((_QWORD *)this + 41);
    v90 = *(__int64 (__fastcall **)(CWindowNode *, CDirtyRegion *, struct CMILMatrix *, int, float *))(*(_QWORD *)v7 + 256LL);
    if ( (char *)v90 == (char *)CVisual::CollectAdditionalDirtyRegion )
      v91 = CVisual::CollectAdditionalDirtyRegion(v7, (__int64)v89, (__int64)v88, v86, v140);
    else
      v91 = v90 == CWindowNode::CollectAdditionalDirtyRegion
          ? CWindowNode::CollectAdditionalDirtyRegion((CWindowNode *)v7, v89, v88, v86, v140)
          : ((__int64 (__fastcall *)(__int64, CDirtyRegion *, struct CMILMatrix *, __int64))v90)(v7, v89, v88, v86);
    v30 = v91;
    if ( v91 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v91, 0x205u);
      return (unsigned int)v30;
    }
  }
  v16 = *(_QWORD *)(v7 + 240);
  if ( v16 )
  {
    v45 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v16 + 48LL);
    if ( v45 != CRenderData::IsOfType )
    {
      if ( (char *)v45 == (char *)CColorBrush::IsOfType )
      {
        v46 = CColorBrush::IsOfType(v16, 81);
      }
      else if ( (char *)v45 == (char *)CMaskBrush::IsOfType )
      {
        v46 = CMaskBrush::IsOfType(v16, 81);
      }
      else if ( (char *)v45 == (char *)CPrimitiveGroupLayerClip::IsOfType )
      {
        v46 = CPrimitiveGroupLayerClip::IsOfType(v16, 81LL);
      }
      else if ( (char *)v45 == (char *)CAtlasedRectsGroup::IsOfType )
      {
        v46 = CAtlasedRectsGroup::IsOfType(v16, 81LL);
      }
      else
      {
        v46 = v45 == CCompositionSurfaceBitmap::IsOfType
            ? CCompositionSurfaceBitmap::IsOfType(v16, 81)
            : ((__int64 (__fastcall *)(__int64, __int64, bool (__fastcall *)(__int64, int)))v45)(
                v16,
                81LL,
                CMaskBrush::IsOfType);
      }
      if ( v46 )
      {
        v70 = *(_QWORD **)(v7 + 240);
        LOBYTE(v47) = 1;
        v71 = *(__int64 (__fastcall **)(CEffectBrush *, char))(*v70 + 256LL);
        if ( v71 == CMaskBrush::EnsureBrushGraph )
        {
          CMaskBrush::EnsureBrushGraph(*(CMaskBrush **)(v7 + 240), 1);
        }
        else
        {
          v72 = *(CEffectBrush **)(v7 + 240);
          if ( v71 == CEffectBrush::EnsureBrushGraph )
            CEffectBrush::EnsureBrushGraph(v72, 1);
          else
            v71(v72, v47);
        }
        v74 = v70[8];
        v142 = v74 && *(_BYTE *)(v74 + 354);
        v75 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v70 + 48LL);
        if ( (char *)v75 == (char *)CColorBrush::IsOfType )
        {
          v76 = CColorBrush::IsOfType((__int64)v70, 89);
        }
        else if ( (char *)v75 == (char *)CMaskBrush::IsOfType )
        {
          v76 = CMaskBrush::IsOfType((__int64)v70, 89);
        }
        else if ( (char *)v75 == (char *)CSurfaceBrush::IsOfType )
        {
          v76 = CSurfaceBrush::IsOfType((__int64)v70, 89);
        }
        else if ( (char *)v75 == (char *)CNineGridBrush::IsOfType )
        {
          v76 = CNineGridBrush::IsOfType(v70, 89LL, v73);
        }
        else
        {
          v76 = (char *)v75 == (char *)CLinearGradientBrush::IsOfType
              ? CLinearGradientBrush::IsOfType(v70, 89LL)
              : v75(v70, 89LL);
        }
        if ( v76 || v142 )
        {
          LOBYTE(v77) = 0;
          v101 = v7;
          v102 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v103 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
          v104 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
          v105 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
          v150 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v148[0] = _xmm;
          v144 = v77;
          v148[1] = _xmm;
          v149 = 32085;
          v148[2] = _xmm;
          v145 = (_QWORD *)v7;
          v148[3] = _xmm;
          while ( (*(_DWORD *)(*(_QWORD *)(v101 + 208) + 4LL) & 0x8000) == 0 )
          {
            v142 = 0;
            v147 = 0;
            LODWORD(v158) = 0;
            CVisual::CalcEffectiveTransform(v101, 5, 0LL, &v142, (CMILMatrix *)v146, (__int64)&InputHandle);
            CMILMatrix::Multiply(
              (const struct CMILMatrix *)v148,
              (const struct CMILMatrix *)v146,
              (struct CMILMatrix *)v148);
            if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v150) )
            {
              CMILMatrix::Transform2DBoundsHelper<0>(v146, &v150, &v150);
              v105 = *((float *)&v150 + 3);
              v104 = *((float *)&v150 + 2);
              v103 = *((float *)&v150 + 1);
              v102 = *(float *)&v150;
            }
            v106 = *(CGeometry **)(v101 + 232);
            if ( v106 )
            {
              *(_QWORD *)&v151 = 0LL;
              BYTE8(v151) = 0;
              if ( (int)CGeometry::GetShapeData(
                          v106,
                          (const struct D2D_SIZE_F *)(v101 + 128),
                          (struct CShapePtr *)&v151) >= 0
                && (*(int (__fastcall **)(_QWORD, _BYTE *, __int64 *))(*(_QWORD *)v151 + 32LL))(
                     v151,
                     v153,
                     &InputHandle) >= 0 )
              {
                if ( *(float *)v153 > v102 )
                {
                  LODWORD(v150) = *(_DWORD *)v153;
                  v102 = *(float *)v153;
                }
                if ( *(float *)&v153[4] > v103 )
                {
                  DWORD1(v150) = *(_DWORD *)&v153[4];
                  v103 = *(float *)&v153[4];
                }
                if ( v104 > *(float *)&v153[8] )
                {
                  DWORD2(v150) = *(_DWORD *)&v153[8];
                  v104 = *(float *)&v153[8];
                }
                if ( v105 > *(float *)&v153[12] )
                {
                  HIDWORD(v150) = *(_DWORD *)&v153[12];
                  v105 = *(float *)&v153[12];
                }
                if ( v104 <= v102 || v105 <= v103 )
                {
                  v105 = 0.0;
                  v104 = 0.0;
                  v103 = 0.0;
                  v102 = 0.0;
                  v150 = 0uLL;
                }
              }
              CShapePtr::Release((CShapePtr *)&v151);
            }
            TreeData = CVisual::FindTreeData((CVisual *)v101, a2);
            if ( TreeData )
            {
              ParentTreeData = CVisual::GetParentTreeData((CVisual *)v101, a2, (struct CTreeData *)TreeData, &v143);
              LOBYTE(v77) = v144;
              if ( ParentTreeData )
              {
                v77 = (unsigned __int8)v144;
                if ( v143 )
                  v77 = 1;
                v144 = v77;
              }
            }
            else
            {
              LOBYTE(v77) = v144;
            }
            v101 = *(_QWORD *)(v101 + 80);
            v145 = (_QWORD *)v101;
            if ( !v101 )
              goto LABEL_15;
          }
          if ( (_BYTE)v77 )
          {
            WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v101);
            v110 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 136);
            v146[0] = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 120);
            v111 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 152);
            v146[1] = v110;
            v112 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 168);
            LODWORD(WindowBackgroundTreatmentInternal) = *((_DWORD *)WindowBackgroundTreatmentInternal + 46);
            v146[2] = v111;
            v146[3] = v112;
            v147 = (int)WindowBackgroundTreatmentInternal;
            if ( !CMILMatrix::Invert((CMILMatrix *)v146, v113, v114) )
              goto LABEL_15;
            LODWORD(v158) = 0;
            WorldTransform = CVisual::GetWorldTransform(
                               (CVisual *)v7,
                               (__int64)a2,
                               v115,
                               (__int64)&InputHandle,
                               0LL,
                               0LL);
            v30 = WorldTransform;
            if ( WorldTransform < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, WorldTransform, 0x251u);
              return (unsigned int)v30;
            }
            CMILMatrix::Multiply(
              (const struct CMILMatrix *)&InputHandle,
              (const struct CMILMatrix *)v146,
              (struct CMILMatrix *)v148);
            v101 = (__int64)v145;
          }
          v117 = *(_OWORD *)(v7 + 160);
          *(_QWORD *)&v153[16] = *(_QWORD *)(v7 + 176);
          *(_OWORD *)v153 = v117;
          CMILMatrix::Transform3DBoundsHelper<0>(v148, v153, &v151);
          if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v150) )
            TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
              (__int64)&v151,
              &v150);
          if ( !(unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v151) )
          {
            v118 = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v101);
            v119 = CWindowBackgroundTreatment::AddRectangleToBounds(v118, &v151);
            v30 = v119;
            if ( v119 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v119, 0x26Au);
              return (unsigned int)v30;
            }
          }
        }
      }
    }
  }
LABEL_15:
  if ( (*(_BYTE *)(v7 + 89) & 2) != 0 )
  {
    v48 = *((_DWORD *)this + 26);
    if ( v48 )
      *((_DWORD *)this + 26) = v48 - 1;
  }
  if ( (*(_BYTE *)(v7 + 89) & 4) != 0 )
  {
    v79 = *((_DWORD *)this + 34);
    if ( v79 )
      *((_DWORD *)this + 34) = v79 - 1;
  }
  if ( (*(_BYTE *)(v7 + 88) & 1) != 0 && (*(_BYTE *)(v7 + 90) & 0x40) != 0 )
  {
    *(_QWORD *)v153 = v7;
    InflateSizeForAntiAliasing = CPreComputeContext::GetInflateSizeForAntiAliasing(this, (const struct CVisual *)v7);
    v40 = *(_OWORD *)CPreComputeContext::GetWorldBounds2D(
                       (__int64)this,
                       (__int64)&v151,
                       v7 + 136,
                       InflateSizeForAntiAliasing);
    v41 = *((unsigned int *)this + 90);
    *(_OWORD *)&v153[8] = v40;
    v42 = v41 + 1;
    if ( (int)v41 + 1 < (unsigned int)v41 )
    {
      v30 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    else
    {
      if ( v42 <= *((_DWORD *)this + 89) )
      {
        v120 = 3 * v41;
        v121 = *((_QWORD *)this + 42);
        *(_OWORD *)(v121 + 8 * v120) = *(_OWORD *)v153;
        *(_QWORD *)(v121 + 8 * v120 + 16) = *(_QWORD *)&v153[16];
        *((_DWORD *)this + 90) = v42;
        goto LABEL_18;
      }
      v43 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 336, 0x18u, 1, v153);
      v30 = v43;
      if ( v43 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0xC0u);
    }
    if ( v30 < 0 )
    {
      v141 = 646;
LABEL_310:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, v141);
      return (unsigned int)v30;
    }
  }
LABEL_18:
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 208) + 4LL) & 0x8000) != 0 )
  {
    v94 = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v7);
    v95 = v94;
    if ( *((_BYTE *)v94 + 276) )
    {
      v142 = 0;
      v122 = CWindowBackgroundTreatment::ContainsBackdropBrush((CSpriteVisualContent **)v94, &v142);
      v123 = v142;
      v143 = v122;
      if ( v122 && v142 )
      {
        *(_QWORD *)v153 = v7;
        v124 = CPreComputeContext::GetInflateSizeForAntiAliasing(this, (const struct CVisual *)v7);
        WorldBounds2D = (__int128 *)CPreComputeContext::GetWorldBounds2D(
                                      (__int64)this,
                                      (__int64)&v151,
                                      (__int64)v95 + 72,
                                      v124);
        v126 = *((unsigned int *)this + 90);
        v127 = v144;
        v128 = *WorldBounds2D;
        v129 = v126 + 1;
        *(_OWORD *)&v153[8] = v128;
        if ( (int)v126 + 1 >= (unsigned int)v126 )
          v127 = v126 + 1;
        v30 = v129 < (unsigned int)v126 ? 0x80070216 : 0;
        if ( v129 < (unsigned int)v126 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xB5u);
        }
        else if ( v127 > *((_DWORD *)this + 89) )
        {
          v132 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 336, 0x18u, 1, v153);
          v30 = v132;
          if ( v132 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v132, 0xC0u);
        }
        else
        {
          v130 = *((_QWORD *)this + 42);
          v131 = 3 * v126;
          *(_OWORD *)(v130 + 8 * v131) = *(_OWORD *)v153;
          *(_QWORD *)(v130 + 8 * v131 + 16) = *(_QWORD *)&v153[16];
          *((_DWORD *)this + 90) = v127;
        }
        if ( v30 < 0 )
        {
          v141 = 665;
          goto LABEL_310;
        }
        v123 = v142;
      }
      if ( *((_BYTE *)v95 + 277) && CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(v95) )
      {
        v133 = *(_OWORD *)((char *)v95 + 72);
        v152 = *((_QWORD *)v95 + 11);
        v151 = v133;
        CMILMatrix::Transform3DBoundsHelper<0>((char *)v95 + 120, &v151, v153);
        v134 = v123
            && *(_QWORD *)(*(_QWORD *)this + 520LL) - *((_QWORD *)v95 + 46) < CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta;
        if ( !v143
          || v134
          || !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe((float *)v153, (float *)v95 + 65) )
        {
          *((_BYTE *)v95 + 279) = 0;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v7 + 88) & 0xC) != 0 )
  {
    --*(_DWORD *)(*((_QWORD *)this + 41) + 2704LL);
    if ( *((_DWORD *)this + 42) || *(_BYTE *)(v7 + 88) >= 0x80u )
    {
      v19 = FLOAT_4_0;
    }
    else
    {
      v17 = *(char (__fastcall **)(CSpriteVisual *))(*(_QWORD *)v7 + 272LL);
      if ( (char *)v17 == (char *)CVisual::HasAntialiasedContent )
      {
        HasAntialiasedContent = CVisual::HasAntialiasedContent((CVisual *)v7);
      }
      else if ( v17 == CSpriteVisual::HasAntialiasedContent )
      {
        HasAntialiasedContent = CSpriteVisual::HasAntialiasedContent((CSpriteVisual *)v7);
      }
      else
      {
        HasAntialiasedContent = v17((CSpriteVisual *)v7);
      }
      if ( HasAntialiasedContent )
        v19 = FLOAT_0_5;
      else
        v19 = 0.0;
    }
    v20 = *((_DWORD *)this + 26);
    if ( v20 )
      v15 = (void *)(*((_QWORD *)this + 15) + 68LL * (unsigned int)(v20 - 1));
    CMILMatrix::Transform3DBoundsHelper<1>(v15, v7 + 136, &v151);
    LODWORD(v21) = v151;
    v22 = *((float *)&v151 + 1);
    v23 = *((float *)&v151 + 2);
    v24 = *((float *)&v151 + 3);
    if ( v19 > 0.0 && *((float *)&v151 + 2) > *(float *)&v151 && *((float *)&v151 + 3) > *((float *)&v151 + 1) )
    {
      v21 = *(float *)&v151 - v19;
      v22 = *((float *)&v151 + 1) - v19;
      v23 = v19 + *((float *)&v151 + 2);
      v24 = v19 + *((float *)&v151 + 3);
    }
    v25 = *((_DWORD *)this + 34);
    if ( v25 )
    {
      v26 = *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)(v25 - 1));
      v151 = v26;
      if ( v21 > *(float *)&v26 )
        *(float *)&v26 = v21;
      v27 = *((float *)&v151 + 1);
      if ( v22 > *((float *)&v151 + 1) )
        v27 = v22;
      v28 = *((float *)&v151 + 2);
      if ( *((float *)&v151 + 2) > v23 )
        v28 = v23;
      v29 = *((float *)&v151 + 3);
      if ( *((float *)&v151 + 3) > v24 )
        v29 = v24;
      if ( v28 <= *(float *)&v26 || v29 <= v27 )
      {
        v29 = 0.0;
        v28 = 0.0;
        v27 = 0.0;
        LODWORD(v26) = 0;
      }
      *(_QWORD *)&v150 = __PAIR64__(LODWORD(v27), v26);
      LODWORD(v21) = v26;
      v22 = v27;
      *((_QWORD *)&v150 + 1) = __PAIR64__(LODWORD(v29), LODWORD(v28));
      v23 = v28;
      v24 = v29;
    }
    else
    {
      *(_QWORD *)&v150 = __PAIR64__(LODWORD(v22), LODWORD(v21));
      *((_QWORD *)&v150 + 1) = __PAIR64__(LODWORD(v24), LODWORD(v23));
    }
    v30 = 0;
    v31 = *((_QWORD *)this + 41);
    if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v21
      && v23 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
      || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v22
      && v24 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
    {
      CDirtyRegion::SetFullDirty(*((CDirtyRegion **)this + 41));
    }
    if ( !*(_BYTE *)(v31 + 2724) && !*(_DWORD *)(v31 + 2704) )
    {
      v32 = CDirtyRegion::_Add((CDirtyRegion *)v31, v7, 1, (float *)&v150);
      v30 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x1C3u);
    }
    if ( v30 < 0 )
    {
      v141 = 709;
      goto LABEL_310;
    }
  }
  if ( v3 )
  {
    *(_BYTE *)(v3 + 224) &= ~1u;
    v33 = *(_BYTE *)(v7 + 89);
    if ( (v33 & 8) != 0 )
    {
      v58 = *(_BYTE *)(v7 + 488);
      if ( ((v58 ^ (v33 >> 3)) & 2) != 0 )
      {
        *(_BYTE *)(v7 + 89) = v33 ^ (v33 ^ (8 * v58)) & 0x10;
        TopLevelWindow = CVisual::GetTopLevelWindow((CVisual *)v7);
        v61 = (_QWORD *)((char *)this + 264);
        *(_QWORD *)&v151 = TopLevelWindow;
        v62 = *((unsigned int *)this + 72);
        DWORD2(v151) = (v60 >> 4) & 1;
        v63 = v62 + 1;
        if ( (int)v62 + 1 < (unsigned int)v62 )
        {
          v30 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          goto LABEL_107;
        }
        if ( v63 > *((_DWORD *)this + 71) )
        {
          v64 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v61, 0x10u, 1, &v151);
          v30 = v64;
          if ( v64 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0xC0u);
LABEL_107:
          if ( v30 < 0 )
          {
            v141 = 725;
            goto LABEL_310;
          }
          goto LABEL_53;
        }
        *(_OWORD *)(*v61 + 16 * v62) = v151;
        *((_DWORD *)this + 72) = v63;
      }
    }
LABEL_53:
    v34 = *(_BYTE *)(v3 + 224);
    if ( (v34 & 4) != 0 )
    {
      v96 = *(CVisual **)(v3 + 24);
      *(_BYTE *)(v3 + 224) = v34 & 0xFB;
      InputHandle = CVisual::GetInputHandle(v96);
      CInputManager::CopyTransform((const struct CMILMatrix *)(v3 + 40), (struct tagINPUT_TRANSFORM *)v155);
      v98 = DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet(
              (__int64 *)this + 37,
              (__int64)&InputHandle,
              v97);
      v30 = v98;
      if ( v98 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v98, 0x2DEu);
        return (unsigned int)v30;
      }
    }
  }
  v30 = 0;
  if ( *((_DWORD *)this + 116)
    && (v5 && *(_DWORD *)(v5 + 96) == 1 || CVisual::IsPreserve3DRoot((CVisual *)v7, (const struct CVisual *)v5)) )
  {
    HasEffects = CVisual::IsSimple3DRootOrHasEffects((CVisual *)v7, (const struct CVisual *)v5);
    v136 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
             (CPreComputeContext *)((char *)this + 368),
             (struct CVisual *)v7,
             HasEffects);
    v30 = v136;
    if ( v136 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v136, 0x16Bu);
    }
    else
    {
      if ( CVisual::IsPreserve3DRoot((CVisual *)v7, (const struct CVisual *)v5) )
      {
        *(_QWORD *)((char *)&v155[3] + 4) = 0LL;
        lpMem = 0LL;
        v157 = 0;
        *(_QWORD *)((char *)&v155[2] + 4) = 1LL;
        HIDWORD(InputHandle) = 0;
        v155[0] = 0LL;
        v155[1] = 0LL;
        v158 = v7;
        v137 = *(struct CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((char *)this + 368);
        if ( v137 )
        {
          v138 = CBspPolygonListBuilder::BuildPolygonList((CBspPolygonListBuilder *)&InputHandle, v137);
          v30 = v138;
          if ( v138 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v138, 0x174u);
LABEL_300:
            WPF::ProcessHeapImpl::Free(lpMem);
            goto LABEL_55;
          }
        }
        CBspPreComputeHelper::PopStacksForBspRootVisual((CPreComputeContext *)((char *)this + 368), v137);
        if ( *((_DWORD *)this + 116) )
        {
          if ( HasEffects )
          {
            v139 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
                     (CPreComputeContext *)((char *)this + 368),
                     (struct CVisual *)v7,
                     1);
            v30 = v139;
            if ( v139 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v139, 0x17Cu);
              goto LABEL_300;
            }
          }
        }
        WPF::ProcessHeapImpl::Free(lpMem);
      }
      if ( v5 && *(_DWORD *)(v5 + 96) == 1 )
        CBspPreComputeHelper::PopStacksForBspChildVisual(
          (CPreComputeContext *)((char *)this + 368),
          (const struct CVisual *)v7);
    }
  }
LABEL_55:
  if ( v30 < 0 )
  {
    v141 = 738;
    goto LABEL_310;
  }
  if ( (*(_BYTE *)(v7 + 92) & 2) != 0 )
  {
    v81 = *((_DWORD *)this + 2);
    if ( v81 )
      *((_DWORD *)this + 2) = v81 - 1;
  }
  if ( (*(_BYTE *)(v7 + 92) & 8) != 0 )
  {
    v78 = *((_DWORD *)this + 10);
    if ( v78 )
      *((_DWORD *)this + 10) = v78 - 1;
  }
  if ( *(char *)(v7 + 92) < 0 )
  {
    v92 = *((_DWORD *)this + 18);
    if ( v92 )
      *((_DWORD *)this + 18) = v92 - 1;
  }
  v35 = *(_QWORD *)(v7 + 208);
  if ( (*(_DWORD *)(v35 + 4) & 0x8000000) != 0 )
  {
    v65 = *(_DWORD *)(v35 + 12);
    v66 = (int *)(v35 + 12);
    if ( (v65 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v66 = (int *)((char *)v66 + (v65 & 0xFFFFFF) + 4);
        v65 = *v66;
      }
      while ( (*v66 & 0x7F000000) != 0x5000000 );
    }
    v145 = *(_QWORD **)(v66 + 1);
    v67 = v145;
    v68 = *(bool (__fastcall **)(__int64, int))(*v145 + 48LL);
    if ( v68 == CEffectGroup::IsOfType || !v68((__int64)v145, 23) )
    {
      v69 = *(bool (__fastcall **)(__int64, int))(*v67 + 48LL);
      if ( v69 != CEffectGroup::IsOfType && !v69((__int64)v67, 7) )
        goto LABEL_60;
      v67 = (_QWORD *)v67[11];
    }
    if ( v67 )
      --*((_DWORD *)this + 42);
  }
LABEL_60:
  v36 = *(_BYTE *)(v7 + 88);
  *(_BYTE *)(v7 + 89) &= 0xF9u;
  *(_BYTE *)(v7 + 88) = v36 & 0xE0;
  return (unsigned int)v30;
}
