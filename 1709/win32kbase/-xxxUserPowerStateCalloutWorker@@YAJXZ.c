/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A2A28
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0077350 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0011690 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     PowerOnMonitor @ 0x1C0077B20 (PowerOnMonitor.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C00783B4 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     PowerResumeSuspendEvent @ 0x1C00A3150 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C00A3210 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C00A37C0 (xxxSendWinlogonPowerMessage.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C00A3900 (EtwTraceWinlogonSleepStartEvent.c)
 *     RIMSendLatencyMgtRequest @ 0x1C00A3920 (RIMSendLatencyMgtRequest.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C00A41D0 (EtwTraceWinlogonSleepEndEvent.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 *     McTemplateK0qq @ 0x1C00E2A1C (McTemplateK0qq.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  struct _MCGEN_TRACE_CONTEXT *v0; // rcx
  const GUID *v1; // r8
  unsigned int v2; // r14d
  struct _MCGEN_TRACE_CONTEXT *v3; // rcx
  signed int v4; // esi
  const GUID *v5; // r8
  __int64 v6; // rcx
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  LARGE_INTEGER *v19; // rbx
  struct tagTHREADINFO *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rdi
  tagObjLock *v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  char v31; // al
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 *v45; // rdi
  int v46; // edi
  __int64 *v47; // rbx
  __int64 *DomainLockRef; // rbx
  signed __int32 v49[8]; // [rsp+8h] [rbp-100h] BYREF
  int *OutputBufferLength; // [rsp+28h] [rbp-E0h]
  __int64 v51; // [rsp+30h] [rbp-D8h]
  _QWORD SystemInformation[4]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v53[2]; // [rsp+78h] [rbp-90h] BYREF
  tagObjLock *v54; // [rsp+88h] [rbp-80h] BYREF
  tagObjLock *v55; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v56[10]; // [rsp+98h] [rbp-70h] BYREF
  int InputBuffer; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v58; // [rsp+C4h] [rbp-44h]
  __int16 v59; // [rsp+CCh] [rbp-3Ch]
  _DWORD v60[10]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v61[10]; // [rsp+F8h] [rbp-10h] BYREF

  memset(v61, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v61[1]);
  v2 = Arg0;
  v61[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v61[3]) = 17;
  LOBYTE(v61[6]) = -1;
  LODWORD(v61[4]) = Arg0;
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v0, &StartPowerStateCalloutWorker, v1, Arg0, 0);
  v4 = IsPowerStateTasksAllowedSupported();
  if ( v4 < 0 )
    goto LABEL_29;
  v4 = PowerStateTasksAllowed();
  if ( v4 < 0 )
    goto LABEL_29;
  if ( !gbPowerCalloutsReady )
  {
    v4 = -1073741823;
    goto LABEL_29;
  }
  if ( v2 == 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 88);
LABEL_28:
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    goto LABEL_29;
  }
  if ( v2 == 2 )
  {
    dword_1C0190FC0 = 1;
    _InterlockedOr(v49, 0);
    RIMSendLatencyMgtRequest(1LL);
    PowerOffMonitor((enum POWER_MONITOR_REQUEST_REASON)dword_1C0190F1C);
    v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C0190FE0 = v28;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      LOBYTE(v29) = 1;
      xxxSendWinlogonPowerMessage(v29, 262LL, &dword_1C0190F08);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v27) = 1;
    LOBYTE(v28) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v28, v27, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      LODWORD(v51) = 1;
      dword_1C0190EE0 = 16;
      dword_1C0190EE4 = 40;
      OutputBufferLength = &dword_1C0190EE0;
      xxxSendMessageBSM(0LL, 536LL, 4LL);
    }
    if ( dword_1C0190F0C == 5 )
    {
      if ( gProtocolType )
      {
LABEL_56:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        Event = 0LL;
        goto LABEL_28;
      }
      if ( (dword_1C0190F10 & 8) != 0 )
      {
        if ( qword_1C01908E8 )
          v31 = qword_1C01908E8(0LL, 0LL);
        else
          v31 = 0;
        if ( v31 && grpdeskRitInput )
          xxxUserSetDisplayConfig(0, 0, 2191, 0, (__int64)grpdeskRitInput, 0, 0LL, 0LL, (__int64)v61);
      }
      else
      {
        LOBYTE(v30) = 1;
        xxxSendWinlogonPowerMessage(v30, 259LL, &dword_1C0190F08);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 )
      PowerOffGdi();
    goto LABEL_56;
  }
  v6 = v2 - 3;
  switch ( v2 )
  {
    case 3u:
      v32 = dword_1C0190F08;
      if ( dword_1C0190F0C == 5 )
        v32 = 3;
      InputBuffer = v32;
      LOBYTE(v6) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(v6, 0LL, 0LL) )
      {
        v58 = 4LL;
        v59 = 256;
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v33, (__int64)v5, v34);
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v36, v35, v37, v38);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v40 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v42, v41, v43, v44);
        gptiCurrent = v40;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v55);
        v45 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          DomainLockRef = GetDomainLockRef(8);
          do
          {
            gpducstulHead = v45[2];
            v45[2] = 0LL;
            tagObjLock::UnLock((tagObjLock *)DomainLockRef);
            HMUnlockObject(*v45);
            RIMLockExclusive((__int64)DomainLockRef);
            v45 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
        }
        v26 = v55;
        goto LABEL_41;
      }
      break;
    case 5u:
      CInputGlobals::UpdateLastInputTime(
        (__int64)gpInputGlobals,
        (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64,
        5);
      if ( (int)IsWakeRITForConfigSwitchSupported() >= 0 )
        WakeRITForConfigSwitch();
      v7 = dword_1C0190F0C == 5;
      if ( gSessionId )
      {
        if ( dword_1C0190F0C == 5 )
        {
          memset(SystemInformation, 0, sizeof(SystemInformation));
          memset(v60, 0, 0x20uLL);
          v60[4] &= ~1u;
          SystemInformation[2] = v60;
          SystemInformation[0] = 0x6B7568430000002DLL;
          LODWORD(SystemInformation[1]) = 10;
          LODWORD(SystemInformation[3]) = 32;
          v60[0] = 4;
          v60[1] = 1;
          v60[2] = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        v53[0] = 0x100000000LL;
        LOBYTE(v8) = 1;
        v53[1] = 0LL;
        v4 = xxxSendWinlogonPowerMessage(v8, 262LL, v53);
        EtwTraceWinlogonSleepEndEvent(0LL);
        if ( v7 )
        {
          v9 = SystemInformation[2];
          *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
          *(_DWORD *)(v9 + 8) = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
        }
      }
      if ( (int)IsPowerOnGdiSupported() >= 0 )
        PowerOnGdi(v61, 1LL, 5LL);
      dword_1C0190FC0 = 0;
      _InterlockedOr(v49, 0);
      if ( gbPendingSleepInput )
      {
        gPendingMonitorOnReason = gPendingSleepInputReason;
        gbPendingMonitorOn = 1;
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        gbPendingSleepInput = 0;
        gPendingSleepInputReason = 0;
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
      }
      else
      {
        dword_1C0190FC4 = 1;
      }
      if ( gSqmIsOptedIn )
        _WinSqmDWORDEvent(
          &SQM_INCREMENT_DWORD,
          0LL,
          4013,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C0190FE0)
        / 0x3E8);
      memset(SystemInformation, 0, sizeof(SystemInformation));
      memset(v60, 0, 0x20uLL);
      v60[4] &= ~1u;
      SystemInformation[0] = 0x6B7568430000002DLL;
      LODWORD(SystemInformation[1]) = 10;
      SystemInformation[2] = v60;
      LODWORD(SystemInformation[3]) = 32;
      v60[0] = 4;
      v60[1] = 1;
      v60[2] = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      LOBYTE(v10) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v10, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
      {
        LODWORD(v51) = 1;
        OutputBufferLength = v56;
        v56[0] = 16;
        v56[1] = 0x20000000;
        xxxSendMessageBSM(0LL, 536LL, 18LL);
      }
      v11 = SystemInformation[2];
      gdwUpdateKeyboard |= 2u;
      *(_DWORD *)(SystemInformation[2] + 16LL) |= 1u;
      *(_DWORD *)(v11 + 8) = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      break;
    case 6u:
      if ( (int)IsInitKeyboardStateSupported() >= 0 )
        InitKeyboardState();
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, 0LL, 0LL) )
      {
        InputBuffer = 0;
        v58 = 18LL;
        v59 = 1;
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v13, (__int64)v5, v14);
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
        v19 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16, v15, v17, v18);
        if ( v19 )
          v19[1] = KeQueryPerformanceCounter(0LL);
        v20 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v22, v21, v23, v24);
        gptiCurrent = v20;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v54);
        v25 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          v47 = GetDomainLockRef(8);
          do
          {
            gpducstulHead = v25[2];
            v25[2] = 0LL;
            tagObjLock::UnLock((tagObjLock *)v47);
            HMUnlockObject(*v25);
            RIMLockExclusive((__int64)v47);
            v25 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
        }
        v26 = v54;
LABEL_41:
        tagObjLock::UnLock(v26);
      }
      break;
    case 0xAu:
      gPowerState = (gPowerTransitionsState != 0 ? 0x20 : 0) | gPowerState & 0xFFFFFFDF;
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi();
      break;
    default:
      v3 = (struct _MCGEN_TRACE_CONTEXT *)(v2 - 11);
      if ( v2 == 11 )
      {
        v46 = 0;
        if ( (int)IsPowerOnGdiSupported() >= 0 )
        {
          PowerOnGdi(v61, 0LL, 2LL);
          v46 = 1;
        }
        if ( (gPowerState & 0x20) != 0 )
          PowerOnMonitor(MonitorRequestReasonDP, (__int64)v61, 2u);
        if ( v46 )
          ProcessDelayedSdc(v61);
      }
      else if ( v2 == 12 )
      {
        PowerOffMonitor(MonitorRequestReasonSxTransition);
      }
      break;
  }
LABEL_29:
  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    McTemplateK0qq(v3, &StopPowerStateCalloutWorker, v5, v2, v4);
  return (unsigned int)v4;
}
