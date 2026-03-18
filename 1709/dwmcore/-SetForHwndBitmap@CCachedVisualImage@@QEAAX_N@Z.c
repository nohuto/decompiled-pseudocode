/*
 * XREFs of ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x180159790
 * Callers:
 *     ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x180025030 (-SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x180167918 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x18008E788 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 */

void __fastcall CCachedVisualImage::SetForHwndBitmap(CCachedVisualImage *this, char a2)
{
  *((_BYTE *)this + 379) = a2;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_DWORD *)this + 53) = 0;
  CCachedVisualImage::ChoosePixelFormat(this);
  CResource::NotifyOnChanged((CCachedVisualImage *)((char *)this + 16), 0, 0LL);
}
