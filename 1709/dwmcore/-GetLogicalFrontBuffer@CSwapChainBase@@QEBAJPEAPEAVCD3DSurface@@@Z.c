/*
 * XREFs of ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x18011B384
 * Callers:
 *     ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801B88D0 (-ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::GetLogicalFrontBuffer(CSwapChainBase *this, struct CD3DSurface **a2)
{
  struct CD3DSurface *v2; // rcx

  v2 = *(struct CD3DSurface **)(*((_QWORD *)this + 47) + 8LL * (unsigned int)(*((_DWORD *)this + 40) - 1));
  *a2 = v2;
  (**(void (__fastcall ***)(struct CD3DSurface *))v2)(v2);
  return 0LL;
}
