/*
 * XREFs of ?GetFrontBufferIndex@CSwapChainBase@@MEBAIXZ @ 0x18003F5E0
 * Callers:
 *     ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x18003F1FC (-GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainBase::GetFrontBufferIndex(CSwapChainBase *this)
{
  return (unsigned int)(*((_DWORD *)this + 42) - 1);
}
