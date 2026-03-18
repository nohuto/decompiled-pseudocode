/*
 * XREFs of ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180021C80
 * Callers:
 *     ?GetPixelFormat@CHwndBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180164C00 (-GetPixelFormat@CHwndBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?GetTextureFormat@CCachedVisualImage@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x180165780 (-GetTextureFormat@CCachedVisualImage@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ @ 0x180048688 (-ChoosePixelFormat@CCachedVisualImage@@AEAAXXZ.c)
 */

__int64 __fastcall CCachedVisualImage::GetPixelFormat(CCachedVisualImage *this, enum DXGI_FORMAT *a2)
{
  if ( !*((_DWORD *)this + 37) )
    CCachedVisualImage::ChoosePixelFormat(this);
  *a2 = *((enum DXGI_FORMAT *)this + 37);
  return 0LL;
}
