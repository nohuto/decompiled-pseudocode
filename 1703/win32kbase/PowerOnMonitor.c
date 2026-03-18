/*
 * XREFs of PowerOnMonitor @ 0x1C0065390
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     UserReferenceDwmApiPort @ 0x1C00275D0 (UserReferenceDwmApiPort.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C0065238 (-DisarmPowerWatchdog@@YAXPEAX@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0065320 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C00656D4 (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C00656EC (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00657C0 (EtwTracPowerOnMonitoreBegin.c)
 *     SqmPowerState @ 0x1C0065930 (SqmPowerState.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0065C78 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0065D74 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ReferenceDwmApiPort @ 0x1C00700A0 (ReferenceDwmApiPort.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0099444 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C009B5C4 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     DrvChangeD3RequestsState @ 0x1C009BCFC (DrvChangeD3RequestsState.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  BOOL v6; // esi
  int v8; // ebx
  int v9; // r15d
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PVOID v16; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ecx
  LARGE_INTEGER v27; // rbx
  int v28; // r8d
  int v29[4]; // [rsp+40h] [rbp-38h] BYREF
  int v30; // [rsp+98h] [rbp+20h] BYREF

  result = gpbInHiberBoot;
  v6 = gPowerTransitionsState == 0;
  v8 = 0;
  v9 = 0;
  if ( !*(_BYTE *)gpbInHiberBoot )
  {
    EtwTracPowerOnMonitoreBegin(a3);
    if ( v6 )
    {
      if ( !gProtocolType )
      {
        if ( !gPowerTransitionsState && !qword_1C018C29C )
        {
          v30 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v30, 4LL, 0LL, 0LL, 0, 0);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v11 = *((_QWORD *)gptiCurrent + 51);
          if ( v11 )
          {
            v12 = *(_QWORD *)(v11 + 8);
            if ( v12 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v12 + 52LL) & 1) != 0 )
              {
                UserSessionSwitchLeaveCrit();
                if ( (int)IsDwmSyncFlushForceRenderAndWaitForBatchSupported() >= 0 )
                {
                  ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 64);
                  v16 = UserReferenceDwmApiPort();
                  DwmSyncFlushForceRenderAndWaitForBatch(v16, 1LL);
                  DisarmPowerWatchdog(gpRequestWorkerWatchdog);
                }
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v13, v15);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                v18 = EnterCritAvoidingDitHitTestHazard(0, 1);
                v22 = PsGetCurrentThreadWin32Thread(v20, v19, v21);
                if ( v22 )
                {
                  v27 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
                  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
                    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
                    && (qword_1C0186D80 & 0x200000010000000LL) != 0
                    && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
                    && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
                  {
                    LOBYTE(v26) = byte_1C0186D98 - 1;
                    Template_xqx(
                      v26,
                      (unsigned int)&AcquiredExclusiveUserCritEvent,
                      v28,
                      v27.LowPart,
                      0,
                      (char)gullUserCritAcquireToken);
                  }
                  if ( v27.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
                    && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
                  {
                    Template_xqx(
                      (_DWORD)gullUserCritAcquireToken,
                      (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                      v28,
                      0,
                      1000 * v27.QuadPart / gliQpcFreq.QuadPart,
                      (char)gullUserCritAcquireToken);
                  }
                  *(_QWORD *)(v22 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
                }
                gptiCurrent = v18;
                gbValidateHandleForIL = 1;
              }
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DrvSetMonitorPowerState(v23, 1LL, 0LL, a2);
        DisarmPowerWatchdog(gpRequestWorkerWatchdog);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( (int)IsModerncorePowerOnMonitorSupported() >= 0 )
          ModerncorePowerOnMonitor();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v24) = 1;
        DrvChangeD3RequestsState(v24);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C018C240 == 2 )
      v8 = 1;
    if ( v8 )
    {
      UpdateDisplayState(PowerMonitorOn, a1, v6, v10);
      if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
      {
        v25 = ReferenceDwmApiPort();
        DwmAsyncNotifyDisplayModeChange(v25);
      }
    }
    if ( v6 && grpdeskRitInput && (int)IsxxxRefreshDisplayOrientationSupported() >= 0 )
      xxxRefreshDisplayOrientation();
    if ( v9 )
    {
      v29[0] = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, v29, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
