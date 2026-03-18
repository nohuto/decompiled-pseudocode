/*
 * XREFs of ??0CPlaneCaptureRenderTargetEngine@@AEAA@PEAVCComposition@@@Z @ 0x18015B530
 * Callers:
 *     ?ProcessCreate@CPlaneCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x18015C0C8 (-ProcessCreate@CPlaneCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDER.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x18000DBB8 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CPlaneCaptureRenderTargetEngine *__fastcall CPlaneCaptureRenderTargetEngine::CPlaneCaptureRenderTargetEngine(
        CPlaneCaptureRenderTargetEngine *this,
        struct CComposition *a2)
{
  CPlaneCaptureRenderTargetEngine *result; // rax
  const char *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v5 = 32;
  v4 = "DWM RenderTarget (plane capture)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v4);
  *(_QWORD *)this = &CPlaneCaptureRenderTargetEngine::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CPlaneCaptureRenderTargetEngine::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &CIndirectSwapchainRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &CCaptureRenderTarget::`vftable';
  result = this;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  return result;
}
