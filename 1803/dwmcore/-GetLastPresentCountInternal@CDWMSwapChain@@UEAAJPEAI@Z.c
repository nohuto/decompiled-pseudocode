/*
 * XREFs of ?GetLastPresentCountInternal@CDWMSwapChain@@UEAAJPEAI@Z @ 0x18007D000
 * Callers:
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18007C020 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMSwapChain::GetLastPresentCountInternal(CDWMSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 53) + 120LL))(
           *((_QWORD *)this + 53),
           a2);
}
