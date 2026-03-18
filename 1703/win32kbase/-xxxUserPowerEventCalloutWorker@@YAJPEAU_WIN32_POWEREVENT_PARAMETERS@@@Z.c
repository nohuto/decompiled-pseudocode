/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0064B40 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0049560 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C00495B0 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0049680 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C0065218 (EtwTraceStopPowerEventCalloutWorker.c)
 *     ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C0065238 (-DisarmPowerWatchdog@@YAXPEAX@Z.c)
 *     PowerInputEvent @ 0x1C00652C0 (PowerInputEvent.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0065320 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C00656EC (PowerUnDimMonitor.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0065C78 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0065D74 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     EtwTraceIdleActionExpiration @ 0x1C0092120 (EtwTraceIdleActionExpiration.c)
 *     PowerResumeSuspendEvent @ 0x1C0099060 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0099170 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0099444 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C009D01C (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6318 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00D63C8 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C00D6710 (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C00D7114 (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C00D72B0 (PowerIsDisplayRequired.c)
 *     Template_dxq @ 0x1C00DBF90 (Template_dxq.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  LARGE_INTEGER *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r15
  __int64 v31; // rcx
  int v32; // ecx
  LARGE_INTEGER v33; // r14
  int v34; // r9d
  __int64 GlobalTickCount; // rbx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  LARGE_INTEGER *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r15
  int v46; // ecx
  int v47; // r8d
  LARGE_INTEGER v48; // r14
  int v49; // ecx
  int v50; // r8d
  LARGE_INTEGER v51; // r14
  int v52; // r9d
  enum _MONITOR_DISPLAY_STATE v53; // ecx
  bool InputBuffer[4]; // [rsp+30h] [rbp-79h] BYREF
  POWER_MONITOR_REQUEST_REASON v55; // [rsp+34h] [rbp-75h]
  struct tagTHREADINFO *v56; // [rsp+38h] [rbp-71h]
  struct tagTHREADINFO *v57; // [rsp+40h] [rbp-69h]
  unsigned __int64 OutputBuffer; // [rsp+48h] [rbp-61h] BYREF
  int v59; // [rsp+50h] [rbp-59h]
  int v60; // [rsp+54h] [rbp-55h]
  int v61; // [rsp+78h] [rbp-31h] BYREF
  __int64 v62; // [rsp+7Ch] [rbp-2Dh]
  __int16 v63; // [rsp+84h] [rbp-25h]
  _QWORD v64[8]; // [rsp+90h] [rbp-19h] BYREF

  memset(v64, 0, sizeof(v64));
  EtwActivityIdControl(3u, (LPGUID)&v64[1]);
  v5 = 0;
  v6 = *(_DWORD *)a1;
  v7 = *((_QWORD *)a1 + 1);
  v64[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v64[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v64[3]) = 16;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    Template_dxq(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v6, v7, 0);
  if ( gbPowerCalloutsReady )
  {
    if ( (int)v6 > 8 )
    {
      v3 = v6 - 9;
      if ( v6 != 9 )
      {
        switch ( v6 )
        {
          case 0xAu:
            PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v7);
            goto LABEL_28;
          case 0xBu:
            if ( !*(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type
              && !dword_1C018C290
              && dword_1C018C240 == (_DWORD)v7
              && (!gbTtmEnabled || gbBuiltinPanelOn) )
            {
              if ( (_DWORD)v7 == 1 )
              {
                PowerUnDimMonitor();
              }
              else if ( (_DWORD)v7 == 2 )
              {
                PowerDimMonitor();
              }
            }
            goto LABEL_28;
          case 0xCu:
LABEL_11:
            ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
            DisarmPowerWatchdog(gpRequestQueueWatchdog);
            ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
            if ( v6 == 12 )
              UserSessionSwitchBlock_End();
            if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type || dword_1C018C290 )
              goto LABEL_21;
            v55 = (int)v7;
            InputBuffer[0] = gProtocolType == 0;
            if ( HIDWORD(qword_1C018C29C) && !gProtocolType && (_DWORD)v7 != 22 )
            {
              if ( (_DWORD)v7 != 1 || !ShouldEscapeProximity() )
                goto LABEL_23;
              HIDWORD(qword_1C018C29C) = 0;
            }
            ArmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
            gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, InputBuffer, 8u, 0LL, 0);
            DisarmPowerWatchdog(gpRequestWorkerWatchdog);
            if ( gLastResumeResult == 259 )
            {
              if ( !gWakeInProgress )
              {
                gWakeInProgressReason = v55;
                gWakeInProgress = 1;
                UserSessionSwitchBlock_Start();
              }
              goto LABEL_23;
            }
            if ( gLastResumeResult != -1073741823 )
            {
              v9 = 0;
              if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
              {
                ArmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
                PowerOnGdi(v64, 0LL, 0LL);
                DisarmPowerWatchdog(gpRequestWorkerWatchdog);
                v9 = 1;
              }
              PowerOnMonitor(v55);
              if ( v9 )
                ProcessDelayedSdc(v64);
LABEL_21:
              if ( (int)IsSetTimerCoalescingToleranceSupported() >= 0 )
                SetTimerCoalescingTolerance(0LL);
            }
LABEL_23:
            ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
            if ( --gPowerOnRequestCount )
              ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
            ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
            goto LABEL_28;
          case 0xDu:
            PowerOnSession((unsigned int)v7);
            break;
          case 0xEu:
            PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v7, v2);
            break;
          case 0xFu:
            if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type || dword_1C018C290 )
              goto LABEL_28;
            if ( v7 == 1 )
            {
              gbBuiltinPanelOn = 1;
              PowerUnDimMonitor();
              v53 = PowerMonitorOn;
            }
            else
            {
              if ( v7 != 2 )
              {
                gbBuiltinPanelOn = 0;
                goto LABEL_28;
              }
              gbBuiltinPanelOn = 1;
              PowerDimMonitor();
              v53 = PowerMonitorDim;
            }
            UpdateDisplayState(v53, MonitorRequestReasonUnknown, 1, v52);
            goto LABEL_28;
          default:
            goto LABEL_151;
        }
        UserSessionSwitchBlock_End();
        goto LABEL_28;
      }
    }
    else
    {
      if ( v6 != 8 )
      {
        v8 = v6;
        switch ( v6 )
        {
          case 0u:
            if ( !gProtocolType && gPowerAdaptiveState )
            {
              LOBYTE(v8) = 1;
              gPowerAdaptiveState = 0;
              PowerInputEvent(v8);
            }
            if ( !gbRemoteSession )
            {
              LOBYTE(v4) = 1;
              if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v4) )
              {
                v61 = 0;
                v62 = 7LL;
                v63 = 0;
                if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                UserSessionSwitchLeaveCrit();
                ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v61, 0x10u, 0LL, 0);
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v13, v15);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                v56 = EnterCritAvoidingDitHitTestHazard(0, 1);
                v20 = PsGetCurrentThreadWin32Thread(v18, v17, v19);
                if ( v20 )
                {
                  v51 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v20 + 8));
                  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                    && (qword_1C0186D80 & 0x200000010000000LL) != 0
                    && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                    && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                  {
                    LOBYTE(v49) = byte_1C0186D98 - 1;
                    Template_xqx(
                      v49,
                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                      v50,
                      v51.LowPart,
                      0,
                      (char)gullUserCritAcquireToken);
                  }
                  if ( v51.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                    && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                  {
                    Template_xqx(
                      (_DWORD)gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                      v50,
                      0,
                      1000 * v51.QuadPart / gliQpcFreq.QuadPart,
                      (char)gullUserCritAcquireToken);
                  }
                  *(_QWORD *)(v20 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
                }
                gptiCurrent = v56;
                gbValidateHandleForIL = 1;
              }
            }
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit();
            v21 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u);
            LODWORD(v56) = v21 == 0;
            v24 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v21 == 0, v22, v23);
            if ( v24 )
              v24[1] = KeQueryPerformanceCounter(0LL);
            v57 = EnterCritAvoidingDitHitTestHazard(0, 1);
            v30 = PsGetCurrentThreadWin32Thread(v26, v25, v27);
            if ( v30 )
            {
              v33 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v30 + 8));
              if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                && (qword_1C0186D80 & 0x200000010000000LL) != 0
                && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
              {
                LOBYTE(v32) = byte_1C0186D98 - 1;
                Template_xqx(
                  v32,
                  (unsigned int)&AcquiredExclusiveUserCritEvent,
                  v29,
                  v33.LowPart,
                  0,
                  (char)gullUserCritAcquireToken);
              }
              if ( v33.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
              {
                Template_xqx(
                  (_DWORD)gullUserCritAcquireToken,
                  (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                  v29,
                  0,
                  1000 * v33.QuadPart / gliQpcFreq.QuadPart,
                  (char)gullUserCritAcquireToken);
              }
              *(_QWORD *)(v30 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
            }
            gptiCurrent = v57;
            gbValidateHandleForIL = 1;
            if ( !(_DWORD)v56 || gSessionCreationTime < OutputBuffer )
            {
              LOBYTE(v29) = 1;
              LOBYTE(v28) = 1;
              if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v28, v29) )
              {
                v59 = 16;
                v60 = 0x20000000;
                if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
                  xxxSendMessageBSM(0LL, 536LL, 7LL);
              }
            }
            if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
              goto LABEL_28;
            v31 = 0LL;
LABEL_58:
            SetTimerCoalescingTolerance(v31);
            goto LABEL_28;
          case 1u:
            v5 = PostWinlogonMessage(256LL, v7);
            if ( !v5 )
              PostPlaySoundMessage(v7);
            goto LABEL_28;
          case 2u:
            if ( !gbRemoteSession )
            {
              v61 = 0;
              v62 = 10LL;
              v63 = 0;
              if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
              UserSessionSwitchLeaveCrit();
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v61, 0x10u, 0LL, 0);
              v41 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v39, v38, v40);
              if ( v41 )
                v41[1] = KeQueryPerformanceCounter(0LL);
              v56 = EnterCritAvoidingDitHitTestHazard(0, 1);
              v45 = PsGetCurrentThreadWin32Thread(v43, v42, v44);
              if ( v45 )
              {
                v48 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v45 + 8));
                if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                  && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                  && (qword_1C0186D80 & 0x200000010000000LL) != 0
                  && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                  && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                {
                  Template_xqx(
                    v46,
                    (unsigned int)&AcquiredExclusiveUserCritEvent,
                    v47,
                    v48.LowPart,
                    0,
                    (char)gullUserCritAcquireToken);
                }
                if ( v48.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                  && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                {
                  Template_xqx(
                    1000 * v48.QuadPart / gliQpcFreq.QuadPart,
                    (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                    v47,
                    0,
                    1000 * v48.QuadPart / gliQpcFreq.QuadPart,
                    (char)gullUserCritAcquireToken);
                }
                *(_QWORD *)(v45 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
              }
              gptiCurrent = v56;
              gbValidateHandleForIL = 1;
            }
            v59 = 16;
            v60 = 16;
            if ( (int)IsxxxSendMessageBSMSupported() < 0 )
              goto LABEL_28;
            v12 = 536LL;
            v11 = 10LL;
            goto LABEL_32;
        }
        if ( v6 != 3 )
        {
          switch ( v6 )
          {
            case 4u:
              goto LABEL_11;
            case 5u:
              if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
                goto LABEL_28;
              v55 = (int)v7;
              PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v7);
              if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 || v55 == MonitorRequestReasonGracePeriod )
                goto LABEL_28;
              v31 = 2LL;
              goto LABEL_58;
            case 6u:
              if ( CInputGlobals::UpdateGlobalTickCount((__int64)gpInputGlobals, 2) )
                EtwTraceIdleActionExpiration(1LL, (unsigned int)giScreenSaveTimeOutMs);
              if ( gPowerTransitionsState
                || (*(_DWORD *)gpsi & 0x200) != 0
                && (GlobalTickCount = CInputGlobals::GetGlobalTickCount((__int64)gpInputGlobals, 1),
                    GlobalTickCount != CInputGlobals::GetLastInputTime(gpInputGlobals)) )
              {
                if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
                {
                  if ( gppiScreenSaver )
                  {
                    v36 = *(_DWORD *)(gppiScreenSaver + 12);
                    if ( (v36 & 0x400000) == 0 )
                    {
                      *(_DWORD *)(gppiScreenSaver + 12) = v36 | 0x400000;
                      if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                      {
                        v37 = *(_QWORD *)(gppiScreenSaver + 296);
                        if ( v37 )
                          SetForegroundPriority(v37, 1LL);
                      }
                    }
                  }
                  else if ( gpqForeground
                         && *(_QWORD *)(gpqForeground + 88)
                         && (int)IsIsHungWindowSupported() >= 0
                         && !(unsigned int)IsHungWindow(*(_QWORD *)(gpqForeground + 88)) )
                  {
                    if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported() >= 0 )
                      StartScreenSaver(1LL);
                    _PostMessage(*(_QWORD *)(gpqForeground + 88), 274LL, 61760LL, (*(_DWORD *)gpsi >> 9) & 1);
                  }
                  else if ( (int)IsStartScreenSaverSupported() >= 0 )
                  {
                    StartScreenSaver(0LL);
                  }
                }
              }
              goto LABEL_28;
            case 7u:
              if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type || dword_1C018C290 || !gPowerTransitionsState )
                goto LABEL_28;
              PowerDimMonitor();
              if ( !gProtocolType )
                UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonUnknown, 1, v34);
              if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                goto LABEL_28;
              v31 = 1LL;
              goto LABEL_58;
          }
LABEL_151:
          v5 = -1073741822;
          goto LABEL_28;
        }
        v59 = 16;
        v60 = 16;
        if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
        {
          v11 = 0LL;
          v12 = 30LL;
LABEL_32:
          xxxSendMessageBSM(0LL, v12, v11);
        }
LABEL_28:
        EtwTraceStopPowerEventCalloutWorker(v6, v7, v5);
        return v5;
      }
      LOBYTE(v3) = 1;
    }
    PowerInputEvent(v3);
    goto LABEL_28;
  }
  EtwTraceStopPowerEventCalloutWorker(v6, v7, 3221225473LL);
  return 3221225473LL;
}
