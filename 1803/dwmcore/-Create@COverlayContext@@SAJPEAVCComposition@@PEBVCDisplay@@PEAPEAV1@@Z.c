/*
 * XREFs of ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800C98A0
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180062824 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18007A040 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ??0COverlayContext@@IEAA@PEAVCComposition@@@Z @ 0x18007B744 (--0COverlayContext@@IEAA@PEAVCComposition@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::Create(
        struct CComposition *a1,
        const struct CDisplay *a2,
        struct COverlayContext **a3)
{
  COverlayContext *v6; // rax
  COverlayContext *v7; // rax
  COverlayContext *v8; // rdi
  int updated; // eax
  int v10; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (COverlayContext *)WPF::ProcessHeapImpl::AllocClear(0x2308uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v7 = COverlayContext::COverlayContext(v6, a1);
  v8 = v7;
  if ( !v7 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Du);
LABEL_9:
    ReleaseInterfaceNoNULL<CPolygon>((__int64)v8);
    return (unsigned int)v10;
  }
  (**(void (__fastcall ***)(COverlayContext *))v7)(v7);
  updated = COverlayContext::UpdateDisplay(v8, a2);
  v10 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x20u);
  else
    *a3 = v8;
  if ( v10 < 0 )
    goto LABEL_9;
  return (unsigned int)v10;
}
