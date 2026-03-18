/*
 * XREFs of ?GetMultiplaneOverlayCaps@CSwapChainBase@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x1800C0300
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CSwapChainBase::GetMultiplaneOverlayCaps(
        CSwapChainBase *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  memset_0(a2, 0, 0x2CuLL);
  return 0LL;
}
