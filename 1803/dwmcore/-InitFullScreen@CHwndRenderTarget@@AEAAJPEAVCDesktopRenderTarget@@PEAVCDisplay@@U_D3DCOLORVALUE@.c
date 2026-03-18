/*
 * XREFs of ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180062824
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z @ 0x1800445F0 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ @ 0x180044DAC (-CreateFullScreenRenderTargets2@CDesktopRenderTarget@@AEAAJXZ.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180157264 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180157474 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18005FD88 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ @ 0x180061BE0 (-EnsureWNFHandles@CHwndRenderTarget@@IEAAJXZ.c)
 *     ?ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ @ 0x1800627E4 (-ShouldUseDisplayPtr@CHwndRenderTarget@@IEBA_NXZ.c)
 *     ?SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1@Z @ 0x180062E94 (-SetTransformParameters@CHwndRenderTarget@@QEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRECT@.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18007A040 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C8A00 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 *     ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800C98A0 (-Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  _DWORD *v12; // rdx
  __int128 v13; // xmm0
  const struct CDisplay *v14; // rdx
  COverlayContext *v15; // rcx
  int updated; // eax
  int v18; // eax

  *((_QWORD *)this + 24) = a2;
  v10 = 0;
  CHwndRenderTarget::ReleaseResources(this);
  v11 = (char *)this + 168;
  ReplaceInterface<CRegionWrapper,CRegionWrapper>((char *)this + 168, a3);
  v12 = (_DWORD *)*((_QWORD *)this + 21);
  v13 = *a4;
  *((_DWORD *)this + 22) = v12[24] - v12[22];
  *((_DWORD *)this + 23) = v12[25] - v12[23];
  *((_BYTE *)this + 160) = a6;
  *((_BYTE *)this + 854) = a7;
  *((_DWORD *)this + 107) = a5;
  *((_DWORD *)this + 112) = a5 & 0xFFFEFFFF;
  *(_OWORD *)((char *)this + 452) = v13;
  if ( CHwndRenderTarget::ShouldUseDisplayPtr(this) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 216LL))(this) )
      *((_QWORD *)this + 65) = *(_QWORD *)(*(_QWORD *)(a3 + 152) + 16LL);
  }
  else
  {
    CHwndRenderTarget::SetTransformParameters(
      this,
      *((unsigned int *)this + 125),
      (char *)this + 484,
      (char *)this + 468);
    if ( *(_QWORD *)v11 )
      *(_DWORD *)(*(_QWORD *)v11 + 320LL) = *((_DWORD *)this + 127);
  }
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 216LL))(this) )
  {
    v14 = *(const struct CDisplay **)v11;
    v15 = (COverlayContext *)*((_QWORD *)this + 105);
    if ( v15 )
    {
      updated = COverlayContext::UpdateDisplay(v15, v14);
      v10 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x80Fu);
    }
    else
    {
      v18 = COverlayContext::Create(*((struct CComposition **)this + 2), v14, (struct COverlayContext **)this + 105);
      v10 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x80Bu);
    }
  }
  CHwndRenderTarget::EnsureWNFHandles(this);
  return v10;
}
