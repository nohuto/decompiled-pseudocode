/*
 * XREFs of ?IsProtectedContent@CHwndBitmap@@UEBA_NXZ @ 0x180164DE0
 * Callers:
 *     ?IsProtectedContent@CHwndBitmap@@WFA@EBA_NXZ @ 0x1800D5DA0 (-IsProtectedContent@CHwndBitmap@@WFA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndBitmap::IsProtectedContent(CHwndBitmap *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 61);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 321);
  return result;
}
