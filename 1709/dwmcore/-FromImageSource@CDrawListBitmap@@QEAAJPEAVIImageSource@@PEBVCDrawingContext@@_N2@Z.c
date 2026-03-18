/*
 * XREFs of ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N2@Z @ 0x180048684
 * Callers:
 *     ?DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCBitmapResource@@AEBUMilRectF@@@Z @ 0x18001D8BC (-DrawBitmapResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028FA0 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18003E458 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x1800477BC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A670 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18006F640 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180071090 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18015275C (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x18015359C (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x18015C540 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801602C0 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801679F0 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180188018 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180028C20 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18004D7E0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentRenderingRealization@CDeviceTextureImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18008EE50 (-GetCurrentRenderingRealization@CDeviceTextureImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008EE80 (-GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::FromImageSource(
        CDrawListBitmap *this,
        struct IImageSource *a2,
        const struct CDrawingContext *a3,
        char a4,
        bool a5)
{
  __int64 v5; // rax
  __int64 (__fastcall *v9)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  unsigned int v12; // ebx
  struct IDeviceTexture *v13; // rcx
  const struct RenderTargetInfo *v14; // r14
  CDxHandleBitmapRealization *v15; // rbx
  int (*v16)(CAtlasImageSource *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  __int64 v18; // rcx
  struct IDeviceTexture *v19; // rax
  __int64 v20; // rcx
  struct IDeviceTexture *v21; // rcx
  struct IBitmapRealization *v22; // rcx
  struct IBitmapRealization *v24[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IDeviceTexture *v25; // [rsp+68h] [rbp+28h] BYREF

  v5 = *(_QWORD *)a2;
  v24[0] = 0LL;
  v25 = 0LL;
  v9 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(v5 + 80);
  if ( v9 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
  {
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(a2, v24);
  }
  else if ( v9 == CDeviceTextureImageSource::GetCurrentRenderingRealization )
  {
    CurrentRenderingRealization = CDeviceTextureImageSource::GetCurrentRenderingRealization(a2, v24);
  }
  else
  {
    CurrentRenderingRealization = v9(a2, v24);
  }
  v12 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    if ( a5 )
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 1);
      v12 = 0;
      *((_BYTE *)this + 16) = 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentRenderingRealization, 0x30u);
    }
  }
  else
  {
    v13 = v25;
    v14 = (const struct CDrawingContext *)((char *)a3 + 392);
    v15 = v24[0];
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v16 = *(int (**)(CAtlasImageSource *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v15 + 144LL);
    if ( (char *)v16 == (char *)CDxHandleBitmapRealization::GetDeviceTexture )
    {
      DeviceTexture = CDxHandleBitmapRealization::GetDeviceTexture(v15, v14, &v25);
    }
    else if ( v16 == CAtlasImageSource::GetDeviceTexture )
    {
      DeviceTexture = CAtlasImageSource::GetDeviceTexture(v15, v14, &v25);
    }
    else
    {
      DeviceTexture = ((__int64 (__fastcall *)(CDxHandleBitmapRealization *, const struct RenderTargetInfo *, struct IDeviceTexture **))v16)(
                        v15,
                        v14,
                        &v25);
    }
    v12 = DeviceTexture;
    if ( DeviceTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTexture, 0x37u);
    }
    else
    {
      if ( *(struct IImageSource **)this != a2 )
      {
        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)a2 + 8LL))(a2);
        v18 = *(_QWORD *)this;
        *(_QWORD *)this = a2;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = v25;
      v20 = *((_QWORD *)this + 1);
      v25 = 0LL;
      *((_QWORD *)this + 1) = v19;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      *((_BYTE *)this + 16) = a4;
    }
  }
  v21 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(struct IBitmapRealization *))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v12;
}
