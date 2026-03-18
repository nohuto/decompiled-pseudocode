/*
 * XREFs of ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ @ 0x180055810
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x180055960 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::UnRegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  CGdiSpriteBitmap **v1; // r8
  CGdiSpriteBitmap **v2; // rdx

  if ( (*((_BYTE *)this + 148) & 4) != 0 )
  {
    v1 = (CGdiSpriteBitmap **)*((_QWORD *)this + 23);
    v2 = (CGdiSpriteBitmap **)*((_QWORD *)this + 24);
    if ( v1[1] != (CGdiSpriteBitmap *)((char *)this + 184) || *v2 != (CGdiSpriteBitmap *)((char *)this + 184) )
      __fastfail(3u);
    *v2 = (CGdiSpriteBitmap *)v1;
    v1[1] = (CGdiSpriteBitmap *)v2;
    *((_BYTE *)this + 148) &= ~4u;
  }
}
