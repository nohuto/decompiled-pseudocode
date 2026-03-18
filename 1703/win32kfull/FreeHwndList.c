/*
 * XREFs of FreeHwndList @ 0x1C00693F0
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0015E5C (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C0018CFC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     xxxInternalEnumWindow @ 0x1C001BFCC (xxxInternalEnumWindow.c)
 *     xxxBroadcastMessageEx @ 0x1C003D4E4 (xxxBroadcastMessageEx.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     xxxNotifyMonitorChanged @ 0x1C005EF98 (xxxNotifyMonitorChanged.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C0068444 (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
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
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01CB204 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C0211494 (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHwndList(struct tagBWL *a1)
{
  struct tagBWL **v1; // rdx
  struct tagBWL *v2; // rax
  struct tagBWL *v3; // r8

  v1 = (struct tagBWL **)gpbwlList;
  if ( gpbwlList )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( *v1 == a1 )
        break;
      v1 = (struct tagBWL **)*v1;
      if ( !*(_QWORD *)v2 )
        return;
    }
    *v1 = *(struct tagBWL **)a1;
    v3 = pbwlCache;
    if ( pbwlCache )
    {
      if ( (__int64)((*((_QWORD *)a1 + 2) - (_QWORD)a1 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        pbwlCache = a1;
        a1 = v3;
      }
      Win32FreePool(a1);
    }
    else
    {
      pbwlCache = a1;
    }
  }
}
