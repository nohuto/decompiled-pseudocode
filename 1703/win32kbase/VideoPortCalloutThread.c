/*
 * XREFs of VideoPortCalloutThread @ 0x1C00D72E8
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C0068060 (xxxCreateSystemThreads.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     xxxDwmControl @ 0x1C0066950 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 *     InitSystemThread @ 0x1C007CCE0 (InitSystemThread.c)
 *     SafeEnableMDEV @ 0x1C009BE80 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C009BED0 (SafeDisableMDEV.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C009CAD4 (UpdateExternalMonitorConnectedStatus.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6E24 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     Template_qq @ 0x1C00DC97C (Template_qq.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00F0B10 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C00FA1C4 (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionForceRender @ 0x1C013EB50 (DCompositionForceRender.c)
 */

LONG __fastcall VideoPortCalloutThread(PRKEVENT *a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r15
  LONG inited; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  int v17; // ecx
  int v18; // r8d
  LONGLONG v19; // rdi
  __int64 CalloutType; // rcx
  bool v21; // zf
  __int64 v22; // rcx
  __int64 Param_low; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  struct _MDEV *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD v38[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v39; // [rsp+A0h] [rbp+48h] BYREF
  char v40; // [rsp+A8h] [rbp+50h]
  char v41; // [rsp+B0h] [rbp+58h]
  __int64 v42; // [rsp+B8h] [rbp+60h] BYREF

  v1 = (struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Blink->Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  inited = InitSystemThread(0LL);
  v1->Status = inited;
  v8 = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    Template_qq(v6, &StartVideoPortCalloutThread, v7, (unsigned int)v1->CalloutType, inited);
  if ( v1->Status >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v8, v7);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v10 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v15 = PsGetCurrentThreadWin32Thread(v12, v11, v13);
    if ( v15 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v14 = 0x200000010000000LL;
      v19 = PerformanceCounter.QuadPart - *(_QWORD *)(v15 + 8);
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v17) = byte_1C0186D98 - 1;
        Template_xqx(v17, (unsigned int)&AcquiredExclusiveUserCritEvent, v18, v19, 0, (char)gullUserCritAcquireToken);
      }
      if ( v19 >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v18,
          0,
          1000 * v19 / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v10;
    gbValidateHandleForIL = 1;
    if ( v1->CalloutType == VideoPnpNotifyCallout )
      gbInVideoPnpCallout = 1;
    CalloutType = (unsigned int)v1->CalloutType;
    LOBYTE(v14) = (_DWORD)CalloutType == 7;
    if ( (((_DWORD)CalloutType - 7) & 0xFFFFFFFC) != 0 || (v21 = (_DWORD)CalloutType == 9, LOBYTE(CalloutType) = 1, v21) )
      LOBYTE(CalloutType) = 0;
    xxxWaitForVideoPortCalloutReady(CalloutType, v14, v4);
    if ( (unsigned int)IsRemoteConnection()
      && v1->CalloutType != VideoPnpNotifyCallout
      && v1->CalloutType != VideoDxgkFindAdapterTdrCallout )
    {
      goto LABEL_25;
    }
    v22 = (unsigned int)(v1->CalloutType - 4);
    switch ( v1->CalloutType )
    {
      case VideoFindAdapterCallout:
        goto LABEL_85;
      case VideoPnpNotifyCallout:
        v1->Status = Win32kPnpNotify(v1, v4);
        goto LABEL_77;
      case VideoDxgkDisplaySwitchCallout:
        v38[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (PVOID)PsGetCurrentProcess(v27, v26, v28, v29) != gpepCSRSS
          || grpdeskRitInput && (int)xxxSetCsrssThreadDesktop(grpdeskRitInput, v38) >= 0 )
        {
          LOBYTE(v39) = 1;
          do
          {
            v40 = 0;
            v41 = 0;
            v30 = (struct _MDEV *)*((_QWORD *)gpDispInfo + 1);
            LOBYTE(v42) = 0;
            if ( (int)DrvProcessDxgkDisplayCallout(v30, (__int64)&v42, (__int64)&v39) < 0 )
            {
              LOBYTE(v39) = 0;
            }
            else
            {
              if ( v40 )
              {
                GreIncrementDisplaySettingsUniqueness();
                xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
              }
              else if ( v41 )
              {
                UpdatePointerDevices(v32, v31);
              }
              if ( (_BYTE)v42 )
                PostWinlogonMessage(1027LL, 0);
            }
          }
          while ( !(_BYTE)v39 );
          v1->Status = 0;
          if ( !gProtocolType )
            UpdateExternalMonitorConnectedStatus(0);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0
            && (PVOID)PsGetCurrentProcess(v34, v33, v35, v36) == gpepCSRSS )
          {
            xxxRestoreCsrssThreadDesktop(v38, 0LL);
          }
        }
        goto LABEL_77;
    }
    v22 = (unsigned int)(v1->CalloutType - 10);
    switch ( v1->CalloutType )
    {
      case VideoDxgkFindAdapterTdrCallout:
LABEL_85:
        if ( v1->Param )
        {
          if ( !gProtocolType )
            SafeEnableMDEV(1u);
          if ( (int)IsxxxDwmStopRedirectionSupported(v22) >= 0 )
            xxxDwmControl(1035LL, 0);
          if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 )
            xxxUserResetDisplayDevice();
          if ( (int)IsxxxBroadcastModernAppRedrawSupported() >= 0 )
            xxxBroadcastModernAppRedraw();
          PsGetCurrentProcessSessionId();
          ZwUpdateWnfStateData(&WNF_DXGK_ADAPTER_TDR_NOTIFICATION, 0LL, 0LL, 0LL, 0LL, 0, 0);
        }
        else
        {
          if ( (int)IsxxxDwmStopRedirectionSupported(v22) >= 0 )
            xxxDwmControl(1034LL, 0);
          if ( !gProtocolType )
            SafeDisableMDEV(1u);
        }
        break;
      case VideoDxgkHardwareProtectionTeardown:
        Param_low = LODWORD(v1->Param);
        v24 = 0LL;
        v25 = 1LL;
        goto LABEL_41;
      case VideoRepaintDesktop:
        if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 )
          xxxUserResetDisplayDevice();
        break;
      case VideoUpdateCursor:
        if ( (int)IsSetPointerSupported() >= 0 && (int)IszzzUpdateCursorImageSupported() >= 0 )
        {
          SetPointer(1LL);
          zzzUpdateCursorImage();
        }
        break;
      case VideoDisableMultiPlaneOverlay:
        Param_low = 0LL;
        v24 = 1LL;
        v25 = 0LL;
LABEL_41:
        DCompositionForceRender(0LL, v25, Param_low, v24);
        goto LABEL_77;
      default:
LABEL_25:
        v1->Status = -1073741823;
LABEL_77:
        if ( v1->CalloutType == VideoPnpNotifyCallout )
          gbInVideoPnpCallout = 0;
        UserSessionSwitchLeaveCrit();
        goto LABEL_80;
    }
    v1->Status = 0;
    goto LABEL_77;
  }
LABEL_80:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    Template_qq(v6, &StopVideoPortCalloutThread, v7, (unsigned int)v1->CalloutType, v1->Status);
  return KeSetEvent(a1[1], 1, 0);
}
