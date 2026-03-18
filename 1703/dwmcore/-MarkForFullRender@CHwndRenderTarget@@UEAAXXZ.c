/*
 * XREFs of ?MarkForFullRender@CHwndRenderTarget@@UEAAXXZ @ 0x18006EDD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwndRenderTarget::MarkForFullRender(CHwndRenderTarget *this)
{
  *((_BYTE *)this + 787) = 1;
}
