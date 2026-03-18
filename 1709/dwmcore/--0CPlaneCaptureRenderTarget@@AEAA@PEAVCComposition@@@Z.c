/*
 * XREFs of ??0CPlaneCaptureRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180145F78
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180078460 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CPlaneCaptureRenderTarget *__fastcall CPlaneCaptureRenderTarget::CPlaneCaptureRenderTarget(
        CPlaneCaptureRenderTarget *this,
        struct CComposition *a2)
{
  _QWORD *v2; // rcx
  CPlaneCaptureRenderTarget *v3; // r10
  CPlaneCaptureRenderTarget *result; // rax
  __int64 v5; // r11
  const char *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPlaneCaptureRenderTarget::`vftable';
  v7 = 32;
  v6 = "DWM RenderTarget (plane capture)";
  COffScreenRenderTarget::COffScreenRenderTarget(
    (CPlaneCaptureRenderTarget *)((char *)this + 56),
    a2,
    (const struct CResourceTag *)&v6);
  v2[8] = &CPlaneCaptureRenderTargetEngine::`vftable'{for `IRenderTargetResource'};
  *v2 = &CPlaneCaptureRenderTargetEngine::`vftable'{for `CNotificationResource'};
  v2[9] = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  v2[14] = &CPlaneCaptureRenderTargetEngine::`vftable';
  result = v3;
  v2[53] = v5;
  v2[54] = v5;
  return result;
}
