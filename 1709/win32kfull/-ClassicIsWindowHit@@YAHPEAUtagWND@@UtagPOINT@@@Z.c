/*
 * XREFs of ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0113DE8
 * Callers:
 *     xxxDCompSpeedHitTest @ 0x1C005DFBC (xxxDCompSpeedHitTest.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0113D78 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D4498 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     LayerHitTest @ 0x1C011678C (LayerHitTest.c)
 */

_BOOL8 __fastcall ClassicIsWindowHit(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v5; // rcx
  unsigned int y; // [rsp+3Ch] [rbp+14h]

  y = a2.y;
  return (*((_BYTE *)a1 + 71) & 0x10) != 0
      && PtInRect((_DWORD *)a1 + 32, *(_QWORD *)&a2)
      && ((v5 = *((_QWORD *)a1 + 27)) == 0 || (unsigned int)GrePtInRegion(v5, (unsigned int)a2.x, y))
      && ((*((_BYTE *)a1 + 66) & 8) == 0 || (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))LayerHitTest)(a1, a2));
}
