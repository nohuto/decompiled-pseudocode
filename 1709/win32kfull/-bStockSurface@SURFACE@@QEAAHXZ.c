/*
 * XREFs of ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C0277100
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x1C00EFC40 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00F86E0 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bStockSurface(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && (*((_WORD *)this + 51) & 0x200) != 0;
}
