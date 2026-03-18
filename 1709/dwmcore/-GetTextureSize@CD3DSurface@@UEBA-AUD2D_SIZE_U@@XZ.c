/*
 * XREFs of ?GetTextureSize@CD3DSurface@@UEBA?AUD2D_SIZE_U@@XZ @ 0x18002DA10
 * Callers:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x1800489B0 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CD3DSurface::GetTextureSize(CD3DSurface *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 5);
  a2[1] = *((_DWORD *)this + 6);
  return (struct D2D_SIZE_U)a2;
}
