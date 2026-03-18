/*
 * XREFs of BuildHwndList @ 0x1C0069470
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0015E5C (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018CFC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxInternalEnumWindow @ 0x1C001BFCC (xxxInternalEnumWindow.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxInheritWindowMonitor @ 0x1C005F0F0 (xxxInheritWindowMonitor.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0068444 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserBuildHwndList @ 0x1C0068D00 (NtUserBuildHwndList.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C009DD70 (UpdateMonitorForWindowAndChildren.c)
 *     xxxClientShutdown @ 0x1C00AEADC (xxxClientShutdown.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C2910 (xxxDWP_UpdateUIState.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00C8B7C (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00DAC14 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxShowOwnedWindows @ 0x1C00E8AD0 (xxxShowOwnedWindows.c)
 *     xxxDesktopRecalc @ 0x1C00F1A48 (xxxDesktopRecalc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F72F0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C00FB81C (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     AssociateInputContextEx @ 0x1C0103E3C (AssociateInputContextEx.c)
 *     DestroyInputContext @ 0x1C01357D4 (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C0137030 (xxxArrangeIconicWindows.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01B4430 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01B578C (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01B5CD4 (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01BF624 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C0E2C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CADC4 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0211494 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0068B20 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C013D924 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(__int64 a1, char a2, __int64 a3)
{
  struct tagBWL *v3; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  struct tagWND *v14; // rdx
  _QWORD *v15; // rax

  v3 = pbwlCache;
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    v7 = Win32AllocPool(296LL, 1819767637LL);
    v3 = (struct tagBWL *)v7;
    if ( !v7 )
      return 0LL;
    *(_QWORD *)(v7 + 16) = v7 + 280;
  }
  *((_QWORD *)v3 + 3) = a3;
  for ( *((_QWORD *)v3 + 1) = (char *)v3 + 32; a1; a1 = *(_QWORD *)(a1 + 88) )
  {
    v8 = *((_QWORD *)v3 + 3);
    if ( (a2 & 0x20) == 0 || (v9 = *(_DWORD *)(a1 + 320), (unsigned int)(v9 - 1) <= 1) || v9 == 16 )
    {
      if ( ((a2 & 0x40) == 0
         || (*(_BYTE *)(a1 + 71) & 0x11) != 0x10
         || (*(_BYTE *)(a1 + 60) & 0x40) != 0
         || !(unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 127LL, a3))
        && (!v8 || v8 == *(_QWORD *)(a1 + 16)) )
      {
        **((_QWORD **)v3 + 1) = *(_QWORD *)a1;
        *((_QWORD *)v3 + 1) += 8LL;
        v10 = *((_QWORD *)v3 + 1);
        if ( v10 == *((_QWORD *)v3 + 2) )
        {
          v11 = v10 - (_QWORD)v3;
          v12 = UserReAllocPool(v3, (unsigned int)v11 + 8LL, (unsigned int)v11 + 72LL, 1819767637LL);
          if ( !v12 )
            break;
          v13 = v12 + v11;
          v3 = (struct tagBWL *)v12;
          *(_QWORD *)(v12 + 8) = v13;
          *(_QWORD *)(v12 + 16) = v13 + 64;
        }
      }
    }
    if ( (a2 & 1) != 0 )
    {
      v14 = *(struct tagWND **)(a1 + 112);
      if ( v14 )
      {
        v3 = InternalBuildHwndList(v3, v14, 3LL);
        if ( *((_QWORD *)v3 + 1) >= *((_QWORD *)v3 + 2) )
          break;
      }
    }
    if ( (a2 & 2) == 0 )
      break;
  }
  v15 = (_QWORD *)*((_QWORD *)v3 + 1);
  if ( (unsigned __int64)v15 >= *((_QWORD *)v3 + 2) )
  {
    Win32FreePool(v3);
    return 0LL;
  }
  *v15 = 1LL;
  if ( (a2 & 8) != 0 )
    v3 = InternalRebuildHwndListForIMEClass(v3);
  *((_QWORD *)v3 + 3) = gptiCurrent;
  *(_QWORD *)v3 = gpbwlList;
  gpbwlList = v3;
  return v3;
}
