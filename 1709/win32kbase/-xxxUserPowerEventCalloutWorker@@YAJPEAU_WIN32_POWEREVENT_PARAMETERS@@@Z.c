/*
 * XREFs of ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0077350 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0011510 (-GetGlobalTickCount@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C0011560 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     ?UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z @ 0x1C0011630 (-UpdateGlobalTickCount@CInputGlobals@@QEAA_NW4INPUT_GLOBALS_TICK_COUNT@@@Z.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceStopPowerEventCalloutWorker @ 0x1C00779B0 (EtwTraceStopPowerEventCalloutWorker.c)
 *     ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C00779D0 (-DisarmPowerWatchdog@@YAXPEAX@Z.c)
 *     PowerInputEvent @ 0x1C0077A60 (PowerInputEvent.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0077AC0 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C0077E70 (PowerUnDimMonitor.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0077F64 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0078018 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PostWinlogonMessage @ 0x1C007AFE0 (PostWinlogonMessage.c)
 *     EtwTraceIdleActionExpiration @ 0x1C009B4A0 (EtwTraceIdleActionExpiration.c)
 *     PowerResumeSuspendEvent @ 0x1C00A3150 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00A3210 (PowerOffMonitor.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A34BC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A5E48 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DC710 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00DC7C0 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     ?ShouldEscapeProximity@@YAEXZ @ 0x1C00DCA80 (-ShouldEscapeProximity@@YAEXZ.c)
 *     PowerDimMonitor @ 0x1C00DD2FC (PowerDimMonitor.c)
 *     PowerIsDisplayRequired @ 0x1C00DD490 (PowerIsDisplayRequired.c)
 *     McTemplateK0dxq @ 0x1C00E2A90 (McTemplateK0dxq.c)
 */

__int64 __fastcall xxxUserPowerEventCalloutWorker(struct _WIN32_POWEREVENT_PARAMETERS *a1)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rsi
  BOOL v25; // r15d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  LARGE_INTEGER *v30; // rbx
  struct tagTHREADINFO *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  int v40; // r9d
  __int64 GlobalTickCount; // rbx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  LARGE_INTEGER *v48; // rbx
  struct tagTHREADINFO *v49; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 *v54; // rsi
  __int64 *v55; // rbx
  __int64 *DomainLockRef; // rbx
  __int64 *v57; // rbx
  int v58; // r9d
  enum _MONITOR_DISPLAY_STATE v59; // ecx
  bool InputBuffer; // [rsp+38h] [rbp-89h] BYREF
  enum POWER_MONITOR_REQUEST_REASON InputBuffer_4; // [rsp+3Ch] [rbp-85h]
  tagObjLock *v62; // [rsp+40h] [rbp-81h] BYREF
  tagObjLock *v63; // [rsp+48h] [rbp-79h] BYREF
  tagObjLock *v64; // [rsp+50h] [rbp-71h] BYREF
  unsigned __int64 OutputBuffer; // [rsp+58h] [rbp-69h] BYREF
  int v66; // [rsp+60h] [rbp-61h]
  int v67; // [rsp+64h] [rbp-5Dh]
  int v68; // [rsp+88h] [rbp-39h] BYREF
  __int64 v69; // [rsp+8Ch] [rbp-35h]
  __int16 v70; // [rsp+94h] [rbp-2Dh]
  _QWORD v71[10]; // [rsp+98h] [rbp-29h] BYREF

  memset(v71, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v71[1]);
  v6 = 0;
  v7 = *(_DWORD *)a1;
  v8 = *((_QWORD *)a1 + 1);
  v71[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v71[4]) = *((_DWORD *)a1 + 2);
  LODWORD(v71[3]) = 16;
  LOBYTE(v71[6]) = -1;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0dxq(v3, (unsigned int)&StartPowerEventCalloutWorker, v4, v7, v8, 0);
  if ( gbPowerCalloutsReady )
  {
    if ( (int)v7 > 8 )
    {
      v3 = v7 - 9;
      if ( v7 != 9 )
      {
        switch ( v7 )
        {
          case 0xAu:
            PowerDisplayBurst((enum POWER_MONITOR_REQUEST_REASON)v8);
            goto LABEL_28;
          case 0xBu:
            if ( !LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2)
              && !dword_1C0190FC0
              && dword_1C0190F70 == (_DWORD)v8
              && (!gbTtmEnabled || gbBuiltinPanelOn) )
            {
              if ( (_DWORD)v8 == 1 )
              {
                PowerUnDimMonitor();
              }
              else if ( (_DWORD)v8 == 2 )
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
            if ( v7 == 12 )
              UserSessionSwitchBlock_End();
            if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) || dword_1C0190FC0 )
              goto LABEL_21;
            InputBuffer_4 = (int)v8;
            InputBuffer = gProtocolType == 0;
            if ( HIDWORD(qword_1C0190FCC) && !gProtocolType && (_DWORD)v8 != 22 )
            {
              if ( (_DWORD)v8 != 1 || !ShouldEscapeProximity() )
                goto LABEL_23;
              HIDWORD(qword_1C0190FCC) = 0;
            }
            ArmPowerWatchdog(gpRequestWorkerWatchdog, 32LL);
            gLastResumeResult = ZwPowerInformation((POWER_INFORMATION_LEVEL)68, &InputBuffer, 8u, 0LL, 0);
            DisarmPowerWatchdog(gpRequestWorkerWatchdog);
            if ( gLastResumeResult == 259 )
            {
              if ( !gWakeInProgress )
              {
                gWakeInProgressReason = InputBuffer_4;
                gWakeInProgress = 1;
                UserSessionSwitchBlock_Start();
              }
              goto LABEL_23;
            }
            if ( gLastResumeResult != -1073741823 )
            {
              v10 = 0;
              if ( !gbGDIOn && (int)IsPowerOnGdiSupported() >= 0 )
              {
                ArmPowerWatchdog(gpRequestWorkerWatchdog, 48LL);
                PowerOnGdi(v71, 0LL, 0LL);
                DisarmPowerWatchdog(gpRequestWorkerWatchdog);
                v10 = 1;
              }
              PowerOnMonitor(InputBuffer_4);
              if ( v10 )
                ProcessDelayedSdc(v71);
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
            PowerOnSession((unsigned int)v8);
            break;
          case 0xEu:
            PowerOffSession((enum POWER_MONITOR_REQUEST_REASON)v8, v2);
            break;
          case 0xFu:
            if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) || dword_1C0190FC0 )
              goto LABEL_28;
            if ( v8 == 1 )
            {
              gbBuiltinPanelOn = 1;
              PowerUnDimMonitor();
              v59 = PowerMonitorOn;
            }
            else
            {
              if ( v8 != 2 )
              {
                gbBuiltinPanelOn = 0;
                goto LABEL_28;
              }
              gbBuiltinPanelOn = 1;
              PowerDimMonitor();
              v59 = PowerMonitorDim;
            }
            UpdateDisplayState(v59, MonitorRequestReasonUnknown, 1, v58);
            goto LABEL_28;
          default:
            goto LABEL_127;
        }
        UserSessionSwitchBlock_End();
        goto LABEL_28;
      }
    }
    else
    {
      if ( v7 != 8 )
      {
        v9 = v7;
        switch ( v7 )
        {
          case 0u:
            if ( !gProtocolType && gPowerAdaptiveState )
            {
              LOBYTE(v9) = 1;
              gPowerAdaptiveState = 0;
              PowerInputEvent(v9);
            }
            if ( !gbRemoteSession )
            {
              LOBYTE(v4) = 1;
              if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, v4) )
              {
                v68 = 0;
                v69 = 7LL;
                v70 = 0;
                if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)v2, v4, v5);
                ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v68, 0x10u, 0LL, 0);
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15, v14, v16, v17);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                v19 = EnterCritAvoidingDitHitTestHazard(0, 1);
                EtwTraceAcquiredExclusiveUserCrit(v21, v20, v22, v23);
                gptiCurrent = v19;
                gbValidateHandleForIL = 1;
                CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v63);
                v24 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  DomainLockRef = GetDomainLockRef(8);
                  do
                  {
                    gpducstulHead = v24[2];
                    v24[2] = 0LL;
                    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
                    HMUnlockObject(*v24);
                    RIMLockExclusive((__int64)DomainLockRef);
                    v24 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                }
                tagObjLock::UnLock(v63);
              }
            }
            if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
            UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)v2, v4, v5);
            v25 = ZwPowerInformation(LastSleepTime, 0LL, 0, &OutputBuffer, 8u) == 0;
            v30 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v27, v26, v28, v29);
            if ( v30 )
              v30[1] = KeQueryPerformanceCounter(0LL);
            v31 = EnterCritAvoidingDitHitTestHazard(0, 1);
            EtwTraceAcquiredExclusiveUserCrit(v33, v32, v34, v35);
            gptiCurrent = v31;
            gbValidateHandleForIL = 1;
            CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v64);
            v36 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              v57 = GetDomainLockRef(8);
              do
              {
                gpducstulHead = v36[2];
                v36[2] = 0LL;
                tagObjLock::UnLock((tagObjLock *)v57);
                HMUnlockObject(*v36);
                RIMLockExclusive((__int64)v57);
                v36 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
            }
            tagObjLock::UnLock(v64);
            if ( !v25 || gSessionCreationTime < OutputBuffer )
            {
              LOBYTE(v38) = 1;
              LOBYTE(v37) = 1;
              if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v37, v38) )
              {
                v66 = 16;
                v67 = 0x20000000;
                if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
                  xxxSendMessageBSM(0LL, 536LL, 7LL);
              }
            }
            if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
              goto LABEL_28;
            v39 = 0LL;
LABEL_54:
            SetTimerCoalescingTolerance(v39);
            goto LABEL_28;
          case 1u:
            v6 = PostWinlogonMessage(256LL, v8);
            if ( !v6 )
              PostPlaySoundMessage(v8);
            goto LABEL_28;
          case 2u:
            if ( !gbRemoteSession )
            {
              v68 = 0;
              v69 = 10LL;
              v70 = 0;
              if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
              UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, (__int64)v2, v4, v5);
              ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &v68, 0x10u, 0LL, 0);
              v48 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v45, v44, v46, v47);
              if ( v48 )
                v48[1] = KeQueryPerformanceCounter(0LL);
              v49 = EnterCritAvoidingDitHitTestHazard(0, 1);
              EtwTraceAcquiredExclusiveUserCrit(v51, v50, v52, v53);
              gptiCurrent = v49;
              gbValidateHandleForIL = 1;
              CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v62);
              v54 = (__int64 *)gpducstulHead;
              if ( gpducstulHead )
              {
                v55 = GetDomainLockRef(8);
                do
                {
                  gpducstulHead = v54[2];
                  v54[2] = 0LL;
                  tagObjLock::UnLock((tagObjLock *)v55);
                  HMUnlockObject(*v54);
                  RIMLockExclusive((__int64)v55);
                  v54 = (__int64 *)gpducstulHead;
                }
                while ( gpducstulHead );
              }
              tagObjLock::UnLock(v62);
            }
            v66 = 16;
            v67 = 16;
            if ( (int)IsxxxSendMessageBSMSupported() < 0 )
              goto LABEL_28;
            v13 = 536LL;
            v12 = 10LL;
            goto LABEL_32;
        }
        if ( v7 != 3 )
        {
          switch ( v7 )
          {
            case 4u:
              goto LABEL_11;
            case 5u:
              if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
                goto LABEL_28;
              InputBuffer_4 = (int)v8;
              PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)v8);
              if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 || InputBuffer_4 == MonitorRequestReasonGracePeriod )
                goto LABEL_28;
              v39 = 2LL;
              goto LABEL_54;
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
                    v42 = *(_DWORD *)(gppiScreenSaver + 12);
                    if ( (v42 & 0x400000) == 0 )
                    {
                      *(_DWORD *)(gppiScreenSaver + 12) = v42 | 0x400000;
                      if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                      {
                        v43 = *(_QWORD *)(gppiScreenSaver + 304);
                        if ( v43 )
                          SetForegroundPriority(v43, 1LL);
                      }
                    }
                  }
                  else if ( gpqForeground
                         && *(_QWORD *)(gpqForeground + 120)
                         && (int)IsIsHungWindowSupported() >= 0
                         && !(unsigned int)IsHungWindow(*(_QWORD *)(gpqForeground + 120)) )
                  {
                    if ( (*(_DWORD *)gpsi & 0x200) != 0 && (int)IsStartScreenSaverSupported() >= 0 )
                      StartScreenSaver(1LL);
                    _PostMessage(*(_QWORD *)(gpqForeground + 120), 274LL, 61760LL, (*(_DWORD *)gpsi >> 9) & 1);
                  }
                  else if ( (int)IsStartScreenSaverSupported() >= 0 )
                  {
                    StartScreenSaver(0LL);
                  }
                }
              }
              goto LABEL_28;
            case 7u:
              if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) || dword_1C0190FC0 || !gPowerTransitionsState )
                goto LABEL_28;
              PowerDimMonitor();
              if ( !gProtocolType )
                UpdateDisplayState(PowerMonitorDim, MonitorRequestReasonUnknown, 1, v40);
              if ( (int)IsSetTimerCoalescingToleranceSupported() < 0 )
                goto LABEL_28;
              v39 = 1LL;
              goto LABEL_54;
          }
LABEL_127:
          v6 = -1073741822;
          goto LABEL_28;
        }
        v66 = 16;
        v67 = 16;
        if ( (int)IsxxxSendMessageBSMSupported() >= 0 )
        {
          v12 = 0LL;
          v13 = 30LL;
LABEL_32:
          xxxSendMessageBSM(0LL, v13, v12);
        }
LABEL_28:
        EtwTraceStopPowerEventCalloutWorker(v7, v8, v6);
        return v6;
      }
      LOBYTE(v3) = 1;
    }
    PowerInputEvent(v3);
    goto LABEL_28;
  }
  EtwTraceStopPowerEventCalloutWorker(v7, v8, 3221225473LL);
  return 3221225473LL;
}
