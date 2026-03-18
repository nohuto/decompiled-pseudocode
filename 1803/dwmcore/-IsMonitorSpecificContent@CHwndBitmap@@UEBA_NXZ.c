/*
 * XREFs of ?IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ @ 0x180190980
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18001C420 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 */

char __fastcall CHwndBitmap::IsMonitorSpecificContent(CHwndBitmap *this)
{
  __int64 v1; // rcx
  char result; // al

  v1 = *((_QWORD *)this + 15);
  result = 0;
  if ( v1 )
    return CCachedVisualImage::IsMonitorSpecificContent((CCachedVisualImage *)(v1 + 8));
  return result;
}
