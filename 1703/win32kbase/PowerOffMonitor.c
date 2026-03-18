/*
 * XREFs of PowerOffMonitor @ 0x1C0099170
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     SqmPowerState @ 0x1C0065930 (SqmPowerState.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0065C78 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0065D74 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0099444 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvSetMonitorPowerState @ 0x1C009B5C4 (DrvSetMonitorPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C00D66E8 (-SetProximityBlocking@@YAXXZ.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r12d
  __int64 v5; // rdi
  int v7; // r15d
  int v8; // r13d
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  LARGE_INTEGER PerformanceCounter; // rax
  int v23; // ecx
  int v24; // r8d
  LONGLONG v25; // rdi
  int v26; // [rsp+40h] [rbp-10h] BYREF
  int v27; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v28; // [rsp+48h] [rbp-8h] BYREF
  int v30; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+A8h] [rbp+58h] BYREF

  v4 = gPowerTransitionsState;
  v31 = 0;
  v5 = a2;
  v28 = 0LL;
  v30 = 0;
  v7 = 0;
  v8 = 0;
  if ( gPowerTransitionsState || qword_1C018C29C )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v26 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v26, 4LL, 0LL, 0LL, 0, 0);
        v8 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || (gfIsFadingInProgress = 1, v7 = 1, (int)IsPrepareGammaRampDataSupported() < 0) )
      {
        v10 = v28;
      }
      else
      {
        v9 = PrepareGammaRampData(&v31, &v28, &v30);
        v10 = v28;
        if ( v9 < 0 )
          v10 = 0LL;
        v28 = v10;
      }
      if ( v30 )
      {
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit();
        if ( (int)IsFadeDesktopSupported() >= 0 )
          FadeDesktop(v31, v28, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14LL, v28 != 0, 0LL, 0LL);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12, v11, v13);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v15 = EnterCritAvoidingDitHitTestHazard(0, 1);
        v19 = PsGetCurrentThreadWin32Thread(v17, v16, v18);
        if ( v19 )
        {
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v25 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 8);
          if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LOBYTE(v23) = byte_1C0186D98 - 1;
            Template_xqx(
              v23,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v24,
              v25,
              0,
              (char)gullUserCritAcquireToken);
          }
          if ( v25 >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
            Template_xqx(
              (_DWORD)gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v24,
              0,
              1000 * v25 / gliQpcFreq.QuadPart,
              (char)gullUserCritAcquireToken);
          *(_QWORD *)(v19 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
        v5 = a2;
        gptiCurrent = v15;
        gbValidateHandleForIL = 1;
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v10 != 0, 0LL, 0LL);
      }
      if ( (int)IsModerncorePowerOffMonitorSupported() >= 0 )
        ModerncorePowerOffMonitor();
      LOBYTE(v21) = 1;
      DrvSetMonitorPowerState(v20, 4LL, v21, v5);
      if ( v28 && (int)IsRestoreGammaRampSupported() >= 0 )
        RestoreGammaRamp(v28);
      if ( v7 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C018C218 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(PowerMonitorOff, a1, v4, a4);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v8 )
    {
      v27 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v27, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
