/*
 * XREFs of ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18006C1F0
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18006C500 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18006C860 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800CD870 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800CD9A0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18004D094 (--$ReleaseInterface@UID2D1PrivateCompositorBuffer@@@@YAXAEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800B0300 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x1800B049C (-FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800C75BC (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z @ 0x1800CA50C (--$ReleaseInterface@VCDrawingContext@@@@YAXAEAPEAVCDrawingContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::ReleaseResources(CHwndRenderTarget *this)
{
  __int64 v2; // rdi
  char *v3; // rcx
  __int64 v4; // rcx

  v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  *((_BYTE *)this + 787) = 1;
  v3 = (char *)this + 472;
  *((_DWORD *)v3 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(v3, 16LL);
  *((_BYTE *)this + 792) = 0;
  *((_BYTE *)this + 794) = 0;
  ReleaseInterface<CDisplay>((char *)this + 144);
  *((_BYTE *)this + 785) = 0;
  ReleaseInterface<CDrawingContext>((char *)this + 104);
  v4 = *((_QWORD *)this + 97);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 97) = 0LL;
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 15);
  ReleaseInterface<ID2D1PrivateCompositorBuffer>((__int64 *)this + 16);
  CLegacySurfaceManager::FlushVistaBltPresentHistory((CLegacySurfaceManager *)(v2 + 96));
  if ( *(_QWORD *)(v2 + 376) )
  {
    if ( ++*(_DWORD *)(v2 + 384) > 8u )
      ++*(_DWORD *)(v2 + 392);
    CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)(v2 + 96));
  }
}
