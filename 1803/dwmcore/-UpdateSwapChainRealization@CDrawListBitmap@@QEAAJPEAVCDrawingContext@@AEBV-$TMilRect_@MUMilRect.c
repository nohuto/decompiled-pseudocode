/*
 * XREFs of ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006170
 * Callers:
 *     ?UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800060B0 (-UpdateSwapChains@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18017E1B0 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 *     ?UpdateSwapChains@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802174F0 (-UpdateSwapChains@CCubeMapRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18021BC90 (-UpdateSwapChains@CBrushRenderingEffect@@UEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1800459A0 (-GetDeviceTexture@CDxHandleBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEAPEAVIDeviceTexture@@.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180047860 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006AFF4 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBitmap::UpdateSwapChainRealization(CCompositionSurfaceBitmap **a1, CDrawingContext *a2)
{
  unsigned int v2; // ebx
  CCompositionSurfaceBitmap *v4; // rcx
  struct IDeviceTexture **v6; // rdi
  CCompositionSurfaceBitmap *v7; // rcx
  CCompositionSurfaceBitmap *v8; // rcx
  __int64 (__fastcall *v9)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  struct IDeviceTexture *v11; // rcx
  CDxHandleBitmapRealization *v12; // rbx
  const struct RenderTargetInfo *v13; // rdx
  __int64 (__fastcall *v14)(CDxHandleBitmapRealization *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **); // rax
  int DeviceTexture; // eax
  CDxHandleBitmapRealization *v16; // rcx
  CCompositionSurfaceBitmap *v17; // rcx
  CDxHandleBitmapRealization *v19; // [rsp+60h] [rbp+30h] BYREF
  CCompositionSurfaceBitmap *v20; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v20 = 0LL;
  v4 = *a1;
  if ( !v4
    || (**(int (__fastcall ***)(CCompositionSurfaceBitmap *, GUID *, CCompositionSurfaceBitmap **))v4)(
         v4,
         &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2,
         &v20) < 0 )
  {
    goto LABEL_15;
  }
  v6 = a1 + 1;
  v7 = a1[1];
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v19 = 0LL;
  v8 = *a1;
  v9 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *__hidden, struct IBitmapRealization **))(*(_QWORD *)*a1 + 80LL);
  if ( v9 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
    CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v8, &v19);
  else
    CurrentRenderingRealization = v9(v8, &v19);
  v2 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentRenderingRealization, 0x50u);
    goto LABEL_22;
  }
  v11 = *v6;
  v12 = v19;
  if ( *v6 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v13 = (CDrawingContext *)((char *)a2 + 392);
  v14 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *__hidden, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v12 + 144LL);
  if ( v14 == CDxHandleBitmapRealization::GetDeviceTexture )
    DeviceTexture = CDxHandleBitmapRealization::GetDeviceTexture(v12, v13, v6);
  else
    DeviceTexture = v14(v12, v13, v6);
  v2 = DeviceTexture;
  if ( DeviceTexture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTexture, 0x53u);
LABEL_22:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    goto LABEL_15;
  }
  CDrawingContext::RecordBitmapContentInfo(a2, v20, v20, 0LL);
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(CDxHandleBitmapRealization *))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_15:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v2;
}
