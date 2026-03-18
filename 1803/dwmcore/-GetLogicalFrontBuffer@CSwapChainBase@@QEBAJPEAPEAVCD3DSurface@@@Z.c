/*
 * XREFs of ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C0174
 * Callers:
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x18007CBA0 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801F2160 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?GetLogicalFrontBufferIndex@CDWMSwapChain@@UEBAIXZ @ 0x18007CC80 (-GetLogicalFrontBufferIndex@CDWMSwapChain@@UEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetLogicalFrontBuffer(CSwapChainBase *this, struct CD3DSurface **a2)
{
  __int64 (*v4)(void); // rax
  unsigned int LogicalFrontBufferIndex; // eax
  struct CD3DSurface *v6; // rcx

  v4 = *(__int64 (**)(void))(*(_QWORD *)this + 328LL);
  if ( (char *)v4 == (char *)CDWMSwapChain::GetLogicalFrontBufferIndex )
    LogicalFrontBufferIndex = CDWMSwapChain::GetLogicalFrontBufferIndex(this);
  else
    LogicalFrontBufferIndex = v4();
  v6 = *(struct CD3DSurface **)(*((_QWORD *)this + 48) + 8LL * LogicalFrontBufferIndex);
  *a2 = v6;
  (**(void (__fastcall ***)(struct CD3DSurface *))v6)(v6);
  return 0LL;
}
