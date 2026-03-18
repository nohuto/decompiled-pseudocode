/*
 * XREFs of ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18015C318
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180042224 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CRemoteAppRenderTarget *__fastcall CRemoteAppRenderTarget::CRemoteAppRenderTarget(
        CRemoteAppRenderTarget *this,
        struct CComposition *a2)
{
  CRemoteAppRenderTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &CRemoteAppRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  result = this;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 25) = 1;
  *((_BYTE *)this + 160) = 1;
  *((_OWORD *)this + 13) = _xmm;
  *((_WORD *)this + 136) = 32085;
  *((_OWORD *)this + 14) = _xmm;
  *((_OWORD *)this + 15) = _xmm;
  *((_OWORD *)this + 16) = _xmm;
  return result;
}
