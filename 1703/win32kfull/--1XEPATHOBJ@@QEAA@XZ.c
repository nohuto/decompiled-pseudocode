/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0123100
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0078C70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     NtGdiFillPath @ 0x1C01220F0 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C0122390 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C0122C80 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0123130 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0123538 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C01258A4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     GrePolyDraw @ 0x1C027E9B0 (GrePolyDraw.c)
 *     NtGdiFlattenPath @ 0x1C028C4D0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C028C570 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C028C7B0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C028C8E0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C028CA20 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C028CB30 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 30) )
  {
    PopThreadGuardedObject((char *)this + 88);
    *((_DWORD *)this + 30) = 0;
  }
}
