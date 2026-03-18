/*
 * XREFs of ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180167918
 * Callers:
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180167D10 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18008ED34 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800BF3F8 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x180159790 (-SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x1801599CC (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::EnsureCachedVisualImage(struct CComposition **this)
{
  unsigned int v1; // edi
  CCachedVisualImage *v3; // rax
  CCachedVisualImage *v4; // rbx
  signed int v5; // eax

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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x51u);
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x49u);
    }
  }
  return v1;
}
