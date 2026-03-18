/*
 * XREFs of ?GetTextureSize@CHwTextureRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180078250
 * Callers:
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800B303C (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 * Callees:
 *     ?GetTextureSize@CD3DSurface@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180042AF0 (-GetTextureSize@CD3DSurface@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CHwTextureRenderTarget::GetTextureSize(CHwTextureRenderTarget *this, _DWORD *a2)
{
  CD3DSurface *v3; // rcx
  void (*v4)(void); // rax

  v3 = (CD3DSurface *)(*((_QWORD *)this - 3) + 120LL);
  v4 = *(void (**)(void))(*(_QWORD *)v3 + 40LL);
  if ( (char *)v4 == (char *)CD3DSurface::GetTextureSize )
    CD3DSurface::GetTextureSize(v3, a2);
  else
    v4();
  return (struct D2D_SIZE_U)a2;
}
