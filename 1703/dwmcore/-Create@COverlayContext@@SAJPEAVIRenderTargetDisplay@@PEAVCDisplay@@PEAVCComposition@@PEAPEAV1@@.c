/*
 * XREFs of ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800CA158
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18006C500 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@COverlayContext@@IEAAJXZ @ 0x180071D28 (-Initialize@COverlayContext@@IEAAJXZ.c)
 *     ??0COverlayContext@@IEAA@PEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@@Z @ 0x180071E84 (--0COverlayContext@@IEAA@PEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COverlayContext::Create(
        struct IRenderTargetDisplay *a1,
        struct CDisplay *a2,
        struct CComposition *a3,
        struct COverlayContext **a4)
{
  COverlayContext *v8; // rax
  COverlayContext *v9; // rax
  COverlayContext *v10; // rdi
  int v11; // eax
  int v12; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v8 = (COverlayContext *)WPF::ProcessHeapImpl::AllocClear(0x2188uLL);
  if ( !v8 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v9 = COverlayContext::COverlayContext(v8, a1, a2, a3);
  v10 = v9;
  if ( v9 )
  {
    (**(void (__fastcall ***)(COverlayContext *))v9)(v9);
    v11 = COverlayContext::Initialize(v10);
    v12 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB0u);
    else
      *a4 = v10;
    if ( v12 < 0 )
      (*(void (__fastcall **)(COverlayContext *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xACu);
  }
  return (unsigned int)v12;
}
