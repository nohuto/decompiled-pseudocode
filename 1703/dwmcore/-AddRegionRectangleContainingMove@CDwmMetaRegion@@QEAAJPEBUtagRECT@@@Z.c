/*
 * XREFs of ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x1801599E4
 * Callers:
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18012A814 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z @ 0x1801598A8 (-AddRectToDirtyRegion@CDwmMetaRegion@@AEAAJPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDwmMetaRegion::AddRegionRectangleContainingMove(HRGN *this, const struct tagRECT *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CDwmMetaRegion::AddRectToDirtyRegion(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x13Eu);
  return v3;
}
