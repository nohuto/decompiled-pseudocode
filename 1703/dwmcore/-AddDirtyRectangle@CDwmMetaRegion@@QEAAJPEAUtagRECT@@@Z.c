/*
 * XREFs of ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x1801591CC
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N@Z @ 0x180053130 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N@Z.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18012A814 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z @ 0x1800D1898 (-IntersectDirtyRectWithMoveData@CDwmMetaRegion@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z @ 0x1801598A8 (-AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddDirtyRectangle(CDwmMetaRegion *this, struct tagRECT *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CDwmMetaRegion::AddRectToDirtyRegion(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x14Bu);
  }
  else
  {
    v6 = CDwmMetaRegion::IntersectDirtyRectWithMoveData(this, a2);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x14Cu);
  }
  return v5;
}
