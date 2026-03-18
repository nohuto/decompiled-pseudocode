/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009CE90 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180009A40 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180036DC4 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x18004CAE8 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004F67C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18006C768 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006CA58 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x180071118 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x180089ED0 (-Release@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18008B174 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18008BAC0 (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x18008BB8C (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@Z @ 0x18008BC70 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x18008DB8C (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18008DC58 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x18008DCF4 (-CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18008DD3C (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18008E6C0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18008F684 (--1EffectInput@@QEAA@XZ.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18008F6E8 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??0EffectInput@@QEAA@XZ @ 0x18008F7C8 (--0EffectInput@@QEAA@XZ.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180099460 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1800999C0 (-IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x1800A3B38 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z @ 0x1800C0600 (--4-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@PEAVIRenderTargetBitmap@@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800C48C4 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct CDrawListCache *a5)
{
  EffectInput *v5; // r15
  char v6; // r12
  struct CRenderTargetImageSource *v7; // rbx
  __int64 v10; // r14
  int v11; // edi
  unsigned __int64 v12; // xmm0_8
  __int64 v13; // rcx
  unsigned __int64 v14; // xmm0_8
  __int64 v15; // rcx
  unsigned int v16; // r14d
  unsigned int v17; // eax
  CVisual *v18; // rcx
  int v19; // eax
  float v20; // xmm0_4
  float v21; // xmm1_4
  unsigned int v22; // r15d
  __int64 v23; // r14
  CSurfaceBrush *v24; // rcx
  bool (__fastcall *v25)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *); // rax
  CVisual *v27; // rdi
  struct D2D_SIZE_F *v28; // r15
  unsigned int v29; // r12d
  __int64 v30; // r15
  __int64 v31; // rdi
  __int64 *v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(__int64, __int64); // rax
  char v37; // al
  __int64 v38; // rcx
  __int64 (__fastcall *v39)(__int64, __int64); // rax
  char v40; // al
  struct D2D_SIZE_F *v41; // r15
  FLOAT v42; // xmm1_4
  unsigned int v43; // r14d
  struct CRenderTargetImageSource *v44; // rdi
  unsigned int v45; // r12d
  unsigned int i; // r14d
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  bool v50; // zf
  __int64 v51; // rdx
  int InputBrushParameters; // eax
  struct CDrawListCache *v53; // r14
  int BackdropImageFromRenderTarget; // eax
  unsigned int v55; // ecx
  unsigned int j; // esi
  CSurfaceDrawListBrush *v57; // rcx
  CSurfaceDrawListBrush *(__fastcall *v58)(CSurfaceDrawListBrush *, char); // rax
  __int64 v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  EffectInput *v63; // rsi
  __int64 v64; // r14
  __int64 v66; // rdx
  struct IRenderTarget *v67; // rbx
  int v68; // eax
  __int64 v69; // rcx
  float v70; // xmm1_4
  float *DestToTexSpaceTransform; // rax
  __int64 (__fastcall *v72)(CRenderTargetImageSource *); // rax
  __int64 v73; // rdi
  __int64 v74; // r14
  struct EffectInput *v75; // r14
  __int64 v76; // r15
  unsigned int v77; // edx
  unsigned int v78; // r14d
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdx
  CBrushRenderingGraph *v82; // rcx
  __int128 *v83; // rdx
  __int64 v84; // r15
  char DoesBackdropInputContributeToSubgraph; // di
  FLOAT height; // xmm1_4
  const struct _GUID *v87; // r8
  unsigned int v88; // xmm0_4
  unsigned int v89; // xmm1_4
  __int128 v90; // xmm0
  __int64 v91; // rax
  __int64 v92; // rdx
  int v93; // r9d
  unsigned int v94; // [rsp+20h] [rbp-E0h]
  bool v95[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v96; // [rsp+44h] [rbp-BCh]
  __int64 v97; // [rsp+48h] [rbp-B8h]
  struct D2D_SIZE_F *v98; // [rsp+50h] [rbp-B0h]
  struct CRenderTargetImageSource *v99; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v100; // [rsp+60h] [rbp-A0h]
  struct D2D_RECT_F v101; // [rsp+68h] [rbp-98h] BYREF
  struct IRenderTarget *v102; // [rsp+78h] [rbp-88h] BYREF
  CVisual *v103; // [rsp+80h] [rbp-80h]
  __int128 v104; // [rsp+88h] [rbp-78h] BYREF
  __int64 v105; // [rsp+98h] [rbp-68h]
  __int128 v106; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v107; // [rsp+B0h] [rbp-50h]
  struct CDrawListCache *v108; // [rsp+B8h] [rbp-48h]
  _OWORD v109[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v110; // [rsp+100h] [rbp+0h]
  float v111[10]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v112[2]; // [rsp+138h] [rbp+38h] BYREF
  struct CDrawListBrush *v113[2]; // [rsp+158h] [rbp+58h] BYREF
  struct _GUID v114; // [rsp+168h] [rbp+68h] BYREF
  __int128 v115; // [rsp+180h] [rbp+80h] BYREF
  char v116; // [rsp+190h] [rbp+90h]
  __int64 v117; // [rsp+1B0h] [rbp+B0h]
  __int64 v118; // [rsp+1B8h] [rbp+B8h]
  __int128 v119; // [rsp+1F0h] [rbp+F0h] BYREF
  char v120; // [rsp+200h] [rbp+100h]
  __int64 v121; // [rsp+220h] [rbp+120h]
  __int64 v122; // [rsp+228h] [rbp+128h]
  __int64 v123; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v124[5]; // [rsp+268h] [rbp+168h] BYREF
  _BYTE v125[12]; // [rsp+294h] [rbp+194h]
  CSurfaceDrawListBrush *v126[5]; // [rsp+2A0h] [rbp+1A0h]
  char v127; // [rsp+2CDh] [rbp+1CDh]
  char v128; // [rsp+408h] [rbp+308h] BYREF

  v5 = (EffectInput *)v124;
  v6 = 0;
  v113[0] = a4;
  v7 = 0LL;
  v98 = a3;
  v108 = a5;
  v99 = 0LL;
  v10 = 4LL;
  v123 = 0LL;
  v11 = 0;
  do
  {
    EffectInput::EffectInput(v5);
    v5 = (EffectInput *)((char *)v5 + 104);
    --v10;
  }
  while ( v10 );
  v116 = 0;
  *(_QWORD *)&v114.Data1 = 0LL;
  v115 = 0LL;
  v12 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  *(_QWORD *)v114.Data4 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  if ( v12 )
  {
    *((_QWORD *)&v115 + 1) = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v115;
  if ( (_QWORD)v115 )
  {
    *(_QWORD *)&v115 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  memset_0(&v115, 0, 0x68uLL);
  v120 = 0;
  v121 = 0LL;
  v119 = 0LL;
  v14 = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
  v122 = 0LL;
  if ( v14 )
  {
    *((_QWORD *)&v119 + 1) = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v119;
  if ( (_QWORD)v119 )
  {
    *(_QWORD *)&v119 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  memset_0(&v119, 0, 0x68uLL);
  v110 = 0;
  if ( *((_DWORD *)a2 + 120) )
  {
    CWatermarkStack<CMILMatrix,8,2,8>::Top((__int64)a2 + 480, (__int64)v109);
  }
  else
  {
    v109[0] = _xmm;
    LOWORD(v110) = 32085;
    v109[1] = _xmm;
    v109[2] = _xmm;
    v109[3] = _xmm;
  }
  v16 = *((_DWORD *)this + 10);
  v17 = *((_DWORD *)this + 42) - 1;
  v107 = 0LL;
  v106 = 0LL;
  v105 = 0LL;
  v104 = 0LL;
  LODWORD(v97) = v16;
  v96 = v17;
  v103 = 0LL;
  if ( *((_BYTE *)a2 + 6520) )
  {
    if ( *((_BYTE *)a2 + 6521) )
      v18 = (CVisual *)*((_QWORD *)a2 + 395);
    else
      v18 = *(CVisual **)(*((_QWORD *)a2 + 816) + 24LL);
    v103 = v18;
  }
  v19 = *((_DWORD *)a2 + 776);
  if ( v19 )
    v20 = *(float *)(*((_QWORD *)a2 + 390) + 4LL * (unsigned int)(v19 - 1));
  else
    v20 = FLOAT_1_0;
  v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - 1.0)) & _xmm);
  if ( v21 < 0.0000011920929 && *((_DWORD *)a2 + 65) <= 1u )
    v6 = 1;
  v100 = 0LL;
  v22 = 0;
  if ( v16 )
  {
    v23 = 0LL;
    do
    {
      v24 = *(CSurfaceBrush **)(v23 + *((_QWORD *)this + 2));
      if ( v24 )
      {
        v25 = *(bool (__fastcall **)(CSurfaceBrush *__hidden, struct CDrawingContext *, bool *))(*(_QWORD *)v24 + 272LL);
        if ( !(v25 == CSurfaceBrush::IsReadyToDraw ? CSurfaceBrush::IsReadyToDraw(v24, a2, v95) : v25(v24, a2, v95)) )
          goto LABEL_65;
      }
      ++v22;
      v23 += 24LL;
    }
    while ( v22 < (unsigned int)v97 );
    v16 = v97;
  }
  v27 = v103;
  if ( CVisual::HasSubtreeSurface(v103) )
    v100 = *(_QWORD *)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v27 + 184LL))(v27) + 8);
  if ( *((_BYTE *)this + 192) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v27 + 27) + 4LL) & 0x10000) == 0
      || (v92 = *((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(v27) + 46)) == 0 )
    {
      v84 = v96;
      v95[0] = 0;
      DoesBackdropInputContributeToSubgraph = CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(
                                                this,
                                                v96,
                                                v95);
      if ( v95[0]
        && v6
        && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                           + 8 * v84)
                                                                               + 16LL)) )
      {
        v11 = -2003304441;
        v94 = 789;
LABEL_136:
        v93 = v11;
        goto LABEL_147;
      }
      v28 = v98;
      v101.left = 0.0;
      v101.top = 0.0;
      height = v98->height;
      v101.right = v98->width;
      v101.bottom = height;
      BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                        a2,
                                        &v101,
                                        DoesBackdropInputContributeToSubgraph,
                                        (struct EffectInput *)&v115);
      v11 = BackdropImageFromRenderTarget;
      if ( BackdropImageFromRenderTarget < 0 )
      {
        v94 = 797;
        goto LABEL_146;
      }
      goto LABEL_34;
    }
    EffectInput::operator=(&v115, v92);
  }
  v28 = v98;
LABEL_34:
  if ( *((_BYTE *)this + 194) )
  {
    BackdropImageFromRenderTarget = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                      a2,
                                      v28,
                                      (struct EffectInput *)&v119);
    v11 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v94 = 805;
      goto LABEL_146;
    }
  }
  std::vector<EffectInput>::reserve((__int64 *)&v104, v16);
  v29 = 0;
  if ( v16 )
  {
    v30 = 0LL;
    v31 = 0LL;
    *(_QWORD *)&v101.left = 0LL;
    do
    {
      std::vector<EffectInput>::emplace_back<std::nullptr_t>((__int64 *)&v104);
      v32 = (__int64 *)(v31 + v104);
      v33 = *(_QWORD *)(v31 + v104 + 8);
      if ( v33 )
      {
        v32[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      }
      v34 = *v32;
      if ( *v32 )
      {
        *v32 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      }
      memset_0(v32, 0, 0x68uLL);
      v35 = *(_QWORD *)(v30 + *((_QWORD *)this + 2));
      if ( v35
        && ((v36 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 48LL), v36 != CSurfaceBrush::IsOfType)
          ? (v37 = v36(v35, 8LL))
          : (v37 = CSurfaceBrush::IsOfType(v35, 8LL)),
            v37) )
      {
        v83 = &v115;
      }
      else
      {
        v38 = *(_QWORD *)(v30 + *((_QWORD *)this + 2));
        if ( !v38
          || ((v39 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v38 + 48LL), v39 != CSurfaceBrush::IsOfType)
            ? (v40 = v39(v38, 157LL))
            : (v40 = CSurfaceBrush::IsOfType(v38, 157LL)),
              !v40) )
        {
          if ( !v100 || *(_QWORD *)(v30 + *((_QWORD *)this + 2)) )
          {
            *((_DWORD *)v32 + 12) = v29;
          }
          else
          {
            if ( !v7 )
            {
              v66 = *(_QWORD *)(v100 + 8);
              v102 = 0LL;
              Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=(&v102, v66);
              v67 = v102;
              (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v102 + 144LL))(v102, 1LL);
              Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v99);
              v68 = CRenderTargetImageSource::Create(v67, 1, &v99);
              v11 = v68;
              if ( v68 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, v68, 0x343u);
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v102);
                v7 = v99;
                goto LABEL_65;
              }
              Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v102);
              v7 = v99;
            }
            BackdropImageFromRenderTarget = CDrawListBitmap::FromImageSource((struct IImageSource **)v32, v7, a2, 0);
            v11 = BackdropImageFromRenderTarget;
            if ( BackdropImageFromRenderTarget < 0 )
            {
              v94 = 840;
              goto LABEL_146;
            }
            *(_QWORD *)&v112[0] = 0LL;
            v69 = v100;
            *((_BYTE *)v32 + 44) = 1;
            *((_BYTE *)v32 + 100) = 1;
            v70 = (float)*(int *)(v69 + 28);
            *((float *)v112 + 2) = (float)*(int *)(v69 + 24);
            *((float *)v112 + 3) = v70;
            *(_OWORD *)((char *)v32 + 84) = v112[0];
            DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform(v69, v111, v29);
            v31 = *(_QWORD *)&v101.left;
            *((_OWORD *)v32 + 3) = *(_OWORD *)DestToTexSpaceTransform;
            *((_OWORD *)v32 + 4) = *((_OWORD *)DestToTexSpaceTransform + 1);
            *((float *)v32 + 20) = DestToTexSpaceTransform[8];
          }
          goto LABEL_51;
        }
        v83 = &v119;
      }
      EffectInput::operator=(v32, v83);
LABEL_51:
      v31 += 104LL;
      ++v29;
      v30 += 24LL;
      *(_QWORD *)&v101.left = v31;
    }
    while ( v29 < (unsigned int)v97 );
  }
  memset_0(v112, 0, sizeof(v112));
  v41 = v98;
  v42 = v98->height;
  *(FLOAT *)v112 = v98->width;
  *((FLOAT *)v112 + 1) = v42;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v109, (float *)v112 + 2, (float *)v112 + 3);
  v43 = v96;
  v99 = (struct CRenderTargetImageSource *)v96;
  v44 = (struct CRenderTargetImageSource *)v96;
  std::vector<EffectInput>::reserve((__int64 *)&v106, v96);
  v45 = 0;
  if ( !v43 )
  {
LABEL_53:
    v123 = v43;
    for ( i = 0; ; ++i )
    {
      v47 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * (_QWORD)v44);
      if ( i >= *(_DWORD *)(v47 + 92) )
        break;
      v48 = 44LL * i;
      v11 = 0;
      v49 = 104LL * *(unsigned int *)(v48 + v47 + 100);
      v50 = *(_BYTE *)(v48 + v47 + 104) == 0;
      v51 = v106;
      if ( v50 )
        v51 = v104;
      EffectInput::operator=(&v124[13 * i], v49 + v51);
      if ( BYTE4(v124[13 * i + 5]) )
      {
        v41 = v98;
      }
      else
      {
        v41 = v98;
        InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(
                                 this,
                                 a2,
                                 v98,
                                 v96,
                                 i,
                                 (struct EffectInput *)&v124[13 * i]);
        v11 = InputBrushParameters;
        if ( InputBrushParameters < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, InputBrushParameters, 0x4F6u);
      }
      if ( v11 < 0 )
      {
        v94 = 966;
        goto LABEL_136;
      }
      ++HIDWORD(v123);
      v44 = v99;
    }
    v53 = v108;
    BackdropImageFromRenderTarget = CBrushRenderingGraph::UpdateDrawListCache(
                                      this,
                                      a2,
                                      v41,
                                      v113[0],
                                      (struct EffectStage *)&v123,
                                      v108);
    v11 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v94 = 976;
      goto LABEL_146;
    }
    if ( *((_BYTE *)this + 192) )
    {
      *(float *)&v88 = v41->width + 0.0;
      *(float *)&v89 = v41->height + 0.0;
      *(_QWORD *)&v112[0] = 0LL;
      *((_QWORD *)&v112[0] + 1) = __PAIR64__(v89, v88);
      CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a2, (__int64)v112, (float *)v113);
      v90 = *(_OWORD *)v113;
      v91 = *((_QWORD *)v103 + 2);
      v112[0] = *(_OWORD *)v113;
      *((_QWORD *)v53 + 11) = *(_QWORD *)(v91 + 496);
      *(_OWORD *)((char *)v53 + 68) = v90;
    }
    goto LABEL_65;
  }
  v73 = 0LL;
  v74 = 0LL;
  v97 = 0LL;
  v100 = 0LL;
  while ( 1 )
  {
    std::vector<EffectInput>::emplace_back<std::nullptr_t>((__int64 *)&v106);
    v75 = (struct EffectInput *)(v106 + v74);
    *(_QWORD *)&v101.left = v75;
    EffectInput::Reset(v75);
    *((_BYTE *)v75 + 44) = 1;
    v76 = *(_QWORD *)(v73 + *((_QWORD *)this + 18));
    v123 = v45;
    if ( !CRenderingTechnique::IsExternallyImplementedSubgraph((CRenderingTechnique *)v76, &v114) )
      break;
    if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v76 + 16)) )
      goto LABEL_107;
    BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                      this,
                                      a2,
                                      v98,
                                      v45,
                                      0,
                                      &v104,
                                      &v106,
                                      (struct EffectInput *)v124);
    v11 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v94 = 893;
      goto LABEL_146;
    }
    HIDWORD(v123) = 1;
    if ( v125[1] )
    {
      v73 = v97;
      goto LABEL_107;
    }
    BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderExternalEffect(
                                      this,
                                      a2,
                                      v87,
                                      (const struct EffectStage *)&v123,
                                      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v112,
                                      (struct IImageSource **)v75);
    v11 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v94 = 898;
      goto LABEL_146;
    }
LABEL_122:
    v73 = v97;
LABEL_110:
    CBrushRenderingGraph::CleanupEffectStage(v82, (struct EffectStage *)&v123);
    v73 += 8LL;
    v74 = v100 + 104;
    v97 = v73;
    ++v45;
    v100 += 104LL;
    if ( v45 >= v96 )
    {
      v44 = v99;
      v43 = v96;
      v41 = v98;
      goto LABEL_53;
    }
  }
  v77 = HIDWORD(v123);
  v78 = 0;
  if ( !*(_DWORD *)(v76 + 92) )
  {
LABEL_102:
    if ( v77 == 1 && v125[0] && v127 && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v76 + 16)) )
    {
      v75 = *(struct EffectInput **)&v101.left;
LABEL_107:
      v79 = *(_QWORD *)(v73 + *((_QWORD *)this + 18));
      v80 = 104LL * *(unsigned int *)(v79 + 100);
      if ( *(_BYTE *)(v79 + 104) )
        v81 = v106 + v80;
      else
        v81 = v104 + v80;
      EffectInput::operator=(v75, v81);
      goto LABEL_110;
    }
    BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderInternalEffect(
                                      this,
                                      a2,
                                      (struct EffectStage *)&v123,
                                      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v112,
                                      *(struct EffectInput **)&v101.left);
    v11 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v94 = 935;
      goto LABEL_146;
    }
    goto LABEL_122;
  }
  while ( 1 )
  {
    BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                      this,
                                      a2,
                                      v98,
                                      v45,
                                      v77,
                                      &v104,
                                      &v106,
                                      (struct EffectInput *)&v124[13 * v78]);
    v11 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
      break;
    ++v78;
    v77 = ++HIDWORD(v123);
    if ( v78 >= *(_DWORD *)(v76 + 92) )
    {
      v73 = v97;
      goto LABEL_102;
    }
  }
  v94 = 919;
LABEL_146:
  v93 = BackdropImageFromRenderTarget;
LABEL_147:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *)"\a", 1u, v93, v94);
LABEL_65:
  v55 = HIDWORD(v123);
  for ( j = 0; j < v55; ++j )
  {
    if ( !v125[104 * j] )
    {
      v57 = v126[13 * j];
      if ( v57 )
      {
        v58 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))v57;
        if ( v58 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v57, 1);
        else
          v58(v57, 1);
      }
      v126[13 * j] = 0LL;
      v55 = HIDWORD(v123);
    }
  }
  HIDWORD(v123) = 0;
  std::vector<EffectInput>::_Tidy((__int64)&v104);
  std::vector<EffectInput>::_Tidy((__int64)&v106);
  v59 = *((_QWORD *)&v119 + 1);
  if ( *((_QWORD *)&v119 + 1) )
  {
    *((_QWORD *)&v119 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
  }
  v60 = v119;
  if ( (_QWORD)v119 )
  {
    *(_QWORD *)&v119 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  }
  v61 = *((_QWORD *)&v115 + 1);
  if ( *((_QWORD *)&v115 + 1) )
  {
    *((_QWORD *)&v115 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  }
  v62 = v115;
  if ( (_QWORD)v115 )
  {
    *(_QWORD *)&v115 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  }
  v63 = (EffectInput *)&v128;
  v64 = 4LL;
  do
  {
    v63 = (EffectInput *)((char *)v63 - 104);
    EffectInput::~EffectInput(v63);
    --v64;
  }
  while ( v64 );
  if ( v7 )
  {
    v72 = *(__int64 (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v7 + 16LL);
    if ( v72 == CRenderTargetImageSource::Release )
      CRenderTargetImageSource::Release(v7);
    else
      v72(v7);
  }
  return (unsigned int)v11;
}
