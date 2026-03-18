/*
 * XREFs of ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x18003F1FC
 * Callers:
 *     ?GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x180070A00 (-GetFrontBufferSurface@CHwFullScreenRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z.c)
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801A0F10 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?GetFrontBufferIndex@CSwapChainBase@@MEBAIXZ @ 0x18003F5E0 (-GetFrontBufferIndex@CSwapChainBase@@MEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetFrontBuffer(CSwapChainBase *this, struct CD3DSurface **a2)
{
  __int64 (*v4)(void); // rax
  unsigned int FrontBufferIndex; // eax
  struct CD3DSurface *v6; // rcx

  v4 = *(__int64 (**)(void))(*(_QWORD *)this + 304LL);
  if ( (char *)v4 == (char *)CSwapChainBase::GetFrontBufferIndex )
    FrontBufferIndex = CSwapChainBase::GetFrontBufferIndex(this);
  else
    FrontBufferIndex = v4();
  v6 = *(struct CD3DSurface **)(*((_QWORD *)this + 33) + 8LL * FrontBufferIndex);
  *a2 = v6;
  (**(void (__fastcall ***)(struct CD3DSurface *))v6)(v6);
  return 0LL;
}
