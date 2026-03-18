/*
 * XREFs of ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180190730
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800B4480 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800B5C4C (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x1801903A4 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 */

__int64 __fastcall CHwndBitmap::GetBitmapSource(
        struct CComposition **this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  unsigned int v4; // ebx
  int v7; // eax
  int BitmapSource; // eax

  v4 = 0;
  *a2 = 0LL;
  if ( CHwndBitmap::IsValidVisual((CHwndBitmap *)(this - 1)) )
  {
    v7 = CHwndBitmap::EnsureCachedVisualImage(this - 1);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC7u);
    }
    else
    {
      BitmapSource = CCachedVisualImage::GetBitmapSource((struct CComposition *)((char *)this[15] + 8), a2, a3);
      v4 = BitmapSource;
      if ( BitmapSource < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapSource, 0xC9u);
    }
  }
  return v4;
}
