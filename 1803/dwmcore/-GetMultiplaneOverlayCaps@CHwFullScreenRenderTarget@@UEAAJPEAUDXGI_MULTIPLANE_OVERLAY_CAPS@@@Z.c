/*
 * XREFs of ?GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18007C610
 * Callers:
 *     ?GetMultiplaneOverlayCaps@CHDRConversionRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1801F2C10 (-GetMultiplaneOverlayCaps@CHDRConversionRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x1800464C0 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetMultiplaneOverlayCaps(
        CHwFullScreenRenderTarget *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwFullScreenRenderTarget *)((char *)this - 216));
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v4, 0x19Fu);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(**((_QWORD **)this + 4) + 192LL))(
           *((_QWORD *)this + 4),
           a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v6, 0x1A1u);
  }
  return v5;
}
