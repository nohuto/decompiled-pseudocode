/*
 * XREFs of ?GetVBlankEvent@CDWMSwapChain@@UEAAJPEAPEAX@Z @ 0x18007CF40
 * Callers:
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x180046730 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMSwapChain::GetVBlankEvent(CDWMSwapChain *this, void **a2)
{
  *a2 = (void *)*((_QWORD *)this + 58);
  return 0LL;
}
