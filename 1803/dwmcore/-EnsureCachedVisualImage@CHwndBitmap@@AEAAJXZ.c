/*
 * XREFs of ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x1801903A4
 * Callers:
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180190730 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x1800B5094 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800C90E4 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x180182840 (-SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180182A24 (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // edi
  CCachedVisualImage *v3; // rax
  CCachedVisualImage *v4; // rbx
  int v5; // eax

  v1 = 0;
  if ( !this[16] )
  {
    v3 = (CCachedVisualImage *)CCachedVisualImage::operator new();
    if ( v3 )
      v4 = CCachedVisualImage::CCachedVisualImage(v3, this[4]);
    else
      v4 = 0LL;
    if ( v4 )
    {
      CMILCOMBase::InternalAddRef((CCachedVisualImage *)((char *)v4 + 16));
      *((_BYTE *)v4 + 377) = *((_BYTE *)this + 120);
      CCachedVisualImage::SetForHwndBitmap(v4, 1);
      v5 = CCachedVisualImage::SetRootVisual((struct CResource **)v4, this[13]);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x51u);
        CMILCOMBase::InternalRelease((CCachedVisualImage *)((char *)v4 + 16));
      }
      else
      {
        this[16] = v4;
      }
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x49u);
    }
  }
  return v1;
}
