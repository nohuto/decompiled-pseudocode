/*
 * XREFs of DCELayerHitTest @ 0x1C009CC6C
 * Callers:
 *     ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00619D0 (-DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00B7204 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01BFC00 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01CFA44 (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     GrePtInSprite @ 0x1C009CD10 (GrePtInSprite.c)
 */

_BOOL8 __fastcall DCELayerHitTest(__int64 a1, unsigned __int64 a2)
{
  char v2; // r8
  int v3; // ebx
  unsigned __int16 v5; // di
  int v6; // eax
  _BOOL8 result; // rax
  int v8; // [rsp+4Ch] [rbp+14h]

  v8 = HIDWORD(a2);
  v2 = 32;
  v3 = a2;
  result = 0;
  if ( (*(_BYTE *)(a1 + 64) & 0x20) == 0 )
  {
    if ( *(_QWORD *)(a1 + 224) && !PtInRect((_DWORD *)(a1 + 128), a2) )
      return 1;
    if ( ((unsigned __int8)v2 & *(_BYTE *)(a1 + 67)) != 0 && ((unsigned __int8)v2 & *(_BYTE *)(a1 + 66)) != 0 )
      return 1;
    v5 = *(_WORD *)(a1 + 324);
    v6 = IsWindowDesktopComposed(a1);
    if ( (unsigned int)GrePtInSprite(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1, v3, v8, v5 >= 0x602u, v6) )
      return 1;
  }
  return result;
}
