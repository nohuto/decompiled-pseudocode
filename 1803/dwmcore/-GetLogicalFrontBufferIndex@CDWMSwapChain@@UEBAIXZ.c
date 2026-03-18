/*
 * XREFs of ?GetLogicalFrontBufferIndex@CDWMSwapChain@@UEBAIXZ @ 0x18007CC80
 * Callers:
 *     ?GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z @ 0x1800C0174 (-GetLogicalFrontBuffer@CSwapChainBase@@QEBAJPEAPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetLogicalFrontBufferIndex(CDWMSwapChain *this)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v2 = *((_QWORD *)this + 53);
  if ( !v2 )
    return 0LL;
  v3 = *((_DWORD *)this + 40);
  return (v3 + (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 248LL))(v2) - 1) % v3;
}
