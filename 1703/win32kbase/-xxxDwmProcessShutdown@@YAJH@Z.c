/*
 * XREFs of ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     NtUserUnregisterSessionPort @ 0x1C00E5C00 (NtUserUnregisterSessionPort.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0027890 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00278D0 (GreUnlockDwmState.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0029D30 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C00666D8 (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C0066950 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0066A8C (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0066AC4 (GreSfmCleanupPresentHistory.c)
 *     CloseMITPortAndEndpoints @ 0x1C0066CB8 (CloseMITPortAndEndpoints.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall xxxDwmProcessShutdown(unsigned int a1)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  CTokenManager *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // ecx
  LARGE_INTEGER v15; // rbx
  int v16; // r8d
  unsigned int CurrentProcessId; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  LARGE_INTEGER *v22; // rbx
  struct tagTHREADINFO *v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdi
  int v28; // ecx
  LARGE_INTEGER v29; // rbx
  int v30; // r8d

  v2 = 0;
  CloseMITPortAndEndpoints(0LL);
  v3 = a1;
  if ( IsMobileCore() )
    v3 = 0;
  if ( g_bDwmIsShuttingDown )
    v3 = 0;
  if ( (int)IsxxxDwmStopRedirectionSupported() >= 0 )
    v2 = xxxDwmStopRedirection(a1);
  if ( g_pTokenManager )
    CTokenManager::DeleteAllTokensInternal(v4);
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  GreSfmCleanupPresentHistory();
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v7);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v13 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v14) = byte_1C0186D98 - 1;
      Template_xqx(
        v14,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v16,
        v15.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v16,
        0,
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  GreLockDwmState();
  SetDwmApiPort(0LL);
  if ( g_pepDwm )
  {
    ObfDereferenceObject(g_pepDwm);
    g_pepDwm = 0LL;
  }
  GreUnlockDwmState();
  if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
  {
    UserSessionSwitchLeaveCrit();
    v2 = UserEnableConsoleMode(1LL);
    v22 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v20, v19, v21);
    if ( v22 )
      v22[1] = KeQueryPerformanceCounter(0LL);
    v23 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v27 = PsGetCurrentThreadWin32Thread(v25, v24, v26);
    if ( v27 )
    {
      v29 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v27 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v28) = byte_1C0186D98 - 1;
        Template_xqx(
          v28,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v30,
          v29.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v29.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v30,
          0,
          1000 * v29.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v27 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v23;
    gbValidateHandleForIL = 1;
  }
  g_bDwmIsShuttingDown = 0;
  if ( v3 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    xxxDwmControl(1036LL, CurrentProcessId);
  }
  return v2;
}
