/*
 * XREFs of ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x180141990
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x180019AC4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x18006777C (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800950C8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??0COverlayContext@@IEAA@PEAVCComposition@@@Z @ 0x18013F808 (--0COverlayContext@@IEAA@PEAVCComposition@@@Z.c)
 */

__int64 __fastcall COverlayContext::Create(
        struct CComposition *a1,
        const struct CDisplay *a2,
        struct COverlayContext **a3)
{
  COverlayContext *v6; // rax
  COverlayContext *v7; // rax
  COverlayContext *v8; // rdi
  int v9; // ebx
  signed int updated; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (COverlayContext *)WPF::ProcessHeapImpl::AllocClear(0x2300uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v7 = COverlayContext::COverlayContext(v6, a1);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Cu);
LABEL_9:
    ReleaseInterfaceNoNULL<CPolygon>((__int64)v8);
    return (unsigned int)v9;
  }
  (**(void (__fastcall ***)(COverlayContext *))v7)(v7);
  updated = COverlayContext::UpdateDisplay(v8, a2);
  v9 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x1Fu);
  else
    *a3 = v8;
  if ( v9 < 0 )
    goto LABEL_9;
  return (unsigned int)v9;
}
