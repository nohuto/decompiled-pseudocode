/*
 * XREFs of ?GetTextureFormat@CD2DBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x18007AA80
 * Callers:
 *     ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18000B3B0 (-GetTextureFormat@CDxHandleBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::GetTextureFormat(CD2DBitmap *this)
{
  return *((unsigned int *)this + 18);
}
