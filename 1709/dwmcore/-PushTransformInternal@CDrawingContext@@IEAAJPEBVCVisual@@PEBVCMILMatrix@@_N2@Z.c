/*
 * XREFs of ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18003B39C (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18003CBF0 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@_N@Z @ 0x18003D474 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@AEBVCShape@@.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x18003F3AC (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18003FE70 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180040290 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180042E90 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N333333@Z @ 0x180043010 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180080600 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800B1DD4 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18012F544 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18013A398 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18013CE88 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18013D8B8 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?RedrawVisual@CDrawingContext@@AEAAJV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18013EEC0 (-RedrawVisual@CDrawingContext@@AEAAJV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z @ 0x18013F0D4 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014D014 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015F810 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18015FFB4 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D7D0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x18018BD68 (-Realize@CDeviceAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingCon.c)
 *     ?CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x18018C5CC (-CreateSurfaceAndContext@CViewportAlignedIntermediateRealizer@@AEAAJPEBVCMILMatrix@@000IIPEAPEAV.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180045A3C (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18007B490 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x18007B4E4 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007B590 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushTransformInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct CMILMatrix *a3,
        char a4,
        bool a5)
{
  char v6; // r12
  __int64 v9; // rax
  int v10; // edi
  void *v11; // rsi
  unsigned int v12; // eax
  _DWORD *v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  void *v16; // rdi
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ebp
  void *v20; // rcx
  bool v21; // di
  __int64 v22; // rax
  void *v23; // rbp
  unsigned int v24; // ecx
  int v25; // esi
  int v27; // eax
  int v28; // eax
  unsigned int v29; // r15d
  SIZE_T v30; // r8
  unsigned __int64 v31; // rcx
  unsigned int v32; // r14d
  unsigned __int64 v33; // rax
  unsigned int v34; // r15d
  SIZE_T v35; // r8
  unsigned int v36; // ecx
  unsigned __int64 v37; // rax
  unsigned int v38; // [rsp+20h] [rbp-E8h]
  __int128 v39; // [rsp+30h] [rbp-D8h]
  _BYTE v40[64]; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+80h] [rbp-88h]
  _BYTE v42[64]; // [rsp+90h] [rbp-78h] BYREF
  int v43; // [rsp+D0h] [rbp-38h]

  v6 = 0;
  if ( !a5 )
    goto LABEL_8;
  v9 = *((unsigned int *)this + 113);
  v10 = 0;
  v11 = 0LL;
  LODWORD(v39) = 4;
  *((_QWORD *)&v39 + 1) = a2;
  if ( *((_DWORD *)this + 112) != (_DWORD)v9 )
    goto LABEL_3;
  v33 = 2 * v9;
  if ( v33 <= 0xFFFFFFFF )
  {
    v34 = v33;
    if ( (unsigned int)v33 <= 0x40 )
      v34 = 64;
    v10 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v34 <= 0x10 )
    {
      v10 = -2147024809;
    }
    else
    {
      v35 = 16LL * v34;
      if ( !v35 )
        v35 = 1LL;
      v11 = HeapAlloc(WPF::g_processHeap, 0, v35);
      if ( !v11 )
        v10 = -2147024882;
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x54u);
    }
    else
    {
      v36 = -1;
      v37 = 16LL * *((unsigned int *)this + 112);
      if ( v37 <= 0xFFFFFFFF )
        v36 = 16 * *((_DWORD *)this + 112);
      v10 = 0;
      if ( v37 <= 0xFFFFFFFF )
      {
        memcpy_0(v11, *((const void **)this + 58), v36);
        WPF::ProcessHeapImpl::Free(*((void **)this + 58));
        *((_QWORD *)this + 58) = v11;
        *((_DWORD *)this + 113) = v34;
LABEL_3:
        *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * (unsigned int)(*((_DWORD *)this + 112))++) = v39;
        v12 = *((_DWORD *)this + 118);
        if ( v12 <= *((_DWORD *)this + 112) )
          v12 = *((_DWORD *)this + 112);
        *((_DWORD *)this + 118) = v12;
        goto LABEL_6;
      }
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v11 )
      HeapFree(WPF::g_processHeap, 0, v11);
    goto LABEL_6;
  }
  v10 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_6:
  if ( v10 < 0 )
  {
    v38 = 4857;
LABEL_85:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v38);
    goto LABEL_24;
  }
  v6 = 1;
LABEL_8:
  v13 = (_DWORD *)((char *)this + 480);
  v14 = *((_DWORD *)this + 120);
  if ( !v14 || !a4 )
  {
    v15 = *((unsigned int *)this + 121);
    v16 = 0LL;
    if ( v14 != (_DWORD)v15 )
    {
LABEL_11:
      v17 = *((_QWORD *)this + 62) + 68LL * *((unsigned int *)this + 120);
      *(_OWORD *)v17 = *(_OWORD *)a3;
      *(_OWORD *)(v17 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v17 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v17 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v17 + 64) = *((_DWORD *)a3 + 16);
      v18 = ++*v13;
      if ( *((_DWORD *)this + 126) > *v13 )
        v18 = *((_DWORD *)this + 126);
      v19 = 0;
      *((_DWORD *)this + 126) = v18;
      goto LABEL_14;
    }
    v29 = 2 * v15;
    if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
    {
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
      v10 = -2147024362;
LABEL_78:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x36u);
      goto LABEL_15;
    }
    if ( v29 <= 8 )
      v29 = 8;
    v19 = 0;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v29 <= 0x44 )
    {
      v19 = -2147024809;
    }
    else
    {
      v30 = 68LL * v29;
      if ( !v30 )
        v30 = 1LL;
      v16 = HeapAlloc(WPF::g_processHeap, 0, v30);
      if ( !v16 )
        v19 = -2147024882;
    }
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x54u);
    }
    else
    {
      v31 = 68LL * (unsigned int)*v13;
      if ( v31 <= 0xFFFFFFFF )
      {
        memcpy_0(v16, *((const void **)this + 62), (unsigned int)v31);
        WPF::ProcessHeapImpl::Free(*((void **)this + 62));
        *((_QWORD *)this + 62) = v16;
        *((_DWORD *)this + 121) = v29;
        goto LABEL_11;
      }
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
    }
    if ( v16 )
      HeapFree(WPF::g_processHeap, 0, v16);
LABEL_14:
    v10 = v19;
    if ( v19 >= 0 )
      goto LABEL_15;
    goto LABEL_78;
  }
  v41 = 0;
  v43 = 0;
  v27 = CWatermarkStack<CMILMatrix,8,2,8>::Top((char *)this + 480, v40, a3, 0xFFFFFFFFLL);
  v10 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x3Du);
  }
  else
  {
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v40, (struct CMILMatrix *)v42);
    v28 = CWatermarkStack<CMILMatrix,8,2,8>::Push((char *)this + 480, v42);
    v10 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x45u);
  }
LABEL_15:
  if ( v10 < 0 )
  {
    v38 = 4868;
    goto LABEL_85;
  }
  if ( *v13 )
    v20 = (void *)(*((_QWORD *)this + 62) + 68LL * (unsigned int)(*v13 - 1));
  else
    v20 = &CMILMatrix::Identity;
  v21 = (unsigned __int8)CMILMatrix::Is2DAffine<0>(v20) == 0;
  v22 = *((unsigned int *)this + 129);
  v23 = 0LL;
  if ( *((_DWORD *)this + 128) != (_DWORD)v22 )
    goto LABEL_19;
  v32 = 2 * v22;
  if ( (unsigned __int64)(2 * v22) > 0xFFFFFFFF )
  {
    v25 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    v10 = -2147024362;
    goto LABEL_83;
  }
  if ( v32 <= 0x40 )
    v32 = 64;
  v25 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v32 <= 1 )
  {
    v25 = -2147024809;
  }
  else
  {
    v23 = HeapAlloc(WPF::g_processHeap, 0, v32);
    if ( !v23 )
      v25 = -2147024882;
  }
  if ( v25 >= 0 )
  {
    memcpy_0(v23, *((const void **)this + 66), *((unsigned int *)this + 128));
    WPF::ProcessHeapImpl::Free(*((void **)this + 66));
    *((_QWORD *)this + 66) = v23;
    *((_DWORD *)this + 129) = v32;
LABEL_19:
    *(_BYTE *)((unsigned int)(*((_DWORD *)this + 128))++ + *((_QWORD *)this + 66)) = v21;
    v24 = *((_DWORD *)this + 128);
    if ( *((_DWORD *)this + 134) > v24 )
      v24 = *((_DWORD *)this + 134);
    v25 = 0;
    *((_DWORD *)this + 134) = v24;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x54u);
  if ( v23 )
    HeapFree(WPF::g_processHeap, 0, v23);
LABEL_22:
  v10 = v25;
  if ( v25 < 0 )
  {
LABEL_83:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x1309u);
    goto LABEL_24;
  }
  *((_BYTE *)this + 6824) = 1;
LABEL_24:
  if ( v10 < 0 && v6 )
    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
      (char *)this + 448,
      0LL);
  return (unsigned int)v10;
}
