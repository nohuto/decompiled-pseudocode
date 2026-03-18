/*
 * XREFs of ?IsHDRContent@CHwndBitmap@@UEBA_NXZ @ 0x180190960
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHDRContent@CCachedVisualImage@@UEBA_NXZ @ 0x18001C3A0 (-IsHDRContent@CCachedVisualImage@@UEBA_NXZ.c)
 */

char __fastcall CHwndBitmap::IsHDRContent(CHwndBitmap *this)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *((_QWORD *)this + 15);
  result = 0;
  if ( v1 )
    return CCachedVisualImage::IsHDRContent((CCachedVisualImage *)(v1 + 8));
  return result;
}
