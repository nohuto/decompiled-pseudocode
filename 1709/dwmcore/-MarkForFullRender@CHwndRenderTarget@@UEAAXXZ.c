/*
 * XREFs of ?MarkForFullRender@CHwndRenderTarget@@UEAAXXZ @ 0x180017460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwndRenderTarget::MarkForFullRender(CHwndRenderTarget *this)
{
  *((_BYTE *)this + 802) = 1;
}
