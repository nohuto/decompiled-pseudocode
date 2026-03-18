/*
 * XREFs of ?GetTextureFormat@CCachedVisualImage@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x180165780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180021C80 (-GetPixelFormat@CCachedVisualImage@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetTextureFormat(CCachedVisualImage *this)
{
  enum DXGI_FORMAT v2; // [rsp+30h] [rbp+8h] BYREF

  CCachedVisualImage::GetPixelFormat((CCachedVisualImage *)((char *)this - 80), &v2);
  return (unsigned int)v2;
}
