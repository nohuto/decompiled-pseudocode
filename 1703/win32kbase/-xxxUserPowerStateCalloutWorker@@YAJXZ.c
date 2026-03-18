/*
 * XREFs of ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C
 * Callers:
 *     xxxUserPowerCalloutWorker @ 0x1C0064B40 (xxxUserPowerCalloutWorker.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C00496E0 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0065A6C (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 *     PowerResumeSuspendEvent @ 0x1C0099060 (PowerResumeSuspendEvent.c)
 *     PowerOffMonitor @ 0x1C0099170 (PowerOffMonitor.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0099790 (xxxSendWinlogonPowerMessage.c)
 *     RIMSendLatencyMgtRequest @ 0x1C009A9C0 (RIMSendLatencyMgtRequest.c)
 *     EtwTraceWinlogonSleepEndEvent @ 0x1C009BF60 (EtwTraceWinlogonSleepEndEvent.c)
 *     EtwTraceWinlogonSleepStartEvent @ 0x1C009BF80 (EtwTraceWinlogonSleepStartEvent.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     Template_qq @ 0x1C00DC97C (Template_qq.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 xxxUserPowerStateCalloutWorker(void)
{
  __int64 v0; // rcx
  __int64 v1; // r8
  unsigned int v2; // r13d
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rcx
  bool v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // al
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14
  int v28; // ebx
  LARGE_INTEGER v29; // rdi
  signed __int32 v30[8]; // [rsp+8h] [rbp-100h] BYREF
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-E0h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v32; // [rsp+30h] [rbp-D8h]
  _QWORD SystemInformation[4]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v34[2]; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v35[10]; // [rsp+98h] [rbp-70h] BYREF
  int InputBuffer; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v37; // [rsp+C4h] [rbp-44h]
  __int16 v38; // [rsp+CCh] [rbp-3Ch]
  _DWORD v39[10]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v40[8]; // [rsp+F8h] [rbp-10h] BYREF

  memset(v40, 0, sizeof(v40));
  EtwActivityIdControl(3u, (LPGUID)&v40[1]);
  v2 = dword_1C018C1E8;
  v40[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v40[3]) = 17;
  LODWORD(v40[4]) = dword_1C018C1E8;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    Template_qq(v0, &StartPowerStateCalloutWorker, v1, (unsigned int)dword_1C018C1E8, 0);
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
    Event = (PRKEVENT)*((_QWORD *)gptiCurrent + 81);
LABEL_28:
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
    goto LABEL_29;
  }
  if ( v2 == 2 )
  {
    dword_1C018C290 = 1;
    _InterlockedOr(v30, 0);
    RIMSendLatencyMgtRequest(1LL);
    PowerOffMonitor(dword_1C018C1EC);
    v14 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    dword_1C018C2B0 = v14;
    if ( gSessionId != gServiceSessionId )
    {
      EtwTraceWinlogonSleepStartEvent(1LL);
      LOBYTE(v15) = 1;
      xxxSendWinlogonPowerMessage(v15, 262LL, &dword_1C018C1D8);
      EtwTraceWinlogonSleepStartEvent(0LL);
    }
    LOBYTE(v13) = 1;
    LOBYTE(v14) = 1;
    if ( !(unsigned int)PowerResumeSuspendEvent(v14, v13, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
    {
      LODWORD(v32) = 1;
      dword_1C018C1B0 = 16;
      dword_1C018C1B4 = 40;
      *(_QWORD *)OutputBufferLength = &dword_1C018C1B0;
      xxxSendMessageBSM(0LL, 536LL, 4LL);
    }
    if ( dword_1C018C1DC == 5 )
    {
      if ( gProtocolType )
      {
LABEL_52:
        ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
        Event = 0LL;
        goto LABEL_28;
      }
      if ( (dword_1C018C1E0 & 8) != 0 )
      {
        if ( qword_1C018BC80 )
          v17 = qword_1C018BC80(0LL, 0LL);
        else
          v17 = 0;
        if ( v17 && grpdeskRitInput )
        {
          LODWORD(v32) = 0;
          OutputBufferLength[0] = 2191;
          xxxUserSetDisplayConfig(
            0,
            0LL,
            0LL,
            0LL,
            *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY **)OutputBufferLength,
            v32,
            (__int64)grpdeskRitInput,
            0,
            0LL,
            0LL,
            (__int64)v40);
        }
      }
      else
      {
        LOBYTE(v16) = 1;
        xxxSendWinlogonPowerMessage(v16, 259LL, &dword_1C018C1D8);
      }
    }
    if ( !gProtocolType && (int)IsPowerOffGdiSupported() >= 0 )
      PowerOffGdi();
    goto LABEL_52;
  }
  v6 = v2 - 3;
  switch ( v2 )
  {
    case 3u:
      v18 = dword_1C018C1D8;
      if ( dword_1C018C1DC == 5 )
        v18 = 3;
      InputBuffer = v18;
      LOBYTE(v6) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(v6, 0LL, 0LL) )
      {
        v37 = 4LL;
        v38 = 256;
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        goto LABEL_57;
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
      v7 = dword_1C018C1DC == 5;
      if ( gSessionId )
      {
        if ( dword_1C018C1DC == 5 )
        {
          memset(SystemInformation, 0, sizeof(SystemInformation));
          memset(v39, 0, 0x20uLL);
          v39[4] &= ~1u;
          SystemInformation[2] = v39;
          SystemInformation[0] = 0x6B7568430000002DLL;
          LODWORD(SystemInformation[1]) = 10;
          LODWORD(SystemInformation[3]) = 32;
          v39[0] = 4;
          v39[1] = 1;
          v39[2] = 4;
          ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
        }
        EtwTraceWinlogonSleepEndEvent(1LL);
        v34[0] = 0x100000000LL;
        LOBYTE(v8) = 1;
        v34[1] = 0LL;
        v4 = xxxSendWinlogonPowerMessage(v8, 262LL, v34);
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
        PowerOnGdi(v40, 1LL, 5LL);
      dword_1C018C290 = 0;
      _InterlockedOr(v30, 0);
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
        dword_1C018C294 = 1;
      }
      if ( gSqmIsOptedIn )
        _WinSqmDWORDEvent(
          &SQM_INCREMENT_DWORD,
          0LL,
          4013,
          ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
         - dword_1C018C2B0)
        / 0x3E8);
      memset(SystemInformation, 0, sizeof(SystemInformation));
      memset(v39, 0, 0x20uLL);
      v39[4] &= ~1u;
      SystemInformation[0] = 0x6B7568430000002DLL;
      LODWORD(SystemInformation[1]) = 10;
      SystemInformation[2] = v39;
      LODWORD(SystemInformation[3]) = 32;
      v39[0] = 4;
      v39[1] = 1;
      v39[2] = 6;
      ZwSetSystemInformation(SystemSuperfetchInformation, SystemInformation, 0x20uLL);
      LOBYTE(v10) = 1;
      if ( !(unsigned int)PowerResumeSuspendEvent(0LL, v10, 0LL) && (int)IsxxxSendMessageBSMSupported() >= 0 )
      {
        LODWORD(v32) = 1;
        *(_QWORD *)OutputBufferLength = v35;
        v35[0] = 16;
        v35[1] = 0x20000000;
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
        v37 = 18LL;
        v38 = 1;
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
LABEL_57:
        UserSessionSwitchLeaveCrit();
        ZwPowerInformation(NotifyUserModeLegacyPowerEvent, &InputBuffer, 0x10u, 0LL, 0);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v20, v19, v21);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v23 = EnterCritAvoidingDitHitTestHazard(0, 1);
        v27 = PsGetCurrentThreadWin32Thread(v25, v24, v26);
        if ( v27 )
        {
          v29 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v27 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
          {
            LOBYTE(v3) = byte_1C0186D98 - 1;
            if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
              && (qword_1C0186D80 & 0x200000010000000LL) != 0
              && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              Template_xqx(
                v3,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v5,
                v29.LowPart,
                0,
                (char)gullUserCritAcquireToken);
            }
          }
          if ( v29.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
            && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          {
            Template_xqx(
              (_DWORD)gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v5,
              0,
              1000 * v29.QuadPart / gliQpcFreq.QuadPart,
              (char)gullUserCritAcquireToken);
          }
          *(_QWORD *)(v27 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
        gptiCurrent = v23;
        gbValidateHandleForIL = 1;
      }
      break;
    case 0xAu:
      gPowerState = (32 * (gPowerTransitionsState != 0)) | gPowerState & 0xFFFFFFDF;
      PowerOffMonitor(MonitorRequestReasonDP);
      if ( (int)IsPowerOffGdiSupported() >= 0 )
        PowerOffGdi();
      break;
    default:
      v3 = v2 - 11;
      if ( v2 == 11 )
      {
        v28 = 0;
        if ( (int)IsPowerOnGdiSupported() >= 0 )
        {
          PowerOnGdi(v40, 0LL, 2LL);
          v28 = 1;
        }
        if ( (gPowerState & 0x20) != 0 )
          PowerOnMonitor(MonitorRequestReasonDP, (__int64)v40, 2u);
        if ( v28 )
          ProcessDelayedSdc(v40);
      }
      else if ( v2 == 12 )
      {
        PowerOffMonitor(MonitorRequestReasonSxTransition);
      }
      break;
  }
LABEL_29:
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    Template_qq(v3, &StopPowerStateCalloutWorker, v5, v2, v4);
  return (unsigned int)v4;
}
