/*
 * XREFs of ?bStockSurface@SURFACE@@QEAAHXZ @ 0x1C027A70C
 * Callers:
 *     vMirrorIncludeNotifyWrap @ 0x1C00DCA10 (vMirrorIncludeNotifyWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00E65A0 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bStockSurface(SURFACE *this)
{
  return (*(_DWORD *)this & 0x800000) != 0 && (*((_WORD *)this + 51) & 0x200) != 0;
}
