/*
 * XREFs of ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801FD954
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1801FDAA4 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180042224 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CHolographicInteropTarget *__fastcall CHolographicInteropTarget::CHolographicInteropTarget(
        CHolographicInteropTarget *this,
        struct CComposition *a2)
{
  CHolographicInteropTarget *result; // rax

  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &CHolographicInteropTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHolographicInteropTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  result = this;
  *((_QWORD *)this + 22) = 0LL;
  *((_OWORD *)this + 12) = 0LL;
  return result;
}
