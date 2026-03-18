/*
 * XREFs of ?IsAttachedToDisplay@CDWMSwapChain@@UEBA_NXZ @ 0x1801EA770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDWMSwapChain::IsAttachedToDisplay(CDWMSwapChain *this)
{
  return *((_QWORD *)this + 54) != 0LL;
}
