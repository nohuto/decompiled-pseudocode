/*
 * XREFs of ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801649E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidVisual@CHwndBitmap@@AEBA_NXZ @ 0x1800201CC (-IsValidVisual@CHwndBitmap@@AEBA_NXZ.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180164784 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xBBu);
    }
    else
    {
      BitmapSource = CCachedVisualImage::GetBitmapSource((struct CComposition *)((char *)this[61] + 8), a2, a3);
      v4 = BitmapSource;
      if ( BitmapSource < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapSource, 0xBDu);
    }
  }
  return v4;
}
