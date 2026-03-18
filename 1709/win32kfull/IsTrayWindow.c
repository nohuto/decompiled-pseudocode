/*
 * XREFs of IsTrayWindow @ 0x1C006539C
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     ParkIcon @ 0x1C004BCA4 (ParkIcon.c)
 *     xxxRedrawTitle @ 0x1C0053FC0 (xxxRedrawTitle.c)
 *     xxxUpdateTray @ 0x1C0055370 (xxxUpdateTray.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0068CCC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetSysMenu @ 0x1C007AD30 (xxxSetSysMenu.c)
 *     xxxFlashWindow @ 0x1C0084014 (xxxFlashWindow.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxSetForegroundWindow @ 0x1C00CBA34 (xxxSetForegroundWindow.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C010FE00 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x1C0116C8C (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxArrangeIconicWindows @ 0x1C013DA60 (xxxArrangeIconicWindows.c)
 *     xxxRedrawFrameAndHook @ 0x1C013FA10 (xxxRedrawFrameAndHook.c)
 *     ?xxxMNPositionHierarchy@@YAIV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020518C (-xxxMNPositionHierarchy@@YAIV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagM.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     Is31TrayWindow @ 0x1C020BF38 (Is31TrayWindow.c)
 */

__int64 __fastcall IsTrayWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v4; // rax
  char v5; // al

  if ( !a1 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 24);
  if ( !v1
    || (*(_DWORD *)(gpsi + 2104LL) & 8) == 0
    || ((*(_DWORD *)(gptiCurrent + 656LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 440LL) + 16LL)) & 0x800) == 0
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
