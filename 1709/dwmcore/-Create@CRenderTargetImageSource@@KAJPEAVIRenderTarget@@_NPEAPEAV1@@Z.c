/*
 * XREFs of ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8
 * Callers:
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18003E458 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800B1DD4 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801392C0 (-Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014B9FC (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18014D014 (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowIntermediates@1@@Z @ 0x18015FC9C (-GenerateBlurIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@MAEAUShadowInte.c)
 *     ?GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowIntermediates@1@@Z @ 0x18015FFB4 (-GenerateMaskIntermediate@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@AEAUShadowInter.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801A78CC (-GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18008B778 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18008B8B4 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ??0CRenderTargetImageSource@@IEAA@_N@Z @ 0x180090348 (--0CRenderTargetImageSource@@IEAA@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetImageSource::Create(
        struct IRenderTarget *a1,
        bool a2,
        struct CRenderTargetImageSource **a3)
{
  signed int v6; // eax
  unsigned int v7; // ebx
  CRenderTargetImageSource *v8; // rax
  struct CRenderTargetImageSource *v9; // rdi
  bool v10; // sf
  __int64 v11; // rax
  int v12; // eax
  DWORD v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-20h]
  struct IRenderTargetDisplay *v16; // [rsp+30h] [rbp-10h] BYREF
  _BYTE v17[8]; // [rsp+38h] [rbp-8h] BYREF
  struct CRenderTargetImageSource *v18; // [rsp+60h] [rbp+20h] BYREF
  struct IRenderTargetBitmap *v19; // [rsp+78h] [rbp+38h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *, _QWORD))(*(_QWORD *)a1 + 88LL))(a1, v17, 0LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x16u);
    return v7;
  }
  v8 = (CRenderTargetImageSource *)HeapAlloc(WPF::g_processHeap, 0, 0xC0uLL);
  if ( v8 )
    v9 = CRenderTargetImageSource::CRenderTargetImageSource(v8, a2);
  else
    v9 = 0LL;
  v18 = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    v15 = 26;
    v14 = -2147024882;
    goto LABEL_18;
  }
  (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = (**(int (__fastcall ***)(struct IRenderTarget *, GUID *, struct IRenderTargetBitmap **))a1)(
          a1,
          &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
          &v19) < 0;
  v11 = *(_QWORD *)a1;
  if ( v10 )
  {
    v12 = (*(__int64 (__fastcall **)(struct IRenderTarget *, GUID *, struct IRenderTargetDisplay **))v11)(
            a1,
            &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
            &v16);
    v7 = v12;
    if ( v12 < 0 )
    {
      v15 = 37;
    }
    else
    {
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 16LL))(a1);
      v12 = CRenderTargetBitmap::Initialize((struct CRenderTargetImageSource *)((char *)v9 + 8), v16);
      v7 = v12;
      if ( v12 >= 0 )
        goto LABEL_7;
      v15 = 40;
    }
    goto LABEL_15;
  }
  (*(void (__fastcall **)(struct IRenderTarget *))(v11 + 16))(a1);
  v12 = CRenderTargetBitmap::Initialize((struct CRenderTargetImageSource *)((char *)v9 + 8), v19);
  v7 = v12;
  if ( v12 < 0 )
  {
    v15 = 32;
LABEL_15:
    v14 = v12;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, v15);
    goto LABEL_8;
  }
LABEL_7:
  v18 = 0LL;
  *a3 = v9;
LABEL_8:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v18);
  return v7;
}
