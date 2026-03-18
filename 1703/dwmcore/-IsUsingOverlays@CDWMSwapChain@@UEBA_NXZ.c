/*
 * XREFs of ?IsUsingOverlays@CDWMSwapChain@@UEBA_NXZ @ 0x18019D570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CDWMSwapChain::IsUsingOverlays(CDWMSwapChain *this)
{
  return *((_DWORD *)this + 110) != 0;
}
