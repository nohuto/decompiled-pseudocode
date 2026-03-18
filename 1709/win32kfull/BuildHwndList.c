/*
 * XREFs of BuildHwndList @ 0x1C006F3E0
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0045444 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxDesktopRecalc @ 0x1C00494C8 (xxxDesktopRecalc.c)
 *     xxxShowOwnedWindows @ 0x1C004BB84 (xxxShowOwnedWindows.c)
 *     xxxInternalEnumWindow @ 0x1C0054338 (xxxInternalEnumWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0062068 (xxxInheritWindowMonitor.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00670AC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserBuildHwndList @ 0x1C006D090 (NtUserBuildHwndList.c)
 *     xxxDWP_UpdateUIState @ 0x1C007BBB4 (xxxDWP_UpdateUIState.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00813A0 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00C8A5C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00CC3F4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxClientShutdown @ 0x1C00D76D8 (xxxClientShutdown.c)
 *     ?xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C00E2044 (-xxxCheckImeShowStatus@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00E6868 (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0107F90 (-xxxSendDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     AssociateInputContextEx @ 0x1C010F50C (AssociateInputContextEx.c)
 *     DestroyInputContext @ 0x1C013A7D0 (DestroyInputContext.c)
 *     xxxArrangeIconicWindows @ 0x1C013DA60 (xxxArrangeIconicWindows.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01B73A0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     SnapshotWindowRects @ 0x1C01B89F0 (SnapshotWindowRects.c)
 *     xxxMetricsRecalc @ 0x1C01B8F64 (xxxMetricsRecalc.c)
 *     ?xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z @ 0x1C01C2F48 (-xxxSendGDIScaledDpiChangedMsgs@@YAHPEAUtagWND@@PEAUtagBWL@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C457C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01CF200 (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02129AC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C006F230 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z @ 0x1C0143CF8 (-InternalRebuildHwndListForIMEClass@@YAPEAUtagBWL@@PEAU1@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagBWL *__fastcall BuildHwndList(__int64 a1, struct tagWND *a2, __int64 a3)
{
  struct tagBWL *v3; // rbx
  char v5; // bp
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // ecx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rsi
  _QWORD *v14; // rax

  v3 = pbwlCache;
  v5 = (char)a2;
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
    if ( (v5 & 0x20) == 0 || (v9 = *(_DWORD *)(a1 + 320), (unsigned int)(v9 - 1) <= 1) || v9 == 16 )
    {
      if ( ((v5 & 0x40) == 0
         || (*(_BYTE *)(a1 + 71) & 0x11) != 0x10
         || (*(_BYTE *)(a1 + 60) & 0x40) != 0
         || !(unsigned int)IsWindowSubjectToShellWindowBehavior(a1, 127LL))
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
    if ( (v5 & 1) != 0 )
    {
      a2 = *(struct tagWND **)(a1 + 112);
      if ( a2 )
      {
        v3 = InternalBuildHwndList(v3, a2, 3LL);
        if ( *((_QWORD *)v3 + 1) >= *((_QWORD *)v3 + 2) )
          break;
      }
    }
    if ( (v5 & 2) == 0 )
      break;
  }
  v14 = (_QWORD *)*((_QWORD *)v3 + 1);
  if ( (unsigned __int64)v14 >= *((_QWORD *)v3 + 2) )
  {
    Win32FreePool(v3, a2, a3);
    return 0LL;
  }
  *v14 = 1LL;
  if ( (v5 & 8) != 0 )
    v3 = InternalRebuildHwndListForIMEClass(v3);
  *((_QWORD *)v3 + 3) = gptiCurrent;
  *(_QWORD *)v3 = gpbwlList;
  gpbwlList = v3;
  return v3;
}
