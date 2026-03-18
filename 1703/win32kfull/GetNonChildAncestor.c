/*
 * XREFs of GetNonChildAncestor @ 0x1C001E9D4
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C0007260 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C0008174 (xxxDWP_ProcessVirtKey.c)
 *     xxxActivateThisWindow @ 0x1C001930C (xxxActivateThisWindow.c)
 *     zzzImeSetOwnerWindow @ 0x1C001EA68 (zzzImeSetOwnerWindow.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     _SelectPalette @ 0x1C00E6528 (_SelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0118F78 (xxxDrawMenuBarUnderlines.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 *     ?xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI_INFO_INT@@5PEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C019DD1C (-xxxButtonEvent@@YAXKUtagPOINT@@PEBU_SUBPIXELS@@HK_K2PEAXPEAU_MOUSE_INPUT_DATA@@HHHHHPEAUtagUIPI.c)
 *     xxxNextWindow @ 0x1C01CC154 (xxxNextWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetNonChildAncestor(__int64 a1)
{
  if ( a1 )
  {
    while ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 )
      a1 = *(_QWORD *)(a1 + 104);
  }
  return a1;
}
