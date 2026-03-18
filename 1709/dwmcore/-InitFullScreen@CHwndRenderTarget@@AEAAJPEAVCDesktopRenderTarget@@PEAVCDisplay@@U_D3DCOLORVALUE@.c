/*
 * XREFs of ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800163A0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180016AA4 (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180133118 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180133320 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x180017318 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800177E4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x1800196C0 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x180019C14 (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18006777C (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C0664 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x180141990 (-Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::InitFullScreen(
        CHwndRenderTarget *this,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        int a5,
        char a6,
        char a7)
{
  unsigned int v10; // esi
  char *v11; // r14
  __int128 v12; // xmm0
  const struct CDisplay *v13; // rdx
  COverlayContext *v14; // rcx
  int updated; // eax
  int v17; // eax

  *((_QWORD *)this + 17) = a2;
  v10 = 0;
  CHwndRenderTarget::ReleaseResources(this);
  v11 = (char *)this + 112;
  ReplaceInterface<CRegionWrapper,CRegionWrapper>((char *)this + 112, a3);
  v12 = *a4;
  *((_BYTE *)this + 800) = a6;
  *((_BYTE *)this + 809) = a7;
  *((_DWORD *)this + 93) = a5;
  *((_DWORD *)this + 98) = a5 & 0xFFFEFFFF;
  *(_OWORD *)((char *)this + 396) = v12;
  if ( CHwndRenderTarget::ShouldUseDisplayPtr(this) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 192LL))(this) )
      *((_QWORD *)this + 59) = *(_QWORD *)(*(_QWORD *)(a3 + 128) + 16LL);
  }
  else
  {
    CHwndRenderTarget::SetTransformParameters(
      (__int64)this,
      *((_DWORD *)this + 113),
      (__int128 *)((char *)this + 428),
      (CHwndRenderTarget *)((char *)this + 412));
    if ( *(_QWORD *)v11 )
      *(_DWORD *)(*(_QWORD *)v11 + 300LL) = *((_DWORD *)this + 115);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 192LL))(this)
    && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 200LL))(this) )
  {
    v13 = *(const struct CDisplay **)v11;
    v14 = (COverlayContext *)*((_QWORD *)this + 99);
    if ( v14 )
    {
      updated = COverlayContext::UpdateDisplay(v14, v13);
      v10 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x841u);
    }
    else
    {
      v17 = COverlayContext::Create(*((struct CComposition **)this + 2), v13, (struct COverlayContext **)this + 99);
      v10 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x83Du);
    }
  }
  CHwndRenderTarget::EnsureWNFHandles(this);
  return v10;
}
