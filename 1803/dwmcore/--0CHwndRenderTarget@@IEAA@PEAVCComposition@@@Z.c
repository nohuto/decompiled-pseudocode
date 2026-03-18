/*
 * XREFs of ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180062CAC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1800C8F88 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x180157264 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180157474 (-CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180042224 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CHwndRenderTarget *__fastcall CHwndRenderTarget::CHwndRenderTarget(CHwndRenderTarget *this, struct CComposition *a2)
{
  float v3; // xmm0_4
  CHwndRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  v3 = CCommonRegistryData::m_flSDRBoostOverride;
  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 127) = 0;
  *((_QWORD *)this + 67) = (char *)this + 568;
  *((_QWORD *)this + 68) = (char *)this + 568;
  *((_DWORD *)this + 138) = 8;
  *(_QWORD *)((char *)this + 556) = 8LL;
  *((_QWORD *)this + 87) = (char *)this + 728;
  *((_QWORD *)this + 88) = (char *)this + 728;
  *((_DWORD *)this + 178) = 5;
  *(_QWORD *)((char *)this + 716) = 5LL;
  *((_QWORD *)this + 96) = (char *)this + 800;
  *((_QWORD *)this + 97) = (char *)this + 800;
  *((_DWORD *)this + 196) = 5;
  *(_QWORD *)((char *)this + 788) = 5LL;
  *((_DWORD *)this + 107) = 0;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 116) = 1065353216;
  *((_WORD *)this + 80) = 257;
  *((_BYTE *)this + 860) = 1;
  result = this;
  *((_DWORD *)this + 52) = 1;
  *((float *)this + 126) = v3;
  *((_WORD *)this + 142) = 32085;
  *(_OWORD *)((char *)this + 220) = _xmm;
  *(_OWORD *)((char *)this + 236) = _xmm;
  *(_OWORD *)((char *)this + 252) = _xmm;
  *(_OWORD *)((char *)this + 268) = _xmm;
  *((_WORD *)this + 176) = 32085;
  *((_OWORD *)this + 18) = _xmm;
  *((_OWORD *)this + 19) = _xmm;
  *((_OWORD *)this + 20) = _xmm;
  *((_OWORD *)this + 21) = _xmm;
  *((_WORD *)this + 210) = 32085;
  *(_OWORD *)((char *)this + 356) = _xmm;
  *(_OWORD *)((char *)this + 372) = _xmm;
  *(_OWORD *)((char *)this + 388) = _xmm;
  *(_OWORD *)((char *)this + 404) = _xmm;
  *((_QWORD *)this + 108) = 0LL;
  *((_QWORD *)this + 109) = 0LL;
  return result;
}
