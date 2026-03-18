/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x18000DBB8
 * Callers:
 *     ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x18000C9B0 (--0CVisualCapture@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18015A218 (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CPlaneCaptureRenderTargetEngine@@AEAA@PEAVCComposition@@@Z @ 0x18015B530 (--0CPlaneCaptureRenderTargetEngine@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CCaptureRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18016D208 (--0CCaptureRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18016D628 (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180042224 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::COffScreenRenderTarget(
        COffScreenRenderTarget *this,
        struct CComposition *a2,
        const struct CResourceTag *a3)
{
  COffScreenRenderTarget *result; // rax
  __int128 v6; // xmm0

  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &COffScreenRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 10) = &COffScreenRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 21) = &COffScreenRenderTarget::`vftable';
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 34) = (char *)this + 304;
  *((_QWORD *)this + 35) = (char *)this + 304;
  *((_DWORD *)this + 72) = 6;
  *(_QWORD *)((char *)this + 292) = 6LL;
  result = this;
  v6 = *(_OWORD *)a3;
  *((_QWORD *)this + 46) = 0LL;
  *((_OWORD *)this + 24) = v6;
  *((_DWORD *)this + 94) = 0;
  *((_WORD *)this + 132) = 1;
  return result;
}
