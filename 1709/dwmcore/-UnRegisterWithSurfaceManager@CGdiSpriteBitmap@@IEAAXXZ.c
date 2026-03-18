/*
 * XREFs of ?UnRegisterWithSurfaceManager@CGdiSpriteBitmap@@IEAAXXZ @ 0x18009E0AC
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18009DF10 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ??1CGdiSpriteBitmap@@MEAA@XZ @ 0x18009E128 (--1CGdiSpriteBitmap@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CGdiSpriteBitmap::UnRegisterWithSurfaceManager(CGdiSpriteBitmap *this)
{
  CGdiSpriteBitmap **v1; // r8
  CGdiSpriteBitmap **v2; // rdx

  if ( (*((_BYTE *)this + 116) & 2) != 0 )
  {
    v1 = (CGdiSpriteBitmap **)*((_QWORD *)this + 19);
    if ( v1[1] != (CGdiSpriteBitmap *)((char *)this + 152)
      || (v2 = (CGdiSpriteBitmap **)*((_QWORD *)this + 20), *v2 != (CGdiSpriteBitmap *)((char *)this + 152)) )
    {
      __fastfail(3u);
    }
    *v2 = (CGdiSpriteBitmap *)v1;
    v1[1] = (CGdiSpriteBitmap *)v2;
    *((_BYTE *)this + 116) &= ~2u;
  }
}
