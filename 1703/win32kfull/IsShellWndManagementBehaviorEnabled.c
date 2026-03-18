/*
 * XREFs of IsShellWndManagementBehaviorEnabled @ 0x1C0021D58
 * Callers:
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     IsShellParticipatesInSizing @ 0x1C0021CB0 (IsShellParticipatesInSizing.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00 (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxTrackMouseMove @ 0x1C00CA16C (xxxTrackMouseMove.c)
 *     xxxDesktopRecalc @ 0x1C00F1A48 (xxxDesktopRecalc.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01EDD84 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01F5B84 (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxArrangeWindow @ 0x1C01F62C4 (xxxArrangeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellWndManagementBehaviorEnabled(__int64 a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( *(_QWORD *)(a1 + 328) )
    return (a2 & *(_DWORD *)(a1 + 336)) != 0;
  return v2;
}
