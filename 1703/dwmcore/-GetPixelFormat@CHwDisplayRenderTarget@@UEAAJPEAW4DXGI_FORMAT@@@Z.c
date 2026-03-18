/*
 * XREFs of ?GetPixelFormat@CHwDisplayRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180039D90
 * Callers:
 *     ?GetPixelFormat@CHwDisplayRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800D6450 (-GetPixelFormat@CHwDisplayRenderTarget@@WLA@EAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwDisplayRenderTarget::GetPixelFormat(CHwDisplayRenderTarget *this, enum DXGI_FORMAT *a2)
{
  return CHwSurfaceRenderTarget::GetPixelFormat(this, a2);
}
