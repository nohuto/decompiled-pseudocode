/*
 * XREFs of ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180066930
 * Callers:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800093C4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800097C0 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000BF08 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800657F0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180065990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18006B344 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18006C5E0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18006D6FC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18006DF14 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180150DB8 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z @ 0x180156750 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18015F438 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801604F8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x180161240 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x1801614AC (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180162DEC (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?RenderProjectedShadowsPostChildrenForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162F04 (-RenderProjectedShadowsPostChildrenForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180175210 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180176318 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180189050 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x180189860 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0014 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A143C (-GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADC70 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B484C (-GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801C3B48 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x1801C43D4 (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180210250 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18008B174 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18008B1C8 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x1800A56A0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushTransformInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct CMILMatrix *a3,
        char a4,
        bool a5)
{
  char v5; // r12
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  int v12; // edi
  __int64 v13; // rcx
  void *v14; // rsi
  unsigned int v15; // eax
  unsigned int *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  void *v19; // rdi
  __int64 v20; // rdx
  unsigned int v21; // eax
  int v22; // ebp
  void *v23; // rcx
  bool v24; // di
  __int64 v25; // rcx
  void *v26; // rbp
  unsigned int v27; // eax
  unsigned int v28; // eax
  int v29; // esi
  int v31; // eax
  int v32; // eax
  unsigned int v33; // r15d
  SIZE_T v34; // r8
  unsigned __int64 v35; // rcx
  unsigned int v36; // r14d
  unsigned int v37; // r15d
  SIZE_T v38; // r8
  unsigned int v39; // ecx
  unsigned __int64 v40; // rax
  unsigned int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // [rsp+20h] [rbp-E8h]
  __int128 v44; // [rsp+30h] [rbp-D8h]
  _BYTE v45[64]; // [rsp+40h] [rbp-C8h] BYREF
  int v46; // [rsp+80h] [rbp-88h]
  _BYTE v47[64]; // [rsp+90h] [rbp-78h] BYREF
  int v48; // [rsp+D0h] [rbp-38h]

  v5 = 0;
  v9 = 64LL;
  v10 = 1LL;
  if ( !a5 )
    goto LABEL_8;
  v11 = *((_DWORD *)this + 112);
  v12 = 0;
  v13 = *((unsigned int *)this + 113);
  v14 = 0LL;
  LODWORD(v44) = 4;
  *((_QWORD *)&v44 + 1) = a2;
  if ( v11 != (_DWORD)v13 )
    goto LABEL_3;
  if ( (unsigned __int64)(2 * v13) > 0xFFFFFFFF )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
  }
  else
  {
    v37 = 2 * v13;
    if ( (unsigned int)(2 * v13) <= 0x40 )
      v37 = 64;
    v12 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v37 <= 0x10 )
    {
      v12 = -2147024809;
    }
    else
    {
      v38 = 16LL * v37;
      if ( !v38 )
        v38 = 1LL;
      v14 = HeapAlloc(WPF::g_processHeap, 0, v38);
      if ( !v14 )
        v12 = -2147024882;
    }
    if ( v12 < 0 )
    {
      v41 = 84;
    }
    else
    {
      v39 = -1;
      v40 = 16LL * *((unsigned int *)this + 112);
      if ( v40 <= 0xFFFFFFFF )
        v39 = 16 * *((_DWORD *)this + 112);
      v12 = 0;
      if ( v40 <= 0xFFFFFFFF )
      {
        memcpy_0(v14, *((const void **)this + 58), v39);
        operator delete(*((void **)this + 58));
        v11 = *((_DWORD *)this + 112);
        v10 = 1LL;
        *((_QWORD *)this + 58) = v14;
        *((_DWORD *)this + 113) = v37;
LABEL_3:
        *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v11) = v44;
        v15 = *((_DWORD *)this + 118);
        if ( v15 <= ++*((_DWORD *)this + 112) )
          v15 = *((_DWORD *)this + 112);
        *((_DWORD *)this + 118) = v15;
        goto LABEL_6;
      }
      v12 = -2147024362;
      v41 = 86;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v41);
    if ( v14 )
      HeapFree(WPF::g_processHeap, 0, v14);
  }
  v10 = 1LL;
LABEL_6:
  if ( v12 < 0 )
  {
    v43 = 5029;
LABEL_85:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v43);
    goto LABEL_24;
  }
  v5 = 1;
LABEL_8:
  v16 = (unsigned int *)((char *)this + 480);
  v17 = *((unsigned int *)this + 120);
  if ( !(_DWORD)v17 || !a4 )
  {
    v18 = *((unsigned int *)this + 121);
    v19 = 0LL;
    if ( (_DWORD)v17 != (_DWORD)v18 )
    {
LABEL_11:
      v20 = *((_QWORD *)this + 62) + 68 * v17;
      *(_OWORD *)v20 = *(_OWORD *)a3;
      *(_OWORD *)(v20 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v20 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v20 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v20 + 64) = *((_DWORD *)a3 + 16);
      ++*v16;
      v21 = *((_DWORD *)this + 126);
      if ( v21 <= *v16 )
        v21 = *v16;
      v22 = 0;
      *((_DWORD *)this + 126) = v21;
      goto LABEL_14;
    }
    v33 = 2 * v18;
    if ( (unsigned __int64)(2 * v18) > 0xFFFFFFFF )
    {
      v22 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v12 = -2147024362;
LABEL_78:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x36u);
      goto LABEL_15;
    }
    if ( v33 <= 8 )
      v33 = 8;
    v22 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v33 <= 0x44 )
    {
      v22 = -2147024809;
    }
    else
    {
      v34 = 68LL * v33;
      if ( !v34 )
        v34 = 1LL;
      v19 = HeapAlloc(WPF::g_processHeap, 0, v34);
      if ( !v19 )
        v22 = -2147024882;
    }
    if ( v22 < 0 )
    {
      v42 = 84;
    }
    else
    {
      v35 = 68LL * *v16;
      if ( v35 <= 0xFFFFFFFF )
      {
        memcpy_0(v19, *((const void **)this + 62), (unsigned int)v35);
        operator delete(*((void **)this + 62));
        v17 = *v16;
        *((_QWORD *)this + 62) = v19;
        *((_DWORD *)this + 121) = v33;
        goto LABEL_11;
      }
      v22 = -2147024362;
      v42 = 86;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, v42);
    if ( v19 )
      HeapFree(WPF::g_processHeap, 0, v19);
LABEL_14:
    v12 = v22;
    if ( v22 >= 0 )
      goto LABEL_15;
    goto LABEL_78;
  }
  v46 = 0;
  v48 = 0;
  v31 = CWatermarkStack<CMILMatrix,8,2,8>::Top((char *)this + 480, v45, v9, 1LL);
  v12 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x3Du);
  }
  else
  {
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v45, (struct CMILMatrix *)v47);
    v32 = CWatermarkStack<CMILMatrix,8,2,8>::Push((char *)this + 480, v47);
    v12 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x45u);
  }
LABEL_15:
  if ( v12 < 0 )
  {
    v43 = 5040;
    goto LABEL_85;
  }
  if ( *v16 )
    v23 = (void *)(*((_QWORD *)this + 62) + 68LL * (*v16 - 1));
  else
    v23 = &CMILMatrix::Identity;
  v24 = (unsigned __int8)CMILMatrix::Is2DAffine<0>(v23, v20, v9, v10) == 0;
  v25 = *((unsigned int *)this + 129);
  v26 = 0LL;
  v27 = *((_DWORD *)this + 128);
  if ( v27 != (_DWORD)v25 )
    goto LABEL_19;
  v36 = 2 * v25;
  if ( (unsigned __int64)(2 * v25) > 0xFFFFFFFF )
  {
    v29 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    v12 = -2147024362;
    goto LABEL_83;
  }
  if ( v36 <= 0x40 )
    v36 = 64;
  v29 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v36 <= 1 )
  {
    v29 = -2147024809;
  }
  else
  {
    v26 = HeapAlloc(WPF::g_processHeap, 0, v36);
    if ( !v26 )
      v29 = -2147024882;
  }
  if ( v29 >= 0 )
  {
    memcpy_0(v26, *((const void **)this + 66), *((unsigned int *)this + 128));
    operator delete(*((void **)this + 66));
    v27 = *((_DWORD *)this + 128);
    *((_QWORD *)this + 66) = v26;
    *((_DWORD *)this + 129) = v36;
LABEL_19:
    *(_BYTE *)(v27 + *((_QWORD *)this + 66)) = v24;
    ++*((_DWORD *)this + 128);
    v28 = *((_DWORD *)this + 134);
    if ( v28 <= *((_DWORD *)this + 128) )
      v28 = *((_DWORD *)this + 128);
    v29 = 0;
    *((_DWORD *)this + 134) = v28;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x54u);
  if ( v26 )
    HeapFree(WPF::g_processHeap, 0, v26);
LABEL_22:
  v12 = v29;
  if ( v29 < 0 )
  {
LABEL_83:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x13B5u);
    goto LABEL_24;
  }
  *((_BYTE *)this + 6824) = 1;
LABEL_24:
  if ( v12 < 0 && v5 )
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
      (int *)this + 112,
      0LL);
  return (unsigned int)v12;
}
