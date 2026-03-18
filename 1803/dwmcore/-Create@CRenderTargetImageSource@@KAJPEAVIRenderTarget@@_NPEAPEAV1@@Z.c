/*
 * XREFs of ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800C0A50
 * Callers:
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x180007D10 (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800093C4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000BF08 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006CA58 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18015BA40 (-Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180174870 (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x1801750CC (-RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180176318 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowIntermediates@1@@Z @ 0x180189550 (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowInte.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x180189860 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 *     ?GenerateBlurIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18019FD0C (-GenerateBlurIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A0014 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A01F0 (-GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801A143C (-GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B484C (-GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CRenderTargetImageSource@@IEAA@_N@Z @ 0x180089F08 (--0CRenderTargetImageSource@@IEAA@_N@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18008A688 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18008A7C4 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C2418 (-InternalAddRef@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C244C (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetImageSource::Create(
        struct IRenderTarget *a1,
        bool a2,
        struct CRenderTargetImageSource **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CRenderTargetImageSource *v8; // rax
  CRenderTargetImageSource *v9; // rdi
  int v10; // eax
  __int64 v11; // r9
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-20h]
  struct IRenderTargetDisplay *v15; // [rsp+30h] [rbp-10h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-8h] BYREF
  CRenderTargetImageSource *v17; // [rsp+60h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v18; // [rsp+78h] [rbp+38h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *, _QWORD))(*(_QWORD *)a1 + 136LL))(a1, v16, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x16u);
    return v7;
  }
  v8 = (CRenderTargetImageSource *)HeapAlloc(WPF::g_processHeap, 0, 0xC0uLL);
  if ( v8 )
    v9 = CRenderTargetImageSource::CRenderTargetImageSource(v8, a2);
  else
    v9 = 0LL;
  v17 = v9;
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalAddRef(&v17);
  if ( !v9 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Au);
    goto LABEL_8;
  }
  v10 = (**(__int64 (__fastcall ***)(struct IRenderTarget *, GUID *, struct IRenderTargetBitmap **))a1)(
          a1,
          &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
          &v18);
  v11 = *(_QWORD *)a1;
  if ( v10 < 0 )
  {
    v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, GUID *, struct IRenderTargetDisplay **))v11)(
            a1,
            &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
            &v15);
    v7 = v12;
    if ( v12 < 0 )
    {
      v14 = 37;
    }
    else
    {
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 16LL))(a1);
      v12 = CRenderTargetBitmap::Initialize((CRenderTargetImageSource *)((char *)v9 + 8), v15);
      v7 = v12;
      if ( v12 >= 0 )
        goto LABEL_7;
      v14 = 40;
    }
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v14);
    goto LABEL_8;
  }
  (*(void (__fastcall **)(struct IRenderTarget *))(v11 + 16))(a1);
  v12 = CRenderTargetBitmap::Initialize(
          (CRenderTargetImageSource *)((char *)v9 + 8),
          (__int64 (__fastcall ***)(struct IRenderTargetBitmap *, GUID *, CHwTextureRenderTarget **))v18);
  v7 = v12;
  if ( v12 < 0 )
  {
    v14 = 32;
    goto LABEL_16;
  }
LABEL_7:
  v17 = 0LL;
  *a3 = v9;
LABEL_8:
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v17);
  return v7;
}
