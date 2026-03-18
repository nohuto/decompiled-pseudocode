/*
 * XREFs of ?HasContent@CHwndBitmap@@UEBA_NXZ @ 0x180164CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CHwndBitmap::HasContent(CHwndBitmap *this)
{
  return *((_QWORD *)this + 58) != 0LL;
}
