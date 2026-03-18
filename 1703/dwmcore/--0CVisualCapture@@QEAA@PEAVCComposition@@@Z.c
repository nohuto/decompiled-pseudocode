/*
 * XREFs of ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x180026DF0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1800275A0 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CVisualCapture *__fastcall CVisualCapture::CVisualCapture(CVisualCapture *this, struct CComposition *a2)
{
  CVisualCapture *v2; // rcx
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 32;
  v4 = "DWM Rendertarget (VisualCapture)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v4);
  *((_QWORD *)v2 + 8) = &CVisualCapture::`vftable'{for `IRenderTargetResource'};
  *(_QWORD *)v2 = &CVisualCapture::`vftable'{for `CNotificationResource'};
  *((_QWORD *)v2 + 9) = &COffScreenRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)v2 + 14) = &COffScreenRenderTarget::`vftable';
  return v2;
}
