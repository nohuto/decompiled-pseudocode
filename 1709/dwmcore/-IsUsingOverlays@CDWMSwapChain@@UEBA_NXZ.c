/*
 * XREFs of ?IsUsingOverlays@CDWMSwapChain@@UEBA_NXZ @ 0x1801B0720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsUsingOverlays(CDWMSwapChain *this)
{
  return *((_DWORD *)this + 133) != 0;
}
