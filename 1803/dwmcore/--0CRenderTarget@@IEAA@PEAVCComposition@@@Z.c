/*
 * XREFs of ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180042224
 * Callers:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x18000DBB8 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 *     ??0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180045188 (--0CDesktopRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180062CAC (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18015C318 (--0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801FD954 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?GetDefaultSRGBFormat@CDisplay@@SA?AW4DXGI_FORMAT@@XZ @ 0x1800BABA8 (-GetDefaultSRGBFormat@CDisplay@@SA-AW4DXGI_FORMAT@@XZ.c)
 */

CRenderTarget *__fastcall CRenderTarget::CRenderTarget(CRenderTarget *this, struct CComposition *a2)
{
  enum DXGI_FORMAT DefaultSRGBFormat; // eax
  CRenderTarget *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  *((_QWORD *)this + 8) = &IRenderTargetResource::`vftable';
  *((_QWORD *)this + 9) = &IVisualTreeClient::`vftable';
  DefaultSRGBFormat = CDisplay::GetDefaultSRGBFormat();
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 24) = DefaultSRGBFormat;
  result = this;
  *((_DWORD *)this + 25) = 3;
  *((_DWORD *)this + 39) = 1065353216;
  *((_BYTE *)this + 161) = 1;
  return result;
}
