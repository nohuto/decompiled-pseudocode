/*
 * XREFs of PowerOffMonitor @ 0x1C00A3210
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
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0077F64 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0078018 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     SqmPowerState @ 0x1C0078290 (SqmPowerState.c)
 *     PostWinlogonMessage @ 0x1C007AFE0 (PostWinlogonMessage.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A34BC (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C00A41F0 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C00DCA58 (-SetProximityBlocking@@YAXXZ.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r15d
  int v7; // r14d
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // rcx
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
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 *DomainLockRef; // rbx
  int v28; // [rsp+40h] [rbp-20h] BYREF
  int v29; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v30; // [rsp+48h] [rbp-18h] BYREF
  tagObjLock *v31; // [rsp+50h] [rbp-10h] BYREF
  int v32; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v33; // [rsp+B8h] [rbp+58h] BYREF

  v4 = gPowerTransitionsState;
  v33 = 0;
  v30 = 0LL;
  v32 = 0;
  v7 = 0;
  v8 = 0;
  if ( gPowerTransitionsState || qword_1C0190FCC )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v28 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v28, 4LL, 0LL, 0LL, 0, 0);
        v8 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || (gfIsFadingInProgress = 1, v7 = 1, (int)IsPrepareGammaRampDataSupported() < 0) )
      {
        v13 = v30;
      }
      else
      {
        v12 = PrepareGammaRampData(&v33, &v30, &v32);
        v13 = v30;
        if ( v12 < 0 )
          v13 = 0LL;
        v30 = v13;
      }
      if ( v32 )
      {
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v9, v10, v11);
        if ( (int)IsFadeDesktopSupported() >= 0 )
          FadeDesktop(v33, v30, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14LL, v30 != 0, 0LL, 0LL);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v15, v14, v16, v17);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v19 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v21, v20, v22, v23);
        gptiCurrent = v19;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v31);
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
        tagObjLock::UnLock(v31);
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v13 != 0, 0LL, 0LL);
      }
      if ( (int)IsModerncorePowerOffMonitorSupported() >= 0 )
        ModerncorePowerOffMonitor();
      LOBYTE(v26) = 1;
      DrvSetMonitorPowerState(v25, 4LL, v26, a2);
      if ( v30 && (int)IsRestoreGammaRampSupported() >= 0 )
        RestoreGammaRamp(v30);
      if ( v7 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C0190F48 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(PowerMonitorOff, a1, v4, a4);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v8 )
    {
      v29 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v29, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
