/*
 * XREFs of ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0
 * Callers:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180009FF0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x18000AC34 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@I.c)
 *     ?EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180016E00 (-EnsureRemoteAppRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180028408 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x180028534 (-UpdateSurfaceInfo@CCompositionSurfaceBitmap@@AEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180028C20 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x18002C760 (-PopTarget@CSwRenderTargetGetBounds@@UEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180036D60 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18004BBC4 (-EnsureRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealizati.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BDE0 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800509B0 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180052910 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBUGraphInputParameters@CBrushRenderingGraph@@@Z @ 0x18006C0E4 (-AddNamedInputToFragment@CBrushRenderingGraphBuilder@@AEAAXPEAVCRenderingTechniqueFragment@@AEBU.c)
 *     ?AddRef@CFlipChain@@UEAAKXZ @ 0x180074360 (-AddRef@CFlipChain@@UEAAKXZ.c)
 *     ?AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z @ 0x18007615C (-AddRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJPEAVCBitmapRealization@@@Z.c)
 *     ?Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x180076800 (-Create@CDxHandleBitmapRealization@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAV.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180079484 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18007DBD8 (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180086E7C (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18008D148 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?GetCurrentRenderingRealization@CDeviceTextureImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x18008EE50 (-GetCurrentRenderingRealization@CDeviceTextureImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x18008F910 (-AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ.c)
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x18008FC20 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090284 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CArrayBasedCoverageSet@@UEAAKXZ @ 0x1800903B0 (-AddRef@CArrayBasedCoverageSet@@UEAAKXZ.c)
 *     ?GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800904A0 (-GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18009EE30 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x1800A0FA0 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x1800A8170 (-ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800A83FC (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x1800AA384 (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 *     ?AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z @ 0x1800AB9FC (-AddCompSurfInfoUpdate@CComposition@@QEAAJPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800B9AD4 (-ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@.c)
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x1800B9F78 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 *     ?Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z @ 0x1800BA0CC (-Create@CCompositionSurfaceInfo@@SAJPEAXU_LUID@@PEAVCCompositionSurfaceManager@@PEAPEAV1@@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800BAAB4 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x1800BB780 (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800BBA18 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800BC078 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z @ 0x1800BE04C (-Create@CArrayBasedCoverageSet@@SAJPEAPEAUICoverageSet@@@Z.c)
 *     ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800BE5A4 (-Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z @ 0x1800BEF60 (-Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z.c)
 *     ?AddRef@CGdiSpriteBitmap@@WDI@EAAKXZ @ 0x1800C5FD0 (-AddRef@CGdiSpriteBitmap@@WDI@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@WEA@EAAKXZ @ 0x1800C5FE0 (-AddRef@CCompositionSurfaceBitmap@@WEA@EAAKXZ.c)
 *     ?AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ @ 0x1800C5FF0 (-AddRef@CCompositionSurfaceBitmap@@WFA@EAAKXZ.c)
 *     ?AddRef@CD2DBitmap@@WGI@EAAKXZ @ 0x1800C6320 (-AddRef@CD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CD2DBitmap@@WHA@EAAKXZ @ 0x1800C6330 (-AddRef@CD2DBitmap@@WHA@EAAKXZ.c)
 *     ?AddRef@CD2DBitmap@@WHI@EAAKXZ @ 0x1800C6340 (-AddRef@CD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSwRenderTargetGetBounds@@WBI@EAAKXZ @ 0x1800C6F70 (-AddRef@CSwRenderTargetGetBounds@@WBI@EAAKXZ.c)
 *     ?AddRef@CMILBrushBitmap@@WDA@EAAKXZ @ 0x1800C6F80 (-AddRef@CMILBrushBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CSwRenderTargetGetBounds@@WBA@EAAKXZ @ 0x1800C70F0 (-AddRef@CSwRenderTargetGetBounds@@WBA@EAAKXZ.c)
 *     ?AddRef@CBitmapRealization@@WFI@EAAKXZ @ 0x1800C7100 (-AddRef@CBitmapRealization@@WFI@EAAKXZ.c)
 *     ?AddRef@CBitmapRealization@@WJA@EAAKXZ @ 0x1800C7110 (-AddRef@CBitmapRealization@@WJA@EAAKXZ.c)
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180128180 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ?SetClip@CCoRenderVisualProxy@@UEAAJMM@Z @ 0x180129B20 (-SetClip@CCoRenderVisualProxy@@UEAAJMM@Z.c)
 *     ?SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z @ 0x180129CC0 (-SetOpacity@CCoRenderVisualProxy@@UEAAJM@Z.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180129E60 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 *     ??0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z @ 0x180131860 (--0CMessageConversationHost@@AEAA@PEAUIMessageSession@@@Z.c)
 *     ?AddMoveOptimizationNode@CHwndRenderTarget@@QEAAJPEAVCWindowNode@@@Z @ 0x180135B60 (-AddMoveOptimizationNode@CHwndRenderTarget@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVCDesktopRenderTarget@@@Z @ 0x18013BB40 (-FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVCDesktopRenderTarget@@@Z.c)
 *     ?Show@CCursorVisual@@QEAAXXZ @ 0x18013BDC8 (-Show@CCursorVisual@@QEAAXXZ.c)
 *     ?CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013C240 (-CombineMove@CDrawingContext@@QEAAJPEAUMoveOptimizationInfo@@PEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHRGN__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x18013C47C (-Create@MoveOptimizationInfo@@SAJPEBVCVisual@@MMPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18013E710 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x180142E20 (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x180149600 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ??0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChannelContext@@AEBUWICRect@@_K@Z @ 0x18014A178 (--0MagnifierCaptureBitsResponse@@QEAA@PEAVCSurfaceManager@@PEAVCMagnifierRenderTarget@@PEAVCChan.c)
 *     ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x18015A8C4 (-ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_.c)
 *     ?Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z @ 0x18015DCD0 (-Create@CCompositionSurfaceBitmap@@SAJPEAVCComposition@@PEAVCCompositionSurfaceInfo@@PEAPEAV1@@Z.c)
 *     ??$ReplaceInterface@VIBitmapSource@@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVIBitmapSource@@PEAVCBitmapOfDeviceBitmaps@@@Z @ 0x180164838 (--$ReplaceInterface@VIBitmapSource@@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVIBitmapSource@@PEAVCBit.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180167918 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180175E30 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 *     ?CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801788A4 (-CreateFromColor@CSolidColorLegacyMilBrush@@SAJPEAPEAV1@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180179234 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180194C10 (-Create@CInputManager@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x1801B3E6C (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 *     ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1801BAB50 (-ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 *     ?Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z @ 0x1801BB03C (-Create@CBitmapColorKey@@SAJPEAVIBitmapSource@@PEBVCColorKey@@PEAPEAV1@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801BFC88 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1801BFDF0 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1801C05D8 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801C1664 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801C28A0 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801C5DE4 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 *     ?Create@CMILFactory@@SAJPEAPEAV1@@Z @ 0x1801CE980 (-Create@CMILFactory@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801D2CE0 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801941BC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILCOMBase::InternalAddRef(CMILCOMBase *this)
{
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+90h] [rbp+8h] BYREF

  if ( *((int *)this + 2) < 0 )
  {
    while ( 1 )
    {
      v3 = IsKernelDebuggerPresent();
      Response = 63;
      v4 = v3;
      if ( !v3 )
      {
        v5 = IsDebuggerPresent();
        v6 = Response;
        if ( v5 )
          v6 = 103;
        LOBYTE(Response) = v6;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        (const wchar_t *)&word_1801EFDD8,
        (const wchar_t *)&word_1801EFDD8,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        31);
      if ( !v4 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        JUMPOUT(0x1800D6D4FLL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        case 'G':
        case 'g':
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_14;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_14;
        default:
LABEL_14:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
