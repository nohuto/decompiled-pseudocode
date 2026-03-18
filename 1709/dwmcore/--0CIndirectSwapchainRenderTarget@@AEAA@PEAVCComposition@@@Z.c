/*
 * XREFs of ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180145DA0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180078460 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CIndirectSwapchainRenderTarget *__fastcall CIndirectSwapchainRenderTarget::CIndirectSwapchainRenderTarget(
        CIndirectSwapchainRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CIndirectSwapchainRenderTarget *result; // rax
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 37;
  v4 = "DWM Rendertarget (indirect swapchain)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v4);
  *(_QWORD *)(v2 + 64) = &CIndirectSwapchainRenderTarget::`vftable'{for `IRenderTargetResource'};
  *(_QWORD *)v2 = &CIndirectSwapchainRenderTarget::`vftable'{for `CNotificationResource'};
  *(_QWORD *)(v2 + 72) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 112) = &CPlaneCaptureRenderTargetEngine::`vftable';
  *(_QWORD *)(v2 + 344) = 0LL;
  *(_QWORD *)(v2 + 352) = 0LL;
  *(_QWORD *)(v2 + 360) = 0LL;
  *(_DWORD *)(v2 + 368) = 0;
  *(_QWORD *)(v2 + 376) = v2 + 408;
  *(_QWORD *)(v2 + 384) = v2 + 408;
  *(_DWORD *)(v2 + 392) = 2;
  *(_QWORD *)(v2 + 396) = 2LL;
  result = (CIndirectSwapchainRenderTarget *)v2;
  *(_QWORD *)(v2 + 424) = 0LL;
  *(_QWORD *)(v2 + 432) = 0LL;
  *(_QWORD *)(v2 + 440) = 0LL;
  *(_DWORD *)(v2 + 448) = 0;
  return result;
}
