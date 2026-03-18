/*
 * XREFs of SetVisible @ 0x1C0092DB0
 * Callers:
 *     xxxShowOwnedWindows @ 0x1C004BB84 (xxxShowOwnedWindows.c)
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0060944 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00813A0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxShowWindowEx @ 0x1C00934A8 (xxxShowWindowEx.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     xxxCreateWindowStation @ 0x1C00DB1AC (xxxCreateWindowStation.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0111C44 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011B920 (xxxCleanupMotherDesktopWindow.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C013482C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     zzzActiveCursorTracking @ 0x1C01C1368 (zzzActiveCursorTracking.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     IsTrayWindow @ 0x1C006539C (IsTrayWindow.c)
 *     CalcWindowFullScreen @ 0x1C0066940 (CalcWindowFullScreen.c)
 *     ClrFTrueVis @ 0x1C0080CAC (ClrFTrueVis.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     ComposeWindowIfNeeded @ 0x1C009286C (ComposeWindowIfNeeded.c)
 *     IncVisWindows @ 0x1C0092CD4 (IncVisWindows.c)
 *     DecVisWindows @ 0x1C0092F98 (DecVisWindows.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     _IsWindowVisible @ 0x1C0112B5C (_IsWindowVisible.c)
 *     DecrementCompositedCount @ 0x1C01C5180 (DecrementCompositedCount.c)
 *     IncrementCompositedCount @ 0x1C01C5274 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetVisible(struct tagWND *a1, char a2)
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
    if ( !(unsigned int)IsTrayWindow((__int64)a1) || (v6 = 1, !(unsigned int)IsWindowVisible(a1)) )
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
        PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 22LL, *(_QWORD *)a1);
    }
    if ( (*((_BYTE *)a1 + 67) & 2) != 0 )
      DecrementCompositedCount();
    DecVisWindows(a1);
    if ( (a2 & 8) == 0 )
    {
      v7 = *((_DWORD *)a1 + 76);
      if ( (v7 & 0x8000) != 0 )
      {
        v8 = *(_QWORD *)a1;
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
      ComposeWindowIfNeeded(a1, 0);
    if ( (a2 & 8) == 0 )
      CalcWindowFullScreen(a1);
    if ( (unsigned int)IsTrayWindow((__int64)a1) )
      PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 432LL), 17LL, *(_QWORD *)a1);
    return 1;
  }
  return v2;
}
