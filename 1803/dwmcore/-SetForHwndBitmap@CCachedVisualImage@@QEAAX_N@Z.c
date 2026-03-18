/*
 * XREFs of ?SetForHwndBitmap@CCachedVisualImage@@QEAAX_N@Z @ 0x180182840
 * Callers:
 *     ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x180099478 (-SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z.c)
 *     ?EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ @ 0x1801903A4 (-EnsureCachedVisualImage@CHwndBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x1800B4A5C (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 */

void __fastcall CCachedVisualImage::SetForHwndBitmap(CCachedVisualImage *this, char a2)
{
  *((_BYTE *)this + 379) = a2;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_DWORD *)this + 53) = 0;
  CCachedVisualImage::ChoosePixelFormat(this);
  CResource::NotifyOnChanged((CCachedVisualImage *)((char *)this + 16), 0LL, 0LL);
}
