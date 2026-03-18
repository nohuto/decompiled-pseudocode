/*
 * XREFs of IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C00668A0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006F230 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     _GetWindowTrackInfoAsync @ 0x1C0084EB0 (_GetWindowTrackInfoAsync.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B9320 (xxxNotifyShellTrackedWindowPosChanged.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01DCEBC (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01F8220 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C009690C (IsShellWndManagementBehaviorEnabled.c)
 */

__int64 __fastcall IsWindowSubjectToShellWindowBehavior(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v6; // eax

  if ( !(unsigned int)IsShellWndManagementBehaviorEnabled(*(_QWORD *)(a1 + 24), a2, a3, a1) )
    return 0;
  v6 = *(_DWORD *)(v3 + 320);
  v4 = 1;
  if ( (v6 < 8 || v6 > 11) && v6 != 1 )
    return 0;
  if ( (*(_BYTE *)(v3 + 70) & 1) == 0 || !(unsigned int)IsTrayWindow(v3) )
    return 0;
  return v4;
}
