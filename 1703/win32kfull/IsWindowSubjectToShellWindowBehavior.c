/*
 * XREFs of IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00
 * Callers:
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C002171C (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0068B20 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     _GetWindowTrackInfoAsync @ 0x1C00B2F90 (_GetWindowTrackInfoAsync.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 *     xxxNotifyShellTrackedWindowPosChanged @ 0x1C01B608C (xxxNotifyShellTrackedWindowPosChanged.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01EDD84 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01F5B84 (IsWindowSubjectToShellSizingPolicy.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D58 (IsShellWndManagementBehaviorEnabled.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
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
