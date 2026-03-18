/*
 * XREFs of ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180137D4C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180078460 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::CMagnifierRenderTarget(
        CMagnifierRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CMagnifierRenderTarget *result; // rax
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 28;
  v4 = "DWM Rendertarget (magnifier)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v4);
  *(_DWORD *)(v2 + 552) = 0;
  *(_DWORD *)(v2 + 556) = 0;
  *(_QWORD *)(v2 + 64) = &CMagnifierRenderTarget::`vftable'{for `IRenderTargetResource'};
  *(_QWORD *)(v2 + 72) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 112) = &CMagnifierRenderTarget::`vftable';
  *(_QWORD *)(v2 + 560) = 0x3FF0000000000000LL;
  *(_QWORD *)(v2 + 568) = 0x3FF0000000000000LL;
  *(_QWORD *)(v2 + 576) = 0x3FF0000000000000LL;
  *(_QWORD *)(v2 + 584) = 0x3FF0000000000000LL;
  result = (CMagnifierRenderTarget *)v2;
  *(_QWORD *)v2 = &CMagnifierRenderTarget::`vftable'{for `CNotificationResource'};
  return result;
}
