/*
 * XREFs of ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180077024
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180007680 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180011A40 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180055E70 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006CA58 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z @ 0x180072BEC (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@_N@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18008E120 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180099560 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18017BC04 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJPEAPEAVCSurfaceDrawListBrush@@PE.c)
 *     ?SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017C73C (-SetTransparent@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x180185584 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180189B60 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180190480 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801BD518 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1450 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?GetCurrentRenderingRealization@CDeviceTextureImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800130F0 (-GetCurrentRenderingRealization@CDeviceTextureImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180013120 (-GetDeviceTexture@CAtlasImageSource@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800459A0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180047860 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddRef@CRenderTargetImageSource@@UEAAKXZ @ 0x180089F70 (-AddRef@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ?GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18008A090 (-GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18008A1B0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800B4370 (-GetDeviceTexture@CCachedVisualImage@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800B4410 (-GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::FromImageSource(
        struct IImageSource **this,
        struct IImageSource *a2,
        const struct CDrawingContext *a3,
        char a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v8)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  unsigned int v11; // ebx
  struct IDeviceTexture *v12; // rcx
  struct _LUID *v13; // r14
  CDxHandleBitmapRealization *v14; // rbx
  int (*v15)(CCachedVisualImage *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  unsigned int (__fastcall *v17)(CRenderTargetImageSource *__hidden); // rax
  struct IImageSource *v18; // rcx
  struct IDeviceTexture *v19; // rax
  struct IImageSource *v20; // rcx
  struct IDeviceTexture *v21; // rcx
  struct IBitmapRealization *v22; // rcx
  struct IBitmapRealization *v24[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IDeviceTexture *v25; // [rsp+68h] [rbp+28h] BYREF

  v4 = *(_QWORD *)a2;
  v24[0] = 0LL;
  v25 = 0LL;
  v8 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(v4 + 80);
  if ( v8 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
  {
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(a2, v24);
  }
  else if ( v8 == CRenderTargetImageSource::GetCurrentRenderingRealization )
  {
    CurrentRenderingRealization = CRenderTargetImageSource::GetCurrentRenderingRealization(a2, v24);
  }
  else if ( v8 == CDeviceTextureImageSource::GetCurrentRenderingRealization )
  {
    CurrentRenderingRealization = CDeviceTextureImageSource::GetCurrentRenderingRealization(a2, v24);
  }
  else if ( v8 == CCachedVisualImage::GetCurrentRenderingRealization )
  {
    CurrentRenderingRealization = CCachedVisualImage::GetCurrentRenderingRealization(a2, v24);
  }
  else
  {
    CurrentRenderingRealization = v8(a2, v24);
  }
  v11 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentRenderingRealization, 0x27u);
  }
  else
  {
    v12 = v25;
    v13 = (struct _LUID *)((char *)a3 + 392);
    v14 = v24[0];
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v15 = *(int (**)(CCachedVisualImage *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v14 + 144LL);
    if ( (char *)v15 == (char *)CDxHandleBitmapRealization::GetDeviceTexture )
    {
      DeviceTexture = CDxHandleBitmapRealization::GetDeviceTexture(v14, v13, &v25);
    }
    else if ( v15 == CRenderTargetBitmap::GetDeviceTexture )
    {
      DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(v14, (const struct RenderTargetInfo *)v13, &v25);
    }
    else if ( (char *)v15 == (char *)CAtlasImageSource::GetDeviceTexture )
    {
      DeviceTexture = CAtlasImageSource::GetDeviceTexture(v14, (const struct RenderTargetInfo *)v13, &v25);
    }
    else if ( v15 == CCachedVisualImage::GetDeviceTexture )
    {
      DeviceTexture = CCachedVisualImage::GetDeviceTexture(v14, (const struct RenderTargetInfo *)v13, &v25);
    }
    else
    {
      DeviceTexture = ((__int64 (__fastcall *)(CDxHandleBitmapRealization *, struct _LUID *, struct IDeviceTexture **))v15)(
                        v14,
                        v13,
                        &v25);
    }
    v11 = DeviceTexture;
    if ( DeviceTexture < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTexture, 0x2Au);
    }
    else
    {
      if ( *this != a2 )
      {
        v17 = *(unsigned int (__fastcall **)(CRenderTargetImageSource *__hidden))(*(_QWORD *)a2 + 8LL);
        if ( v17 == CRenderTargetImageSource::AddRef )
          CRenderTargetImageSource::AddRef(a2);
        else
          v17(a2);
        v18 = *this;
        *this = a2;
        if ( v18 )
          (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v19 = v25;
      v20 = this[1];
      v25 = 0LL;
      this[1] = v19;
      if ( v20 )
        (*(void (__fastcall **)(struct IImageSource *))(*(_QWORD *)v20 + 16LL))(v20);
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
  return v11;
}
