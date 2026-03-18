/*
 * XREFs of ?IsTransitioningHardwareProtection@CDWMSwapChain@@UEBA_NXZ @ 0x1801EA780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsTransitioningHardwareProtection(CDWMSwapChain *this)
{
  return *((_DWORD *)this + 146) != 0;
}
