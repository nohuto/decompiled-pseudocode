/*
 * XREFs of ?GetColorSpace@CHwDisplayRenderTarget@@UEAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800CCB50
 * Callers:
 *     ?GetColorSpace@CHwDisplayRenderTarget@@WLA@EAA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x1800D6400 (-GetColorSpace@CHwDisplayRenderTarget@@WLA@EAA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::GetColorSpace(CHwDisplayRenderTarget *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 21) + 196LL);
}
