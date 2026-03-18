/*
 * XREFs of ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009FBE0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000B200 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000C860 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180010B50 (-IsReadyToDraw@CEffectBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18001344C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180037F70 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800380B0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180038E60 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800393B0 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800393D0 (-IsReadyToDraw@CMaskBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180039790 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x18004CA50 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x180051C80 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180052120 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Add@CArrayBasedCoverageSet@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18006FB10 (-Add@CArrayBasedCoverageSet@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180071A0C (-NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180073C54 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800846C0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180087A80 (-GetContentBounds@CVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18008B970 (-AddOcclusionInformation@CColorBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008BF10 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008C840 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800931E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180098820 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099040 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180099FB0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18009A2A0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18009AB60 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z @ 0x18009AE70 (--4CMILMatrix@@QEAAAEAV0@AEBVCMILMatrix_IdentityType@@@Z.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18009B288 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800AEE10 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AF020 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800BFA40 (-IsReadyToDraw@CNineGridBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?AddOcclusionInformation@CNineGridBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800BFDA0 (-AddOcclusionInformation@CNineGridBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0260 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetZ@CWindowOcclusionInfo@@MEAAXH@Z @ 0x1800C21C0 (-SetZ@CWindowOcclusionInfo@@MEAAXH@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIXZ @ 0x1800D2BFC (-GetLightsCount@CVisual@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x180151E44 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180151FC8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801547C4 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndS_ea_1801547C4.c)
 *     Template_dffffq @ 0x18015482C (Template_dffffq.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18015610C (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@I@Z @ 0x180160818 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@I@Z.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1801861DC (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801863D0 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(
        COcclusionContext *this,
        const struct CVisualTree *a2,
        bool *a3,
        int a4)
{
  int v4; // r15d
  bool v6; // zf
  __int64 v8; // rsi
  bool v9; // r14
  __int64 v10; // rdi
  _BYTE *v11; // rdi
  __int64 v12; // rdx
  void (__fastcall *v13)(CWindowOcclusionInfo *__hidden, int); // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // xmm8_8
  unsigned int v18; // eax
  __int64 v19; // rax
  float v20; // xmm7_4
  __int64 v21; // rax
  float v22; // xmm0_4
  char (__fastcall *v23)(CWindowNode *); // rax
  CPrimitiveGroup *v24; // rcx
  __int64 (__fastcall *v26)(CVisual *, struct CContentBounder *, struct COcclusionContext *, struct COcclusionInfo *); // rax
  CRenderData *v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  struct CComposition **v33; // rdx
  __int64 (__fastcall *v34)(__int64, struct CComposition **, __int128 *); // rax
  int ContentBounds; // eax
  float *v36; // rcx
  unsigned __int8 (*v37)(void); // rax
  __int64 v38; // rax
  bool (__fastcall *v39)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *); // r9
  char v40; // al
  __int64 v41; // rax
  unsigned int v42; // ecx
  __int64 v43; // r13
  int v44; // eax
  float *v45; // r14
  __int128 v46; // xmm0
  __int128 v47; // xmm0
  float v48; // xmm10_4
  float v49; // xmm8_4
  float v50; // xmm7_4
  float v51; // xmm6_4
  char v52; // al
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  char v59; // cl
  __int64 v60; // rcx
  bool (__fastcall *v61)(__int64, int); // rax
  char v62; // al
  __int64 v63; // rax
  unsigned int v64; // r13d
  unsigned int v65; // r12d
  float v66; // xmm0_4
  float v67; // xmm3_4
  float v68; // xmm2_4
  float v69; // xmm1_4
  __int64 v70; // rdx
  unsigned int v71; // r14d
  float v72; // xmm0_4
  float v73; // xmm0_4
  float v74; // xmm0_4
  __int64 v75; // r14
  int v76; // r8d
  __int64 v77; // rax
  unsigned int v78; // ecx
  __int64 v79; // rax
  _BOOL8 (__fastcall *v80)(__int64, int); // rax
  char v81; // al
  __int64 v82; // rdx
  const struct D2D_SIZE_F *v83; // r8
  __int64 (__fastcall *v84)(CRenderData *, struct IDrawingContext *, const struct D2D_SIZE_F *); // rax
  int v85; // eax
  bool (__fastcall *v86)(CRenderData *); // rax
  int v87; // eax
  int v88; // eax
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  char IsEmptyDrawing; // al
  int v94; // r8d
  __int64 v95; // rax
  __int64 v96; // rdx
  float v97; // xmm9_4
  float v98; // xmm1_4
  float v99; // xmm0_4
  float v100; // xmm7_4
  float v101; // xmm1_4
  float v102; // xmm0_4
  float v103; // xmm6_4
  float v104; // xmm1_4
  float v105; // xmm0_4
  float v106; // xmm2_4
  __int64 v107; // rcx
  __int64 (__fastcall *v108)(__int64, __int128 *, int); // rax
  int v109; // eax
  char HasNonEmptyContent; // al
  struct CContentBounder *v111; // rdx
  int v112; // eax
  CMaskBrush *v113; // r13
  __int64 (__fastcall *v114)(CMaskBrush *, char); // rax
  __int64 v115; // rax
  int v116; // eax
  int v117; // eax
  __int64 v118; // rax
  bool (__fastcall *v119)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *); // r9
  char IsReadyToDraw; // al
  int v121; // edx
  int *v122; // rcx
  __int64 v123; // r12
  bool (__fastcall *v124)(__int64, int); // rax
  bool v125; // al
  int v126; // edx
  int *v127; // rcx
  __int64 v128; // rcx
  int v129; // edx
  int *v130; // rcx
  __int64 *v131; // rcx
  __int64 v132; // rax
  float v133; // xmm3_4
  float v134; // xmm2_4
  float v135; // xmm1_4
  float v136; // xmm0_4
  int v137; // eax
  int v138; // eax
  __int64 v139; // rcx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  unsigned int i; // edi
  CVisual *v142; // rcx
  struct CCompositionLight *LightAtNoRef; // rax
  int v144; // eax
  float v146; // xmm2_4
  float v147; // xmm1_4
  _OWORD *v148; // rax
  __int128 v149; // xmm1
  __int64 v150; // rcx
  __int64 *v151; // rcx
  __int64 v152; // r13
  __int64 v153; // rax
  BOOL v154; // eax
  COverlayContext::OverlayPlaneInfo *v155; // rcx
  int v156; // r14d
  bool v157[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 *v158; // [rsp+50h] [rbp-B8h]
  __int64 v159; // [rsp+58h] [rbp-B0h]
  __int64 v160; // [rsp+60h] [rbp-A8h]
  __int64 v161; // [rsp+68h] [rbp-A0h]
  _QWORD v162[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v163; // [rsp+88h] [rbp-80h]
  __int128 v164; // [rsp+98h] [rbp-70h]
  __int128 v165; // [rsp+A8h] [rbp-60h]
  int v166; // [rsp+B8h] [rbp-50h]
  RECT *p_rcSrc1; // [rsp+C8h] [rbp-40h] BYREF
  char v168[64]; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v169; // [rsp+110h] [rbp+8h] BYREF
  __int128 v170; // [rsp+120h] [rbp+18h] BYREF
  RECT rcSrc1; // [rsp+130h] [rbp+28h] BYREF
  __int128 v172; // [rsp+140h] [rbp+38h] BYREF
  __int128 v173; // [rsp+150h] [rbp+48h] BYREF
  struct tagRECT rcDst; // [rsp+168h] [rbp+60h] BYREF

  v4 = 0;
  v6 = *((_DWORD *)this + 237) == 0;
  *a3 = 1;
  v8 = *((_QWORD *)this + 6);
  v9 = v6;
  if ( *((_BYTE *)a2 + 32) )
  {
    v10 = v8 + 264;
  }
  else
  {
    v128 = *(_QWORD *)(v8 + 208);
    if ( (*(_DWORD *)(v128 + 4) & 0x80000) == 0 )
      goto LABEL_284;
    v129 = *(_DWORD *)(v128 + 12);
    v130 = (int *)(v128 + 12);
    if ( (v129 & 0x7F000000) != 0xD000000 )
    {
      do
      {
        v130 = (int *)((char *)v130 + (v129 & 0xFFFFFF) + 4);
        v129 = *v130;
      }
      while ( (*v130 & 0x7F000000) != 0xD000000 );
    }
    *(_QWORD *)&v173 = *(_QWORD *)(v130 + 1);
    if ( !(_QWORD)v173 )
      goto LABEL_284;
    v131 = *(__int64 **)v173;
    if ( *(_QWORD *)v173 == (_QWORD)v173 )
      goto LABEL_284;
    while ( 1 )
    {
      v10 = (__int64)(v131 - 28);
      if ( (const struct CVisualTree *)v131[4] == a2 )
        break;
      v131 = (__int64 *)*v131;
      if ( v131 == (__int64 *)v173 )
        goto LABEL_284;
    }
  }
  if ( !v10 )
    goto LABEL_284;
  if ( !*(_QWORD *)(v10 + 32) )
    *(_QWORD *)(v10 + 32) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 24) + 280LL))(*(_QWORD *)(v10 + 24));
  v11 = *(_BYTE **)(v10 + 32);
  if ( !v11 )
  {
LABEL_284:
    v17 = _xmm;
    goto LABEL_50;
  }
  v12 = *((unsigned int *)this + 236);
  v13 = *(void (__fastcall **)(CWindowOcclusionInfo *__hidden, int))(*(_QWORD *)v11 + 16LL);
  if ( v13 == CVisualOcclusionInfo::SetZ )
  {
    *((_DWORD *)v11 + 4) = v12;
  }
  else if ( v13 == CWindowOcclusionInfo::SetZ )
  {
    CWindowOcclusionInfo::SetZ((CWindowOcclusionInfo *)v11, v12);
  }
  else
  {
    v13((CWindowOcclusionInfo *)v11, v12);
  }
  if ( (v11[8] & 1) == 0 )
    goto LABEL_16;
  v14 = *((_DWORD *)this + 246);
  if ( v14 && *(_DWORD *)(*((_QWORD *)this + 125) + 4LL * (unsigned int)(v14 - 1)) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v8 + 208) + 4LL) & 0x8000) != 0 )
    {
      WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v8);
      if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 276) )
      {
        COcclusionContext::GetDestinationRect(this, &v172, (char *)WindowBackgroundTreatmentInternal + 72);
        (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD))(**((_QWORD **)this + 38) + 32LL))(
          *((_QWORD *)this + 38),
          &v172,
          *((unsigned int *)this + 236));
        CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
          (COcclusionContext *)((char *)this + 872),
          (float *)&v172);
      }
    }
    v15 = *((_DWORD *)this + 254);
    if ( v15 )
    {
      if ( *(_BYTE *)((unsigned int)(v15 - 1) + *((_QWORD *)this + 129)) )
      {
        v33 = (struct CComposition **)*((_QWORD *)this + 131);
        v34 = *(__int64 (__fastcall **)(__int64, struct CComposition **, __int128 *))(*(_QWORD *)v8 + 152LL);
        if ( (char *)v34 == (char *)CVisual::GetContentBounds )
        {
          ContentBounds = CVisual::GetContentBounds(v8, v33, (__int64)&v172);
        }
        else if ( (char *)v34 == (char *)CSpriteVisual::GetContentBounds )
        {
          ContentBounds = CSpriteVisual::GetContentBounds(v8, (__int64)v33, (__int64)&v172);
        }
        else
        {
          ContentBounds = v34(v8, v33, &v172);
        }
        v4 = ContentBounds;
        if ( ContentBounds >= 0 )
        {
          rcSrc1 = *(RECT *)COcclusionContext::GetDestinationRect((__int64)this, (__int64)&rcSrc1, (__int64)&v172);
          CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
            (COcclusionContext *)((char *)this + 872),
            (float *)&rcSrc1.left);
          goto LABEL_14;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ContentBounds, 0x23Eu);
        goto LABEL_284;
      }
    }
  }
LABEL_14:
  v16 = *((_DWORD *)this + 246);
  if ( v16 )
    *((_DWORD *)this + 246) = v16 - 1;
LABEL_16:
  v17 = _xmm;
  if ( v9 )
  {
    *((_QWORD *)this + 90) = v8;
    v26 = *(__int64 (__fastcall **)(CVisual *, struct CContentBounder *, struct COcclusionContext *, struct COcclusionInfo *))(*(_QWORD *)v8 + 160LL);
    if ( v26 == CVisual::CollectOcclusion )
    {
      v27 = *(CRenderData **)(v8 + 240);
      v4 = 0;
      if ( v27 )
      {
        v83 = (const struct D2D_SIZE_F *)(v8 + 128);
        v84 = *(__int64 (__fastcall **)(CRenderData *, struct IDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v27 + 136LL);
        if ( v84 == CRenderData::AddOcclusionInformation )
        {
          v85 = CRenderData::Draw(v27, this);
        }
        else if ( v84 == CColorBrush::AddOcclusionInformation )
        {
          v85 = CColorBrush::AddOcclusionInformation(v27, this, v83);
        }
        else if ( v84 == CPrimitiveGroup::AddOcclusionInformation )
        {
          v85 = CPrimitiveGroup::AddOcclusionInformation(v27, this, v83);
        }
        else if ( v84 == CSurfaceBrush::AddOcclusionInformation )
        {
          v85 = CSurfaceBrush::AddOcclusionInformation(v27, this, v83);
        }
        else if ( v84 == CNineGridBrush::AddOcclusionInformation )
        {
          v85 = CNineGridBrush::AddOcclusionInformation(v27, this, v83);
        }
        else if ( v84 == CCompositionSurfaceBitmap::AddOcclusionInformation )
        {
          v85 = CCompositionSurfaceBitmap::AddOcclusionInformation(v27, this, v83);
        }
        else
        {
          v85 = v84(v27, this, v83);
        }
        v4 = v85;
        if ( v85 >= 0 )
          goto LABEL_43;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0xC8Eu);
      }
    }
    else
    {
      v111 = (struct CContentBounder *)*((_QWORD *)this + 131);
      if ( v26 == CWindowNode::CollectOcclusion )
        v112 = CWindowNode::CollectOcclusion((CWindowNode *)v8, v111, this, (struct COcclusionInfo *)v11);
      else
        v112 = v26((CVisual *)v8, v111, this, (struct COcclusionInfo *)v11);
      v4 = v112;
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2D1u);
      goto LABEL_45;
    }
LABEL_43:
    v28 = *((_QWORD *)this + 39);
    v29 = *((_DWORD *)this + 84);
    v161 = v28;
    if ( v29 )
    {
      while ( 1 )
      {
        v94 = *((_DWORD *)this + 236);
        v95 = (unsigned int)(v29 - 1);
        LODWORD(v159) = v95;
        LODWORD(v158) = v94;
        v96 = 5 * v95;
        v160 = 5 * v95;
        *((_DWORD *)this + 236) = v94 + 2;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          Template_dffffq(
            v28,
            v96,
            v94,
            a4,
            *(_DWORD *)(v28 + 4 * v96 + 4),
            *(_DWORD *)(v28 + 4 * v96 + 8),
            *(_DWORD *)(v28 + 4 * v96 + 12),
            *(_DWORD *)(v28 + 4 * v96 + 16));
          v28 = v161;
          v96 = v160;
        }
        if ( !*(_DWORD *)(v28 + 4 * v96 + 16) )
        {
          v97 = *(float *)(v28 + 4 * v96);
          v98 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v97) & _xmm);
          if ( v98 < 8388608.0 )
          {
            v99 = ceilf_0(*(float *)(v28 + 4 * v96));
            v28 = v161;
            v96 = v160;
            v97 = (float)(int)v99;
          }
          v100 = *(float *)(v28 + 4 * v96 + 4);
          *(float *)&rcSrc1.left = v97;
          v101 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v100) & _xmm);
          if ( v101 < 8388608.0 )
          {
            v102 = ceilf_0(v100);
            v28 = v161;
            v96 = v160;
            v100 = (float)(int)v102;
          }
          v103 = *(float *)(v28 + 4 * v96 + 8);
          *(float *)&rcSrc1.top = v100;
          v104 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v103) & _xmm);
          if ( v104 < 8388608.0 )
          {
            v105 = floorf_0(v103);
            v28 = v161;
            v96 = v160;
            v103 = (float)(int)v105;
          }
          v106 = *(float *)(v28 + 4 * v96 + 12);
          *(float *)&rcSrc1.right = v103;
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v106) & _xmm) < 8388608.0 )
            v106 = (float)(int)floorf_0(v106);
          *(float *)&rcSrc1.bottom = v106;
          if ( v103 > v97 && v106 > v100 )
          {
            v107 = *((_QWORD *)this + 38);
            v108 = *(__int64 (__fastcall **)(__int64, __int128 *, int))(*(_QWORD *)v107 + 24LL);
            v109 = v108 == CArrayBasedCoverageSet::Add
                 ? CArrayBasedCoverageSet::Add(v107, (__int128 *)&rcSrc1.left, (int)v158)
                 : v108(v107, (__int128 *)&rcSrc1.left, (int)v158);
            if ( v109 < 0 )
              break;
          }
        }
        v29 = v159;
        if ( !(_DWORD)v159 )
          goto LABEL_44;
        v28 = v161;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v109, 0x339u);
    }
LABEL_44:
    *((_DWORD *)this + 84) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 312, 0x14u);
    v30 = *(_QWORD *)(v8 + 240);
    if ( v30 )
    {
      v80 = *(_BOOL8 (__fastcall **)(__int64, int))(*(_QWORD *)v30 + 48LL);
      if ( v80 != CRenderData::IsOfType )
      {
        if ( (char *)v80 == (char *)CMaskBrush::IsOfType )
        {
          v81 = CMaskBrush::IsOfType(v30, 81);
        }
        else if ( (char *)v80 == (char *)CColorBrush::IsOfType )
        {
          v81 = CColorBrush::IsOfType(v30, 81);
        }
        else if ( (char *)v80 == (char *)CAtlasedRectsGroup::IsOfType )
        {
          v81 = CAtlasedRectsGroup::IsOfType(v30, 81LL);
        }
        else if ( (char *)v80 == (char *)CPrimitiveGroupLayerClip::IsOfType )
        {
          v81 = CPrimitiveGroupLayerClip::IsOfType(v30, 81LL);
        }
        else
        {
          v81 = v80 == CSurfaceBrush::IsOfType ? CSurfaceBrush::IsOfType(v30, 81) : v80(v30, 81);
        }
        if ( v81 )
        {
          v113 = *(CMaskBrush **)(v8 + 240);
          LOBYTE(v82) = 1;
          v114 = *(__int64 (__fastcall **)(CMaskBrush *, char))(*(_QWORD *)v113 + 256LL);
          if ( v114 == CMaskBrush::EnsureBrushGraph )
            CMaskBrush::EnsureBrushGraph(v113, 1);
          else
            v114(v113, v82);
          v115 = *((_QWORD *)v113 + 8);
          if ( v115 )
          {
            if ( *(_BYTE *)(v115 + 352) || *(_BYTE *)(v115 + 354) )
            {
              v116 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v8 + 152LL))(
                       v8,
                       *((_QWORD *)this + 131),
                       &v172);
              v4 = v116;
              if ( v116 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v116, 0x2EDu);
              }
              else
              {
                v170 = *(_OWORD *)COcclusionContext::GetDestinationRect((__int64)this, (__int64)&v169, (__int64)&v172);
                v117 = CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
                         (COcclusionContext *)((char *)this + 872),
                         (float *)&v170);
                v4 = v117;
                if ( v117 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v117, 0x2F1u);
              }
            }
          }
        }
      }
    }
LABEL_45:
    *((_QWORD *)this + 90) = 0LL;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x24Du);
      goto LABEL_50;
    }
  }
  if ( (v11[8] & 4) != 0 )
  {
    v32 = *((_DWORD *)this + 2);
    if ( v32 )
      *((_DWORD *)this + 2) = v32 - 1;
  }
  if ( (v11[8] & 2) != 0 )
  {
    v87 = *((_DWORD *)this + 238);
    if ( v87 )
      *((_DWORD *)this + 238) = v87 - 1;
    v88 = *((_DWORD *)this + 30);
    if ( v88 )
      *((_DWORD *)this + 30) = v88 - 1;
  }
  if ( (v11[8] & 8) != 0 )
  {
    v138 = *((_DWORD *)this + 254);
    if ( v138 )
      *((_DWORD *)this + 254) = v138 - 1;
  }
  if ( !v9 )
    goto LABEL_21;
  v31 = *(_QWORD *)(v8 + 256);
  if ( (v31 & 2) != 0 )
    v31 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v31) = v31 & 1;
  if ( (_DWORD)v31 )
  {
    for ( i = 0; i < CVisual::GetLightsCount((CVisual *)v8); ++i )
    {
      LightAtNoRef = CVisual::GetLightAtNoRef(v142, i);
      if ( (*(unsigned __int8 (__fastcall **)(struct CCompositionLight *, const struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef + 160LL))(
             LightAtNoRef,
             a2,
             v8) )
      {
        v144 = CLightStack::Pop((COcclusionContext *)((char *)this + 152));
        v4 = v144;
        if ( v144 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v144, 0x269u);
          break;
        }
      }
    }
  }
LABEL_50:
  if ( !v9 )
LABEL_21:
    --*((_DWORD *)this + 237);
  if ( *((_BYTE *)this + 729)
    && !*((_DWORD *)this + 237)
    && (*(_BYTE *)(v8 + 90) & 0x20) == 0
    && (*(_BYTE *)(v8 + 88) & 0x20) == 0 )
  {
    v18 = *(float *)(v8 + 156) <= *(float *)(v8 + 152);
    if ( *(float *)(v8 + 144) <= *(float *)(v8 + 136) )
      ++v18;
    if ( *(float *)(v8 + 148) <= *(float *)(v8 + 140) )
      ++v18;
    if ( v18 <= 1 )
    {
      v19 = *(_QWORD *)(v8 + 208);
      v20 = FLOAT_1_0;
      if ( (*(_DWORD *)(v19 + 4) & 0x8000000) != 0 )
      {
        v121 = *(_DWORD *)(v19 + 12);
        v122 = (int *)(v19 + 12);
        if ( (v121 & 0x7F000000) != 0x5000000 )
        {
          do
          {
            v122 = (int *)((char *)v122 + (v121 & 0xFFFFFF) + 4);
            v121 = *v122;
          }
          while ( (*v122 & 0x7F000000) != 0x5000000 );
        }
        *(_QWORD *)&v173 = *(_QWORD *)(v122 + 1);
        v123 = v173;
        v124 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v173 + 48LL);
        if ( v124 == CEffectGroup::IsOfType )
          v125 = CEffectGroup::IsOfType(v173, 7);
        else
          v125 = v124(v173, 7);
        if ( v125 )
          v20 = *(double *)(v123 + 72);
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v20, 0.0))) & v17) >= 0.0000011920929 )
      {
        v21 = *(_QWORD *)(v8 + 208);
        if ( (*(_DWORD *)(v21 + 4) & 0x100000) != 0 )
        {
          v126 = *(_DWORD *)(v21 + 12);
          v127 = (int *)(v21 + 12);
          if ( (v126 & 0x7F000000) != 0xC000000 )
          {
            do
            {
              v127 = (int *)((char *)v127 + (v126 & 0xFFFFFF) + 4);
              v126 = *v127;
            }
            while ( (*v127 & 0x7F000000) != 0xC000000 );
          }
          LODWORD(v159) = v127[1];
          v22 = *(float *)&v159;
        }
        else
        {
          v22 = FLOAT_1_0;
        }
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v22, 0.0))) & v17) >= 0.0000011920929 )
        {
          v23 = *(char (__fastcall **)(CWindowNode *))(*(_QWORD *)v8 + 184LL);
          if ( (char *)v23 == (char *)CVisual::HasNonEmptyContent )
          {
            v24 = *(CPrimitiveGroup **)(v8 + 240);
            if ( !v24 )
              goto LABEL_38;
            v86 = *(bool (__fastcall **)(CRenderData *))(*(_QWORD *)v24 + 176LL);
            if ( v86 == CRenderData::IsEmptyDrawing )
            {
              IsEmptyDrawing = *((_BYTE *)v24 + 138);
              goto LABEL_149;
            }
            if ( (char *)v86 != (char *)CSpriteVisualContent::IsEmptyDrawing )
            {
              if ( v86 == CColorBrush::IsEmptyDrawing )
              {
                if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)v24 + 23)) & v17) < 0.0000011920929 )
                  goto LABEL_38;
LABEL_66:
                v41 = *((_QWORD *)this + 136);
                v42 = 0;
                LODWORD(v159) = 0;
                if ( !*(_DWORD *)(v41 + 24) )
                  goto LABEL_39;
                while ( 1 )
                {
                  v43 = *(_QWORD *)(**((_QWORD **)this + 136) + 8LL * v42);
                  v160 = v43;
                  if ( !*(_BYTE *)(v43 + 1088) )
                    goto LABEL_118;
                  v44 = *((_DWORD *)this + 30);
                  LODWORD(v158) = 0;
                  v45 = (float *)(v43 + 528);
                  if ( v44 )
                    v46 = *(_OWORD *)(*((_QWORD *)this + 17) + 16LL * (unsigned int)(v44 - 1));
                  else
                    v46 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  v170 = v46;
                  CMILMatrix::Transform2DBoundsHelper<0>(v43 + 528, (__int64)&v170, (float *)&v172);
                  v47 = *(_OWORD *)(v43 + 40);
                  v48 = *(float *)&v172;
                  v49 = *((float *)&v172 + 1);
                  v50 = *((float *)&v172 + 2);
                  v51 = *((float *)&v172 + 3);
                  v170 = v172;
                  v173 = v47;
                  if ( *(float *)&v47 > *(float *)&v172 )
                  {
                    LODWORD(v170) = v47;
                    v48 = *(float *)&v47;
                  }
                  if ( *((float *)&v173 + 1) > *((float *)&v172 + 1) )
                  {
                    DWORD1(v170) = DWORD1(v173);
                    v49 = *((float *)&v173 + 1);
                  }
                  if ( *((float *)&v172 + 2) > *((float *)&v173 + 2) )
                  {
                    DWORD2(v170) = DWORD2(v173);
                    v50 = *((float *)&v173 + 2);
                  }
                  if ( *((float *)&v172 + 3) > *((float *)&v173 + 3) )
                  {
                    HIDWORD(v170) = HIDWORD(v173);
                    v51 = *((float *)&v173 + 3);
                  }
                  if ( v50 <= v48 || v51 <= v49 )
                  {
                    v51 = 0.0;
                    v50 = 0.0;
                    v49 = 0.0;
                    v170 = 0uLL;
                    v48 = 0.0;
                    v52 = 1;
                  }
                  else
                  {
                    v52 = 0;
                  }
                  if ( v52 )
                    goto LABEL_118;
                  v53 = *((_DWORD *)this + 2);
                  v166 = 0;
                  if ( v53 )
                  {
                    v54 = (unsigned int)(v53 - 1);
                    v55 = *((_QWORD *)this + 3);
                    v56 = *(_OWORD *)(68 * v54 + v55 + 16);
                    *(_OWORD *)&v162[1] = *(_OWORD *)(68 * v54 + v55);
                    v57 = *(_OWORD *)(68 * v54 + v55 + 32);
                    v163 = v56;
                    v58 = *(_OWORD *)(68 * v54 + v55 + 48);
                    LODWORD(v55) = *(_DWORD *)(68 * v54 + v55 + 64);
                    v164 = v57;
                    v165 = v58;
                    v166 = v55;
                  }
                  else
                  {
                    CMILMatrix::operator=((__int64)&v162[1]);
                  }
                  if ( CMILMatrix::IsIdentity<1>((__int64)&v162[1]) )
                    break;
                  CMILMatrix::Ensure3DFlags((CMILMatrix *)(v43 + 528));
                  v59 = *(_BYTE *)(v43 + 592);
                  if ( (v59 & 3) != 1 )
                  {
                    if ( (v59 & 0xC) == 4 )
                      goto LABEL_311;
                    if ( (v59 & 0xC0) == 0x40 )
                    {
                      v146 = *(float *)(v43 + 548);
                      v147 = *v45;
LABEL_310:
                      CMILMatrix::Scale((CMILMatrix *)&v162[1], v147, v146, *(float *)(v43 + 568));
LABEL_311:
                      CMILMatrix::Translate(
                        (CMILMatrix *)&v162[1],
                        *(float *)(v43 + 576),
                        *(float *)(v43 + 580),
                        *(float *)(v43 + 584));
                      goto LABEL_86;
                    }
                    if ( (*(_BYTE *)(v43 + 593) & 0xC) == 4 )
                    {
                      CMILMatrix::Rotate90((CMILMatrix *)&v162[1]);
                      LODWORD(v147) = *(_DWORD *)(v43 + 544) ^ _xmm;
                      v146 = *(float *)(v43 + 532);
                      goto LABEL_310;
                    }
                    v148 = (_OWORD *)Windows::Foundation::Numerics::operator*(v168, &v162[1], v43 + 528);
                    v166 = 0;
                    v149 = v148[1];
                    *(_OWORD *)&v162[1] = *v148;
                    v91 = v148[2];
                    v163 = v149;
                    v92 = v148[3];
                    goto LABEL_147;
                  }
LABEL_86:
                  if ( *(float *)(v8 + 156) == 0.0 && *(float *)(v8 + 152) == 0.0 )
                  {
                    v60 = *(_QWORD *)(v8 + 240);
                    if ( v60
                      && (v61 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v60 + 48LL), v61 != CMaskBrush::IsOfType)
                      && ((char *)v61 == (char *)CRenderData::IsOfType
                        ? (v62 = CRenderData::IsOfType(v60, 120))
                        : v61 == CColorBrush::IsOfType
                        ? (v62 = CColorBrush::IsOfType(v60, 120))
                        : (char *)v61 == (char *)CAtlasedRectsGroup::IsOfType
                        ? (v62 = CAtlasedRectsGroup::IsOfType(v60, 120LL))
                        : (char *)v61 == (char *)CPrimitiveGroupLayerClip::IsOfType
                        ? (v62 = CPrimitiveGroupLayerClip::IsOfType(v60, 120LL))
                        : (char *)v61 != (char *)CSurfaceBrush::IsOfType
                        ? (v62 = v61(v60, 120))
                        : (v62 = CSurfaceBrush::IsOfType(v60, 120)),
                          v62) )
                    {
                      v150 = *(_QWORD *)(*(_QWORD *)(v8 + 240) + 88LL);
                      v63 = *(_QWORD *)v150;
                      v64 = *(_DWORD *)(v150 + 24);
                    }
                    else
                    {
                      v63 = v8 + 136;
                      v64 = 1;
                    }
                    v65 = 0;
                    LODWORD(v161) = v64;
                    *(_QWORD *)&v173 = v63;
                    if ( v64 )
                    {
                      while ( 1 )
                      {
                        CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v162[1], v63 + 16LL * v65, (float *)&v169);
                        v66 = *(float *)&v169;
                        if ( v48 > *(float *)&v169 )
                        {
                          v66 = v48;
                          *(float *)&v169 = v48;
                        }
                        v67 = *((float *)&v169 + 1);
                        if ( v49 > *((float *)&v169 + 1) )
                        {
                          v67 = v49;
                          *((float *)&v169 + 1) = v49;
                        }
                        v68 = *((float *)&v169 + 2);
                        if ( *((float *)&v169 + 2) > v50 )
                        {
                          *((float *)&v169 + 2) = v50;
                          v68 = v50;
                        }
                        v69 = *((float *)&v169 + 3);
                        if ( *((float *)&v169 + 3) > v51 )
                        {
                          *((float *)&v169 + 3) = v51;
                          v69 = v51;
                        }
                        if ( v68 <= v66 || v69 <= v67 )
                        {
                          v76 = (int)v158;
                          v169 = 0uLL;
                          goto LABEL_116;
                        }
                        v70 = v160;
                        v71 = 0;
                        v72 = v66 + 6291456.25;
                        rcSrc1.left = (int)(LODWORD(v72) << 10) >> 11;
                        v73 = v67 + 6291456.25;
                        rcSrc1.top = (int)(LODWORD(v73) << 10) >> 11;
                        v74 = v68 + 6291456.25;
                        rcSrc1.right = (int)(LODWORD(v74) << 10) >> 11;
                        *(float *)&v158 = v69 + 6291456.25;
                        rcSrc1.bottom = (int)((_DWORD)v158 << 10) >> 11;
                        if ( *(_DWORD *)(v160 + 200) )
                        {
                          v151 = (__int64 *)(v160 + 176);
                          v158 = (__int64 *)(v160 + 176);
                          do
                          {
                            v152 = 240LL * v71;
                            v153 = *v151;
                            if ( *(_QWORD *)(*v151 + v152 + 8) != v8
                              && *(_BYTE *)(v153 + v152 + 169)
                              && !*(_BYTE *)(v153 + v152 + 173) )
                            {
                              v154 = IntersectRect(&rcDst, &rcSrc1, (const RECT *)(v152 + v153 + 76));
                              v70 = v160;
                              if ( v154 )
                              {
                                v155 = (COverlayContext::OverlayPlaneInfo *)(v152 + *(_QWORD *)(v160 + 176));
                                if ( *((_BYTE *)v155 + 171) )
                                {
                                  *((_BYTE *)v155 + 172) = 0;
                                }
                                else
                                {
                                  COverlayContext::OverlayPlaneInfo::Reset(v155);
                                  DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(v158, v71);
                                  v70 = v160;
                                  --v71;
                                }
                              }
                              v151 = v158;
                            }
                            ++v71;
                          }
                          while ( v71 < *(_DWORD *)(v70 + 200) );
                          v64 = v161;
                        }
                        v75 = v70 + 1048;
                        v76 = 0;
                        v77 = *(unsigned int *)(v70 + 1072);
                        v78 = v77 + 1;
                        if ( (int)v77 + 1 < (unsigned int)v77 )
                          break;
                        LODWORD(v158) = 0;
                        if ( v78 > *(_DWORD *)(v70 + 1068) )
                        {
                          p_rcSrc1 = &rcSrc1;
                          LODWORD(v158) = DynArrayImpl<0>::Grow(v70 + 1048, 0x10u, 1, 0, (unsigned __int64 *)&p_rcSrc1);
                          v76 = (int)v158;
                          if ( (int)v158 >= 0 )
                            *(RECT *)(*(_QWORD *)v75 + (unsigned int)(16 * (*(_DWORD *)(v75 + 24))++)) = *p_rcSrc1;
                          if ( v76 < 0 )
                          {
                            MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0xC0u);
                            v156 = (int)v158;
                            goto LABEL_327;
                          }
                          v70 = v160;
                        }
                        else
                        {
                          *(RECT *)(*(_QWORD *)v75 + 16 * v77) = rcSrc1;
                          *(_DWORD *)(v70 + 1072) = v78;
                        }
                        if ( *(_BYTE *)(v70 + 1106) )
                        {
                          v132 = v8;
                          while ( *(_BYTE *)(v132 + 90) < 0x80u )
                          {
                            v132 = *(_QWORD *)(v132 + 80);
                            if ( !v132 )
                            {
                              *(_BYTE *)(v70 + 1106) = 0;
                              break;
                            }
                          }
                        }
LABEL_115:
                        if ( v76 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x985u);
                          goto LABEL_330;
                        }
LABEL_116:
                        if ( ++v65 >= v64 )
                          goto LABEL_117;
                        v63 = v173;
                      }
                      v156 = -2147024362;
                      LODWORD(v158) = -2147024362;
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
LABEL_327:
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v156, 0x517u);
                      v76 = (int)v158;
                      goto LABEL_115;
                    }
                  }
                  else
                  {
                    CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v162[1], v8 + 136, (float *)&v173);
                    v133 = *(float *)&v173;
                    v134 = *((float *)&v173 + 1);
                    v135 = *((float *)&v173 + 2);
                    v136 = *((float *)&v173 + 3);
                    v169 = v173;
                    if ( v48 > *(float *)&v173 )
                    {
                      v133 = v48;
                      *(float *)&v169 = v48;
                    }
                    if ( v49 > *((float *)&v173 + 1) )
                    {
                      v134 = v49;
                      *((float *)&v169 + 1) = v49;
                    }
                    if ( *((float *)&v173 + 2) > v50 )
                    {
                      *((float *)&v169 + 2) = v50;
                      v135 = v50;
                    }
                    if ( *((float *)&v173 + 3) > v51 )
                    {
                      *((float *)&v169 + 3) = v51;
                      v136 = v51;
                    }
                    if ( v135 <= v133 || v136 <= v134 )
                    {
                      v169 = 0uLL;
                    }
                    else
                    {
                      v137 = COverlayContext::NotifyVisitedContent(v43, v8, (__int64)&v169);
                      LODWORD(v158) = v137;
                      if ( v137 < 0 )
                      {
                        MilInstrumentationCheckHR(0x14u, 0LL, 0, v137, 0x99Bu);
LABEL_330:
                        v76 = (int)v158;
LABEL_117:
                        if ( v76 < 0 )
                        {
                          MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x928u);
                          goto LABEL_39;
                        }
                      }
                    }
                  }
LABEL_118:
                  v79 = *((_QWORD *)this + 136);
                  v42 = v159 + 1;
                  LODWORD(v159) = v42;
                  if ( v42 >= *(_DWORD *)(v79 + 24) )
                    goto LABEL_39;
                }
                v89 = *(_OWORD *)v45;
                v90 = *(_OWORD *)(v43 + 544);
                v166 = *(_DWORD *)(v43 + 592);
                *(_OWORD *)&v162[1] = v89;
                v91 = *(_OWORD *)(v43 + 560);
                v163 = v90;
                v92 = *(_OWORD *)(v43 + 576);
LABEL_147:
                v165 = v92;
                v164 = v91;
                goto LABEL_86;
              }
              if ( (char *)v86 == (char *)CPrimitiveGroup::IsEmptyDrawing )
              {
                IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing(v24);
              }
              else if ( v86 == CAtlasedRectsGroup::IsEmptyDrawing )
              {
                IsEmptyDrawing = CAtlasedRectsGroup::IsEmptyDrawing(v24);
              }
              else
              {
                IsEmptyDrawing = ((__int64 (*)(void))v86)();
              }
LABEL_149:
              if ( IsEmptyDrawing )
                goto LABEL_38;
              goto LABEL_66;
            }
            v118 = *(_QWORD *)v24;
            v157[0] = 0;
            v119 = *(bool (__fastcall **)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *))(v118 + 224);
            if ( (char *)v119 == (char *)CMaskBrush::IsReadyToDraw )
            {
              IsReadyToDraw = CMaskBrush::IsReadyToDraw(v24, 0LL, v157);
            }
            else if ( (char *)v119 == (char *)CSurfaceBrush::IsReadyToDraw )
            {
              IsReadyToDraw = CSurfaceBrush::IsReadyToDraw(v24, 0LL, v157);
            }
            else if ( v119 == CNineGridBrush::IsReadyToDraw )
            {
              IsReadyToDraw = CNineGridBrush::IsReadyToDraw(v24, 0LL, v157);
            }
            else if ( (char *)v119 == (char *)CEffectBrush::IsReadyToDraw )
            {
              IsReadyToDraw = CEffectBrush::IsReadyToDraw(v24, 0LL, v157);
            }
            else
            {
              IsReadyToDraw = v119(v24, 0LL, v157);
            }
            if ( IsReadyToDraw && !v157[0] )
              goto LABEL_66;
          }
          else if ( v23 == CSpriteVisual::HasNonEmptyContent )
          {
            v36 = *(float **)(v8 + 240);
            if ( v36 )
            {
              v37 = *(unsigned __int8 (**)(void))(*(_QWORD *)v36 + 176LL);
              if ( (char *)v37 == (char *)CSpriteVisualContent::IsEmptyDrawing )
              {
                v38 = *(_QWORD *)v36;
                v157[0] = 0;
                v39 = *(bool (__fastcall **)(CNineGridBrush *__hidden, struct CDrawingContext *, bool *))(v38 + 224);
                if ( (char *)v39 == (char *)CMaskBrush::IsReadyToDraw )
                {
                  v40 = CMaskBrush::IsReadyToDraw((CMaskBrush *)v36, 0LL, v157);
                }
                else if ( (char *)v39 == (char *)CSurfaceBrush::IsReadyToDraw )
                {
                  v40 = CSurfaceBrush::IsReadyToDraw((CSurfaceBrush *)v36, 0LL, v157);
                }
                else if ( v39 == CNineGridBrush::IsReadyToDraw )
                {
                  v40 = CNineGridBrush::IsReadyToDraw((CNineGridBrush *)v36, 0LL, v157);
                }
                else if ( (char *)v39 == (char *)CEffectBrush::IsReadyToDraw )
                {
                  v40 = CEffectBrush::IsReadyToDraw((CEffectBrush *)v36, 0LL, v157);
                }
                else
                {
                  v40 = v39((CNineGridBrush *)v36, 0LL, v157);
                }
                if ( v40 && !v157[0] )
                  goto LABEL_66;
              }
              else if ( (char *)v37 == (char *)CColorBrush::IsEmptyDrawing )
              {
                if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v36[23]) & v17) >= 0.0000011920929 )
                  goto LABEL_66;
              }
              else if ( !v37() )
              {
                goto LABEL_66;
              }
            }
            v139 = *(_QWORD *)(v8 + 496);
            if ( v139 )
            {
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v139 + 176LL))(v139) )
                goto LABEL_66;
            }
          }
          else
          {
            if ( v23 == CWindowNode::HasNonEmptyContent )
              HasNonEmptyContent = CWindowNode::HasNonEmptyContent((CWindowNode *)v8);
            else
              HasNonEmptyContent = v23((CWindowNode *)v8);
            if ( HasNonEmptyContent )
              goto LABEL_66;
          }
LABEL_38:
          if ( v9 )
            goto LABEL_39;
          goto LABEL_66;
        }
      }
    }
  }
LABEL_39:
  *((_DWORD *)this + 236) += 2;
  return (unsigned int)v4;
}
