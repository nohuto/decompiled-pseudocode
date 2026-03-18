/*
 * XREFs of ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x1800A81C0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006B28 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180009D60 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CLayerVisual@@UEAA_NXZ @ 0x180009DD0 (-HasNonEmptyContent@CLayerVisual@@UEAA_NXZ.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000DED0 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800171F8 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180029AC0 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004A7F0 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004F67C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180051660 (-Release@CResource@@UEAAKXZ.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180055DE0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x180057310 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180064BF0 (-AddAntiOccluderRect@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?Add@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x180064C60 (-Add@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180064EC0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x18007904C (-AddMultipleAndSet@-$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18007E1B4 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008FE40 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x180091810 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180091E40 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800953D0 (-IsOfType@CEffectBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800954F0 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800975E0 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180097620 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098B50 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180098E50 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180099460 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099E90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009AE80 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18009D390 (-AddOcclusionInformation@CSpriteVisualContent@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009DBF0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F390 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3958 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A46B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A5380 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A5D80 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800A5FB0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800A918C (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800B3B60 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800BE290 (-IsOfType@CLayerVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetZ@CWindowOcclusionInfo@@MEAAXH@Z @ 0x1800C0BC0 (-SetZ@CWindowOcclusionInfo@@MEAAXH@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x1800DA9A8 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x1800DA9F8 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z @ 0x1800DCFF4 (-GetShadowAtIndexNoRef@CProjectedShadowReceiver@@QEBAPEAVCProjectedShadow@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801675CC (-RemoveAt@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180167830 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     McTemplateU0dffffq @ 0x180170938 (McTemplateU0dffffq.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801C6F6C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  int v3; // r15d
  const struct CVisualTree *v4; // r13
  bool (__fastcall *v5)(__int64, int); // r8
  const struct CVisual *v6; // rsi
  unsigned __int64 v8; // r9
  int v9; // r12d
  _QWORD *v10; // r14
  _BYTE *v11; // rdi
  void (__fastcall *v12)(CWindowOcclusionInfo *__hidden, int); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(CSpriteVisual *, __int64, __int64); // rax
  int ContentBounds; // eax
  __int128 *DestinationRect; // rax
  __int64 v18; // rcx
  const struct CMILMatrix *v19; // r9
  __int64 v20; // r8
  __int64 (__fastcall *v21)(__int64, __int128 *, int, const struct CMILMatrix *); // rax
  int v22; // eax
  int v23; // eax
  char v24; // al
  __int64 v25; // rcx
  int v26; // eax
  bool (__fastcall *v27)(__int64, int); // rax
  __int64 v28; // rdi
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rax
  float v32; // xmm7_4
  __int64 v33; // rax
  float v34; // xmm0_4
  char (__fastcall *v35)(CVisual *); // rax
  float *v36; // rcx
  __int64 v37; // rax
  char v39; // al
  __int64 (__fastcall *v40)(CVisual *, struct CContentBounder *, struct COcclusionContext *, struct COcclusionInfo *); // rax
  CSpriteVisualContent *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // r13
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // r8
  unsigned int v47; // r14d
  unsigned __int64 v48; // r8
  unsigned int i; // edi
  __int64 (__fastcall *v50)(unsigned __int64, const struct CVisualTree *, const struct CVisual *); // r10
  int v51; // ecx
  const struct D2D_SIZE_F *v52; // r8
  __int64 (__fastcall *v53)(CSpriteVisualContent *, struct COcclusionContext *, const struct D2D_SIZE_F *); // rax
  int v54; // eax
  char (__fastcall *v55)(CSpriteVisualContent *); // rax
  bool (__fastcall *v56)(CNineGridBrush *, struct CDrawingContext *, bool *); // r9
  char IsReadyToDraw; // al
  float *v58; // rcx
  unsigned __int8 (*v59)(void); // rax
  bool (__fastcall *v60)(CNineGridBrush *, struct CDrawingContext *, bool *); // r9
  char v61; // al
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r15
  int v65; // eax
  float *v66; // r14
  __int128 v67; // xmm0
  __int128 v68; // xmm0
  float v69; // xmm8_4
  float v70; // xmm7_4
  float v71; // xmm9_4
  float v72; // xmm10_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm0_4
  char v76; // al
  int v77; // eax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  char v83; // cl
  unsigned int v84; // r14d
  __int64 v85; // rcx
  bool (__fastcall *v86)(__int64, int); // rax
  bool v87; // al
  CProjectedShadowReceiver *v88; // rax
  unsigned int v89; // r13d
  unsigned int v90; // r15d
  float v91; // xmm0_4
  float v92; // xmm1_4
  float v93; // xmm6_4
  float v94; // xmm4_4
  float v95; // xmm2_4
  float v96; // xmm5_4
  float v97; // xmm3_4
  __int64 v98; // rdx
  float v99; // xmm0_4
  float v100; // xmm0_4
  float v101; // xmm0_4
  bool v102; // zf
  __int64 v103; // r14
  __int64 v104; // rax
  unsigned int v105; // ecx
  int v106; // r8d
  __int128 v107; // xmm0
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  int v111; // eax
  unsigned int v112; // eax
  int v113; // eax
  unsigned int *v114; // rcx
  bool (__fastcall *v115)(__int64, int); // rax
  char IsEmptyDrawing; // al
  __int64 v117; // r8
  _DWORD *v118; // rcx
  CMILMatrix *v119; // r9
  float *v120; // rdx
  __int64 v121; // rcx
  __int64 (__fastcall *v122)(__int64, float *, int, CMILMatrix *); // rax
  int v123; // eax
  char HasNonEmptyContent; // al
  __int64 v125; // rax
  struct CContentBounder *v126; // rdx
  int v127; // eax
  int v128; // eax
  bool (__fastcall *v129)(CLayerVisual *); // rax
  bool HasNonDefaultTreeEffectInternal; // al
  float v131; // xmm0_4
  float v132; // xmm0_4
  float v133; // xmm0_4
  int v134; // eax
  int v135; // r14d
  int v136; // edx
  int *v137; // rcx
  __int64 v138; // r14
  bool (__fastcall *v139)(__int64, int); // rax
  char v140; // al
  const struct CVisual *v141; // rax
  unsigned int *j; // rcx
  __int64 v143; // rax
  _QWORD *v144; // rcx
  __int64 v145; // r9
  unsigned __int64 v146; // rcx
  __int64 (__fastcall *v147)(unsigned __int64, const struct CVisualTree *, const struct CVisual *); // rax
  char IsValid; // al
  __int128 v149; // xmm0
  void (*v150)(void); // rax
  __int64 v151; // rcx
  unsigned int *v152; // rcx
  _QWORD *v153; // rcx
  const struct CVisual *v154; // rax
  __int64 v155; // rdx
  __int64 (__fastcall *v156)(const struct CVisual *, __int64, _QWORD *, unsigned __int64); // rax
  int v157; // eax
  int v158; // eax
  CMILMatrix *v159; // rcx
  int v160; // eax
  _OWORD *v161; // rcx
  bool v162; // cc
  __int128 v163; // xmm1
  unsigned int v164; // xmm0_4
  float v165; // xmm7_4
  unsigned int v166; // xmm2_4
  float v167; // xmm6_4
  unsigned int v168; // xmm3_4
  float v169; // xmm5_4
  __int64 v170; // rcx
  const struct CMILMatrix *v171; // r9
  __int64 v172; // r8
  __int64 (__fastcall *v173)(__int64, __int128 *, int, const struct CMILMatrix *); // rax
  __int64 v174; // rax
  int v175; // edx
  int *v176; // rcx
  CProjectedShadowReceiver *v177; // rax
  int v178; // r13d
  __int64 v179; // r14
  struct CProjectedShadow *ShadowAtIndexNoRef; // rax
  int v181; // edx
  int *v182; // rcx
  CProjectedShadowReceiver *v183; // rax
  int v184; // r13d
  __int64 v185; // r14
  struct CProjectedShadow *v186; // rax
  struct CDropShadow *DropShadow; // rax
  __int128 *v189; // rax
  __int128 v190; // xmm1
  __int128 v191; // xmm0
  __int128 v192; // xmm1
  __int64 v193; // rcx
  __int64 *v194; // rcx
  __int64 v195; // r13
  __int64 v196; // rax
  BOOL v197; // eax
  COverlayContext::OverlayPlaneInfo *v198; // rcx
  int v199; // r14d
  __int64 v200; // rdi
  __int64 v201; // r15
  __int64 v202; // rax
  COverlayContext::OverlayPlaneInfo *v203; // rcx
  bool v204[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v205; // [rsp+50h] [rbp-B8h]
  __int64 v206; // [rsp+58h] [rbp-B0h]
  __int64 v207; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v208; // [rsp+68h] [rbp-A0h] BYREF
  CProjectedShadowReceiver *v209; // [rsp+70h] [rbp-98h]
  RECT *p_rcSrc1; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v211; // [rsp+80h] [rbp-88h]
  __int128 v212; // [rsp+88h] [rbp-80h] BYREF
  __int128 v213; // [rsp+98h] [rbp-70h]
  __int128 v214; // [rsp+A8h] [rbp-60h]
  __int128 v215; // [rsp+B8h] [rbp-50h]
  int v216; // [rsp+C8h] [rbp-40h]
  __int64 *v217; // [rsp+D8h] [rbp-30h]
  CProjectedShadowReceiver *v218; // [rsp+E0h] [rbp-28h]
  __int64 v219; // [rsp+E8h] [rbp-20h]
  __int64 v220; // [rsp+F0h] [rbp-18h]
  __int128 v221; // [rsp+F8h] [rbp-10h]
  char v222[16]; // [rsp+108h] [rbp+0h] BYREF
  char v223[64]; // [rsp+118h] [rbp+10h] BYREF
  __int128 v224; // [rsp+158h] [rbp+50h] BYREF
  __m128 v225; // [rsp+168h] [rbp+60h] BYREF
  __int128 v226; // [rsp+178h] [rbp+70h] BYREF
  RECT rcSrc1; // [rsp+188h] [rbp+80h] BYREF
  RECT v228; // [rsp+198h] [rbp+90h] BYREF
  __int128 v229; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v230; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD v231[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v232; // [rsp+1D8h] [rbp+D0h]
  __m128 v233; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v234[16]; // [rsp+200h] [rbp+F8h] BYREF
  __int128 v235; // [rsp+210h] [rbp+108h] BYREF
  __int128 v236; // [rsp+220h] [rbp+118h] BYREF
  struct tagRECT rcDst; // [rsp+230h] [rbp+128h] BYREF
  struct tagRECT v238; // [rsp+240h] [rbp+138h] BYREF

  v3 = *((_DWORD *)this + 259);
  *a3 = 1;
  v4 = a2;
  v5 = CEffectGroup::IsOfType;
  v6 = (const struct CVisual *)*((_QWORD *)this + 6);
  p_rcSrc1 = (RECT *)a2;
  v8 = 1LL;
  v9 = 0;
  LODWORD(v206) = v3;
  if ( *((_BYTE *)a2 + 32) )
  {
    v10 = (_QWORD *)((char *)v6 + 288);
  }
  else
  {
    v151 = *((_QWORD *)v6 + 27);
    if ( (*(_DWORD *)(v151 + 4) & 0x80000) == 0 )
      goto LABEL_37;
    a2 = (const struct CVisualTree *)*(unsigned int *)(v151 + 12);
    v152 = (unsigned int *)(v151 + 12);
    if ( ((unsigned int)a2 & 0x7F000000) != 0xD000000 )
    {
      do
      {
        v152 = (unsigned int *)((char *)v152 + ((unsigned int)a2 & 0xFFFFFF) + 4);
        a2 = (const struct CVisualTree *)*v152;
      }
      while ( (*v152 & 0x7F000000) != 0xD000000 );
    }
    v211 = *(_QWORD **)(v152 + 1);
    if ( !v211 )
      goto LABEL_37;
    v153 = (_QWORD *)*v211;
    if ( (_QWORD *)*v211 == v211 )
      goto LABEL_37;
    while ( 1 )
    {
      v10 = v153 - 28;
      if ( (const struct CVisualTree *)v153[4] == v4 )
        break;
      v153 = (_QWORD *)*v153;
      if ( v153 == v211 )
        goto LABEL_37;
    }
  }
  if ( v10 )
  {
    v11 = (_BYTE *)v10[4];
    if ( v11
      || (v174 = (*(__int64 (__fastcall **)(_QWORD, const struct CVisualTree *, bool (__fastcall *)(__int64, int), __int64))(*(_QWORD *)v10[3] + 328LL))(
                   v10[3],
                   a2,
                   CEffectGroup::IsOfType,
                   1LL),
          v10[4] = v174,
          v5 = CEffectGroup::IsOfType,
          v8 = 1LL,
          (v11 = (_BYTE *)v174) != 0LL) )
    {
      a2 = (const struct CVisualTree *)*((unsigned int *)this + 258);
      v12 = *(void (__fastcall **)(CWindowOcclusionInfo *__hidden, int))(*(_QWORD *)v11 + 16LL);
      if ( v12 == CVisualOcclusionInfo::SetZ )
      {
        *((_DWORD *)v11 + 4) = (_DWORD)a2;
      }
      else if ( v12 == CWindowOcclusionInfo::SetZ )
      {
        CWindowOcclusionInfo::SetZ((CWindowOcclusionInfo *)v11, (int)a2);
      }
      else
      {
        ((void (__fastcall *)(_BYTE *, const struct CVisualTree *, bool (__fastcall *)(__int64, int), __int64))v12)(
          v11,
          a2,
          CEffectGroup::IsOfType,
          1LL);
      }
      if ( (v11[8] & 1) == 0 )
        goto LABEL_25;
      v13 = *((_DWORD *)this + 270);
      if ( !v13 || !*(_DWORD *)(*((_QWORD *)this + 137) + 4LL * (unsigned int)(v13 - 1)) )
      {
LABEL_23:
        v23 = *((_DWORD *)this + 270);
        if ( v23 )
          *((_DWORD *)this + 270) = v23 - 1;
LABEL_25:
        if ( v3 )
          goto LABEL_26;
        *((_QWORD *)this + 101) = v6;
        v40 = *(__int64 (__fastcall **)(CVisual *, struct CContentBounder *, struct COcclusionContext *, struct COcclusionInfo *))(*(_QWORD *)v6 + 200LL);
        if ( v40 == CVisual::CollectOcclusion )
        {
          v41 = (CSpriteVisualContent *)*((_QWORD *)v6 + 31);
          v9 = 0;
          if ( v41 )
          {
            v52 = (const struct D2D_SIZE_F *)((char *)v6 + 132);
            v53 = *(__int64 (__fastcall **)(CSpriteVisualContent *, struct COcclusionContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v41 + 152LL);
            if ( v53 == CRenderData::AddOcclusionInformation )
            {
              v54 = CRenderData::Draw(v41, (__int64)this, 2);
            }
            else if ( v53 == CSpriteVisualContent::AddOcclusionInformation )
            {
              v54 = CSpriteVisualContent::AddOcclusionInformation(v41, this, v52);
            }
            else if ( v53 == CSurfaceBrush::AddOcclusionInformation )
            {
              v54 = CSurfaceBrush::AddOcclusionInformation(v41, this, v52);
            }
            else if ( v53 == CPrimitiveGroup::AddOcclusionInformation )
            {
              v54 = CPrimitiveGroup::AddOcclusionInformation(v41, this, v52);
            }
            else
            {
              v54 = ((__int64 (__fastcall *)(CSpriteVisualContent *, COcclusionContext *, const struct D2D_SIZE_F *, unsigned __int64))v53)(
                      v41,
                      this,
                      v52,
                      v8);
            }
            v9 = v54;
            if ( v54 >= 0 )
            {
LABEL_66:
              v42 = *((_QWORD *)this + 50);
              LODWORD(v43) = *((_DWORD *)this + 106);
              v207 = v42;
              if ( !(_DWORD)v43 )
                goto LABEL_67;
              while ( 1 )
              {
                v117 = *((unsigned int *)this + 258);
                v43 = (unsigned int)(v43 - 1);
                LODWORD(v208) = v117;
                *((_DWORD *)this + 258) = v117 + 2;
                v118 = (_DWORD *)(v42 + 20 * v43);
                v211 = v118;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                {
                  McTemplateU0dffffq((_DWORD)v118, v42, v117, v8, v118[1], v118[2], v118[3], v118[4]);
                  v42 = v207;
                  v118 = v211;
                  v117 = (unsigned int)v208;
                }
                if ( v118[4] )
                  goto LABEL_187;
                v119 = (COcclusionContext *)((char *)this + 820);
                v120 = (float *)v118;
                v121 = *((_QWORD *)this + 49);
                if ( !*((_BYTE *)this + 816) )
                  v119 = 0LL;
                v122 = *(__int64 (__fastcall **)(__int64, float *, int, CMILMatrix *))(**((_QWORD **)this + 49) + 32LL);
                v123 = v122 == CArrayBasedCoverageSet::Add
                     ? CArrayBasedCoverageSet::Add(v121, v120, v117, v119)
                     : v122(v121, v120, v117, v119);
                if ( v123 < 0 )
                  break;
                v42 = v207;
LABEL_187:
                if ( !(_DWORD)v43 )
                  goto LABEL_67;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v123, 0x35Cu);
LABEL_67:
              *((_DWORD *)this + 106) = 0;
              DynArrayImpl<0>::ShrinkToSize((__int64)this + 400, 0x14u);
              v4 = (const struct CVisualTree *)p_rcSrc1;
LABEL_68:
              *((_QWORD *)this + 101) = 0LL;
              if ( v9 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x294u);
                v5 = CEffectGroup::IsOfType;
                v8 = 1LL;
                goto LABEL_39;
              }
LABEL_26:
              v24 = v11[8];
              if ( (v24 & 4) != 0 )
              {
                v51 = *((_DWORD *)this + 2);
                if ( v51 )
                {
                  *((_DWORD *)this + 2) = v51 - 1;
                  v24 = v11[8];
                }
              }
              if ( (v24 & 2) != 0 )
              {
                v111 = *((_DWORD *)this + 262);
                if ( v111 )
                {
                  v112 = v111 - 1;
                  *((_DWORD *)this + 262) = v112;
                  LODWORD(v205) = *(_DWORD *)(*((_QWORD *)this + 133) + 4LL * v112);
                }
                v113 = *((_DWORD *)this + 30);
                if ( v113 )
                  *((_DWORD *)this + 30) = v113 - 1;
              }
              if ( (v11[8] & 8) != 0 )
              {
                v128 = *((_DWORD *)this + 278);
                if ( v128 )
                  *((_DWORD *)this + 278) = v128 - 1;
              }
              if ( !v3 )
              {
                v44 = *((_QWORD *)v6 + 34);
                if ( (v44 & 2) != 0 )
                  v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCuLL);
                else
                  LODWORD(v44) = v44 & 1;
                if ( (_DWORD)v44
                  || ((v45 = *((_QWORD *)v6 + 35), (v45 & 2) != 0)
                    ? (v45 = *(_QWORD *)(v45 & 0xFFFFFFFFFFFFFFFCuLL))
                    : (LODWORD(v45) = v45 & 1),
                      (_DWORD)v45) )
                {
                  v207 = 0x100000000LL;
                  v46 = &v207;
                  v217 = &v207;
                  while ( 1 )
                  {
                    v47 = *(_DWORD *)v46;
                    v48 = 0LL;
                    for ( i = 0; i < (unsigned int)CVisual::GetLightsCount(v6, v47, v48, v8); ++i )
                    {
                      if ( v47 )
                      {
                        v144 = (_QWORD *)((char *)v6 + 280);
                        v143 = *((_QWORD *)v6 + 35);
                        if ( (v143 & 2) != 0 )
                          v143 = *(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFFCuLL);
                        else
                          LODWORD(v143) = v143 & 1;
                      }
                      else
                      {
                        v143 = *((_QWORD *)v6 + 34);
                        if ( (v143 & 2) != 0 )
                          v143 = *(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFFCuLL);
                        else
                          LODWORD(v143) = v143 & 1;
                        v144 = (_QWORD *)((char *)v6 + 280);
                      }
                      if ( i >= (unsigned int)v143 )
                      {
LABEL_363:
                        v8 = v48;
                        goto LABEL_268;
                      }
                      if ( v47 )
                      {
                        v8 = CPtrArrayBase::operator[](v144, i);
                        v48 = 0LL;
                      }
                      else
                      {
                        v145 = *((_QWORD *)v6 + 34);
                        if ( (v145 & 2) != 0 )
                          v146 = *(_QWORD *)(v145 & 0xFFFFFFFFFFFFFFFCuLL);
                        else
                          v146 = *((_QWORD *)v6 + 34) & 1LL;
                        if ( i >= v146 )
                          goto LABEL_363;
                        if ( v146 == 1 )
                        {
                          v8 = v145 & 0xFFFFFFFFFFFFFFFCuLL;
                        }
                        else
                        {
                          _mm_lfence();
                          v8 = *(_QWORD *)((*((_QWORD *)v6 + 34) & 0xFFFFFFFFFFFFFFFCuLL) + 8LL * i + 16);
                        }
                      }
LABEL_268:
                      if ( *(_BYTE *)(v8 + 154) )
                      {
                        v147 = *(__int64 (__fastcall **)(unsigned __int64, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)v8 + 184LL);
                        if ( v147 == v50 )
                          IsValid = CCompositionSpotLight::IsValid((CCompositionSpotLight *)v8, v4, v6);
                        else
                          IsValid = v147(v8, v4, v6);
                        if ( IsValid )
                        {
                          v149 = *(_OWORD *)(*((_QWORD *)this + 19) + 16LL * (unsigned int)--*((_DWORD *)this + 44));
                          if ( (_QWORD)v149 )
                          {
                            v150 = *(void (**)(void))(*(_QWORD *)v149 + 16LL);
                            if ( (char *)v150 == (char *)CResource::Release )
                              CResource::Release((CResource *)v149);
                            else
                              v150();
                          }
                        }
                        v48 = 0LL;
                      }
                    }
                    v46 = (__int64 *)((char *)v217 + 4);
                    v217 = v46;
                    if ( v46 == &v208 )
                    {
                      v3 = v206;
                      break;
                    }
                  }
                }
              }
              v25 = *((_QWORD *)v6 + 27);
              v26 = *(_DWORD *)(v25 + 4);
              if ( (v26 & 0x20000000) != 0 || (v26 & 0x2000) != 0 || (v26 & 0x4000) != 0 )
                goto LABEL_172;
              if ( (v26 & 0x8000000) != 0 )
              {
                a2 = (const struct CVisualTree *)*(unsigned int *)(v25 + 12);
                v114 = (unsigned int *)(v25 + 12);
                if ( ((unsigned int)a2 & 0x7F000000) != 0x5000000 )
                {
                  do
                  {
                    v114 = (unsigned int *)((char *)v114 + ((unsigned int)a2 & 0xFFFFFF) + 4);
                    a2 = (const struct CVisualTree *)*v114;
                  }
                  while ( (*v114 & 0x7F000000) != 0x5000000 );
                }
                v5 = CEffectGroup::IsOfType;
                v219 = *(_QWORD *)(v114 + 1);
                if ( !v219
                  || (v115 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v219 + 48LL),
                      v115 == CEffectGroup::IsOfType) )
                {
LABEL_35:
                  v27 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v6 + 48LL);
                  if ( v27 == CVisual::IsOfType || v27 == CSpriteVisual::IsOfType )
                    goto LABEL_36;
                  if ( v27 == CWindowNode::IsOfType )
                  {
                    v39 = CWindowNode::IsOfType((__int64)v6, 85);
                  }
                  else if ( (char *)v27 == (char *)CLayerVisual::IsOfType )
                  {
                    v39 = CLayerVisual::IsOfType(v6, 85LL);
                  }
                  else
                  {
                    v39 = ((__int64 (__fastcall *)(const struct CVisual *, __int64, bool (__fastcall *)(__int64, int), unsigned __int64))v27)(
                            v6,
                            85LL,
                            CEffectGroup::IsOfType,
                            v8);
                  }
                  if ( !v39
                    || ((v129 = *(bool (__fastcall **)(CLayerVisual *))(*(_QWORD *)v6 + 176LL),
                         v129 != CLayerVisual::HasNonDefaultTreeEffectInternal)
                      ? (HasNonDefaultTreeEffectInternal = v129(v6))
                      : (HasNonDefaultTreeEffectInternal = CLayerVisual::HasNonDefaultTreeEffectInternal(v6)),
                        !HasNonDefaultTreeEffectInternal && !*((_QWORD *)v6 + 65)) )
                  {
LABEL_62:
                    v5 = CEffectGroup::IsOfType;
LABEL_36:
                    v8 = 1LL;
                    goto LABEL_37;
                  }
LABEL_172:
                  --*((_DWORD *)this + 260);
                  goto LABEL_62;
                }
                if ( ((unsigned __int8 (__fastcall *)(__int64, __int64, bool (__fastcall *)(__int64, int), unsigned __int64))v115)(
                       v219,
                       55LL,
                       CEffectGroup::IsOfType,
                       v8) )
                {
                  goto LABEL_172;
                }
              }
              v5 = CEffectGroup::IsOfType;
              goto LABEL_35;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0xDDCu);
          }
        }
        else
        {
          v126 = (struct CContentBounder *)*((_QWORD *)this + 143);
          if ( v40 == CWindowNode::CollectOcclusion )
            v127 = CWindowNode::CollectOcclusion(v6, v126, this, (struct COcclusionInfo *)v11);
          else
            v127 = v40(v6, v126, this, (struct COcclusionInfo *)v11);
          v9 = v127;
        }
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x316u);
          goto LABEL_68;
        }
        goto LABEL_66;
      }
      if ( (*(_DWORD *)(*((_QWORD *)v6 + 27) + 4LL) & 0x10000) != 0
        && *((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal(v6) + 356) )
      {
        COcclusionContext::GetDestinationRect((__int64)this, (__int64)&v230);
        v170 = *((_QWORD *)this + 49);
        v171 = (COcclusionContext *)((char *)this + 820);
        v172 = *((unsigned int *)this + 258);
        if ( !*((_BYTE *)this + 816) )
          v171 = 0LL;
        v173 = *(__int64 (__fastcall **)(__int64, __int128 *, int, const struct CMILMatrix *))(*(_QWORD *)v170 + 40LL);
        if ( v173 == CArrayBasedCoverageSet::AddAntiOccluderRect )
          CArrayBasedCoverageSet::AddAntiOccluderRect(v170, &v230, v172, v171);
        else
          v173(v170, &v230, v172, v171);
        CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
          (const struct FastRegion::Internal::CRgnData **)this + 120,
          (__int64)&v230);
      }
      if ( (*((_BYTE *)v6 + 264) & 1) != 0 && (*((_BYTE *)v6 + 94) & 4) != 0 )
      {
        v14 = *((_QWORD *)this + 143);
        v15 = *(__int64 (__fastcall **)(CSpriteVisual *, __int64, __int64))(*(_QWORD *)v6 + 192LL);
        if ( v15 == CSpriteVisual::GetContentBounds )
          ContentBounds = CSpriteVisual::GetContentBounds(v6, v14, (__int64)v234);
        else
          ContentBounds = ((__int64 (__fastcall *)(const struct CVisual *, __int64, _BYTE *, unsigned __int64))v15)(
                            v6,
                            v14,
                            v234,
                            v8);
        v9 = ContentBounds;
        if ( ContentBounds < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ContentBounds, 0x26Du);
LABEL_352:
          v5 = CEffectGroup::IsOfType;
          v8 = 1LL;
          goto LABEL_37;
        }
        DestinationRect = (__int128 *)COcclusionContext::GetDestinationRect((__int64)this, (__int64)v222, (__int64)v234);
        v18 = *((_QWORD *)this + 49);
        v19 = (COcclusionContext *)((char *)this + 820);
        v20 = *((unsigned int *)this + 258);
        if ( !*((_BYTE *)this + 816) )
          v19 = 0LL;
        v235 = *DestinationRect;
        v21 = *(__int64 (__fastcall **)(__int64, __int128 *, int, const struct CMILMatrix *))(*(_QWORD *)v18 + 40LL);
        if ( v21 == CArrayBasedCoverageSet::AddAntiOccluderRect )
          CArrayBasedCoverageSet::AddAntiOccluderRect(v18, &v235, v20, v19);
        else
          v21(v18, &v235, v20, v19);
      }
      if ( (*((_BYTE *)v6 + 264) & 3) == 0 )
      {
        v22 = *((_DWORD *)this + 278);
        if ( !v22 || !*(_BYTE *)((unsigned int)(v22 - 1) + *((_QWORD *)this + 141)) )
          goto LABEL_23;
      }
      v155 = *((_QWORD *)this + 143);
      v156 = *(__int64 (__fastcall **)(const struct CVisual *, __int64, _QWORD *, unsigned __int64))(*(_QWORD *)v6 + 192LL);
      if ( (char *)v156 == (char *)CSpriteVisual::GetContentBounds )
      {
        v157 = CSpriteVisual::GetContentBounds(v6, v155, (__int64)v231);
      }
      else if ( (char *)v156 == (char *)CVisual::GetContentBounds )
      {
        v157 = CVisual::GetContentBounds(v6, v155, v231);
      }
      else
      {
        v157 = v156(v6, v155, v231, v8);
      }
      v9 = v157;
      if ( v157 >= 0 )
      {
        v158 = *((_DWORD *)this + 2);
        if ( v158 )
          v159 = (CMILMatrix *)(*((_QWORD *)this + 3) + 68LL * (unsigned int)(v158 - 1));
        else
          v159 = (CMILMatrix *)&CMILMatrix::Identity;
        CMILMatrix::Transform2DBoundsHelper<0>(v159, (__int64)v231, (float *)&v226);
        v160 = *((_DWORD *)this + 30);
        if ( v160 )
        {
          v161 = (_OWORD *)(*((_QWORD *)this + 17) + 16LL * (unsigned int)(v160 - 1));
          v162 = *(float *)&v226 <= COERCE_FLOAT(*v161);
          v163 = *v161;
          v221 = *v161;
          if ( !v162 )
            LODWORD(v163) = v226;
          v164 = DWORD1(v221);
          v165 = *((float *)&v221 + 1);
          if ( *((float *)&v226 + 1) > *((float *)&v221 + 1) )
          {
            v164 = DWORD1(v226);
            v165 = *((float *)&v226 + 1);
          }
          v166 = DWORD2(v221);
          v167 = *((float *)&v221 + 2);
          if ( *((float *)&v221 + 2) > *((float *)&v226 + 2) )
          {
            v166 = DWORD2(v226);
            v167 = *((float *)&v226 + 2);
          }
          v168 = HIDWORD(v221);
          v169 = *((float *)&v221 + 3);
          if ( *((float *)&v221 + 3) > *((float *)&v226 + 3) )
          {
            v168 = HIDWORD(v226);
            v169 = *((float *)&v226 + 3);
          }
          if ( v167 <= *(float *)&v163 || v169 <= v165 )
          {
            v168 = 0;
            v166 = 0;
            v164 = 0;
            LODWORD(v163) = 0;
          }
          *(_QWORD *)&v224 = __PAIR64__(v164, v163);
          *((_QWORD *)&v224 + 1) = __PAIR64__(v168, v166);
        }
        else
        {
          v224 = v226;
        }
        v236 = v224;
        CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
          (const struct FastRegion::Internal::CRgnData **)this + 120,
          (__int64)&v236);
        goto LABEL_23;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v157, 0x283u);
      goto LABEL_352;
    }
  }
LABEL_37:
  if ( v3 )
    --*((_DWORD *)this + 259);
LABEL_39:
  if ( !*((_BYTE *)this + 817)
    || *((_DWORD *)this + 259)
    || (*((_BYTE *)v6 + 94) & 2) != 0
    || (*((_DWORD *)v6 + 22) & 0x400) == 0 )
  {
    goto LABEL_57;
  }
  v28 = (__int64)v6 + 140;
  v29 = (*((float *)v6 + 40) <= *((float *)v6 + 39)) + 1;
  if ( *((float *)v6 + 37) > *((float *)v6 + 35) )
    v29 = *((float *)v6 + 40) <= *((float *)v6 + 39);
  v30 = v29 + 1;
  if ( *((float *)v6 + 38) > *((float *)v6 + 36) )
    v30 = v29;
  if ( v30 > 1 )
    goto LABEL_57;
  v31 = *((_QWORD *)v6 + 27);
  v32 = FLOAT_1_0;
  if ( (*(_DWORD *)(v31 + 4) & 0x8000000) != 0 )
  {
    v136 = *(_DWORD *)(v31 + 12);
    v137 = (int *)(v31 + 12);
    if ( (v136 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v137 = (int *)((char *)v137 + (v136 & 0xFFFFFF) + 4);
        v136 = *v137;
      }
      while ( (*v137 & 0x7F000000) != 0x5000000 );
    }
    v220 = *(_QWORD *)(v137 + 1);
    v138 = v220;
    v139 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v220 + 48LL);
    if ( v139 == CEffectGroup::IsOfType )
      v140 = CEffectGroup::IsOfType(v220, 52);
    else
      v140 = ((__int64 (__fastcall *)(__int64, __int64, bool (__fastcall *)(__int64, int), __int64))v139)(
               v220,
               52LL,
               CEffectGroup::IsOfType,
               1LL);
    if ( v140 )
      v32 = *(double *)(v138 + 72);
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v32, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_57;
  v33 = *((_QWORD *)v6 + 27);
  if ( (*(_DWORD *)(v33 + 4) & 0x100000) != 0 )
  {
    a2 = (const struct CVisualTree *)*(unsigned int *)(v33 + 12);
    for ( j = (unsigned int *)(v33 + 12); (*j & 0x7F000000) != 0xC000000; a2 = (const struct CVisualTree *)*j )
      j = (unsigned int *)((char *)j + ((unsigned int)a2 & 0xFFFFFF) + 4);
    LODWORD(v208) = j[1];
    v34 = *(float *)&v208;
  }
  else
  {
    v34 = FLOAT_1_0;
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v34, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_57;
  v35 = *(char (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 224LL);
  if ( v35 == CVisual::HasNonEmptyContent )
  {
    v36 = (float *)*((_QWORD *)v6 + 31);
    if ( !v36 )
      goto LABEL_55;
    v55 = *(char (__fastcall **)(CSpriteVisualContent *))(*(_QWORD *)v36 + 192LL);
    if ( (char *)v55 == (char *)CRenderData::IsEmptyDrawing )
    {
      IsEmptyDrawing = *((_BYTE *)v36 + 137);
    }
    else
    {
      if ( v55 == CSpriteVisualContent::IsEmptyDrawing )
      {
        v56 = *(bool (__fastcall **)(CNineGridBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v36 + 272LL);
        v204[0] = 0;
        if ( v56 == CMaskBrush::IsReadyToDraw )
        {
          IsReadyToDraw = CMaskBrush::IsReadyToDraw((CMaskBrush *)v36, 0LL, v204);
        }
        else if ( (char *)v56 == (char *)CEffectBrush::IsReadyToDraw )
        {
          IsReadyToDraw = CEffectBrush::IsReadyToDraw((CEffectBrush *)v36, 0LL, v204);
        }
        else if ( (char *)v56 == (char *)CSurfaceBrush::IsReadyToDraw )
        {
          IsReadyToDraw = CSurfaceBrush::IsReadyToDraw((CSurfaceBrush *)v36, 0LL, v204);
        }
        else if ( v56 == CNineGridBrush::IsReadyToDraw )
        {
          IsReadyToDraw = CNineGridBrush::IsReadyToDraw((CNineGridBrush *)v36, 0LL, v204);
        }
        else
        {
          IsReadyToDraw = v56((CNineGridBrush *)v36, 0LL, v204);
        }
        if ( IsReadyToDraw && !v204[0] )
          goto LABEL_103;
LABEL_55:
        v37 = *((_QWORD *)v6 + 27);
        if ( (*(_BYTE *)(v37 + 4) & 1) != 0 )
        {
          v175 = *(_DWORD *)(v37 + 12);
          v176 = (int *)(v37 + 12);
          if ( (v175 & 0x7F000000) != 0x20000000 )
          {
            do
            {
              v176 = (int *)((char *)v176 + (v175 & 0xFFFFFF) + 4);
              v175 = *v176;
            }
            while ( (*v176 & 0x7F000000) != 0x20000000 );
          }
          v218 = *(CProjectedShadowReceiver **)(v176 + 1);
          v177 = v218;
          if ( v218 )
          {
            v178 = 0;
            v179 = (__int64)(*((_QWORD *)v218 + 9) - *((_QWORD *)v218 + 8)) >> 3;
            if ( (int)v179 > 0 )
            {
              do
              {
                ShadowAtIndexNoRef = CProjectedShadowReceiver::GetShadowAtIndexNoRef(v177, v178);
                if ( !(*(unsigned __int8 (__fastcall **)(struct CProjectedShadow *))(*(_QWORD *)ShadowAtIndexNoRef
                                                                                   + 192LL))(ShadowAtIndexNoRef) )
                  goto LABEL_103;
                v177 = v218;
              }
              while ( ++v178 < (int)v179 );
            }
          }
        }
LABEL_56:
        if ( !v3 )
          goto LABEL_57;
        goto LABEL_103;
      }
      if ( (char *)v55 == (char *)CColorBrush::IsEmptyDrawing )
      {
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v36[21]) & _xmm) >= 0.0000011920929 )
          goto LABEL_103;
        goto LABEL_55;
      }
      if ( (char *)v55 == (char *)CAtlasedRectsGroup::IsEmptyDrawing )
      {
        IsEmptyDrawing = CAtlasedRectsGroup::IsEmptyDrawing((CAtlasedRectsGroup *)v36);
      }
      else if ( v55 == CPrimitiveGroup::IsEmptyDrawing )
      {
        IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing((CPrimitiveGroup *)v36);
      }
      else
      {
        IsEmptyDrawing = ((__int64 (__fastcall *)(float *, char (__fastcall *)(CPrimitiveGroup *), char (__fastcall *)(CSpriteVisualContent *), unsigned __int64))v55)(
                           v36,
                           CPrimitiveGroup::IsEmptyDrawing,
                           CSpriteVisualContent::IsEmptyDrawing,
                           v8);
      }
    }
    if ( !IsEmptyDrawing )
      goto LABEL_103;
    goto LABEL_55;
  }
  if ( v35 != CSpriteVisual::HasNonEmptyContent )
  {
    if ( v35 == CWindowNode::HasNonEmptyContent )
    {
      HasNonEmptyContent = CWindowNode::HasNonEmptyContent(v6);
    }
    else if ( (char *)v35 == (char *)CLayerVisual::HasNonEmptyContent )
    {
      HasNonEmptyContent = CLayerVisual::HasNonEmptyContent(v6);
    }
    else
    {
      HasNonEmptyContent = ((__int64 (__fastcall *)(const struct CVisual *, const struct CVisualTree *, bool (__fastcall *)(__int64, int), unsigned __int64))v35)(
                             v6,
                             a2,
                             v5,
                             v8);
    }
    if ( HasNonEmptyContent )
      goto LABEL_103;
    goto LABEL_56;
  }
  v58 = (float *)*((_QWORD *)v6 + 31);
  if ( v58 )
  {
    v59 = *(unsigned __int8 (**)(void))(*(_QWORD *)v58 + 192LL);
    if ( (char *)v59 == (char *)CSpriteVisualContent::IsEmptyDrawing )
    {
      v60 = *(bool (__fastcall **)(CNineGridBrush *, struct CDrawingContext *, bool *))(*(_QWORD *)v58 + 272LL);
      v204[1] = 0;
      if ( v60 == CMaskBrush::IsReadyToDraw )
      {
        v61 = CMaskBrush::IsReadyToDraw((CMaskBrush *)v58, 0LL, &v204[1]);
      }
      else if ( (char *)v60 == (char *)CEffectBrush::IsReadyToDraw )
      {
        v61 = CEffectBrush::IsReadyToDraw((CEffectBrush *)v58, 0LL, &v204[1]);
      }
      else if ( (char *)v60 == (char *)CSurfaceBrush::IsReadyToDraw )
      {
        v61 = CSurfaceBrush::IsReadyToDraw((CSurfaceBrush *)v58, 0LL, &v204[1]);
      }
      else if ( v60 == CNineGridBrush::IsReadyToDraw )
      {
        v61 = CNineGridBrush::IsReadyToDraw((CNineGridBrush *)v58, 0LL, &v204[1]);
      }
      else
      {
        v61 = v60((CNineGridBrush *)v58, 0LL, &v204[1]);
      }
      if ( v61 && !v204[1] )
        goto LABEL_103;
    }
    else if ( (char *)v59 == (char *)CColorBrush::IsEmptyDrawing )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v58[21]) & _xmm) >= 0.0000011920929 )
        goto LABEL_103;
    }
    else if ( !v59() )
    {
      goto LABEL_103;
    }
  }
  v125 = *((_QWORD *)v6 + 27);
  if ( (*(_BYTE *)(v125 + 4) & 1) == 0 )
    goto LABEL_200;
  v181 = *(_DWORD *)(v125 + 12);
  v182 = (int *)(v125 + 12);
  if ( (v181 & 0x7F000000) != 0x20000000 )
  {
    do
    {
      v182 = (int *)((char *)v182 + (v181 & 0xFFFFFF) + 4);
      v181 = *v182;
    }
    while ( (*v182 & 0x7F000000) != 0x20000000 );
  }
  v209 = *(CProjectedShadowReceiver **)(v182 + 1);
  v183 = v209;
  if ( !v209 || (v184 = 0, v185 = (__int64)(*((_QWORD *)v209 + 9) - *((_QWORD *)v209 + 8)) >> 3, (int)v185 <= 0) )
  {
LABEL_200:
    if ( (*(_DWORD *)(*((_QWORD *)v6 + 27) + 4LL) & 0x100) != 0 )
    {
      DropShadow = CSpriteVisual::GetDropShadow(v6);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CDropShadow *))(*(_QWORD *)DropShadow + 192LL))(DropShadow) )
        goto LABEL_103;
    }
    goto LABEL_56;
  }
  while ( 1 )
  {
    v186 = CProjectedShadowReceiver::GetShadowAtIndexNoRef(v183, v184);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CProjectedShadow *))(*(_QWORD *)v186 + 192LL))(v186) )
      break;
    v183 = v209;
    if ( ++v184 >= (int)v185 )
      goto LABEL_200;
  }
LABEL_103:
  v62 = *((_QWORD *)this + 148);
  v63 = 0LL;
  LODWORD(v208) = 0;
  while ( (unsigned int)v63 < *(_DWORD *)(v62 + 24) )
  {
    v64 = *(_QWORD *)(*(_QWORD *)v62 + 8 * v63);
    v207 = v64;
    if ( !*(_BYTE *)(v64 + 1188) )
      goto LABEL_160;
    v65 = *((_DWORD *)this + 30);
    LODWORD(v205) = 0;
    v66 = (float *)(v64 + 592);
    if ( v65 )
      v67 = *(_OWORD *)(*((_QWORD *)this + 17) + 16LL * (unsigned int)(v65 - 1));
    else
      v67 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v224 = v67;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v64 + 592), (__int64)&v224, (float *)&v229);
    v68 = *(_OWORD *)(v64 + 56);
    v69 = *(float *)&v229;
    v70 = *((float *)&v229 + 1);
    v71 = *((float *)&v229 + 2);
    v72 = *((float *)&v229 + 3);
    v224 = v229;
    v232 = v68;
    if ( *(float *)&v68 > *(float *)&v229 )
    {
      LODWORD(v224) = v68;
      v69 = *(float *)&v68;
    }
    v73 = *((float *)&v229 + 1);
    if ( *((float *)&v232 + 1) > *((float *)&v229 + 1) )
    {
      DWORD1(v224) = DWORD1(v232);
      v70 = *((float *)&v232 + 1);
      v73 = *((float *)&v232 + 1);
    }
    v74 = *((float *)&v229 + 2);
    if ( *((float *)&v229 + 2) > *((float *)&v232 + 2) )
    {
      DWORD2(v224) = DWORD2(v232);
      v71 = *((float *)&v232 + 2);
      v74 = *((float *)&v232 + 2);
    }
    v75 = *((float *)&v229 + 3);
    if ( *((float *)&v229 + 3) > *((float *)&v232 + 3) )
    {
      HIDWORD(v224) = HIDWORD(v232);
      v72 = *((float *)&v232 + 3);
      v75 = *((float *)&v232 + 3);
    }
    if ( v74 <= v69 || v75 <= v73 )
    {
      v70 = 0.0;
      v72 = 0.0;
      v71 = 0.0;
      v224 = 0uLL;
      v69 = 0.0;
    }
    else if ( v74 > v69 && v75 > v70 )
    {
      v76 = 0;
      goto LABEL_120;
    }
    v76 = 1;
LABEL_120:
    if ( v76 )
      goto LABEL_160;
    v216 = 0;
    v77 = *((_DWORD *)this + 2);
    if ( v77 )
    {
      v78 = (unsigned int)(v77 - 1);
      v79 = *((_QWORD *)this + 3);
      v80 = *(_OWORD *)(68 * v78 + v79 + 16);
      v212 = *(_OWORD *)(68 * v78 + v79);
      v81 = *(_OWORD *)(68 * v78 + v79 + 32);
      v213 = v80;
      v82 = *(_OWORD *)(68 * v78 + v79 + 48);
      LODWORD(v79) = *(_DWORD *)(68 * v78 + v79 + 64);
      v214 = v81;
      v215 = v82;
      v216 = v79;
    }
    else
    {
      v212 = _xmm;
      LOWORD(v216) = 32085;
      v213 = _xmm;
      v214 = _xmm;
      v215 = _xmm;
    }
    if ( CMILMatrix::IsIdentity<1>((__int64)&v212) )
    {
      v107 = *(_OWORD *)v66;
      v108 = *(_OWORD *)(v64 + 608);
      v216 = *(_DWORD *)(v64 + 656);
      v212 = v107;
      v109 = *(_OWORD *)(v64 + 624);
      v213 = v108;
      v110 = *(_OWORD *)(v64 + 640);
      v214 = v109;
      v215 = v110;
    }
    else
    {
      CMILMatrix::Ensure3DFlags((CMILMatrix *)(v64 + 592));
      v83 = *(_BYTE *)(v64 + 656);
      if ( (v83 & 3) != 1 )
      {
        if ( (v83 & 0xC) != 4 )
        {
          if ( (v83 & 0xC0) == 0x40 )
          {
            CMILMatrix::Scale((CMILMatrix *)&v212, *v66, *(float *)(v64 + 612), *(float *)(v64 + 632));
          }
          else
          {
            if ( (*(_BYTE *)(v64 + 657) & 0xC) != 4 )
            {
              v189 = Windows::Foundation::Numerics::operator*((__int64)v223, &v212, (_OWORD *)(v64 + 592));
              v84 = 0;
              v216 = 0;
              v190 = v189[1];
              v212 = *v189;
              v191 = v189[2];
              v213 = v190;
              v192 = v189[3];
              v214 = v191;
              v215 = v192;
              goto LABEL_126;
            }
            CMILMatrix::Rotate90((CMILMatrix *)&v212);
            CMILMatrix::Scale(
              (CMILMatrix *)&v212,
              COERCE_FLOAT(*(_DWORD *)(v64 + 608) ^ _xmm),
              *(float *)(v64 + 596),
              *(float *)(v64 + 632));
          }
        }
        CMILMatrix::Translate((CMILMatrix *)&v212, *(float *)(v64 + 640), *(float *)(v64 + 644), *(float *)(v64 + 648));
      }
    }
    v84 = 0;
LABEL_126:
    if ( *(float *)(v28 + 20) == 0.0 && *(float *)(v28 + 16) == 0.0 )
    {
      v85 = *((_QWORD *)v6 + 31);
      if ( v85
        && ((v86 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v85 + 48LL), v86 == CMaskBrush::IsOfType)
          ? (v87 = CMaskBrush::IsOfType(v85, 41))
          : (char *)v86 == (char *)CColorBrush::IsOfType
          ? (v87 = CColorBrush::IsOfType(v85, 0x29u))
          : v86 == CRenderData::IsOfType
          ? (v87 = CRenderData::IsOfType(v85, 41))
          : (char *)v86 == (char *)CEffectBrush::IsOfType
          ? (v87 = CEffectBrush::IsOfType(v85, 0x29u))
          : v86 == CSurfaceBrush::IsOfType
          ? (v87 = CSurfaceBrush::IsOfType(v85, 41))
          : (v87 = v86(v85, 41)),
            v87) )
      {
        v193 = *(_QWORD *)(*((_QWORD *)v6 + 31) + 88LL);
        v88 = *(CProjectedShadowReceiver **)v193;
        v89 = *(_DWORD *)(v193 + 24);
      }
      else
      {
        v88 = (CProjectedShadowReceiver *)v28;
        v89 = 1;
      }
      LODWORD(v206) = v89;
      v90 = 0;
      v209 = v88;
      if ( v89 )
      {
        while ( 1 )
        {
          CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v212, (float *)v88 + 4 * v90, v225.m128_f32);
          v91 = v225.m128_f32[0];
          if ( v69 > v225.m128_f32[0] )
          {
            v91 = v69;
            v225.m128_f32[0] = v69;
          }
          v92 = v225.m128_f32[1];
          v93 = v225.m128_f32[1];
          if ( v70 > v225.m128_f32[1] )
          {
            v225.m128_f32[1] = v70;
            v92 = v70;
            v93 = v70;
          }
          v94 = v225.m128_f32[2];
          v95 = v225.m128_f32[2];
          if ( v225.m128_f32[2] > v71 )
          {
            v94 = v71;
            v95 = v71;
            v225.m128_f32[2] = v71;
          }
          v96 = v225.m128_f32[3];
          v97 = v225.m128_f32[3];
          if ( v225.m128_f32[3] > v72 )
          {
            v96 = v72;
            v97 = v72;
            v225.m128_f32[3] = v72;
          }
          if ( v95 <= v91 || v97 <= v93 )
          {
            v225 = 0uLL;
LABEL_194:
            v106 = (int)v205;
            goto LABEL_158;
          }
          if ( v95 <= v91 || v97 <= v92 )
            goto LABEL_194;
          v98 = v207;
          v99 = v91 + 6291456.25;
          rcSrc1.left = (int)(LODWORD(v99) << 10) >> 11;
          v100 = v92 + 6291456.25;
          rcSrc1.top = (int)(LODWORD(v100) << 10) >> 11;
          v101 = v94 + 6291456.25;
          rcSrc1.right = (int)(LODWORD(v101) << 10) >> 11;
          *(float *)&v205 = v96 + 6291456.25;
          v102 = *(_DWORD *)(v207 + 216) == 0;
          rcSrc1.bottom = (int)((_DWORD)v205 << 10) >> 11;
          if ( !v102 )
          {
            v194 = (__int64 *)(v207 + 192);
            v205 = (__int64 *)(v207 + 192);
            do
            {
              v195 = 248LL * v84;
              v196 = *v194;
              if ( *(const struct CVisual **)(*v194 + v195 + 8) != v6
                && *(_BYTE *)(v196 + v195 + 177)
                && !*(_BYTE *)(v196 + v195 + 181) )
              {
                v197 = IntersectRect(&rcDst, &rcSrc1, (const RECT *)(v195 + v196 + 76));
                v98 = v207;
                if ( v197 )
                {
                  v198 = (COverlayContext::OverlayPlaneInfo *)(v195 + *(_QWORD *)(v207 + 192));
                  if ( *((_BYTE *)v198 + 179) )
                  {
                    *((_BYTE *)v198 + 180) = 0;
                  }
                  else
                  {
                    COverlayContext::OverlayPlaneInfo::Reset(v198);
                    DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(v205, v84);
                    v98 = v207;
                    --v84;
                  }
                }
                v194 = v205;
              }
              ++v84;
            }
            while ( v84 < *(_DWORD *)(v98 + 216) );
            v89 = v206;
          }
          v103 = v98 + 1136;
          v104 = *(unsigned int *)(v98 + 1160);
          v105 = v104 + 1;
          if ( (int)v104 + 1 < (unsigned int)v104 )
          {
            v199 = -2147024362;
            LODWORD(v205) = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
          }
          else
          {
            v106 = 0;
            LODWORD(v205) = 0;
            if ( v105 <= *(_DWORD *)(v98 + 1156) )
            {
              *(RECT *)(*(_QWORD *)v103 + 16 * v104) = rcSrc1;
              *(_DWORD *)(v98 + 1160) = v105;
              goto LABEL_155;
            }
            p_rcSrc1 = &rcSrc1;
            LODWORD(v205) = DynArrayImpl<0>::Grow(v98 + 1136, 0x10u, 1, 0, (unsigned __int64 *)&p_rcSrc1);
            v106 = (int)v205;
            if ( (int)v205 >= 0 )
              *(RECT *)(*(_QWORD *)v103 + (unsigned int)(16 * (*(_DWORD *)(v103 + 24))++)) = *p_rcSrc1;
            if ( v106 >= 0 )
            {
              v98 = v207;
LABEL_155:
              if ( *(_BYTE *)(v98 + 1204) )
              {
                v141 = v6;
                while ( (*((_BYTE *)v141 + 94) & 8) == 0 )
                {
                  v141 = (const struct CVisual *)*((_QWORD *)v141 + 10);
                  if ( !v141 )
                  {
                    *(_BYTE *)(v98 + 1204) = 0;
                    goto LABEL_156;
                  }
                }
              }
              goto LABEL_156;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v106, 0xC0u);
            v199 = (int)v205;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v199, 0x594u);
          v106 = (int)v205;
LABEL_156:
          if ( v106 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v106, 0x98Du);
            v106 = (int)v205;
            goto LABEL_159;
          }
          v84 = 0;
LABEL_158:
          if ( ++v90 >= v89 )
            goto LABEL_159;
          v88 = v209;
        }
      }
    }
    else
    {
      CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)&v212, v28, &v233);
      v225 = v233;
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe((__int64)&v225, (__int64)&v224);
      if ( v225.m128_f32[2] > v225.m128_f32[0] && v225.m128_f32[3] > v225.m128_f32[1] )
      {
        v131 = v225.m128_f32[0] + 6291456.25;
        v228.left = (int)(LODWORD(v131) << 10) >> 11;
        v132 = v225.m128_f32[1] + 6291456.25;
        v228.top = (int)(LODWORD(v132) << 10) >> 11;
        v133 = v225.m128_f32[2] + 6291456.25;
        v228.right = (int)(LODWORD(v133) << 10) >> 11;
        *(float *)&v206 = v225.m128_f32[3] + 6291456.25;
        v102 = *(_DWORD *)(v64 + 216) == 0;
        v228.bottom = (int)((_DWORD)v206 << 10) >> 11;
        if ( !v102 )
        {
          v200 = v64;
          do
          {
            v201 = 248LL * v84;
            v202 = *(_QWORD *)(v200 + 192);
            if ( *(const struct CVisual **)(v201 + v202 + 8) != v6
              && *(_BYTE *)(v201 + v202 + 177)
              && !*(_BYTE *)(v201 + v202 + 181)
              && IntersectRect(&v238, &v228, (const RECT *)(v201 + v202 + 76)) )
            {
              v203 = (COverlayContext::OverlayPlaneInfo *)(v201 + *(_QWORD *)(v200 + 192));
              if ( *((_BYTE *)v203 + 179) )
              {
                *((_BYTE *)v203 + 180) = 0;
              }
              else
              {
                COverlayContext::OverlayPlaneInfo::Reset(v203);
                DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(v200 + 192, v84--);
              }
            }
            ++v84;
          }
          while ( v84 < *(_DWORD *)(v200 + 216) );
          v64 = v207;
          v28 = (__int64)v6 + 140;
        }
        v134 = DynArray<tagRECT,0>::AddMultipleAndSet(v64 + 1136, &v228);
        v135 = v134;
        if ( v134 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v134, 0x594u);
        }
        else if ( *(_BYTE *)(v64 + 1204) )
        {
          v154 = v6;
          while ( (*((_BYTE *)v154 + 94) & 8) == 0 )
          {
            v154 = (const struct CVisual *)*((_QWORD *)v154 + 10);
            if ( !v154 )
            {
              *(_BYTE *)(v64 + 1204) = 0;
              break;
            }
          }
        }
        if ( v135 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v135, 0x9A3u);
          v106 = v135;
LABEL_159:
          if ( v106 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v106, 0x930u);
            break;
          }
        }
      }
    }
LABEL_160:
    v62 = *((_QWORD *)this + 148);
    v63 = (unsigned int)(v208 + 1);
    LODWORD(v208) = v63;
  }
LABEL_57:
  *((_DWORD *)this + 258) += 2;
  return (unsigned int)v9;
}
