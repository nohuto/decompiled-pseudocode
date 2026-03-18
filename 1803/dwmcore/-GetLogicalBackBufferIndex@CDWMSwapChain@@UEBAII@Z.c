/*
 * XREFs of ?GetLogicalBackBufferIndex@CDWMSwapChain@@UEBAII@Z @ 0x18007CC30
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C0560 (-GetLogicalBackBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetLogicalBackBufferIndex(CDWMSwapChain *this, int a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v3 = *((_QWORD *)this + 53);
  if ( !v3 )
    return 0LL;
  v4 = *((_DWORD *)this + 40);
  return (a2 + (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3)) % v4;
}
