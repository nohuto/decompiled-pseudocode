/*
 * XREFs of ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C001FE4C
 * Callers:
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bStockSurface(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && (*((_WORD *)this + 51) & 0x200) != 0;
}
