/*
 * XREFs of ?uiDxPresentFlags@SFMLOGICALSURFACE@@QEAAIXZ @ 0x1C0026794
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C009CA40 (GreGetDxSharedSurface.c)
 *     GreGetHwndUpdateIds @ 0x1C024E270 (GreGetHwndUpdateIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::uiDxPresentFlags(SFMLOGICALSURFACE *this)
{
  BOOL v1; // edx

  v1 = 0;
  if ( g_pDwmState )
    v1 = gfDwmDeviceBitmapsEnabledForMultiAdapter != 0;
  return (unsigned int)(8 * v1) | *((_DWORD *)this + 55);
}
