/*
 * XREFs of ?GetLastPresentCountInternal@CDWMSwapChain@@UEAAJPEAI@Z @ 0x18003E0A0
 * Callers:
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180070240 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMSwapChain::GetLastPresentCountInternal(CDWMSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 37) + 120LL))(
           *((_QWORD *)this + 37),
           a2);
}
