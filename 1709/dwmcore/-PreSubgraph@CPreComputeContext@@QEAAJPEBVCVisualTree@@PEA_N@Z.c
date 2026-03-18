/*
 * XREFs of ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18005B220 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E3F0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ @ 0x180022320 (-HasAntialiasedContent@CSpriteVisual@@UEBA_NXZ.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022460 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022CC0 (-GetBounds@CSpriteVisualContent@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMil.c)
 *     ?GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180024DB0 (-GetBounds@CMaskBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetBounds@CPrimitiveGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180027F90 (-GetBounds@CPrimitiveGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF.c)
 *     ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800330D0 (-GetRectBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180033400 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800350E0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180035380 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x1800354D0 (--_GCRectanglesShape@@UEAAPEAXI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036B80 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180047DB0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004E5FC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x18004E640 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18004E930 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18004F6F8 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004F728 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180050644 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180054460 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058B10 (-GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180059098 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800598E0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005A8E0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006ACC0 (-GetBounds@CAtlasedRectsGroup@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180083430 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800911EC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180092630 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180095178 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096EA0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180097FE4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009B140 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18009B960 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800A0560 (-SetWorldTransform@CTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800A06F0 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800B1B84 (-InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800B20A4 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800B2150 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800B540C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?ULongLongToUInt@@YAJ_KPEAI@Z @ 0x1800B5EE0 (-ULongLongToUInt@@YAJ_KPEAI@Z.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x1800B6ADC (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B8D5C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_1800B8D5C.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18011A694 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18011A9D4 (-IsWorldTransformNewForCurrentFrame@CVisual@@QEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?IsAffectedByNonAmbientLights@CVisual@@QEAA_NPEBVCVisualTree@@PEAVCLightStack@@@Z @ 0x1801775C8 (-IsAffectedByNonAmbientLights@CVisual@@QEAA_NPEBVCVisualTree@@PEAVCLightStack@@@Z.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXXZ @ 0x180177668 (-IssueContextUpdateNotification@CVisual@@IEAAXXZ.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x1801968BC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801CFD38 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801CFEE4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::PreSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  char v3; // r10
  CCompositionSpotLight *v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rdi
  bool *v7; // r11
  struct _LIST_ENTRY *v9; // rbx
  struct CTreeData *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  _DWORD *v17; // rax
  _BYTE *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  char (__fastcall *v21)(CSpriteVisual *); // rax
  __int64 v22; // rcx
  float v23; // xmm6_4
  int v24; // eax
  __int64 v25; // rax
  struct CVisualTree *v26; // rbx
  __int64 v27; // rax
  char v28; // bl
  bool v29; // r15
  bool (__fastcall *v30)(CLayerVisual *__hidden); // rax
  char HasNonDefaultTreeEffectInternal; // al
  __int64 v32; // rax
  char v33; // al
  __int64 v35; // rax
  CRegionShape *v36; // rax
  struct CVisualTree *v37; // r11
  __int64 v38; // rsi
  int v39; // r15d
  char v40; // r13
  struct _LIST_ENTRY *v41; // rbx
  __int64 v42; // rax
  struct _LIST_ENTRY *v43; // r10
  CVisual *v44; // rcx
  unsigned __int64 v45; // rax
  char v46; // cl
  __int128 v47; // xmm1
  unsigned int v48; // eax
  bool v49; // cl
  __int128 v50; // xmm1
  __int64 v51; // r15
  __m128 *v52; // rdx
  int v53; // eax
  __int128 v54; // xmm0
  int v55; // eax
  __int64 v56; // r9
  int v57; // eax
  void *v58; // r8
  __int64 v59; // rdx
  __int64 (__usercall *v60)@<rax>(CWindowNode *@<rcx>, __int64); // rax
  int v61; // eax
  __int64 v62; // rax
  float v63; // xmm4_4
  float v64; // xmm6_4
  float v65; // xmm5_4
  float v66; // xmm7_4
  float v67; // xmm8_4
  float v68; // xmm9_4
  __int64 v69; // rcx
  struct D2D_SIZE_F v70; // xmm2_8
  float v71; // xmm3_4
  float v72; // xmm2_4
  struct D2D_SIZE_F v73; // xmm1_8
  float v74; // xmm1_4
  float v75; // xmm0_4
  bool v76; // si
  char v77; // bl
  struct CTreeData *v78; // rsi
  unsigned __int64 v79; // rbx
  struct _LIST_ENTRY *TreeData; // r10
  CVisual *v81; // rcx
  unsigned __int64 Blink; // rax
  __int64 (__fastcall *v83)(__int64, CContentBounder *, __int64); // rax
  CSpriteVisualContent *v84; // rcx
  __m128 v85; // xmm0
  __int64 v86; // rax
  int v87; // esi
  __int128 v88; // xmm1
  __int64 v89; // rcx
  __int64 v90; // rax
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  unsigned int v93; // eax
  unsigned int *i; // rcx
  _QWORD *v95; // rbx
  unsigned __int8 (__fastcall *v96)(_QWORD, __int64, __int64, __int64); // rax
  unsigned __int8 (__fastcall *v97)(_QWORD *, __int64, __int64, __int64); // rax
  int v98; // edx
  int *v99; // rcx
  __int64 (__fastcall *v100)(struct CTreeData *, __int64); // rax
  __int64 v101; // rax
  void *v102; // r13
  int v103; // r15d
  unsigned int v104; // ecx
  __int64 v105; // rax
  void *v106; // r13
  int v107; // r15d
  unsigned int v108; // edx
  struct _LIST_ENTRY *v109; // rax
  struct _LIST_ENTRY v110; // xmm1
  struct _LIST_ENTRY v111; // xmm0
  struct _LIST_ENTRY v112; // xmm1
  char v113; // al
  const struct D2D_SIZE_F *v114; // rbx
  __int64 (__fastcall *v115)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *); // rax
  int ShapeDataCore; // eax
  CComponentTransform2D *v117; // rcx
  CRegionShape *v118; // rbx
  __int64 (__fastcall *v119)(CRegionShape *, __m128 *, _QWORD); // rax
  int TightBounds; // eax
  CRectanglesShape *(__fastcall *v121)(CRectanglesShape *, char); // rax
  int v122; // eax
  __int128 v123; // xmm0
  __int64 v124; // rax
  unsigned int v125; // eax
  char HasAntialiasedContent; // al
  __int64 v127; // rax
  __int64 p_Blink; // r15
  _BYTE *v129; // rax
  _BOOL8 v130; // r8
  struct CMILMatrix *v131; // r9
  __int64 (__fastcall *v132)(CDesktopTreeData *__hidden, const struct CMILMatrix *, bool, struct CMILMatrix *); // rax
  int v133; // eax
  __int64 v134; // rax
  _DWORD *v135; // r8
  __int64 (__fastcall *v136)(CSpriteVisualContent *, __int64, _DWORD *, struct CTreeData **); // rax
  int Bounds; // eax
  __int64 v138; // rbx
  unsigned int *v139; // rcx
  __int64 v140; // rdx
  int ContentBounds; // eax
  int v142; // eax
  int v143; // eax
  void *v144; // rcx
  float v145; // xmm1_4
  float v146; // xmm2_4
  float v147; // xmm5_4
  float v148; // xmm4_4
  int v149; // eax
  __m128 v150; // xmm3
  float v151; // xmm1_4
  float v152; // xmm2_4
  float v153; // xmm0_4
  __int64 v154; // rbx
  int v155; // eax
  __int64 v156; // rcx
  CVisual *v157; // rcx
  __int64 v158; // rax
  CRegionShape *p_lpMem; // r8
  int v160; // edx
  unsigned int v161; // r13d
  int v162; // edx
  const struct CVisualTree *v163; // r9
  __int64 (__fastcall *v164)(CCompositionSpotLight *, const struct CVisualTree *, __int64); // r10
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rax
  __int64 (__fastcall *v168)(CCompositionSpotLight *, const struct CVisualTree *, __int64); // rax
  char IsValid; // al
  _QWORD *v170; // rcx
  __int64 v171; // rax
  unsigned int v172; // edx
  void (*v173)(void); // rax
  CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // r15
  int WorldTransform; // eax
  _QWORD *RectBounds; // rax
  __int64 v177; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int ShapeDataWorker; // eax
  struct _LIST_ENTRY *v181; // rax
  struct _LIST_ENTRY *v182; // rcx
  struct _LIST_ENTRY *v183; // rax
  struct _LIST_ENTRY *v184; // r11
  struct _LIST_ENTRY *v185; // rcx
  int v186; // edx
  int *v187; // rcx
  FLOAT v188; // eax
  int v189; // eax
  int v190; // eax
  void **v191; // r9
  unsigned int v192; // r15d
  int v193; // eax
  int v194; // eax
  __int64 v195; // rbx
  int v196; // eax
  void **v197; // r9
  unsigned int v198; // r15d
  int v199; // eax
  int v200; // eax
  __int64 v201; // rbx
  unsigned int *j; // rcx
  __int64 v203; // rax
  int v204; // eax
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v206; // r11
  int v207; // eax
  unsigned __int64 v208; // rax
  __int64 v209; // rcx
  SIZE_T v210; // r8
  unsigned __int64 v211; // rax
  int v212; // eax
  unsigned __int64 v213; // rax
  __int64 v214; // rcx
  SIZE_T v215; // r8
  unsigned __int64 v216; // rax
  struct _LIST_ENTRY *v217; // rax
  struct _LIST_ENTRY *v218; // r11
  struct _LIST_ENTRY *v219; // rcx
  _QWORD *v220; // rax
  int ManipulationManager; // eax
  unsigned int *k; // rcx
  int v223; // eax
  int v224; // eax
  __int64 v225; // [rsp+20h] [rbp-E0h]
  unsigned int v226; // [rsp+20h] [rbp-E0h]
  bool v227; // [rsp+30h] [rbp-D0h] BYREF
  char v228; // [rsp+31h] [rbp-CFh]
  size_t v229; // [rsp+38h] [rbp-C8h] BYREF
  size_t Size; // [rsp+40h] [rbp-C0h] BYREF
  struct CVisualTree *v231; // [rsp+48h] [rbp-B8h]
  unsigned int v232; // [rsp+50h] [rbp-B0h]
  __int128 v233; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v234; // [rsp+70h] [rbp-90h]
  __int128 v235; // [rsp+80h] [rbp-80h]
  __int128 v236; // [rsp+90h] [rbp-70h]
  int v237; // [rsp+A0h] [rbp-60h]
  _BYTE v238[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v239; // [rsp+F0h] [rbp-10h]
  _BYTE v240[64]; // [rsp+100h] [rbp+0h] BYREF
  int v241; // [rsp+140h] [rbp+40h]
  _BYTE v242[64]; // [rsp+150h] [rbp+50h] BYREF
  int v243; // [rsp+190h] [rbp+90h]
  struct D2D_SIZE_F v244[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  CRegionShape *v245[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  struct CTreeData *v246[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __m128 v247; // [rsp+1D0h] [rbp+D0h] BYREF
  struct D2D_MATRIX_3X2_F lpMem; // [rsp+1E8h] [rbp+E8h] BYREF

  v3 = *((_BYTE *)a2 + 32);
  v4 = 0LL;
  v5 = *((_QWORD *)this + 58);
  v6 = *((_QWORD *)this + 57);
  v7 = a3;
  v232 = 0;
  v237 = 0;
  v244[0] = (struct D2D_SIZE_F)a3;
  v9 = 0LL;
  v231 = a2;
  if ( v3 )
  {
    v9 = (struct _LIST_ENTRY *)(v6 + 280);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v6);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( (struct CVisualTree *)Flink[2].Flink != v231 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_3;
        }
        v9 = Flink - 14;
      }
    }
  }
LABEL_3:
  *v7 = 0;
  v10 = (struct CTreeData *)v9;
  if ( !v3 )
    v10 = 0LL;
  v246[0] = v10;
  v11 = *(_QWORD *)(v6 + 264);
  if ( (v11 & 2) != 0 )
    v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v11) = v11 & 1;
  if ( !(_DWORD)v11 )
  {
    v12 = *(_QWORD *)(v6 + 272);
    if ( (v12 & 2) != 0 )
      v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v12) = v12 & 1;
    if ( !(_DWORD)v12 )
      goto LABEL_11;
  }
  p_lpMem = (CRegionShape *)&lpMem;
  *(_QWORD *)&lpMem.m11 = 0x100000000LL;
  v245[0] = (CRegionShape *)&lpMem;
  while ( 2 )
  {
    v160 = *(_DWORD *)p_lpMem;
    v161 = 0;
    LODWORD(Size) = *(_DWORD *)p_lpMem;
    while ( v161 < (unsigned int)CVisual::GetLightsCount(v6, v160) )
    {
      if ( v162 )
      {
        v165 = *(_QWORD *)(v6 + 272);
        if ( (v165 & 2) == 0 )
        {
LABEL_295:
          LODWORD(v165) = v165 & 1;
          goto LABEL_296;
        }
      }
      else
      {
        v165 = *(_QWORD *)(v6 + 264);
        if ( (v165 & 2) == 0 )
          goto LABEL_295;
      }
      v165 = *(_QWORD *)(v165 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_296:
      if ( v161 < (unsigned int)v165 )
      {
        if ( v162 )
          v166 = v6 + 272;
        else
          v166 = v6 + 264;
        v4 = (CCompositionSpotLight *)CPtrArrayBase::operator[](v166, v161);
      }
      v167 = *(_QWORD *)v4;
      v229 = (size_t)v4;
      v168 = *(__int64 (__fastcall **)(CCompositionSpotLight *, const struct CVisualTree *, __int64))(v167 + 184);
      if ( v168 == v164 )
        IsValid = CCompositionSpotLight::IsValid(v4, v163, (const struct CVisual *)v6);
      else
        IsValid = v168(v4, v163, v6);
      if ( !IsValid )
        goto LABEL_309;
      v170 = (_QWORD *)((char *)this + 200);
      v247.m128_i32[2] = Size;
      v171 = *((unsigned int *)this + 56);
      v247.m128_u64[0] = (unsigned __int64)v4;
      v172 = v171 + 1;
      if ( (int)v171 + 1 < (unsigned int)v171 )
      {
        LODWORD(v4) = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_412:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0x20u);
        goto LABEL_308;
      }
      LODWORD(v4) = 0;
      if ( v172 > *((_DWORD *)this + 55) )
      {
        v207 = DynArrayImpl<0>::AddMultipleAndSet(v170, 16LL, 1LL, &v247);
        LODWORD(v4) = v207;
        if ( v207 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v207, 0xC0u);
          goto LABEL_412;
        }
      }
      else
      {
        *(__m128 *)(*v170 + 16 * v171) = v247;
        *((_DWORD *)this + 56) = v172;
      }
      v173 = *(void (**)(void))(*(_QWORD *)v229 + 8LL);
      if ( (char *)v173 == (char *)CMILCOMBase::InternalAddRef )
        CMILCOMBase::InternalAddRef((CMILCOMBase *)v229);
      else
        v173();
LABEL_308:
      if ( (int)v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0x4Bu);
        goto LABEL_11;
      }
LABEL_309:
      v160 = Size;
      ++v161;
      v4 = 0LL;
    }
    p_lpMem = (CRegionShape *)((char *)v245[0] + 4);
    v245[0] = p_lpMem;
    if ( p_lpMem != (CRegionShape *)lpMem.m[1] )
      continue;
    break;
  }
LABEL_11:
  if ( (int)v4 < 0 )
  {
    v226 = 168;
    goto LABEL_527;
  }
  v13 = *(_DWORD *)(v6 + 96);
  v14 = 0LL;
  v15 = 64LL;
  if ( (v13 & 2) == 0 )
    goto LABEL_13;
  v105 = *((unsigned int *)this + 3);
  LODWORD(v4) = 0;
  v106 = 0LL;
  v107 = v13 << 18 >> 28;
  if ( *((_DWORD *)this + 2) == (_DWORD)v105 )
  {
    v208 = 2 * v105;
    if ( v208 > 0xFFFFFFFF )
    {
      LODWORD(v4) = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    }
    else
    {
      v209 = (unsigned int)v208;
      if ( (unsigned int)v208 <= 0x40 )
        v209 = 64LL;
      LODWORD(v229) = v209;
      LODWORD(v4) = 0;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v209 <= 4 )
      {
        LODWORD(v4) = -2147024809;
      }
      else
      {
        v210 = 4 * v209;
        if ( !(4 * v209) )
          v210 = 1LL;
        v106 = HeapAlloc(WPF::g_processHeap, 0, v210);
        if ( !v106 )
          LODWORD(v4) = -2147024882;
      }
      if ( (int)v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0x54u);
      }
      else
      {
        v211 = 4LL * *((unsigned int *)this + 2);
        LODWORD(v4) = 0;
        if ( v211 <= 0xFFFFFFFF )
        {
          memcpy_0(v106, *((const void **)this + 3), (unsigned int)v211);
          WPF::ProcessHeapImpl::Free(*((void **)this + 3));
          v212 = v229;
          v14 = 0LL;
          *((_QWORD *)this + 3) = v106;
          *((_DWORD *)this + 3) = v212;
          v15 = 64LL;
          goto LABEL_166;
        }
        LODWORD(v4) = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
      }
      if ( v106 )
        HeapFree(WPF::g_processHeap, 0, v106);
    }
    v14 = 0LL;
    v15 = 64LL;
  }
  else
  {
LABEL_166:
    *(_DWORD *)(*((_QWORD *)this + 3) + 4LL * (unsigned int)(*((_DWORD *)this + 2))++) = v107;
    v108 = *((_DWORD *)this + 2);
    if ( *((_DWORD *)this + 8) > v108 )
      v108 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 8) = v108;
  }
  if ( (int)v4 < 0 )
  {
    v226 = 173;
    goto LABEL_527;
  }
LABEL_13:
  if ( (*(_BYTE *)(v6 + 96) & 8) != 0 )
  {
    v101 = *((unsigned int *)this + 11);
    LODWORD(v4) = 0;
    v102 = 0LL;
    v103 = *(_DWORD *)(v6 + 188);
    if ( *((_DWORD *)this + 10) != (_DWORD)v101 )
    {
LABEL_160:
      *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * (unsigned int)(*((_DWORD *)this + 10))++) = v103;
      v104 = *((_DWORD *)this + 10);
      if ( *((_DWORD *)this + 16) > v104 )
        v104 = *((_DWORD *)this + 16);
      *((_DWORD *)this + 16) = v104;
      goto LABEL_163;
    }
    v213 = 2 * v101;
    if ( v213 > 0xFFFFFFFF )
    {
      LODWORD(v4) = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_163:
      if ( (int)v4 >= 0 )
        goto LABEL_14;
      v226 = 179;
      goto LABEL_527;
    }
    v214 = (unsigned int)v213;
    if ( (unsigned int)v213 <= 0x40 )
      v214 = 64LL;
    LODWORD(v229) = v214;
    LODWORD(v4) = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v214 <= 4 )
    {
      LODWORD(v4) = -2147024809;
    }
    else
    {
      v215 = 4 * v214;
      if ( !(4 * v214) )
        v215 = 1LL;
      v102 = HeapAlloc(WPF::g_processHeap, 0, v215);
      if ( !v102 )
        LODWORD(v4) = -2147024882;
    }
    if ( (int)v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0x54u);
    }
    else
    {
      v216 = 4LL * *((unsigned int *)this + 10);
      LODWORD(v4) = 0;
      if ( v216 <= 0xFFFFFFFF )
      {
        memcpy_0(v102, *((const void **)this + 7), (unsigned int)v216);
        WPF::ProcessHeapImpl::Free(*((void **)this + 7));
        *((_DWORD *)this + 11) = v229;
        *((_QWORD *)this + 7) = v102;
        goto LABEL_160;
      }
      LODWORD(v4) = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v102 )
      HeapFree(WPF::g_processHeap, 0, v102);
    goto LABEL_163;
  }
LABEL_14:
  if ( *(char *)(v6 + 96) < 0 )
  {
    LODWORD(v229) = *(_DWORD *)(v6 + 204);
    v142 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 72, &v229);
    LODWORD(v4) = v142;
    if ( v142 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v142, 0xB9u);
      return (unsigned int)v4;
    }
  }
  v16 = *((unsigned int *)this + 18);
  v17 = 0LL;
  if ( (_DWORD)v16 )
  {
    v16 = (unsigned int)(v16 - 1);
    v17 = (_DWORD *)(*((_QWORD *)this + 11) + 4LL * (unsigned int)v16);
  }
  if ( *(_DWORD *)(v6 + 100) != *v17 )
  {
    *(_DWORD *)(v6 + 100) = *(_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference(
                                         (char *)this + 72,
                                         v16,
                                         v15,
                                         v14);
    CVisual::OnOuterTransformChanged((CVisual *)v6);
  }
  v18 = (_BYTE *)v244[0];
  if ( *(_DWORD *)(v6 + 100) == 1 )
    **(_BYTE **)v244 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 208) + 4LL) & 0x10000) != 0 )
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v6);
    CWindowBackgroundTreatment::InvalidateExistingBounds(WindowBackgroundTreatmentInternal);
    v239 = 0;
    WorldTransform = CVisual::GetWorldTransform((CVisual *)v6, (struct _LIST_ENTRY *)v231, 1, (__int64)v238, 0LL, 0LL);
    LODWORD(v4) = WorldTransform;
    if ( WorldTransform < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, WorldTransform, 0xD2u);
      return (unsigned int)v4;
    }
    CWindowBackgroundTreatment::SetWorldTransform(WindowBackgroundTreatmentInternal, v238, 1LL);
    RectBounds = CDirtyRegion::GetRectBounds(*((_QWORD *)this + 75), &v247);
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
      (char *)this + 104,
      RectBounds);
  }
  if ( *(int *)(v6 + 252) > 0 || *(int *)(v6 + 248) > 0 )
    *v18 = 1;
  v19 = *((_QWORD *)this + 75);
  if ( !*(_BYTE *)(v19 + 2722) && !*(_DWORD *)(v19 + 2696) )
    v9->Blink = *(struct _LIST_ENTRY **)(*(_QWORD *)this + 360LL);
  if ( (*(_DWORD *)(v6 + 88) & 0x800) != 0 )
  {
    v78 = v246[0];
    if ( v246[0] )
    {
      v79 = *((_QWORD *)v246[0] + 15);
      if ( v79 == *(_QWORD *)(*(_QWORD *)(v6 + 16) + 360LL) )
        goto LABEL_135;
      TreeData = 0LL;
      if ( (*(_DWORD *)(*(_QWORD *)(v6 + 208) + 4LL) & 0x10000000) != 0 )
      {
        TransformParentDataInternal = CVisual::GetTransformParentDataInternal((CVisual *)v6);
        if ( (*((_BYTE *)v78 + 16) & 4) == 0 || *((_QWORD *)v78 + 27) != v206 )
        {
          TreeData = CVisual::FindTreeData(*(CVisual **)(*(_QWORD *)TransformParentDataInternal + 8LL), v231);
          if ( TreeData )
            goto LABEL_133;
        }
      }
      if ( v6 != *((_QWORD *)v231 + 3) )
      {
        v81 = *(CVisual **)(v6 + 80);
        if ( *((_BYTE *)v231 + 32) )
        {
          TreeData = (struct _LIST_ENTRY *)((char *)v81 + 280);
        }
        else
        {
          v217 = CVisual::GetTreeDataListHead(v81);
          if ( v217 )
          {
            v219 = v217->Flink;
            if ( v217->Flink != v217 )
            {
              while ( v219[2].Flink != v218 )
              {
                v219 = v219->Flink;
                if ( v219 == v217 )
                  goto LABEL_132;
              }
              TreeData = v219 - 14;
            }
          }
        }
      }
LABEL_132:
      if ( TreeData )
LABEL_133:
        Blink = (unsigned __int64)TreeData[7].Blink;
      else
        Blink = 1LL;
      if ( v79 < Blink )
LABEL_135:
        *v18 = 1;
    }
  }
  if ( !*((_QWORD *)this + 58) || (*(_BYTE *)(*(_QWORD *)(v6 + 80) + 88LL) & 1) != 0 )
  {
    v62 = *(_QWORD *)(v6 + 80);
    v63 = 0.0;
    v64 = *(float *)(v6 + 116);
    v65 = 0.0;
    v66 = *(float *)(v6 + 120);
    v67 = *(float *)(v6 + 132);
    v68 = *(float *)(v6 + 136);
    if ( v62 )
    {
      v63 = *(float *)(v62 + 132);
      v65 = *(float *)(v62 + 136);
    }
    v69 = *(_QWORD *)(v6 + 208);
    if ( (*(_DWORD *)(v69 + 4) & 0x400000) != 0 )
    {
      v15 = *(unsigned int *)(v69 + 12);
      v16 = v69 + 12;
      if ( (*(_DWORD *)(v69 + 12) & 0x7F000000) != 0xA000000 )
      {
        do
        {
          v16 += (v15 & 0xFFFFFF) + 4;
          v15 = *(unsigned int *)v16;
        }
        while ( (*(_DWORD *)v16 & 0x7F000000) != 0xA000000 );
      }
      v188 = *(float *)(v16 + 12);
      v70 = *(struct D2D_SIZE_F *)(v16 + 4);
      v244[0] = v70;
      v244[1].width = v188;
    }
    else
    {
      v70.width = 0.0;
      *(_QWORD *)&v244[0].height = 0LL;
    }
    v71 = (float)(v244[0].height * v65) + *(float *)(v6 + 108);
    v72 = (float)(v70.width * v63) + *(float *)(v6 + 104);
    *(float *)(v6 + 120) = v71;
    *(float *)(v6 + 116) = v72;
    if ( (*(_DWORD *)(v69 + 4) & 0x800000) != 0 )
    {
      v16 = *(unsigned int *)(v69 + 12);
      v139 = (unsigned int *)(v69 + 12);
      if ( (v16 & 0x7F000000) != 0x9000000 )
      {
        do
        {
          v139 = (unsigned int *)((char *)v139 + (v16 & 0xFFFFFF) + 4);
          v16 = *v139;
        }
        while ( (*v139 & 0x7F000000) != 0x9000000 );
      }
      v73 = *(struct D2D_SIZE_F *)(v139 + 1);
      v244[0] = v73;
    }
    else
    {
      v73.width = 0.0;
      v244[0].height = 0.0;
    }
    v74 = (float)(v73.width * v63) + *(float *)(v6 + 124);
    v75 = (float)(v244[0].height * v65) + *(float *)(v6 + 128);
    *(float *)(v6 + 136) = v75;
    *(float *)(v6 + 132) = v74;
    if ( v74 < 0.0 )
      *(_DWORD *)(v6 + 132) = 0;
    if ( v75 < 0.0 )
      *(_DWORD *)(v6 + 136) = 0;
    v76 = v64 != v72 || v66 != v71;
    if ( v67 == *(float *)(v6 + 132) && v68 == *(float *)(v6 + 136) )
    {
      v77 = 0;
    }
    else
    {
      v158 = *(_QWORD *)(v6 + 232);
      v77 = 1;
      if ( v158 && *(_BYTE *)(v158 + 96) )
        CVisual::OnClipChanged((CVisual *)v6);
      CVisual::ClearContentTreeDataCaches((CVisual *)v6);
    }
    if ( v76 || v77 )
      *(_DWORD *)(v6 + 88) |= 1u;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 208) + 4LL) & 0x2000) != 0 )
    *(_DWORD *)(v6 + 88) |= 4u;
  if ( v5 && (*(_BYTE *)(v5 + 88) & 2) != 0 )
    *(_DWORD *)(v6 + 88) |= 2u;
  if ( (*(_DWORD *)(v6 + 88) & 6) == 2
    && CVisual::IsAffectedByNonAmbientLights((CVisual *)v6, v231, (CPreComputeContext *)((char *)this + 200)) )
  {
    *(_DWORD *)(v6 + 88) = *(_DWORD *)(v6 + 88) ^ 2 | 4;
  }
  if ( (*(_BYTE *)(v6 + 256) & 1) != 0 )
  {
    v220 = CDirtyRegion::GetRectBounds(*((_QWORD *)this + 75), &v247);
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
      (char *)this + 104,
      v220);
  }
  if ( (*(_BYTE *)(v6 + 88) & 0x73) != 0 )
    *v18 = 1;
  v20 = *(_QWORD *)(v6 + 208);
  if ( (*(_DWORD *)(v20 + 4) & 0x8000000) != 0 )
  {
    v16 = *(unsigned int *)(v20 + 12);
    for ( i = (unsigned int *)(v20 + 12); (*i & 0x7F000000) != 0x5000000; v16 = *i )
      i = (unsigned int *)((char *)i + (v16 & 0xFFFFFF) + 4);
    v244[0] = *(struct D2D_SIZE_F *)(i + 1);
    v95 = (_QWORD *)v244[0];
    v96 = *(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)v244 + 48LL);
    if ( (char *)v96 == (char *)CEffectGroup::IsOfType || !v96(*(_QWORD *)v244, 128LL, v15, v14) )
    {
      v97 = *(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64, __int64))(*v95 + 48LL);
      if ( (char *)v97 != (char *)CEffectGroup::IsOfType && !v97(v95, 47LL, v15, v14) )
        goto LABEL_41;
      v95 = (_QWORD *)v95[11];
    }
    if ( v95 )
      ++*((_DWORD *)this + 110);
  }
LABEL_41:
  if ( *((_DWORD *)this + 110) || *(char *)(v6 + 88) < 0 )
  {
    v23 = FLOAT_4_0;
  }
  else
  {
    v21 = *(char (__fastcall **)(CSpriteVisual *))(*(_QWORD *)v6 + 312LL);
    if ( (char *)v21 == (char *)CVisual::HasAntialiasedContent )
    {
      v22 = *(_QWORD *)(v6 + 240);
      if ( (!v22
         || !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, __int64, __int64))(*(_QWORD *)v22 + 200LL))(
               v22,
               v16,
               v15,
               v14))
        && (*(_DWORD *)(v6 + 88) & 0x100) == 0 )
      {
        goto LABEL_46;
      }
LABEL_141:
      v23 = FLOAT_0_5;
    }
    else
    {
      if ( v21 == CSpriteVisual::HasAntialiasedContent )
        HasAntialiasedContent = CSpriteVisual::HasAntialiasedContent((CSpriteVisual *)v6);
      else
        HasAntialiasedContent = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64))v21)(
                                  v6,
                                  v16,
                                  v15,
                                  v14);
      if ( HasAntialiasedContent )
        goto LABEL_141;
LABEL_46:
      v23 = 0.0;
    }
  }
  if ( *v18 )
    *(_DWORD *)(v6 + 88) &= 0xFFFFF07F;
  v24 = *(_DWORD *)(v6 + 88);
  if ( (v24 & 4) != 0 )
  {
    if ( (v24 & 1) == 0 )
      goto LABEL_213;
    v127 = *((_QWORD *)this + 75);
    if ( *(_BYTE *)(v127 + 2722) || *(_DWORD *)(v127 + 2696) )
      goto LABEL_213;
    v143 = *((_DWORD *)this + 34);
    if ( v143 )
      v144 = (void *)(*((_QWORD *)this + 19) + 68LL * (unsigned int)(v143 - 1));
    else
      v144 = &CMILMatrix::Identity;
    CMILMatrix::Transform3DBoundsHelper<1>(v144, v6 + 140, &v247, v14);
    v145 = v247.m128_f32[0];
    v146 = v247.m128_f32[1];
    v147 = v247.m128_f32[2];
    v148 = v247.m128_f32[3];
    *(__m128 *)&v244[0].width = v247;
    if ( v23 > 0.0 && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v244) )
    {
      v145 = v145 - v23;
      v146 = v146 - v23;
      v147 = v23 + v147;
      v148 = v23 + v148;
    }
    v149 = *((_DWORD *)this + 42);
    if ( v149 )
    {
      v150 = *(__m128 *)(*((_QWORD *)this + 23) + 16LL * (unsigned int)(v149 - 1));
      v247 = v150;
      if ( v145 > v150.m128_f32[0] )
        v150.m128_f32[0] = v145;
      v151 = v247.m128_f32[1];
      if ( v146 > v247.m128_f32[1] )
        v151 = v146;
      v152 = v247.m128_f32[2];
      if ( v247.m128_f32[2] > v147 )
        v152 = v147;
      v153 = v247.m128_f32[3];
      if ( v247.m128_f32[3] > v148 )
        v153 = v148;
      if ( v152 <= v150.m128_f32[0] || v153 <= v151 )
      {
        v153 = 0.0;
        v152 = 0.0;
        v151 = 0.0;
        v150.m128_i32[0] = 0;
      }
      LODWORD(v244[0].width) = v150.m128_i32[0];
      v244[0].height = v151;
      v244[1].width = v152;
      v244[1].height = v153;
    }
    else
    {
      v244[0].width = v145;
      v244[0].height = v146;
      v244[1].width = v147;
      v244[1].height = v148;
    }
    v154 = *((_QWORD *)this + 75);
    LODWORD(v4) = 0;
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)v244) )
      CDirtyRegion::SetFullDirty((CDirtyRegion *)v154);
    if ( !*(_BYTE *)(v154 + 2722) && !*(_DWORD *)(v154 + 2696) )
    {
      v155 = CDirtyRegion::_Add((CDirtyRegion *)v154, v6, 1, (__m128 *)v244);
      LODWORD(v4) = v155;
      if ( v155 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v155, 0x1A7u);
    }
    if ( (int)v4 >= 0 )
    {
LABEL_213:
      ++*(_DWORD *)(*((_QWORD *)this + 75) + 2696LL);
      goto LABEL_50;
    }
    v226 = 356;
    goto LABEL_527;
  }
LABEL_50:
  if ( *v18
    || (*(_BYTE *)(v6 + 88) & 8) != 0
    && (v35 = *((_QWORD *)this + 75), !*(_BYTE *)(v35 + 2722))
    && !*(_DWORD *)(v35 + 2696) )
  {
    v36 = (CRegionShape *)v242;
    v37 = v231;
    v38 = *((_QWORD *)this + 57);
    if ( !*(_QWORD *)(v6 + 232) )
      v36 = 0LL;
    v243 = 0;
    v39 = -2003292412;
    v245[0] = v36;
    v40 = *((_BYTE *)v231 + 32);
    if ( v40 )
    {
      v41 = (struct _LIST_ENTRY *)(v38 + 280);
      goto LABEL_79;
    }
    v181 = CVisual::GetTreeDataListHead((CVisual *)v38);
    if ( !v181 )
      goto LABEL_92;
    v182 = v181->Flink;
    if ( v181->Flink == v181 )
      goto LABEL_92;
    while ( 1 )
    {
      v41 = v182 - 14;
      if ( (struct CVisualTree *)v182[2].Flink == v37 )
        break;
      v182 = v182->Flink;
      if ( v182 == v181 )
        goto LABEL_92;
    }
LABEL_79:
    if ( !v41 )
      goto LABEL_92;
    v42 = *(_QWORD *)(v38 + 208);
    v39 = 0;
    v228 = 0;
    v43 = 0LL;
    if ( (*(_DWORD *)(v42 + 4) & 0x10000000) == 0
      || (v156 = *(_QWORD *)CVisual::GetTransformParentDataInternal((CVisual *)v38), ((__int64)v41[1].Flink & 4) != 0)
      && v41[13].Blink == *(struct _LIST_ENTRY **)(*(_QWORD *)(v38 + 16) + 360LL) )
    {
LABEL_81:
      if ( v38 != *((_QWORD *)v37 + 3) )
      {
        v44 = *(CVisual **)(v38 + 80);
        if ( v40 )
        {
          v43 = (struct _LIST_ENTRY *)((char *)v44 + 280);
        }
        else
        {
          v183 = CVisual::GetTreeDataListHead(v44);
          if ( v183 )
          {
            v185 = v183->Flink;
            if ( v183->Flink != v183 )
            {
              while ( v185[2].Flink != v184 )
              {
                v185 = v185->Flink;
                if ( v185 == v183 )
                  goto LABEL_84;
              }
              v43 = v185 - 14;
            }
          }
        }
      }
LABEL_84:
      if ( v43 )
        goto LABEL_85;
      v45 = 1LL;
    }
    else
    {
      v157 = *(CVisual **)(v156 + 8);
      v228 = 1;
      v43 = CVisual::FindTreeData(v157, v37);
      if ( !v43 )
      {
        v37 = v231;
        goto LABEL_81;
      }
LABEL_85:
      v45 = (unsigned __int64)v43[7].Blink;
    }
    if ( v41[7].Blink < (struct _LIST_ENTRY *)v45 )
    {
      v239 = 0;
      p_Blink = (__int64)&v43[2].Blink;
      v241 = 0;
      if ( !v43 )
        p_Blink = 0LL;
      v129 = v240;
      if ( !*(_QWORD *)(v38 + 232) )
        v129 = 0LL;
      CVisual::CalcEffectiveTransform(
        v38,
        (const struct D2D_SIZE_F *)5,
        p_Blink,
        &v227,
        (CMILMatrix *)v238,
        (__int64)v129);
      LOBYTE(v130) = v228
                  || v38 == *((_QWORD *)v231 + 3)
                  || v227 && (unsigned __int8)CMILMatrix::IsEqualTo<0>(p_Blink, v238) == 0;
      v131 = (struct CMILMatrix *)v240;
      if ( !*(_QWORD *)(v38 + 232) )
        v131 = 0LL;
      v132 = (__int64 (__fastcall *)(CDesktopTreeData *__hidden, const struct CMILMatrix *, bool, struct CMILMatrix *))v41->Flink[3].Flink;
      if ( v132 == CDesktopTreeData::SetWorldTransform )
      {
        v133 = CDesktopTreeData::SetWorldTransform((CDesktopTreeData *)v41, (const struct CMILMatrix *)v238, v130, v131);
      }
      else if ( v132 == CTreeData::SetWorldTransform )
      {
        v133 = CTreeData::SetWorldTransform((CTreeData *)v41, (const struct CMILMatrix *)v238, v130, v131);
      }
      else
      {
        v133 = v132((CDesktopTreeData *)v41, (const struct CMILMatrix *)v238, v130, v131);
      }
      v39 = v133;
      if ( v133 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v133, 0x67Eu);
      }
      else
      {
        v134 = *(_QWORD *)(v38 + 208);
        if ( (*(_DWORD *)(v134 + 4) & 0x2000000) != 0 )
        {
          v186 = *(_DWORD *)(v134 + 12);
          v187 = (int *)(v134 + 12);
          if ( (v186 & 0x7F000000) != 0x7000000 )
          {
            do
            {
              v187 = (int *)((char *)v187 + (v186 & 0xFFFFFF) + 4);
              v186 = *v187;
            }
            while ( (*v187 & 0x7F000000) != 0x7000000 );
          }
          v244[0] = *(struct D2D_SIZE_F *)(v187 + 1);
          if ( *(_QWORD *)v244 && (*(_BYTE *)(v38 + 93) & 4) != 0 )
          {
            v229 = 0LL;
            Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease((CDxHandleYUVBitmapRealization **)&v229);
            ManipulationManager = CComposition::GetManipulationManager(
                                    *(CComposition **)(v38 + 16),
                                    (struct CManipulationManager **)&v229);
            if ( ManipulationManager >= 0 )
              CManipulationManager::NotifyVisualPropertyChange(
                (CManipulationManager *)v229,
                (struct CVisual *)v38,
                (const struct CMILMatrix *)v238);
            Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease((CDxHandleYUVBitmapRealization **)&v229);
          }
        }
      }
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x63Bu);
        goto LABEL_87;
      }
LABEL_88:
      if ( v41[7].Blink )
      {
        v46 = (char)v41[1].Flink;
        v47 = *(_OWORD *)&v41[3].Blink;
        v16 = (unsigned __int64)v245[0];
        v48 = (unsigned int)v41[6].Blink;
        v233 = *(_OWORD *)&v41[2].Blink;
        v49 = (v46 & 2) != 0;
        v234 = v47;
        v232 = v48;
        v50 = *(_OWORD *)&v41[5].Blink;
        v235 = *(_OWORD *)&v41[4].Blink;
        v236 = v50;
        if ( v245[0] )
        {
          v109 = v41[7].Flink;
          v110 = v109[1];
          *(struct _LIST_ENTRY *)v245[0] = *v109;
          v111 = v109[2];
          *(struct _LIST_ENTRY *)(v16 + 16) = v110;
          v112 = v109[3];
          LODWORD(v109) = v109[4].Flink;
          *(struct _LIST_ENTRY *)(v16 + 32) = v111;
          *(struct _LIST_ENTRY *)(v16 + 48) = v112;
          *(_DWORD *)(v16 + 64) = (_DWORD)v109;
        }
        v39 = 0;
        v227 = v49;
        goto LABEL_92;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x70u);
      v39 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x5A2u);
      LODWORD(v4) = -2003292412;
    }
    else
    {
LABEL_87:
      if ( v39 >= 0 )
        goto LABEL_88;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x59Bu);
LABEL_92:
      LODWORD(v4) = v39;
      if ( v39 >= 0 )
      {
        v51 = *(_QWORD *)(v6 + 232);
        if ( v51
          && (!v5 || *(_DWORD *)(v5 + 100) != 1)
          && (*(_DWORD *)(v6 + 100) != 1 || !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v6 + 72))) )
        {
          LODWORD(v4) = 0;
          v245[0] = 0LL;
          LOBYTE(v245[1]) = 0;
          if ( !*(_BYTE *)(v51 + 96) )
          {
            v138 = *(_QWORD *)(v51 + 16);
            if ( GetCurrentThreadId() == *(_DWORD *)(v138 + 560) )
            {
              if ( (*(_BYTE *)(v51 + 32) & 1) == 0 )
              {
LABEL_237:
                v118 = *(CRegionShape **)(v51 + 80);
                if ( LOBYTE(v245[1]) && v245[0] )
                  (**(void (__fastcall ***)(CRegionShape *, __int64))v245[0])(v245[0], 1LL);
                v245[0] = v118;
                LOBYTE(v245[1]) = 0;
LABEL_239:
                if ( (int)v4 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0x26u);
                  goto LABEL_489;
                }
LABEL_184:
                LODWORD(v4) = -2003292412;
                if ( v118 )
                {
                  v119 = *(__int64 (__fastcall **)(CRegionShape *, __m128 *, _QWORD))(*(_QWORD *)v118 + 32LL);
                  if ( (char *)v119 == (char *)CRectanglesShape::GetTightBounds )
                  {
                    TightBounds = CRectanglesShape::GetTightBounds((__int64)v118, (__int64)&v247, 0LL);
                  }
                  else if ( v119 == CRegionShape::GetTightBounds )
                  {
                    TightBounds = CRegionShape::GetTightBounds(v118, &v247, 0LL);
                  }
                  else
                  {
                    TightBounds = v119(v118, &v247, 0LL);
                  }
                  LODWORD(v4) = TightBounds;
                  if ( TightBounds < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0x102u);
                  v118 = v245[0];
                }
                if ( (int)v4 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0x27u);
LABEL_489:
                  v118 = v245[0];
                }
                if ( (_DWORD)v4 == -2003304438 )
                {
                  LODWORD(v4) = 0;
                  *(_OWORD *)&v244[0].width = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  v247 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                }
                if ( LOBYTE(v245[1]) && v118 )
                {
                  v121 = **(CRectanglesShape *(__fastcall ***)(CRectanglesShape *, char))v118;
                  if ( v121 == CRectanglesShape::`scalar deleting destructor' )
                    CRectanglesShape::`scalar deleting destructor'(v118, 1);
                  else
                    v121(v118, 1);
                }
                if ( (int)v4 < 0 )
                {
                  v226 = 386;
                }
                else
                {
                  CMILMatrix::Transform2DBoundsHelper<0>(v242, &v247, v245);
                  v122 = *((_DWORD *)this + 42);
                  if ( v122 )
                    v123 = *(_OWORD *)(*((_QWORD *)this + 23) + 16LL * (unsigned int)(v122 - 1));
                  else
                    v123 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  *(_OWORD *)&v244[0].width = v123;
                  *(_OWORD *)&lpMem.m11 = *(_OWORD *)v245;
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)v244, (__int64)&lpMem);
                  v124 = *((unsigned int *)this + 43);
                  LODWORD(v4) = 0;
                  *(_QWORD *)&lpMem.m11 = 0LL;
                  if ( *((_DWORD *)this + 42) == (_DWORD)v124 )
                  {
                    LODWORD(Size) = 0;
                    LODWORD(v229) = 0;
                    v196 = ULongLongToUInt(2 * v124, (unsigned int *)&Size);
                    LODWORD(v4) = v196;
                    if ( v196 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v196, 0x4Cu);
                    }
                    else
                    {
                      v198 = Size;
                      if ( (unsigned int)Size <= 8 )
                        v198 = 8;
                      v199 = WPF::HrMalloc((WPF *)0x10, v198, (unsigned __int64)&lpMem, v197);
                      LODWORD(v4) = v199;
                      if ( v199 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v199, 0x54u);
                      }
                      else
                      {
                        v200 = ULongLongToUInt(16LL * *((unsigned int *)this + 42), (unsigned int *)&v229);
                        LODWORD(v4) = v200;
                        if ( v200 >= 0 )
                        {
                          v201 = *(_QWORD *)&lpMem.m11;
                          memcpy_0(*(void **)&lpMem.m11, *((const void **)this + 23), (unsigned int)v229);
                          WPF::ProcessHeapImpl::Free(*((void **)this + 23));
                          *((_QWORD *)this + 23) = v201;
                          *((_DWORD *)this + 43) = v198;
                          goto LABEL_201;
                        }
                        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v200, 0x56u);
                      }
                      v15 = *(_QWORD *)&lpMem.m11;
                      if ( *(_QWORD *)&lpMem.m11 )
                        HeapFree(WPF::g_processHeap, 0, *(LPVOID *)&lpMem.m11);
                    }
                  }
                  else
                  {
LABEL_201:
                    *(_OWORD *)(*((_QWORD *)this + 23) + 16LL * (unsigned int)(*((_DWORD *)this + 42))++) = *(_OWORD *)&v244[0].width;
                    v125 = *((_DWORD *)this + 48);
                    if ( v125 <= *((_DWORD *)this + 42) )
                      v125 = *((_DWORD *)this + 42);
                    *((_DWORD *)this + 48) = v125;
                  }
                  if ( (int)v4 >= 0 )
                  {
                    *(_BYTE *)(v6 + 92) |= 4u;
                    goto LABEL_94;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0x31u);
                  v226 = 393;
                }
LABEL_527:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, v226);
                return (unsigned int)v4;
              }
              ShapeDataWorker = CGeometry::GetShapeDataWorker(
                                  (CGeometry *)v51,
                                  (const struct D2D_SIZE_F *)(v6 + 132),
                                  (struct CShapePtr *)(v51 + 80));
              LODWORD(v4) = ShapeDataWorker;
              if ( ShapeDataWorker >= 0 )
              {
                *(_DWORD *)(v51 + 32) &= ~1u;
                goto LABEL_237;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataWorker, 0x4Eu);
LABEL_486:
              v118 = v245[0];
              goto LABEL_239;
            }
          }
          v113 = *(_BYTE *)(v51 + 96);
          if ( !v113 && (*(_BYTE *)(v51 + 32) & 1) == 0 )
          {
            v118 = *(CRegionShape **)(v51 + 80);
            if ( v118 )
            {
              CShapePtr::Release((CShapePtr *)v245);
              v245[0] = v118;
              LOBYTE(v245[1]) = 0;
              goto LABEL_239;
            }
          }
          v114 = 0LL;
          if ( v113 )
            v114 = (const struct D2D_SIZE_F *)(v6 + 132);
          v115 = *(__int64 (__fastcall **)(CRectangleGeometry *__hidden, const struct D2D_SIZE_F *, struct CShapePtr *))(*(_QWORD *)v51 + 176LL);
          if ( v115 == CRectangleGeometry::GetShapeDataCore )
            ShapeDataCore = CRectangleGeometry::GetShapeDataCore(
                              (CRectangleGeometry *)v51,
                              v114,
                              (struct CShapePtr *)v245);
          else
            ShapeDataCore = ((__int64 (__fastcall *)(__int64, const struct D2D_SIZE_F *, CRegionShape **, __int64))v115)(
                              v51,
                              v114,
                              v245,
                              v14);
          LODWORD(v4) = ShapeDataCore;
          if ( ShapeDataCore >= 0 )
          {
            v117 = *(CComponentTransform2D **)(v51 + 72);
            if ( !v117 )
              goto LABEL_182;
            v244[0] = 0LL;
            if ( v114 )
              v244[0] = *v114;
            v118 = v245[0];
            if ( v245[0] )
            {
              CComponentTransform2D::GetRealization(v117, v244, &lpMem);
              CMILMatrix::CMILMatrix((CMILMatrix *)v240, &lpMem);
              v189 = CShape::CopyShape(v245[0], (const struct CMILMatrix *)v240, (struct CShape **)v244);
              LODWORD(v4) = v189;
              if ( v189 >= 0 )
              {
                CShapePtr::Release((CShapePtr *)v245);
                v118 = (CRegionShape *)v244[0];
                v245[0] = (CRegionShape *)v244[0];
                LOBYTE(v245[1]) = 1;
                goto LABEL_183;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v189, 0x94u);
LABEL_182:
              v118 = v245[0];
            }
LABEL_183:
            if ( (int)v4 >= 0 )
              goto LABEL_184;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0x5Du);
            goto LABEL_486;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ShapeDataCore, 0x80u);
          goto LABEL_182;
        }
LABEL_94:
        if ( !v227 )
        {
LABEL_95:
          if ( (*(_BYTE *)(v6 + 88) & 8) != 0 )
          {
            v52 = 0LL;
            if ( *((_DWORD *)this + 42) )
            {
              v53 = *((_DWORD *)this + 42);
              if ( v53 )
              {
                v54 = *(_OWORD *)(*((_QWORD *)this + 23) + 16LL * (unsigned int)(v53 - 1));
              }
              else
              {
                v54 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                v247 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              }
              v247 = (__m128)v54;
              v52 = &v247;
            }
            v55 = *((_DWORD *)this + 2);
            if ( !v55 )
            {
              LODWORD(v4) = -2147467259;
              v226 = 418;
              goto LABEL_527;
            }
            v56 = *(unsigned int *)(*((_QWORD *)this + 3) + 4LL * (unsigned int)(v55 - 1));
            v57 = *((_DWORD *)this + 34);
            v58 = v57 ? (void *)(*((_QWORD *)this + 19) + 68LL * (unsigned int)(v57 - 1)) : &CMILMatrix::Identity;
            v225 = (__int64)v52;
            v59 = *((_QWORD *)this + 75);
            v60 = *(__int64 (__usercall **)@<rax>(CWindowNode *@<rcx>, __int64))(*(_QWORD *)v6 + 296LL);
            if ( (char *)v60 == (char *)CVisual::CollectAdditionalDirtyRegion )
              v61 = CVisual::CollectAdditionalDirtyRegion(v6, v59, (unsigned __int64)v58, v56, v225);
            else
              v61 = v60 == CWindowNode::CollectAdditionalDirtyRegion
                  ? CWindowNode::CollectAdditionalDirtyRegion((CWindowNode *)v6, v225)
                  : ((__int64 (__fastcall *)(__int64, __int64, void *, __int64))v60)(v6, v59, v58, v56);
            LODWORD(v4) = v61;
            if ( v61 < 0 )
            {
              v226 = 423;
              goto LABEL_527;
            }
          }
LABEL_54:
          v26 = v231;
          goto LABEL_55;
        }
        v86 = *((unsigned int *)this + 35);
        v87 = 0;
        *(_QWORD *)&lpMem.m11 = 0LL;
        if ( *((_DWORD *)this + 34) == (_DWORD)v86 )
        {
          LODWORD(v229) = 0;
          LODWORD(Size) = 0;
          v190 = ULongLongToUInt(2 * v86, (unsigned int *)&v229);
          v87 = v190;
          if ( v190 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v190, 0x4Cu);
          }
          else
          {
            v192 = v229;
            if ( (unsigned int)v229 <= 8 )
              v192 = 8;
            v193 = WPF::HrMalloc((WPF *)0x44, v192, (unsigned __int64)&lpMem, v191);
            v87 = v193;
            if ( v193 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v193, 0x54u);
            }
            else
            {
              v194 = ULongLongToUInt(68LL * *((unsigned int *)this + 34), (unsigned int *)&Size);
              v87 = v194;
              if ( v194 >= 0 )
              {
                v195 = *(_QWORD *)&lpMem.m11;
                memcpy_0(*(void **)&lpMem.m11, *((const void **)this + 19), (unsigned int)Size);
                WPF::ProcessHeapImpl::Free(*((void **)this + 19));
                *((_QWORD *)this + 19) = v195;
                *((_DWORD *)this + 35) = v192;
                goto LABEL_143;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v194, 0x56u);
            }
            v15 = *(_QWORD *)&lpMem.m11;
            if ( *(_QWORD *)&lpMem.m11 )
              HeapFree(WPF::g_processHeap, 0, *(LPVOID *)&lpMem.m11);
          }
        }
        else
        {
LABEL_143:
          v88 = v234;
          v16 = v232;
          v89 = 68LL * *((unsigned int *)this + 34);
          v90 = *((_QWORD *)this + 19);
          *(_OWORD *)(v89 + v90) = v233;
          v91 = v235;
          *(_OWORD *)(v89 + v90 + 16) = v88;
          v92 = v236;
          *(_OWORD *)(v89 + v90 + 32) = v91;
          *(_OWORD *)(v89 + v90 + 48) = v92;
          *(_DWORD *)(v89 + v90 + 64) = v16;
          ++*((_DWORD *)this + 34);
          v93 = *((_DWORD *)this + 40);
          if ( v93 <= *((_DWORD *)this + 34) )
            v93 = *((_DWORD *)this + 34);
          *((_DWORD *)this + 40) = v93;
        }
        if ( v87 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v87, 0x36u);
        *(_BYTE *)(v6 + 92) |= 2u;
        goto LABEL_95;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x17Bu);
    return (unsigned int)v4;
  }
  v25 = *(_QWORD *)(v6 + 208);
  if ( (*(_DWORD *)(v25 + 4) & 0x2000000) == 0 )
    goto LABEL_53;
  v16 = *(unsigned int *)(v25 + 12);
  for ( j = (unsigned int *)(v25 + 12); (*j & 0x7F000000) != 0x7000000; v16 = *j )
    j = (unsigned int *)((char *)j + (v16 & 0xFFFFFF) + 4);
  v244[0] = *(struct D2D_SIZE_F *)(j + 1);
  if ( !*(_QWORD *)v244 || (v203 = *(_QWORD *)(*(_QWORD *)v244 + 128LL)) == 0 || !*(_QWORD *)(v203 + 96) )
  {
LABEL_53:
    if ( (*(_BYTE *)(v6 + 94) & 2) == 0 )
      goto LABEL_54;
  }
  v26 = v231;
  v204 = CVisual::GetWorldTransform(*((CVisual **)this + 57), (struct _LIST_ENTRY *)v231, 1, (__int64)&v233, &v227, 0LL);
  LODWORD(v4) = v204;
  if ( v204 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v204, 0x1B7u);
    return (unsigned int)v4;
  }
LABEL_55:
  if ( (*(_BYTE *)(v6 + 94) & 2) != 0 )
  {
    v15 = (__int64)v246[0];
    if ( v246[0] )
    {
      if ( CVisual::IsWorldTransformNewForCurrentFrame((CVisual *)v6, v26, v246[0]) )
        CVisual::IssueContextUpdateNotification((CVisual *)v6);
    }
  }
  v27 = *(_QWORD *)(v6 + 208);
  v28 = 0;
  LODWORD(v4) = 0;
  if ( (*(_DWORD *)(v27 + 4) & 0x1000000) != 0 )
  {
    v16 = *(unsigned int *)(v27 + 12);
    for ( k = (unsigned int *)(v27 + 12); (*k & 0x7F000000) != 0x8000000; v16 = *k )
      k = (unsigned int *)((char *)k + (v16 & 0xFFFFFF) + 4);
    v246[0] = *(struct CTreeData **)(k + 1);
    if ( v246[0] && *((_DWORD *)v246[0] + 6) )
      CVisual::ReleaseBspPolygonList((CVisual *)v6);
  }
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 100) == 1 )
    {
      v223 = CBspPreComputeHelper::PushStacksForBspChildVisual(
               (CPreComputeContext *)((char *)this + 616),
               (struct CVisual *)v6);
      LODWORD(v4) = v223;
      if ( v223 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v223, 0x48u);
        goto LABEL_70;
      }
    }
  }
  if ( *(_DWORD *)(v6 + 100) == 1 )
    v28 = 1;
  v29 = v5 && *(_DWORD *)(v5 + 100) == 1;
  v30 = *(bool (__fastcall **)(CLayerVisual *__hidden))(*(_QWORD *)v6 + 176LL);
  if ( v30 == CLayerVisual::HasNonDefaultTreeEffectInternal )
    HasNonDefaultTreeEffectInternal = CLayerVisual::HasNonDefaultTreeEffectInternal((CLayerVisual *)v6);
  else
    HasNonDefaultTreeEffectInternal = ((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64))v30)(
                                        v6,
                                        v16,
                                        v15,
                                        v14);
  if ( HasNonDefaultTreeEffectInternal )
    goto LABEL_158;
  v32 = *(_QWORD *)(v6 + 208);
  if ( (*(_DWORD *)(v32 + 4) & 0x8000000) == 0 )
    goto LABEL_68;
  v98 = *(_DWORD *)(v32 + 12);
  v99 = (int *)(v32 + 12);
  if ( (v98 & 0x7F000000) != 0x5000000 )
  {
    do
    {
      v99 = (int *)((char *)v99 + (v98 & 0xFFFFFF) + 4);
      v98 = *v99;
    }
    while ( (*v99 & 0x7F000000) != 0x5000000 );
  }
  v246[0] = *(struct CTreeData **)(v99 + 1);
  v100 = *(__int64 (__fastcall **)(struct CTreeData *, __int64))(*(_QWORD *)v246[0] + 48LL);
  if ( (char *)v100 != (char *)CEffectGroup::IsOfType && (unsigned __int8)v100(v246[0], 49LL) )
LABEL_158:
    v33 = 1;
  else
LABEL_68:
    v33 = 0;
  if ( v28 )
  {
    if ( v29 )
    {
      if ( !v33 )
        goto LABEL_70;
    }
    else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v6 + 72)) )
    {
      goto LABEL_70;
    }
    v224 = CBspPreComputeHelper::PushStacksForBspRootVisual(
             (CPreComputeContext *)((char *)this + 616),
             (struct CVisual *)v6);
    LODWORD(v4) = v224;
    if ( v224 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v224, 0x4Du);
  }
LABEL_70:
  if ( (int)v4 < 0 )
  {
    v226 = 454;
    goto LABEL_527;
  }
  if ( (*(_BYTE *)(v6 + 88) & 1) != 0 )
  {
    v83 = *(__int64 (__fastcall **)(__int64, CContentBounder *, __int64))(*(_QWORD *)v6 + 192LL);
    if ( v83 == CVisual::GetContentBounds )
    {
      v84 = *(CSpriteVisualContent **)(v6 + 240);
      LODWORD(v4) = 0;
      v246[1] = 0LL;
      v246[0] = 0LL;
      if ( v84 )
      {
        v135 = (_DWORD *)(v6 + 132);
        v136 = *(__int64 (__fastcall **)(CSpriteVisualContent *, __int64, _DWORD *, struct CTreeData **))(*(_QWORD *)v84 + 168LL);
        if ( (char *)v136 == (char *)CRenderData::GetBounds )
        {
          Bounds = CRenderData::GetBounds((__int64)v84, *((CContentBounder **)this + 66), (__int64)v135, (float *)v246);
        }
        else if ( (char *)v136 == (char *)CSpriteVisualContent::GetBounds )
        {
          Bounds = CSpriteVisualContent::GetBounds((__int64)v84, *((_QWORD *)this + 66), v135, (__int64)v246);
        }
        else if ( (char *)v136 == (char *)CMaskBrush::GetBounds )
        {
          Bounds = CMaskBrush::GetBounds(v84, *((_QWORD *)this + 66), v135, (float *)v246);
        }
        else if ( (char *)v136 == (char *)CPrimitiveGroup::GetBounds )
        {
          Bounds = CPrimitiveGroup::GetBounds((__int64)v84, *((_QWORD *)this + 66), (__int64)v135, v246);
        }
        else
        {
          v177 = *((_QWORD *)this + 66);
          if ( (char *)v136 == (char *)CAtlasedRectsGroup::GetBounds )
            Bounds = CAtlasedRectsGroup::GetBounds(v84, v177, v135, v246);
          else
            Bounds = v136(v84, v177, v135, v246);
        }
        LODWORD(v4) = Bounds;
        if ( Bounds >= 0 )
        {
LABEL_139:
          v85 = *(__m128 *)v246;
          *(_OWORD *)(v6 + 164) = *(_OWORD *)v246;
          *(_QWORD *)(v6 + 180) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          v247 = v85;
          return (unsigned int)v4;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0xC53u);
      }
LABEL_138:
      if ( (int)v4 < 0 )
      {
        v226 = 464;
        goto LABEL_527;
      }
      goto LABEL_139;
    }
    v140 = *((_QWORD *)this + 66);
    if ( (char *)v83 == (char *)CWindowNode::GetContentBounds )
    {
      ContentBounds = CWindowNode::GetContentBounds((CWindowNode *)v6);
    }
    else
    {
      if ( (char *)v83 == (char *)CSpriteVisual::GetContentBounds )
      {
        LODWORD(v4) = CSpriteVisual::GetContentBounds((CSpriteVisual *)v6, v140, v246);
        goto LABEL_138;
      }
      ContentBounds = v83(v6, (CContentBounder *)v140, (__int64)v246);
    }
    LODWORD(v4) = ContentBounds;
    goto LABEL_138;
  }
  return (unsigned int)v4;
}
