/*
 * XREFs of IsTrayWindow @ 0x1C00613B0
 * Callers:
 *     xxxFlashWindow @ 0x1C00175F8 (xxxFlashWindow.c)
 *     xxxUpdateTray @ 0x1C0019CC0 (xxxUpdateTray.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00 (IsWindowSubjectToShellWindowBehavior.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxRedrawTitle @ 0x1C003D3F0 (xxxRedrawTitle.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0064A4C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C00B043C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSetForegroundWindow @ 0x1C00B3F50 (xxxSetForegroundWindow.c)
 *     xxxSetSysMenu @ 0x1C00C1FC0 (xxxSetSysMenu.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C00E8BF0 (ParkIcon.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C01061E0 (NtUserGetWindowMinimizeRect.c)
 *     xxxArrangeIconicWindows @ 0x1C0137030 (xxxArrangeIconicWindows.c)
 *     xxxRedrawFrameAndHook @ 0x1C0139250 (xxxRedrawFrameAndHook.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0203704 (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall IsTrayWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r10
  __int64 v4; // rax
  char v5; // al

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1
    || (*(_DWORD *)(gpsi + 2104LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 416LL) + 16LL)) & 0x800) == 0
    && !*(_QWORD *)(*(_QWORD *)(v1 + 8) + 184LL) )
  {
    return 0LL;
  }
  if ( !(unsigned int)IsTopLevelWindow(a1) )
    return 0LL;
  if ( (*(_BYTE *)(v2 + 66) & 4) != 0 )
    return 1LL;
  if ( *(char *)(v2 + 64) < 0 || (*(_BYTE *)(v2 + 67) & 8) != 0 )
    return 0LL;
  if ( (*(_BYTE *)(v2 + 61) & 2) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 120);
    if ( !v4 )
      return 1LL;
    if ( (*(_BYTE *)(v4 + 61) & 2) != 0 )
      return 0LL;
  }
  if ( (*(_BYTE *)(v2 + 60) & 0x40) == 0 )
  {
    v5 = *(_BYTE *)(v2 + 70);
    if ( (v5 & 0xA) == 0 || (v5 & 0xC0) == 0 && (*(_BYTE *)(v2 + 71) & 0x20) == 0 )
      return 0LL;
  }
  return Is31TrayWindow((struct tagWND *)v2);
}
