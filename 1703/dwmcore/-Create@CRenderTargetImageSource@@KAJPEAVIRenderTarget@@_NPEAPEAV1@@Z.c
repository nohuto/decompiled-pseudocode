/*
 * XREFs of ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00
 * Callers:
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18000E3F0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180019824 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18001C22C (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180157928 (-RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801580C8 (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015C9A0 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GetImageSourceForRender@CCachedVisualImage@@QEAAJAEBURenderTargetInfo@@PEAPEAVIImageSource@@@Z @ 0x180165654 (-GetImageSourceForRender@CCachedVisualImage@@QEAAJAEBURenderTargetInfo@@PEAPEAVIImageSource@@@Z.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x180170EF4 (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18017122C (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180178460 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180180AA0 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x180196D10 (-GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x180047224 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180047358 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CRenderTargetImageSource@@IEAA@AEBU_GUID@@_N@Z @ 0x1800AF978 (--0CRenderTargetImageSource@@IEAA@AEBU_GUID@@_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetImageSource::Create(
        struct IRenderTarget *a1,
        char a2,
        struct CRenderTargetImageSource **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  CRenderTargetImageSource *v8; // rax
  CRenderTargetImageSource *v9; // rdi
  bool v10; // sf
  __int64 v11; // rax
  int v12; // eax
  int v13; // r9d
  unsigned int v15; // [rsp+20h] [rbp-50h]
  CRenderTargetImageSource *v16; // [rsp+30h] [rbp-40h] BYREF
  struct IRenderTargetBitmap *v17; // [rsp+38h] [rbp-38h] BYREF
  struct IRenderTargetDisplay *v18; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v19[8]; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v20; // [rsp+50h] [rbp-20h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *, _QWORD, struct _GUID *))(*(_QWORD *)a1 + 104LL))(
         a1,
         v19,
         0LL,
         &v20);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x17u);
    return v7;
  }
  v8 = (CRenderTargetImageSource *)HeapAlloc(WPF::g_processHeap, 0, 0xD8uLL);
  if ( v8 )
    v9 = CRenderTargetImageSource::CRenderTargetImageSource(v8, &v20, a2);
  else
    v9 = 0LL;
  v16 = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    v15 = 28;
    v13 = -2147024882;
    goto LABEL_16;
  }
  (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = (**(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IRenderTargetBitmap **))a1)(
          a1,
          &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
          &v17) < 0;
  v11 = *(_QWORD *)a1;
  if ( v10 )
  {
    v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, GUID *, struct IRenderTargetDisplay **))v11)(
            a1,
            &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
            &v18);
    v7 = v12;
    if ( v12 < 0 )
    {
      v15 = 39;
      goto LABEL_9;
    }
    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 16LL))(a1);
    v12 = CRenderTargetBitmap::Initialize((CRenderTargetImageSource *)((char *)v9 + 8), v18);
    v7 = v12;
    if ( v12 < 0 )
    {
      v15 = 42;
      goto LABEL_9;
    }
  }
  else
  {
    (*(void (__fastcall **)(struct IRenderTarget *))(v11 + 16))(a1);
    v12 = CRenderTargetBitmap::Initialize(
            (CRenderTargetImageSource *)((char *)v9 + 8),
            (__int64 (__fastcall ***)(struct IRenderTargetBitmap *, GUID *, CHwTextureRenderTarget **))v17);
    v7 = v12;
    if ( v12 < 0 )
    {
      v15 = 34;
LABEL_9:
      v13 = v12;
LABEL_16:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v15);
      goto LABEL_17;
    }
  }
  v16 = 0LL;
  *a3 = v9;
LABEL_17:
  Microsoft::WRL::ComPtr<CRenderTargetImageSource>::InternalRelease(&v16);
  return v7;
}
