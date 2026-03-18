/*
 * XREFs of LayerHitTest @ 0x1C011678C
 * Callers:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C005E58C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     xxxWindowHitTest2 @ 0x1C0109384 (xxxWindowHitTest2.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0113DE8 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     _ChildWindowFromPointEx @ 0x1C0138CDC (_ChildWindowFromPointEx.c)
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D411C (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 * Callees:
 *     GrePtInSprite @ 0x1C01370F0 (GrePtInSprite.c)
 */

_BOOL8 __fastcall LayerHitTest(__int64 a1, __int64 a2)
{
  int v3; // ebx
  unsigned __int16 v5; // di
  int v6; // eax
  int v7; // [rsp+4Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v3 = a2;
  if ( (*(_BYTE *)(a1 + 64) & 0x20) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 67) & 0x20) != 0 && (*(_BYTE *)(a1 + 66) & 0x20) != 0 )
    return 1LL;
  v5 = *(_WORD *)(a1 + 324);
  v6 = IsWindowDesktopComposed(a1);
  return (unsigned int)GrePtInSprite(*(HDEV *)(gpDispInfo + 32LL), *(HWND *)a1, v3, v7, v5 >= 0x602u, v6) != 0;
}
