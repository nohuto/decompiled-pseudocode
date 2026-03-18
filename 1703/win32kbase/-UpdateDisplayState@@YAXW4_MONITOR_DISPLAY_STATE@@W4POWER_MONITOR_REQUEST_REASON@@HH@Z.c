/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0099444
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1C0099170 (PowerOffMonitor.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     PowerInputEvent @ 0x1C00652C0 (PowerInputEvent.c)
 *     CitDisplayPowerChange @ 0x1C00996FC (CitDisplayPowerChange.c)
 *     EtwTraceDisplayChange @ 0x1C0099760 (EtwTraceDisplayChange.c)
 *     xxxSendWinlogonPowerMessage @ 0x1C0099790 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00D6494 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C00D66E8 (-SetProximityBlocking@@YAXXZ.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall UpdateDisplayState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, char a3)
{
  char v6; // si
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  int v16; // ecx
  LARGE_INTEGER v17; // rbx
  int v18; // r8d
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD InputBuffer[3]; // [rsp+40h] [rbp-20h] BYREF
  bool v22; // [rsp+4Ch] [rbp-14h]
  char v23; // [rsp+4Dh] [rbp-13h]
  char v24; // [rsp+4Eh] [rbp-12h]
  char v25; // [rsp+4Fh] [rbp-11h]

  gPowerDisplayState = gSessionId;
  dword_1C018C23C = dword_1C018C240;
  dword_1C018C240 = a1;
  qword_1C018C208 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                    * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                  - qword_1C018C210;
  qword_1C018C210 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  word_1C018C244 = gProtocolType == 0;
  if ( a1 )
  {
    gPowerTransitionsState = 1;
    qword_1C018C29C = 0LL;
  }
  else
  {
    gPowerTransitionsState = 0;
    if ( a2 == MonitorRequestReasonGracePeriod )
    {
      LODWORD(qword_1C018C29C) = 1;
    }
    else
    {
      LODWORD(qword_1C018C29C) = 0;
      if ( a2 == MonitorRequestReasonNearProximity )
        SetProximityBlocking();
    }
  }
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  if ( !a1 && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    PowerInputEvent(0);
  }
  UserSessionSwitchLeaveCrit();
  if ( !gbTtmEnabled
    && (unsigned int)(a1 - 1) > 1
    && (a1 || a2 == MonitorRequestReasonGracePeriod || a2 == MonitorRequestReasonNearProximity) )
  {
    v6 = 0;
  }
  else
  {
    v6 = 1;
    if ( a1 != 2 )
    {
      v20[0] = 0LL;
      v20[1] = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != 0), v20);
    }
  }
  v22 = gProtocolType == 0;
  InputBuffer[0] = gSessionId;
  InputBuffer[1] = a1;
  InputBuffer[2] = a2;
  v23 = v6;
  v24 = a3;
  if ( gPowerTransitionsState || (_DWORD)qword_1C018C29C || (v25 = 0, HIDWORD(qword_1C018C29C)) )
    v25 = 1;
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( gSystemIsAoAc )
  {
    if ( (gPowerTransitionsState || qword_1C018C29C) && !HIDWORD(qword_1C018C29C) )
      v19 = 0LL;
    else
      v19 = 2LL;
    SetInputMode(v19);
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v15 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  if ( v15 )
  {
    v17 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v16) = byte_1C0186D98 - 1;
      Template_xqx(
        v16,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v18,
        v17.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v17.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v18,
        0,
        1000 * v17.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  EtwTraceDisplayChange();
  CitDisplayPowerChange(&gPowerDisplayState);
}
