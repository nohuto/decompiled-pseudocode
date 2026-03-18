/*
 * XREFs of ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800177E4
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x180135A60 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1801362D0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180067888 (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x18007F530 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x18007F6FC (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BC2AC (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800C0CA8 (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 */

void __fastcall CHwndRenderTarget::ReleaseResources(CHwndRenderTarget *this)
{
  __int64 v2; // rdi
  char *v3; // rcx
  COverlayContext *v4; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 80LL);
  *((_BYTE *)this + 802) = 1;
  v3 = (char *)this + 488;
  *((_DWORD *)v3 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v3, 16LL);
  *((_BYTE *)this + 805) = 0;
  *((_BYTE *)this + 807) = 0;
  ReleaseInterface<CDisplay>((char *)this + 144);
  ReleaseInterface<CDrawingContext>((char *)this + 104);
  v4 = (COverlayContext *)*((_QWORD *)this + 99);
  if ( v4 )
    COverlayContext::UpdateRenderTarget(v4, 0LL);
  ReleaseInterface<ID2D1Geometry>((char *)this + 120);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((char *)this + 128);
  CLegacySurfaceManager::FlushVistaBltPresentHistory((CLegacySurfaceManager *)(v2 + 96));
  if ( *(_QWORD *)(v2 + 376) )
  {
    if ( ++*(_DWORD *)(v2 + 384) > 8u )
      ++*(_DWORD *)(v2 + 392);
    CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v2 + 96));
  }
}
