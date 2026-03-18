/*
 * XREFs of VideoPortCalloutThread @ 0x1C00DD4C8
 * Callers:
 *     xxxCreateSystemThreads @ 0x1C0075B60 (xxxCreateSystemThreads.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00610C8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     xxxResetDisplayDevice @ 0x1C00626E0 (xxxResetDisplayDevice.c)
 *     xxxDwmControl @ 0x1C007AF70 (xxxDwmControl.c)
 *     PostWinlogonMessage @ 0x1C007AFE0 (PostWinlogonMessage.c)
 *     InitSystemThread @ 0x1C007D230 (InitSystemThread.c)
 *     SafeEnableMDEV @ 0x1C00A5EC0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00A5F10 (SafeDisableMDEV.c)
 *     UpdateExternalMonitorConnectedStatus @ 0x1C00A6AC0 (UpdateExternalMonitorConnectedStatus.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DCE00 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DD0D0 (-xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     McTemplateK0qq @ 0x1C00E2A1C (McTemplateK0qq.c)
 *     GreIncrementDisplaySettingsUniqueness @ 0x1C00F36F0 (GreIncrementDisplaySettingsUniqueness.c)
 *     DrvProcessDxgkDisplayCallout @ 0x1C00FA434 (DrvProcessDxgkDisplayCallout.c)
 *     DCompositionForceRender @ 0x1C013DFB0 (DCompositionForceRender.c)
 */

LONG __fastcall VideoPortCalloutThread(PRKEVENT *a1)
{
  struct _VIDEO_WIN32K_CALLBACKS_PARAMS *v1; // rdi
  struct _LIST_ENTRY *Blink; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r14
  unsigned int Arg1; // eax
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  const GUID *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rsi
  __int64 *DomainLockRef; // rbx
  __int64 v18; // rdx
  __int64 v19; // r9
  __int64 CalloutType; // rcx
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 Param_low; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _MDEV *v32; // rcx
  CInputConfig *v33; // rcx
  _QWORD v35[3]; // [rsp+40h] [rbp-18h] BYREF
  tagObjLock *v36; // [rsp+A0h] [rbp+48h] BYREF
  char v37; // [rsp+A8h] [rbp+50h]
  char v38; // [rsp+B0h] [rbp+58h]
  __int64 v39; // [rsp+B8h] [rbp+60h] BYREF

  v1 = (struct _VIDEO_WIN32K_CALLBACKS_PARAMS *)*a1;
  Blink = (*a1)->Header.WaitListHead.Blink;
  v4 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)Blink->Blink;
  (*a1)->Header.WaitListHead.Blink = Blink->Flink;
  Arg1 = InitSystemThread(0LL);
  v1->Status = Arg1;
  v9 = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v6, &StartVideoPortCalloutThread, v7, v1->CalloutType, Arg1);
  if ( v1->Status >= 0 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v9, v7, v8);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
    EtwTraceAcquiredExclusiveUserCrit(v13, v12, v14, v15);
    gptiCurrent = v11;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v36);
    v16 = (__int64 *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = GetDomainLockRef(8);
      do
      {
        gpducstulHead = v16[2];
        v16[2] = 0LL;
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v16);
        RIMLockExclusive((__int64)DomainLockRef);
        v16 = (__int64 *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v36);
    if ( v1->CalloutType == VideoPnpNotifyCallout )
      gbInVideoPnpCallout = 1;
    CalloutType = (unsigned int)v1->CalloutType;
    LOBYTE(v18) = (_DWORD)CalloutType == 7;
    if ( (((_DWORD)CalloutType - 7) & 0xFFFFFFFC) != 0 || (v21 = (_DWORD)CalloutType == 9, LOBYTE(CalloutType) = 1, v21) )
      LOBYTE(CalloutType) = 0;
    xxxWaitForVideoPortCalloutReady(CalloutType, v18, v4, v19);
    if ( (unsigned int)IsRemoteConnection()
      && v1->CalloutType != VideoPnpNotifyCallout
      && v1->CalloutType != VideoDxgkFindAdapterTdrCallout )
    {
      goto LABEL_17;
    }
    v26 = (unsigned int)(v1->CalloutType - 4);
    switch ( v1->CalloutType )
    {
      case VideoFindAdapterCallout:
        goto LABEL_77;
      case VideoPnpNotifyCallout:
        v1->Status = Win32kPnpNotify(v1, v4);
        goto LABEL_69;
      case VideoDxgkDisplaySwitchCallout:
        v35[0] = 0LL;
        if ( (int)IsxxxSetCsrssThreadDesktopSupported() < 0
          || (PVOID)PsGetCurrentProcess(v31, v30) != gpepCSRSS
          || (v23 = (__int64)grpdeskRitInput) != 0 && (int)xxxSetCsrssThreadDesktop(grpdeskRitInput, v35) >= 0 )
        {
          LOBYTE(v36) = 1;
          do
          {
            v37 = 0;
            v38 = 0;
            v32 = *(struct _MDEV **)(gpDispInfo + 8);
            LOBYTE(v39) = 0;
            if ( (int)DrvProcessDxgkDisplayCallout(v32, (__int64)&v39, (__int64)&v36) < 0 )
            {
              LOBYTE(v36) = 0;
            }
            else
            {
              if ( v37 )
              {
                GreIncrementDisplaySettingsUniqueness();
                xxxResetDisplayDevice((__int64)grpdeskRitInput, 0, 0);
              }
              else if ( v38 )
              {
                CInputConfig::OnDisplayStateChange(v33);
              }
              if ( (_BYTE)v39 )
                PostWinlogonMessage(1027LL, 0);
            }
          }
          while ( !(_BYTE)v36 );
          v1->Status = 0;
          if ( !gProtocolType )
            UpdateExternalMonitorConnectedStatus(0);
          if ( (int)IsxxxRestoreCsrssThreadDesktopSupported() >= 0 && (PVOID)PsGetCurrentProcess(v23, v22) == gpepCSRSS )
            xxxRestoreCsrssThreadDesktop(v35, 0LL);
        }
        goto LABEL_69;
    }
    v26 = (unsigned int)(v1->CalloutType - 10);
    switch ( v1->CalloutType )
    {
      case VideoDxgkFindAdapterTdrCallout:
LABEL_77:
        if ( v1->Param )
        {
          if ( !gProtocolType )
            SafeEnableMDEV(1u);
          if ( (int)IsxxxDwmStopRedirectionSupported(v26) >= 0 )
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
          if ( (int)IsxxxDwmStopRedirectionSupported(v26) >= 0 )
            xxxDwmControl(1034LL, 0);
          if ( !gProtocolType )
            SafeDisableMDEV(1u);
        }
        break;
      case VideoDxgkHardwareProtectionTeardown:
        Param_low = LODWORD(v1->Param);
        v28 = 0LL;
        v29 = 1LL;
        goto LABEL_33;
      case VideoRepaintDesktop:
        if ( (int)IsxxxUserResetDisplayDeviceSupported() >= 0 )
          xxxUserResetDisplayDevice();
        break;
      default:
        v23 = (unsigned int)(v1->CalloutType - 13);
        if ( v1->CalloutType != VideoUpdateCursor )
        {
          if ( v1->CalloutType != VideoDisableMultiPlaneOverlay )
          {
LABEL_17:
            v1->Status = -1073741823;
LABEL_69:
            if ( v1->CalloutType == VideoPnpNotifyCallout )
              gbInVideoPnpCallout = 0;
            UserSessionSwitchLeaveCrit(v23, v22, v24, v25);
            goto LABEL_72;
          }
          Param_low = 0LL;
          v28 = 1LL;
          v29 = 0LL;
LABEL_33:
          DCompositionForceRender(0LL, v29, Param_low, v28);
          goto LABEL_69;
        }
        if ( (int)IsSetPointerSupported() >= 0 && (int)IszzzUpdateCursorImageSupported() >= 0 )
        {
          SetPointer(1LL);
          zzzUpdateCursorImage();
        }
        break;
    }
    v1->Status = 0;
    goto LABEL_69;
  }
LABEL_72:
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v6, &StopVideoPortCalloutThread, v7, v1->CalloutType, v1->Status);
  return KeSetEvent(a1[1], 1, 0);
}
