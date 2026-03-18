/*
 * XREFs of ?IsMonitorSpecificContent@CHwndBitmap@@UEBA_NXZ @ 0x180164DC0
 * Callers:
 *     ?IsMonitorSpecificContent@CHwndBitmap@@WFA@EBA_NXZ @ 0x1800D5D90 (-IsMonitorSpecificContent@CHwndBitmap@@WFA@EBA_NXZ.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x1800484D0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 */

char __fastcall CHwndBitmap::IsMonitorSpecificContent(CHwndBitmap *this, __int64 a2, __int64 a3, struct _GUID *a4)
{
  __int64 v4; // rcx
  char result; // al

  v4 = *((_QWORD *)this + 61);
  result = 0;
  if ( v4 )
    return CCachedVisualImage::IsMonitorSpecificContent((CCachedVisualImage *)(v4 + 8), a2, a3, a4);
  return result;
}
