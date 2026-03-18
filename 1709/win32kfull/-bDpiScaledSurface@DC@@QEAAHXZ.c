/*
 * XREFs of ?bDpiScaledSurface@DC@@QEAAHXZ @ 0x1C0027FD0
 * Callers:
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C000EEB0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00272A0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?prgnRao@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027C7C (-prgnRao@DC@@QEAAPEAVREGION@@XZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?prgnVisSnap@DC@@QEAAPEAVREGION@@XZ @ 0x1C0027FF8 (-prgnVisSnap@DC@@QEAAPEAVREGION@@XZ.c)
 *     NtGdiGetPixel @ 0x1C002B850 (NtGdiGetPixel.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z @ 0x1C012CC5C (-vGet_sizlWindow@DC@@QEAAXPEAUtagSIZE@@@Z.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C024C000 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bDpiScaledSurface(DC *this)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = *((_QWORD *)this + 64);
  v2 = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 116) & 0x800) != 0;
  return v2;
}
