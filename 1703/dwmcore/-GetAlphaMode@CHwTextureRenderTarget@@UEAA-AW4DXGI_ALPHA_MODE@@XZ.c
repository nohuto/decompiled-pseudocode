/*
 * XREFs of ?GetAlphaMode@CHwTextureRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800CCA20
 * Callers:
 *     ?GetAlphaMode@CHwTextureRenderTarget@@WLA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800D6190 (-GetAlphaMode@CHwTextureRenderTarget@@WLA@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetAlphaMode(CHwTextureRenderTarget *this)
{
  return *((unsigned int *)this + 55);
}
