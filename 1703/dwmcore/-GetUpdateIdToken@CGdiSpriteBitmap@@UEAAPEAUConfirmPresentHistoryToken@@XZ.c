/*
 * XREFs of ?GetUpdateIdToken@CGdiSpriteBitmap@@UEAAPEAUConfirmPresentHistoryToken@@XZ @ 0x1800CC700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ConfirmPresentHistoryToken *__fastcall CGdiSpriteBitmap::GetUpdateIdToken(CGdiSpriteBitmap *this)
{
  *((_BYTE *)this + 60) &= ~8u;
  return (CGdiSpriteBitmap *)((char *)this + 64);
}
