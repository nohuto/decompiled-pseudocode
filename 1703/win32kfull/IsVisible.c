/*
 * XREFs of IsVisible @ 0x1C0069E24
 * Callers:
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C0028A5C (-UT_InvertCaret@@YAXXZ.c)
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     xxxSetScrollBar @ 0x1C00D6A78 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D708C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C01E3734 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     RestoreSpb @ 0x1C01E3D2C (RestoreSpb.c)
 *     SpbCheckRect @ 0x1C01E4040 (SpbCheckRect.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C020E55C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     EnumPwndDlgChildProc @ 0x1C023C010 (EnumPwndDlgChildProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsVisible(__int64 a1)
{
  __int64 v1; // rdx
  char v2; // al

  v1 = a1;
  if ( !a1 )
    return 1LL;
  while ( 1 )
  {
    v2 = *(_BYTE *)(v1 + 71);
    if ( (v2 & 0x10) == 0 || (v2 & 0x20) != 0 && v1 != a1 )
      break;
    if ( (*(_WORD *)(v1 + 82) & 0x3FFF) != 0x29D )
    {
      v1 = *(_QWORD *)(v1 + 104);
      if ( v1 )
        continue;
    }
    return 1LL;
  }
  return 0LL;
}
