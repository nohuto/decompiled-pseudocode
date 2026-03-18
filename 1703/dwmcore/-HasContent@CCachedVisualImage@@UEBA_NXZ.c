/*
 * XREFs of ?HasContent@CCachedVisualImage@@UEBA_NXZ @ 0x180048210
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::HasContent(CCachedVisualImage *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 16) || *((_BYTE *)this + 315) )
    return 1LL;
  return result;
}
