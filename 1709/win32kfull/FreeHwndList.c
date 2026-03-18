/*
 * XREFs of FreeHwndList @ 0x1C006F360
 * Callers:
 *     ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0045444 (-DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z.c)
 *     xxxDesktopRecalc @ 0x1C00494C8 (xxxDesktopRecalc.c)
 *     xxxShowOwnedWindows @ 0x1C004BB84 (xxxShowOwnedWindows.c)
 *     xxxInternalEnumWindow @ 0x1C0054338 (xxxInternalEnumWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C0061CB0 (xxxNotifyMonitorChanged.c)
 *     ?xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z @ 0x1C00670AC (-xxxImeWindowPosChanged@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserBuildHwndList @ 0x1C006D090 (NtUserBuildHwndList.c)
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
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
 *     ?SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z @ 0x1C01CF5C0 (-SwitchWndCleanup@@YAXPEAPEAUtagSwitchWndInfo@@@Z.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z @ 0x1C02129AC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeHwndList(struct tagBWL *a1)
{
  struct tagBWL **v1; // rdx
  struct tagBWL *v2; // rax
  struct tagBWL *v3; // r8
  signed __int64 v4; // rdx

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
      v4 = (*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( (__int64)((*((_QWORD *)a1 + 2) - (_QWORD)a1 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > v4 )
      {
        pbwlCache = a1;
        a1 = v3;
      }
      Win32FreePool(a1, v4, v3);
    }
    else
    {
      pbwlCache = a1;
    }
  }
}
