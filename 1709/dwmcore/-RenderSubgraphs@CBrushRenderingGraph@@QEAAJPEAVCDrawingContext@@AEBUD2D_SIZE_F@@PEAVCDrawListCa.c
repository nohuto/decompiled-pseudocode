/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18003D31C (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18003E458 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004E5FC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x18004E874 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005915C (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x18006BA90 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x18006DEAC (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ??0EffectStage@@QEAA@XZ @ 0x18006E5EC (--0EffectStage@@QEAA@XZ.c)
 *     ?GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEAY03$$CBU2@AEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18006E634 (-GetInputMapping@CBrushRenderingGraph@@AEAAAEBUEffectInput@@IIAEAY03$$CBU2@AEBV-$vector@UEffectI.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEAY03$$CBUEffectInput@@AEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@PEAU4@@Z @ 0x18006EFF8 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEAY03$$C.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18006F088 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAUEffectS.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x18006F5B4 (-CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z @ 0x18006FDE4 (-SetSurfaceClamp@CBrushRenderingGraph@@AEAAXIAEBUD2D_SIZE_F@@AEBUD2D_RECT_F@@@Z.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18006FE70 (-IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18006FEC4 (-IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ??0EffectInput@@QEAA@XZ @ 0x180070000 (--0EffectInput@@QEAA@XZ.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18007001C (--1EffectInput@@QEAA@XZ.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x180070080 (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800700F4 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@Z @ 0x1800703EC (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX$$QEA$$T@.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x180070434 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180080C60 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x180088984 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x180187F30 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?SetSubstituteColor@CBrushRenderingGraph@@AEAAXIAEBU_D3DCOLORVALUE@@@Z @ 0x18018852C (-SetSubstituteColor@CBrushRenderingGraph@@AEAAXIAEBU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  struct CRenderTargetImageSource *v5; // rbx
  __int64 v8; // rdi
  EffectInput *v9; // r14
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  CVisual *CurrentVisual; // rcx
  int v13; // eax
  float v14; // xmm0_4
  float v15; // xmm1_4
  bool v16; // di
  unsigned int v17; // r15d
  __int64 v18; // rdi
  char *v19; // r14
  struct D2D_SIZE_F *v20; // r15
  FLOAT v21; // xmm1_4
  __int64 v22; // rdi
  unsigned int v23; // r14d
  unsigned int v24; // ebx
  struct CDrawListCache *v25; // rbx
  int BackdropImageFromRenderTarget; // eax
  CBrushRenderingGraph *v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // r14
  EffectInput *v30; // rsi
  __int64 v31; // rbx
  __int64 *v32; // rbx
  EffectInput *v33; // rbx
  __int64 v35; // rdx
  struct IRenderTarget *v36; // rbx
  int v37; // eax
  __int64 v38; // rcx
  float v39; // xmm1_4
  __int64 DestToTexSpaceTransform; // rax
  __int64 v41; // rbx
  __int64 v42; // rdi
  struct EffectInput *v43; // r12
  __int64 v44; // r15
  const struct _GUID *v45; // r8
  CBrushRenderingGraph *v46; // rcx
  unsigned int v47; // ebx
  int v48; // edx
  float v49; // xmm1_4
  float v50; // xmm0_4
  __int128 v51; // xmm0
  __int64 v52; // rax
  char DoesBackdropInputContributeToSubgraph; // r14
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  unsigned int v56; // [rsp+28h] [rbp-E0h]
  bool v57[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B8h]
  unsigned int v59; // [rsp+58h] [rbp-B0h]
  unsigned int v60; // [rsp+5Ch] [rbp-ACh]
  struct D2D_RECT_F v61; // [rsp+60h] [rbp-A8h] BYREF
  struct IRenderTarget *v62; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_SIZE_F *v63; // [rsp+78h] [rbp-90h]
  CVisual *v64; // [rsp+80h] [rbp-88h]
  struct CRenderTargetImageSource *v65; // [rsp+88h] [rbp-80h] BYREF
  void *lpMem[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-68h]
  _DWORD v68[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct D2D_SIZE_F v69; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v70[64]; // [rsp+B8h] [rbp-50h] BYREF
  int v71; // [rsp+F8h] [rbp-10h]
  char v72[40]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v73[2]; // [rsp+130h] [rbp+28h] BYREF
  struct CDrawListCache *v74[2]; // [rsp+150h] [rbp+48h] BYREF
  struct _GUID v75; // [rsp+160h] [rbp+58h] BYREF
  __int128 v76; // [rsp+178h] [rbp+70h] BYREF
  char v77; // [rsp+188h] [rbp+80h]
  __int64 v78; // [rsp+1A8h] [rbp+A0h]
  __int64 v79; // [rsp+1B0h] [rbp+A8h]
  __int64 v80; // [rsp+1B8h] [rbp+B0h]
  __int128 v81; // [rsp+1E8h] [rbp+E0h] BYREF
  char v82; // [rsp+1F8h] [rbp+F0h]
  __int64 v83; // [rsp+218h] [rbp+110h]
  __int64 v84; // [rsp+220h] [rbp+118h]
  __int64 v85; // [rsp+228h] [rbp+120h]
  unsigned int v86; // [rsp+258h] [rbp+150h] BYREF
  int v87; // [rsp+25Ch] [rbp+154h]
  _QWORD v88[5]; // [rsp+260h] [rbp+158h] BYREF
  char v89; // [rsp+28Ch] [rbp+184h]
  char v90; // [rsp+28Dh] [rbp+185h]
  char v91; // [rsp+2C5h] [rbp+1BDh]
  char v92; // [rsp+400h] [rbp+2F8h] BYREF
  _BYTE v93[48]; // [rsp+408h] [rbp+300h] BYREF
  char v94; // [rsp+438h] [rbp+330h] BYREF
  __int64 v95; // [rsp+5A8h] [rbp+4A0h] BYREF

  v74[0] = a4;
  v63 = a3;
  v5 = 0LL;
  v65 = 0LL;
  EffectStage::EffectStage((EffectStage *)&v86);
  v77 = 0;
  *(_QWORD *)&v75.Data1 = 0LL;
  *(_QWORD *)v75.Data4 = 0LL;
  v76 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v76);
  v82 = 0;
  v83 = 0LL;
  v81 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v81);
  v71 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v70);
  v67 = 0LL;
  *(_OWORD *)lpMem = 0LL;
  v8 = 4LL;
  v9 = (EffectInput *)v93;
  do
  {
    EffectInput::EffectInput(v9);
    v9 = (EffectInput *)((char *)v9 + 104);
    --v8;
  }
  while ( v8 );
  v10 = *((_DWORD *)this + 10);
  v11 = *((_DWORD *)this + 82) - 1;
  v60 = v11;
  v59 = v10;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  v64 = CurrentVisual;
  v13 = *((_DWORD *)a2 + 776);
  if ( v13 )
  {
    v14 = *(float *)(*((_QWORD *)a2 + 390) + 4LL * (unsigned int)(v13 - 1));
    CurrentVisual = v64;
  }
  else
  {
    v14 = FLOAT_1_0;
  }
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - 1.0)) & _xmm);
  v16 = v15 < 0.0000011920929 && *((_DWORD *)a2 + 65) <= 1u;
  v58 = 0LL;
  if ( CVisual::HasSubtreeSurface(CurrentVisual) )
    v58 = *(_QWORD *)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v64 + 184LL))(v64) + 8);
  if ( *((_BYTE *)this + 352) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v64 + 26) + 4LL) & 0x10000) != 0
      && *((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(v64) + 36) )
    {
      EffectInput::operator=(&v76);
    }
    else
    {
      v57[0] = 0;
      DoesBackdropInputContributeToSubgraph = CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(
                                                this,
                                                v11,
                                                v57);
      if ( v57[0]
        && v16
        && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 38)
                                                                                           + 8LL * v11)
                                                                               + 16LL)) )
      {
        v28 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, -2003304441, 0x304u);
        goto LABEL_27;
      }
      width = a3->width;
      height = a3->height;
      v61.left = 0.0;
      v61.top = 0.0;
      v61.right = width;
      v61.bottom = height;
      BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                        a2,
                                        &v61,
                                        DoesBackdropInputContributeToSubgraph,
                                        (struct EffectInput *)&v76);
      v28 = BackdropImageFromRenderTarget;
      if ( BackdropImageFromRenderTarget < 0 )
      {
        v56 = 780;
        goto LABEL_90;
      }
      v10 = v59;
    }
  }
  if ( *((_BYTE *)this + 354) )
  {
    BackdropImageFromRenderTarget = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                      a2,
                                      a3,
                                      (struct EffectInput *)&v81);
    v28 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v56 = 788;
      goto LABEL_90;
    }
  }
  v17 = 0;
  if ( v10 )
  {
    v18 = 0LL;
    v19 = &v94;
    *(_QWORD *)&v61.left = 0LL;
    do
    {
      EffectInput::Reset((struct EffectInput *)(v19 - 48));
      if ( CBrushRenderingGraph::IsBackdropInput(this, v17) || CBrushRenderingGraph::IsWindowBackdropInput(this, v17) )
      {
        EffectInput::operator=(v19 - 48);
      }
      else if ( !v58 || *(_QWORD *)(v18 + *((_QWORD *)this + 2)) )
      {
        *(_DWORD *)v19 = v17;
      }
      else
      {
        if ( !v5 )
        {
          v35 = *(_QWORD *)(v58 + 8);
          v62 = 0LL;
          Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v62, v35);
          v36 = v62;
          (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v62 + 136LL))(v62, 1LL);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v65);
          v37 = CRenderTargetImageSource::Create(v36, 1, &v65);
          v28 = v37;
          if ( v37 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v37, 0x330u);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v62);
            goto LABEL_27;
          }
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v62);
          v5 = v65;
        }
        BackdropImageFromRenderTarget = CDrawListBitmap::FromImageSource((CDrawListBitmap *)(v19 - 48), v5, a2, 0, 0);
        v28 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v56 = 821;
          goto LABEL_90;
        }
        *(_QWORD *)&v73[0] = 0LL;
        v38 = v58;
        *(v19 - 4) = 1;
        v19[52] = 1;
        v39 = (float)*(int *)(v38 + 28);
        *((float *)v73 + 2) = (float)*(int *)(v38 + 24);
        *((float *)v73 + 3) = v39;
        *(_OWORD *)(v19 + 36) = v73[0];
        DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform(v38, v72, v17);
        v18 = *(_QWORD *)&v61.left;
        *(_OWORD *)v19 = *(_OWORD *)DestToTexSpaceTransform;
        *((_OWORD *)v19 + 1) = *(_OWORD *)(DestToTexSpaceTransform + 16);
        *((_DWORD *)v19 + 8) = *(_DWORD *)(DestToTexSpaceTransform + 32);
      }
      if ( *(v19 - 4) )
      {
        if ( *(v19 - 3) )
        {
          CBrushRenderingGraph::SetSubstituteColor(this, v17, (const struct _D3DCOLORVALUE *)(v19 - 24));
        }
        else
        {
          CDrawListBitmap::GetSize((CDrawListBitmap *)(v19 - 48), v68);
          v69.width = (float)v68[0];
          v69.height = (float)v68[1];
          CBrushRenderingGraph::SetSurfaceClamp(this, v17, &v69, (const struct D2D_RECT_F *)(v19 + 36));
        }
      }
      v18 += 64LL;
      ++v17;
      v19 += 104;
      *(_QWORD *)&v61.left = v18;
    }
    while ( v17 < v59 );
    v11 = v60;
  }
  memset_0(v73, 0, sizeof(v73));
  v20 = v63;
  v21 = v63->height;
  *(FLOAT *)v73 = v63->width;
  *((FLOAT *)v73 + 1) = v21;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v70, (float *)v73 + 2, (float *)v73 + 3);
  v22 = v11;
  std::vector<EffectInput>::reserve(lpMem, v11);
  v23 = 0;
  if ( v11 )
  {
    v41 = 0LL;
    v42 = 0LL;
    v58 = 0LL;
    *(_QWORD *)&v61.left = 0LL;
    while ( 1 )
    {
      std::vector<EffectInput>::emplace_back<std::nullptr_t>(lpMem);
      v43 = (struct EffectInput *)((char *)lpMem[0] + v42);
      EffectInput::Reset((struct EffectInput *)((char *)lpMem[0] + v42));
      *((_BYTE *)v43 + 44) = 1;
      v44 = *(_QWORD *)(v41 + *((_QWORD *)this + 38));
      v86 = v23;
      v87 = 0;
      if ( CRenderingTechnique::IsExternallyImplementedSubgraph((CRenderingTechnique *)v44, &v75) )
      {
        if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v44 + 16)) )
          goto LABEL_71;
        BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                          this,
                                          a2,
                                          v63,
                                          0,
                                          (__int64)v93,
                                          (__int64)lpMem,
                                          (struct EffectInput *)v88);
        v28 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v56 = 887;
          goto LABEL_90;
        }
        v87 = 1;
        if ( v90 )
          goto LABEL_71;
        BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderExternalEffect(
                                          this,
                                          a2,
                                          v45,
                                          (const struct EffectStage *)&v86,
                                          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v73,
                                          v43);
        v28 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v56 = 892;
          goto LABEL_90;
        }
      }
      else
      {
        v47 = 0;
        v48 = v87;
        if ( *(_DWORD *)(v44 + 92) )
        {
          while ( 1 )
          {
            BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                              this,
                                              a2,
                                              v63,
                                              v48,
                                              (__int64)v93,
                                              (__int64)lpMem,
                                              (struct EffectInput *)&v88[13 * v47]);
            v28 = BackdropImageFromRenderTarget;
            if ( BackdropImageFromRenderTarget < 0 )
              break;
            ++v47;
            v48 = ++v87;
            if ( v47 >= *(_DWORD *)(v44 + 92) )
              goto LABEL_66;
          }
          v56 = 912;
LABEL_90:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, BackdropImageFromRenderTarget, v56);
          goto LABEL_27;
        }
LABEL_66:
        if ( v48 == 1 && v89 && v91 && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v44 + 16)) )
        {
          v41 = v58;
LABEL_71:
          CBrushRenderingGraph::GetInputMapping((__int64)this, v23, 0, (__int64)v93, lpMem);
          EffectInput::operator=(v43);
          goto LABEL_57;
        }
        BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderInternalEffect(
                                          this,
                                          a2,
                                          (struct EffectStage *)&v86,
                                          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v73,
                                          v43);
        v28 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v56 = 928;
          goto LABEL_90;
        }
        v41 = v58;
      }
LABEL_57:
      CBrushRenderingGraph::CleanupEffectStage(v46, (struct EffectStage *)&v86);
      v41 += 8LL;
      v11 = v60;
      v42 = *(_QWORD *)&v61.left + 104LL;
      ++v23;
      *(_QWORD *)&v61.left += 104LL;
      v58 = v41;
      if ( v23 >= v60 )
      {
        v20 = v63;
        v22 = v60;
        break;
      }
    }
  }
  v87 = 0;
  v24 = 0;
  v86 = v11;
  while ( v24 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38) + 8 * v22) + 92LL) )
  {
    BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                      this,
                                      a2,
                                      v20,
                                      v24,
                                      (__int64)v93,
                                      (__int64)lpMem,
                                      (struct EffectInput *)&v88[13 * v24]);
    v28 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v56 = 958;
      goto LABEL_90;
    }
    ++v87;
    ++v24;
    v22 = v11;
  }
  v25 = v74[0];
  BackdropImageFromRenderTarget = CBrushRenderingGraph::UpdateDrawListCache(
                                    this,
                                    a2,
                                    v20,
                                    (struct EffectStage *)&v86,
                                    v74[0]);
  v28 = BackdropImageFromRenderTarget;
  if ( BackdropImageFromRenderTarget < 0 )
  {
    v56 = 967;
    goto LABEL_90;
  }
  if ( *((_BYTE *)this + 352) )
  {
    v49 = v20->height;
    v50 = v20->width + 0.0;
    *(_QWORD *)&v73[0] = 0LL;
    *((float *)v73 + 2) = v50;
    *((float *)v73 + 3) = v49 + 0.0;
    CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a2, (__int64)v73, (float *)v74);
    v51 = *(_OWORD *)v74;
    v52 = *((_QWORD *)v64 + 2);
    v73[0] = *(_OWORD *)v74;
    v27 = *(CBrushRenderingGraph **)(v52 + 472);
    *((_QWORD *)v25 + 10) = v27;
    *(_OWORD *)((char *)v25 + 60) = v51;
  }
LABEL_27:
  CBrushRenderingGraph::CleanupEffectStage(v27, (struct EffectStage *)&v86);
  v29 = 4LL;
  v30 = (EffectInput *)&v95;
  v31 = 4LL;
  do
  {
    v30 = (EffectInput *)((char *)v30 - 104);
    EffectInput::~EffectInput(v30);
    --v31;
  }
  while ( v31 );
  v32 = (__int64 *)lpMem[0];
  if ( lpMem[0] )
  {
    while ( v32 != lpMem[1] )
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v32 + 1);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v32);
      v32 += 13;
    }
    WPF::ProcessHeapImpl::Free(lpMem[0]);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v81 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v81);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v76 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v76);
  v33 = (EffectInput *)&v92;
  do
  {
    v33 = (EffectInput *)((char *)v33 - 104);
    EffectInput::~EffectInput(v33);
    --v29;
  }
  while ( v29 );
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v65);
  return v28;
}
