/*
 * XREFs of SetVisible @ 0x1C0021E80
 * Callers:
 *     xxxCreateWindowStation @ 0x1C0012EC4 (xxxCreateWindowStation.c)
 *     xxxShowWindowEx @ 0x1C00218A8 (xxxShowWindowEx.c)
 *     xxxDestroyWindow @ 0x1C005C5A0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005D85C (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     xxxShowOwnedWindows @ 0x1C00E8AD0 (xxxShowOwnedWindows.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F72F0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107FCC (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0111B98 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01326B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01BD448 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C0018F4C (PostShellHookMessagesEx.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C001EBD4 (ClrFTrueVis.c)
 *     CalcWindowFullScreen @ 0x1C0020C84 (CalcWindowFullScreen.c)
 *     IncVisWindows @ 0x1C0021DA8 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C0022068 (DecVisWindows.c)
 *     ComposeWindowIfNeeded @ 0x1C0022184 (ComposeWindowIfNeeded.c)
 *     IsTrayWindow @ 0x1C00613B0 (IsTrayWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     _IsWindowVisible @ 0x1C010838C (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01C1F14 (DecrementCompositedCount.c)
 *     IncrementCompositedCount @ 0x1C01C2094 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(_QWORD *a1, char a2)
{
  unsigned int v2; // edi
  int v6; // ebp
  int v7; // eax
  __int64 v8; // rdx

  v2 = 0;
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
    return 0LL;
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 2) != 0 )
      ClrFTrueVis((__int64)a1);
    if ( (*((_BYTE *)a1 + 71) & 0x10) == 0 )
      return v2;
    if ( !(unsigned int)IsTrayWindow(a1) || (v6 = 1, !(unsigned int)IsWindowVisible(a1)) )
      v6 = 0;
    SetOrClrWF(0, a1, 0xF10u, 1);
    if ( (a2 & 0x10) != 0 )
    {
      SetOrClrWF(1, a1, 0x908u, 1);
    }
    else
    {
      SetOrClrWF(0, a1, 0x908u, 1);
      if ( v6 )
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 22LL, *a1);
    }
    if ( (*((_BYTE *)a1 + 67) & 2) != 0 )
      DecrementCompositedCount();
    DecVisWindows(a1);
    if ( (a2 & 8) == 0 )
    {
      v7 = *((_DWORD *)a1 + 76);
      if ( (v7 & 0x8000) != 0 )
      {
        v8 = *a1;
        *((_DWORD *)a1 + 76) = v7 & 0xFFFF7FFF;
        PostShellHookMessagesEx(0x36u, v8, 0LL);
      }
    }
    return 1;
  }
  if ( (*((_BYTE *)a1 + 71) & 0x10) == 0 )
  {
    SetOrClrWF(1, a1, 0xF10u, 1);
    SetOrClrWF((a2 & 0x10) == 0, a1, 0x908u, 1);
    IncVisWindows((__int64)a1);
    if ( (*((_BYTE *)a1 + 67) & 2) != 0 )
      IncrementCompositedCount(a1);
    if ( (a2 & 4) == 0 && (*((_BYTE *)a1 + 66) & 8) == 0 )
      ComposeWindowIfNeeded(a1, 0LL);
    if ( (a2 & 8) == 0 )
      CalcWindowFullScreen((__int64)a1);
    if ( (unsigned int)IsTrayWindow(a1) )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 17LL, *a1);
    return 1;
  }
  return v2;
}
