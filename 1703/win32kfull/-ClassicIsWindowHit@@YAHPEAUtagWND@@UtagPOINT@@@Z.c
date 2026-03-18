/*
 * XREFs of ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C011A4FC
 * Callers:
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005F9CC (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxDCompSpeedHitTest @ 0x1C00B6DB8 (xxxDCompSpeedHitTest.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAI@Z @ 0x1C01CFDC0 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 * Callees:
 *     LayerHitTest @ 0x1C0003B34 (LayerHitTest.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 */

_BOOL8 __fastcall ClassicIsWindowHit(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v5; // rcx
  unsigned int y; // [rsp+3Ch] [rbp+14h]

  y = a2.y;
  return (*((_BYTE *)a1 + 71) & 0x10) != 0
      && PtInRect((_DWORD *)a1 + 32, *(_QWORD *)&a2)
      && ((v5 = *((_QWORD *)a1 + 27)) == 0 || (unsigned int)GrePtInRegion(v5, (unsigned int)a2.x, y))
      && ((*((_BYTE *)a1 + 66) & 8) == 0 || LayerHitTest((__int64)a1, *(_QWORD *)&a2));
}
