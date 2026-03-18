/*
 * XREFs of PowerOnMonitor @ 0x1C0077B20
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0077520 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A2A28 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ReferenceDwmApiPort @ 0x1C0062B40 (ReferenceDwmApiPort.c)
 *     UserReferenceDwmApiPort @ 0x1C00748B0 (UserReferenceDwmApiPort.c)
 *     ?DisarmPowerWatchdog@@YAXPEAX@Z @ 0x1C00779D0 (-DisarmPowerWatchdog@@YAXPEAX@Z.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C0077AC0 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C0077E50 (EtwTracePowerOnMonitorEnd.c)
 *     PowerUnDimMonitor @ 0x1C0077E70 (PowerUnDimMonitor.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C0077F44 (EtwTracPowerOnMonitoreBegin.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0077F64 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0078018 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0078290 (SqmPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A34BC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00A41F0 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 *     DrvChangeD3RequestsState @ 0x1C00A5D3C (DrvChangeD3RequestsState.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  BOOL v6; // esi
  int v8; // ebx
  int v9; // r14d
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID v21; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rcx
  PVOID v31; // rax
  __int64 *DomainLockRef; // rbx
  int v33; // [rsp+40h] [rbp-38h] BYREF
  tagObjLock *v34; // [rsp+48h] [rbp-30h] BYREF
  int v35; // [rsp+98h] [rbp+20h] BYREF

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
        if ( !gPowerTransitionsState && !qword_1C0190FCC )
        {
          v35 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v35, 4LL, 0LL, 0LL, 0, 0);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v14 = *((_QWORD *)gptiCurrent + 54);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 8);
            if ( v15 )
            {
              v16 = *(unsigned int *)(*(_QWORD *)v15 + 52LL);
              if ( (v16 & 1) != 0 )
              {
                UserSessionSwitchLeaveCrit(v16, v11, v12, v13);
                if ( (int)IsDwmSyncFlushForceRenderAndWaitForBatchSupported() >= 0 )
                {
                  ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 64);
                  v21 = UserReferenceDwmApiPort();
                  DwmSyncFlushForceRenderAndWaitForBatch(v21, 1LL);
                  DisarmPowerWatchdog(gpRequestWorkerWatchdog);
                }
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v18, v17, v19, v20);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                v23 = EnterCritAvoidingDitHitTestHazard(0, 1);
                EtwTraceAcquiredExclusiveUserCrit(v25, v24, v26, v27);
                gptiCurrent = v23;
                gbValidateHandleForIL = 1;
                CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v34);
                v28 = (__int64 *)gpducstulHead;
                if ( gpducstulHead )
                {
                  DomainLockRef = GetDomainLockRef(8);
                  do
                  {
                    gpducstulHead = v28[2];
                    v28[2] = 0LL;
                    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
                    HMUnlockObject(*v28);
                    RIMLockExclusive((__int64)DomainLockRef);
                    v28 = (__int64 *)gpducstulHead;
                  }
                  while ( gpducstulHead );
                }
                tagObjLock::UnLock(v34);
              }
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DrvSetMonitorPowerState(v29, 1LL, 0LL, a2);
        DisarmPowerWatchdog(gpRequestWorkerWatchdog);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( (int)IsModerncorePowerOnMonitorSupported() >= 0 )
          ModerncorePowerOnMonitor();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v30) = 1;
        DrvChangeD3RequestsState(v30);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C0190F70 == 2 )
      v8 = 1;
    if ( v8 )
    {
      UpdateDisplayState(PowerMonitorOn, a1, v6, v10);
      if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
      {
        v31 = ReferenceDwmApiPort();
        DwmAsyncNotifyDisplayModeChange(v31);
      }
    }
    if ( v6 && grpdeskRitInput && (int)IsxxxRefreshDisplayOrientationSupported() >= 0 )
      xxxRefreshDisplayOrientation();
    if ( v9 )
    {
      v33 = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v33, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
