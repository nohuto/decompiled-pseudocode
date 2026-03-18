/*
 * XREFs of ?GetAlphaMode@CHwDisplayRenderTarget@@UEAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180039D60
 * Callers:
 *     ?GetAlphaMode@CHwDisplayRenderTarget@@WLA@EAA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1800D63D0 (-GetAlphaMode@CHwDisplayRenderTarget@@WLA@EAA-AW4DXGI_ALPHA_MODE@@XZ.c)
 * Callees:
 *     <none>
 */

enum DXGI_ALPHA_MODE __fastcall CHwDisplayRenderTarget::GetAlphaMode(CHwDisplayRenderTarget *this)
{
  CD3DSurface *v1; // rcx
  unsigned int (*v2)(void); // rax

  v1 = (CD3DSurface *)(*((_QWORD *)this + 21) + 128LL);
  v2 = *(unsigned int (**)(void))(*(_QWORD *)v1 + 32LL);
  if ( (char *)v2 == (char *)CD3DSurface::GetAlphaMode )
    return CD3DSurface::GetAlphaMode(v1);
  else
    return v2();
}
