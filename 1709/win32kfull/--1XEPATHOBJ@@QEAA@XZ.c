/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C012C170
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00E9190 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiFillPath @ 0x1C012BA20 (NtGdiFillPath.c)
 *     NtGdiCloseFigure @ 0x1C012BCC0 (NtGdiCloseFigure.c)
 *     NtGdiSelectClipPath @ 0x1C012C070 (NtGdiSelectClipPath.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C012C1A0 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     GrePolyDraw @ 0x1C027B4C8 (GrePolyDraw.c)
 *     NtGdiFlattenPath @ 0x1C0288FE0 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C0289090 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02892D0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02893F0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C0289550 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C0289680 (NtGdiWidenPath.c)
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
