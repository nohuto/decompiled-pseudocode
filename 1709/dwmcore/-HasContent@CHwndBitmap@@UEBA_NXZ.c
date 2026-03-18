/*
 * XREFs of ?HasContent@CHwndBitmap@@UEBA_NXZ @ 0x180167F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHwndBitmap::HasContent(CHwndBitmap *this)
{
  return *((_QWORD *)this + 12) != 0LL;
}
