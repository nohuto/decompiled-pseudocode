/*
 * XREFs of ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180078460
 * Callers:
 *     ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x1800791DC (--0CVisualCapture@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180137D4C (--0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180145DA0 (--0CIndirectSwapchainRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 *     ??0CPlaneCaptureRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x180145F78 (--0CPlaneCaptureRenderTarget@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::COffScreenRenderTarget(
        COffScreenRenderTarget *this,
        struct CComposition *a2,
        const struct CResourceTag *a3)
{
  COffScreenRenderTarget *result; // rax
  __int128 v4; // xmm0

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &COffScreenRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &COffScreenRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 14) = &COffScreenRenderTarget::`vftable';
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 27) = (char *)this + 248;
  *((_QWORD *)this + 28) = (char *)this + 248;
  *((_DWORD *)this + 58) = 6;
  *(_QWORD *)((char *)this + 236) = 6LL;
  result = this;
  v4 = *(_OWORD *)a3;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *(_OWORD *)((char *)this + 328) = v4;
  *((_WORD *)this + 104) = 1;
  return result;
}
