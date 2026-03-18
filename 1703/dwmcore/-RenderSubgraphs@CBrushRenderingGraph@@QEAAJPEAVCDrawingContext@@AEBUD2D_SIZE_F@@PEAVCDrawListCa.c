/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000DE04 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x1800132C4 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18001344C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ @ 0x1800136BC (-GetTreeEffectInternal@CVisual@@QEBAPEAVCTreeEffect@@XZ.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180014DC8 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x180015BD0 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?GetSurfaceSize@CBrushRenderingGraph@@CA?AUD2D_SIZE_F@@PEAVIImageSource@@@Z @ 0x18001637C (-GetSurfaceSize@CBrushRenderingGraph@@CA-AUD2D_SIZE_F@@PEAVIImageSource@@@Z.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x180016E34 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEBV?$DynArrayIANoCtor@UEffectInput@@$03$0A@@@AEBV?$DynArrayIANoCtor@UEffectInput@@$04$0A@@@@Z @ 0x1800186C0 (-GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEBV-$DynArrayIANoCtor@UEffectInpu.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x18001927C (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$DynArrayIANoCtor@UEffectInput@@$03$0A@@@AEBV?$DynArrayIANoCtor@UEffectInput@@$04$0A@@@PEAUEffectInput@@@Z @ 0x18001932C (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$Dyn.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800193BC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x1800197DC (-CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z @ 0x18001A0A8 (-SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18001A130 (-IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18001A158 (-IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UEffectInput@@$0A@@@QEAAJPEFBUEffectInput@@I@Z @ 0x1800213B0 (-AddMultipleAndSet@-$DynArray@UEffectInput@@$0A@@@QEAAJPEFBUEffectInput@@I@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18009AD10 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800A9920 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z @ 0x1800C1CD0 (--4-$ComPtr@VIImageSource@@@WRL@Microsoft@@QEAAAEAV012@PEAVIImageSource@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     ??0EffectInput@@QEAA@XZ @ 0x1800C571C (--0EffectInput@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180180AA0 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?SetSubstituteColor@CBrushRenderingGraph@@AEAAXIAEBU_D3DCOLORVALUE@@@Z @ 0x180180F98 (-SetSubstituteColor@CBrushRenderingGraph@@AEAAXIAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CRenderTargetImageSource *v4; // rbx
  EffectInput *v5; // r14
  __int64 v8; // rdi
  unsigned int v10; // r14d
  int BackdropImageFromRenderTarget; // eax
  unsigned int v12; // edi
  unsigned int v13; // r12d
  CVisual *CurrentVisual; // r11
  int v15; // eax
  int v16; // r9d
  float v17; // xmm1_4
  bool v18; // di
  bool HasSubtreeSurface; // al
  CVisual *v20; // r11
  char v21; // r10
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  __int128 v23; // xmm6
  __int128 v24; // xmm7
  __int128 v25; // xmm8
  __int128 v26; // xmm9
  __int128 v27; // xmm10
  __int64 v28; // xmm11_8
  char DoesBackdropInputContributeToSubgraph; // r14
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  unsigned int v32; // r13d
  __int128 v33; // xmm12
  D2D_SIZE_F v34; // rdi
  __int128 v35; // xmm13
  __int64 v36; // rcx
  __int128 v37; // xmm14
  __int128 v38; // xmm15
  __int64 v39; // r14
  __int64 v40; // xmm0_8
  __int64 v41; // rcx
  __int64 v42; // rdx
  struct IRenderTarget *v43; // rbx
  int v44; // eax
  float v45; // xmm1_4
  __int64 DestToTexSpaceTransform; // rax
  struct D2D_SIZE_F *v47; // r13
  unsigned int v48; // r14d
  __int64 v49; // r13
  __int64 v50; // rbx
  _QWORD *v51; // rbx
  __int64 v52; // r13
  const struct _GUID *v53; // r8
  CBrushRenderingGraph *v54; // rcx
  int v55; // edx
  unsigned int v56; // r12d
  __int64 InputMapping; // rax
  char v58; // r8
  unsigned int v59; // ebx
  __int64 v60; // rax
  struct CDrawListCache *v61; // rbx
  float v62; // xmm0_4
  float v63; // xmm1_4
  __int128 v64; // xmm0
  __int64 v65; // rax
  CBrushRenderingGraph *v66; // rcx
  unsigned int v67; // ebx
  __int64 v68; // rdx
  unsigned int v70; // [rsp+28h] [rbp-E0h]
  bool v71[4]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v72; // [rsp+4Ch] [rbp-BCh]
  __int64 v73; // [rsp+50h] [rbp-B8h]
  __int64 v74; // [rsp+58h] [rbp-B0h]
  struct IRenderTarget *v75; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F *v76; // [rsp+68h] [rbp-A0h]
  struct CRenderTargetImageSource *v77; // [rsp+70h] [rbp-98h] BYREF
  __int64 v78; // [rsp+78h] [rbp-90h]
  _OWORD v79[2]; // [rsp+80h] [rbp-88h] BYREF
  char v80[40]; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v81[5]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v82; // [rsp+118h] [rbp+10h]
  _OWORD v83[5]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v84; // [rsp+178h] [rbp+70h]
  D2D_SIZE_F v85[2]; // [rsp+188h] [rbp+80h] BYREF
  struct CDrawListCache *v86; // [rsp+198h] [rbp+90h] BYREF
  float v87; // [rsp+1A0h] [rbp+98h]
  float v88; // [rsp+1A4h] [rbp+9Ch]
  __int128 v89; // [rsp+1A8h] [rbp+A0h]
  struct _GUID v90; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v91[32]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v92; // [rsp+1E8h] [rbp+E0h]
  __int64 v93; // [rsp+1F0h] [rbp+E8h]
  __int64 v94; // [rsp+1F8h] [rbp+F0h]
  int v95; // [rsp+208h] [rbp+100h]
  unsigned int v96; // [rsp+228h] [rbp+120h] BYREF
  int v97; // [rsp+22Ch] [rbp+124h]
  _QWORD v98[3]; // [rsp+230h] [rbp+128h] BYREF
  char v99; // [rsp+24Ch] [rbp+144h]
  char v100; // [rsp+24Dh] [rbp+145h]
  char v101; // [rsp+285h] [rbp+17Dh]
  _QWORD v102[2]; // [rsp+398h] [rbp+290h] BYREF
  int v103; // [rsp+3A8h] [rbp+2A0h]
  __int64 v104; // [rsp+3ACh] [rbp+2A4h]
  _BYTE v105[352]; // [rsp+3B8h] [rbp+2B0h] BYREF
  _QWORD v106[2]; // [rsp+518h] [rbp+410h] BYREF
  int v107; // [rsp+528h] [rbp+420h]
  CBrushRenderingGraph *v108; // [rsp+52Ch] [rbp+424h]
  _BYTE v109[448]; // [rsp+538h] [rbp+430h] BYREF

  v4 = 0LL;
  v86 = a4;
  v96 = 0;
  v5 = (EffectInput *)v98;
  v97 = 0;
  v76 = a3;
  v77 = 0LL;
  v8 = 4LL;
  do
  {
    EffectInput::EffectInput(v5);
    v5 = (EffectInput *)((char *)v5 + 88);
    --v8;
  }
  while ( v8 );
  *(_QWORD *)&v90.Data1 = 0LL;
  *(_QWORD *)v90.Data4 = 0LL;
  memset_0(v81, 0, 0x58uLL);
  memset_0(v83, 0, 0x58uLL);
  v95 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 472), (struct CMILMatrix *)v91);
  v10 = *((_DWORD *)this + 10);
  v106[1] = v109;
  v106[0] = v109;
  v107 = 5;
  v108 = (CBrushRenderingGraph *)5;
  v72 = v10;
  v102[0] = v105;
  v103 = 4;
  v102[1] = v105;
  v104 = 4LL;
  BackdropImageFromRenderTarget = DynArrayImpl<0>::Grow((unsigned int)v102, 88, v10, 1, 0LL);
  v12 = BackdropImageFromRenderTarget;
  if ( BackdropImageFromRenderTarget < 0 )
  {
    v70 = 725;
    goto LABEL_83;
  }
  v13 = *((_DWORD *)this + 82) - 1;
  HIDWORD(v104) = v10;
  LODWORD(v73) = v13;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  *(_QWORD *)&v89 = CurrentVisual;
  v15 = *((_DWORD *)a2 + 752);
  if ( !v15 )
  {
    v12 = -2147467259;
    v70 = 736;
LABEL_6:
    v16 = v12;
    goto LABEL_84;
  }
  v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(*((_QWORD *)a2 + 378) + 4LL * (unsigned int)(v15 - 1))
                                                  - 1.0)) & _xmm);
  v18 = v17 < 0.0000011920929 && *((_DWORD *)a2 + 67) <= 1u;
  v78 = 0LL;
  HasSubtreeSurface = CVisual::HasSubtreeSurface(CurrentVisual);
  v21 = 0;
  if ( HasSubtreeSurface )
    v78 = *((_QWORD *)CVisual::GetTreeEffectInternal(v20) + 1);
  if ( *((_BYTE *)this + 352) != v21 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v20 + 26) + 4LL) & 0x8000) != 0 )
    {
      WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v20);
      if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 278) != v21 )
      {
        v23 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 280);
        v24 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 296);
        v25 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 312);
        v26 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 328);
        v27 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 344);
        v28 = *((_QWORD *)WindowBackgroundTreatmentInternal + 45);
        v81[0] = v23;
        goto LABEL_25;
      }
    }
    v71[0] = v21;
    DoesBackdropInputContributeToSubgraph = CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(this, v13, v71);
    if ( v71[0]
      && v18
      && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 38)
                                                                                         + 8LL * v13)
                                                                             + 16LL)) )
    {
      v12 = -2003304441;
      v70 = 784;
      goto LABEL_6;
    }
    width = a3->width;
    height = a3->height;
    v85[0].width = 0.0;
    v85[0].height = 0.0;
    v85[1].width = width;
    v85[1].height = height;
    BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                      a2,
                                      (const struct D2D_RECT_F *)v85,
                                      DoesBackdropInputContributeToSubgraph,
                                      (struct EffectInput *)v81);
    v12 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v70 = 792;
      goto LABEL_83;
    }
    v10 = v72;
  }
  v28 = v82;
  v27 = v81[4];
  v26 = v81[3];
  v25 = v81[2];
  v24 = v81[1];
  v23 = v81[0];
LABEL_25:
  if ( *((_BYTE *)this + 354) )
  {
    BackdropImageFromRenderTarget = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                      a2,
                                      a3,
                                      (struct EffectInput *)v83);
    v12 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v70 = 800;
      goto LABEL_83;
    }
  }
  v32 = 0;
  if ( v10 )
  {
    v33 = v83[4];
    v34 = 0LL;
    v35 = v83[3];
    v36 = 0LL;
    v37 = v83[2];
    v38 = v83[1];
    v74 = 0LL;
    v85[0] = 0LL;
    do
    {
      v39 = v36 + v102[0];
      memset_0((void *)(v36 + v102[0]), 0, 0x58uLL);
      if ( CBrushRenderingGraph::IsBackdropInput(this, v32) )
      {
        *(_OWORD *)v39 = v23;
        *(_OWORD *)(v39 + 16) = v24;
        *(_OWORD *)(v39 + 32) = v25;
        *(_OWORD *)(v39 + 48) = v26;
        *(_OWORD *)(v39 + 64) = v27;
        *(_QWORD *)(v39 + 80) = v28;
      }
      else if ( CBrushRenderingGraph::IsWindowBackdropInput(this, v32) )
      {
        *(_OWORD *)v39 = v83[0];
        v40 = v84;
        *(_OWORD *)(v39 + 16) = v38;
        *(_OWORD *)(v39 + 32) = v37;
        *(_OWORD *)(v39 + 48) = v35;
        *(_OWORD *)(v39 + 64) = v33;
        *(_QWORD *)(v39 + 80) = v40;
      }
      else
      {
        v41 = v78;
        if ( !v78 || *(_QWORD *)(*(_QWORD *)&v34 + *((_QWORD *)this + 2)) )
        {
          *(_DWORD *)(v39 + 32) = v32;
        }
        else
        {
          if ( !v4 )
          {
            v42 = *(_QWORD *)(v78 + 8);
            v75 = 0LL;
            Microsoft::WRL::ComPtr<IImageSource>::operator=(&v75, v42);
            v43 = v75;
            (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v75 + 152LL))(v75, 1LL);
            Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v77);
            v44 = CRenderTargetImageSource::Create(v43, 1, &v77);
            v12 = v44;
            if ( v44 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x33Cu);
              Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v75);
              goto LABEL_85;
            }
            Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v75);
            v41 = v78;
            v4 = v77;
            v34 = v85[0];
          }
          *(_QWORD *)&v79[0] = 0LL;
          *(_BYTE *)(v39 + 28) = 1;
          *(_BYTE *)(v39 + 84) = 1;
          *(_QWORD *)v39 = v4;
          v45 = (float)*(int *)(v41 + 28);
          *((float *)v79 + 2) = (float)*(int *)(v41 + 24);
          *((float *)v79 + 3) = v45;
          *(_OWORD *)(v39 + 68) = v79[0];
          DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform(v41, (__int64)v80, v32);
          *(_OWORD *)(v39 + 32) = *(_OWORD *)DestToTexSpaceTransform;
          *(_OWORD *)(v39 + 48) = *(_OWORD *)(DestToTexSpaceTransform + 16);
          *(_DWORD *)(v39 + 64) = *(_DWORD *)(DestToTexSpaceTransform + 32);
        }
      }
      if ( *(_BYTE *)(v39 + 28) )
      {
        if ( *(_BYTE *)(v39 + 29) )
        {
          CBrushRenderingGraph::SetSubstituteColor(this, v32, (const struct _D3DCOLORVALUE *)(v39 + 8));
        }
        else
        {
          v85[0] = CBrushRenderingGraph::GetSurfaceSize(*(struct IImageSource **)v39);
          CBrushRenderingGraph::SetSurfaceClamp(this, v32, v85, (const struct D2D_RECT_F *)(v39 + 68));
        }
      }
      *(_QWORD *)&v34 += 64LL;
      v36 = v74 + 88;
      v85[0] = v34;
      ++v32;
      v74 += 88LL;
    }
    while ( v32 < v72 );
  }
  memset_0(v79, 0, sizeof(v79));
  v47 = v76;
  *(struct D2D_SIZE_F *)&v79[0] = *v76;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v91, (float *)v79 + 2, (float *)v79 + 3);
  v48 = 0;
  if ( !v13 )
  {
LABEL_70:
    v97 = 0;
    v59 = 0;
    v60 = *((_QWORD *)this + 38);
    v96 = v13;
    if ( *(_DWORD *)(*(_QWORD *)(v60 + 8LL * v13) + 108LL) )
    {
      while ( 1 )
      {
        BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                          this,
                                          a2,
                                          v47,
                                          v13,
                                          v59,
                                          v102,
                                          v106,
                                          &v98[11 * v59]);
        v12 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
          break;
        ++v97;
        if ( ++v59 >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38) + 8LL * v13) + 108LL) )
          goto LABEL_73;
      }
      v70 = 974;
      goto LABEL_83;
    }
LABEL_73:
    v61 = v86;
    BackdropImageFromRenderTarget = CBrushRenderingGraph::UpdateDrawListCache(
                                      this,
                                      a2,
                                      v47,
                                      (struct EffectStage *)&v96,
                                      v86);
    v12 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v70 = 983;
      goto LABEL_83;
    }
    if ( *((_BYTE *)this + 352) )
    {
      v62 = v47->width + 0.0;
      v63 = v47->height + 0.0;
      v86 = 0LL;
      v87 = v62;
      v88 = v63;
      CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a2, (__int64)&v86, (float *)v85);
      v64 = *(_OWORD *)&v85[0].width;
      v65 = *(_QWORD *)(v89 + 16);
      v89 = *(_OWORD *)&v85[0].width;
      *((_QWORD *)v61 + 10) = *(_QWORD *)(v65 + 520);
      *(_OWORD *)((char *)v61 + 60) = v64;
    }
    goto LABEL_85;
  }
  v49 = 0LL;
  v50 = 0LL;
  v74 = 0LL;
  v85[0] = 0LL;
  while ( 1 )
  {
    v92 = 0LL;
    v93 = 0LL;
    v94 = 0LL;
    BackdropImageFromRenderTarget = DynArray<EffectInput,0>::AddMultipleAndSet(v106, v91);
    v12 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v70 = 877;
      goto LABEL_83;
    }
    v51 = (_QWORD *)(v106[0] + v50);
    memset_0(v51, 0, 0x58uLL);
    *((_BYTE *)v51 + 28) = 1;
    v52 = *(_QWORD *)(*((_QWORD *)this + 38) + v49);
    v97 = 0;
    v96 = v48;
    if ( CRenderingTechnique::IsExternallyImplementedSubgraph((CRenderingTechnique *)v52, &v90) )
    {
      if ( !CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v52 + 16)) )
      {
        BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                          this,
                                          a2,
                                          v76,
                                          v48,
                                          0,
                                          v102,
                                          v106,
                                          v98);
        v12 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v70 = 898;
          goto LABEL_83;
        }
        v97 = 1;
        if ( !v100 )
        {
          BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderExternalEffect(
                                            this,
                                            a2,
                                            v53,
                                            (const struct EffectStage *)&v96,
                                            (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v79,
                                            (struct EffectInput *)v51);
          v12 = BackdropImageFromRenderTarget;
          if ( BackdropImageFromRenderTarget < 0 )
          {
            v70 = 903;
            goto LABEL_83;
          }
          goto LABEL_68;
        }
      }
      goto LABEL_64;
    }
    v55 = v97;
    v56 = 0;
    if ( *(_DWORD *)(v52 + 108) )
      break;
LABEL_59:
    if ( v55 == 1 && v99 && v101 && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v52 + 16)) )
    {
      v13 = v73;
LABEL_64:
      InputMapping = CBrushRenderingGraph::GetInputMapping((__int64)this, v48, 0, v102, v106);
      *(_OWORD *)v51 = *(_OWORD *)InputMapping;
      *((_OWORD *)v51 + 1) = *(_OWORD *)(InputMapping + 16);
      *((_OWORD *)v51 + 2) = *(_OWORD *)(InputMapping + 32);
      *((_OWORD *)v51 + 3) = *(_OWORD *)(InputMapping + 48);
      *((_OWORD *)v51 + 4) = *(_OWORD *)(InputMapping + 64);
      v51[10] = *(_QWORD *)(InputMapping + 80);
      if ( *((_BYTE *)v51 + 28) != v58 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v51 + 8LL))(*v51);
      goto LABEL_68;
    }
    BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderInternalEffect(
                                      this,
                                      a2,
                                      (struct EffectStage *)&v96,
                                      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v79,
                                      (struct EffectInput *)v51);
    v12 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v70 = 939;
      goto LABEL_83;
    }
    v13 = v73;
LABEL_68:
    CBrushRenderingGraph::CleanupEffectStage(v54, (struct EffectStage *)&v96);
    ++v48;
    v50 = *(_QWORD *)v85 + 88LL;
    v49 = v74 + 8;
    *(_QWORD *)v85 += 88LL;
    v74 += 8LL;
    if ( v48 >= v13 )
    {
      v47 = v76;
      goto LABEL_70;
    }
  }
  while ( 1 )
  {
    BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                      this,
                                      a2,
                                      v76,
                                      v48,
                                      v55,
                                      v102,
                                      v106,
                                      &v98[11 * v56]);
    v12 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
      break;
    ++v56;
    v55 = ++v97;
    if ( v56 >= *(_DWORD *)(v52 + 108) )
      goto LABEL_59;
  }
  v70 = 923;
LABEL_83:
  v16 = BackdropImageFromRenderTarget;
LABEL_84:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v70);
LABEL_85:
  ReleaseInterfaceNoNULL<IImageSource>(*(_QWORD *)&v81[0]);
  ReleaseInterfaceNoNULL<IImageSource>(*(_QWORD *)&v83[0]);
  v66 = (CBrushRenderingGraph *)HIDWORD(v108);
  v67 = 0;
  if ( HIDWORD(v108) )
  {
    do
    {
      v68 = 88LL * v67;
      if ( *(_BYTE *)(v68 + v106[0] + 28) )
      {
        ReleaseInterfaceNoNULL<IImageSource>(*(_QWORD *)(v68 + v106[0]));
        v66 = (CBrushRenderingGraph *)HIDWORD(v108);
      }
      ++v67;
    }
    while ( v67 < (unsigned int)v66 );
  }
  CBrushRenderingGraph::CleanupEffectStage(v66, (struct EffectStage *)&v96);
  DynArrayImpl<1>::~DynArrayImpl<1>(v102);
  DynArrayImpl<1>::~DynArrayImpl<1>(v106);
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v77);
  return v12;
}
