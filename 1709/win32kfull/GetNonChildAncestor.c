/*
 * XREFs of GetNonChildAncestor @ 0x1C0057F60
 * Callers:
 *     EditionChangeForegroundQueueForMouseInput @ 0x1C000C700 (EditionChangeForegroundQueueForMouseInput.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C000D158 (xxxDWP_ProcessVirtKey.c)
 *     xxxActivateThisWindow @ 0x1C0054748 (xxxActivateThisWindow.c)
 *     zzzImeSetOwnerWindow @ 0x1C0056AE8 (zzzImeSetOwnerWindow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     _SelectPalette @ 0x1C00F8348 (_SelectPalette.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0122820 (xxxDrawMenuBarUnderlines.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
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
