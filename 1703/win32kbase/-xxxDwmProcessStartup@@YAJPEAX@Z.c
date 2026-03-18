/*
 * XREFs of ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4
 * Callers:
 *     NtUserRegisterSessionPort @ 0x1C0066170 (NtUserRegisterSessionPort.c)
 * Callees:
 *     GreLockDwmState @ 0x1C0027890 (GreLockDwmState.c)
 *     GreUnlockDwmState @ 0x1C00278D0 (GreUnlockDwmState.c)
 *     ?DeleteAllTokensInternal@CTokenManager@@IEAAXXZ @ 0x1C0029D30 (-DeleteAllTokensInternal@CTokenManager@@IEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     CheckDwmProcessSecurityIdentifier @ 0x1C0066270 (CheckDwmProcessSecurityIdentifier.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C00666D8 (-IsMobileCore@@YAEXZ.c)
 *     xxxDwmControl @ 0x1C0066950 (xxxDwmControl.c)
 *     ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0066A8C (-SetDwmApiPort@@YAXPEAX@Z.c)
 *     GreSfmCleanupPresentHistory @ 0x1C0066AC4 (GreSfmCleanupPresentHistory.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     DwmSetProcessBreakOnTerminate @ 0x1C00FDCE0 (DwmSetProcessBreakOnTerminate.c)
 */

__int64 __fastcall xxxDwmProcessStartup(void *a1, LONGLONG a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  bool v5; // r13
  PVOID v6; // r14
  PVOID v7; // r12
  CTokenManager *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r15
  int v17; // ecx
  LARGE_INTEGER v18; // rsi
  void *CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 i; // rcx
  __int64 v25; // rax
  bool v27; // al
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  LARGE_INTEGER *v31; // rsi
  struct tagTHREADINFO *v32; // r12
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r14
  int v37; // ecx
  LARGE_INTEGER v38; // rsi
  int v39; // r8d
  bool v40; // al
  PVOID Object; // [rsp+58h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+8h]
  struct tagTHREADINFO *v43; // [rsp+C8h] [rbp+20h]

  Handle = a1;
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( g_pepDwm )
  {
    v4 = -1073741768;
  }
  else
  {
    if ( !IsMobileCore() )
      v4 = CheckDwmProcessSecurityIdentifier();
    if ( v4 < 0 )
    {
      a1 = Handle;
    }
    else
    {
      if ( g_pTokenManager )
        CTokenManager::DeleteAllTokensInternal(v8);
      UserSessionSwitchLeaveCrit();
      if ( (int)IsUserEnableConsoleModeSupported() >= 0 )
      {
        v4 = UserEnableConsoleMode(0LL);
        v5 = v4 >= 0;
      }
      GreSfmCleanupPresentHistory();
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, v9, v11);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v43 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v16 = PsGetCurrentThreadWin32Thread(v14, v13, v15);
      if ( v16 )
      {
        v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
        {
          v27 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
             && (qword_1C0186D80 & 0x200000010000000LL) != 0
             && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
          if ( v27 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LOBYTE(v17) = byte_1C0186D98 - 1;
            Template_xqx(
              v17,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              a3,
              v18.LowPart,
              0,
              (char)gullUserCritAcquireToken);
          }
        }
        if ( v18.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 )
        {
          a2 = 1000 * v18.QuadPart % gliQpcFreq.QuadPart;
          if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
            Template_xqx(
              (_DWORD)gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              a3,
              0,
              1000 * v18.QuadPart / gliQpcFreq.QuadPart,
              (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v16 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        v6 = 0LL;
      }
      gptiCurrent = v43;
      gbValidateHandleForIL = 1;
      a1 = Handle;
    }
  }
  if ( g_pepDwm )
    v4 = -1073741768;
  if ( v4 < 0 )
    goto LABEL_50;
  if ( a1 )
  {
    v4 = ObReferenceObjectByHandle(a1, 1u, LpcPortObjectType, 1, &Object, 0LL);
    v6 = Object;
  }
  if ( v4 < 0 )
    goto LABEL_50;
  CurrentProcess = (void *)PsGetCurrentProcess(a1, a2, a3, a4);
  v4 = ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( v4 < 0 )
    goto LABEL_50;
  v7 = (PVOID)PsGetCurrentProcess(v21, v20, v22, v23);
  GreLockDwmState();
  if ( g_pepDwm )
  {
    v4 = -1073741768;
  }
  else
  {
    g_pepDwm = v7;
    SetDwmApiPort(v6);
  }
  GreUnlockDwmState();
  if ( v4 < 0 || (v4 = _guard_dispatch_icall_fptr(), v4 < 0) )
  {
LABEL_50:
    GreLockDwmState();
    if ( g_pepDwm == v7 )
    {
      SetDwmApiPort(0LL);
      g_pepDwm = 0LL;
    }
    GreUnlockDwmState();
    if ( v6 )
      ObfDereferenceObject(v6);
    if ( v7 )
      ObfDereferenceObject(v7);
    if ( !g_pepDwm && v5 )
    {
      UserSessionSwitchLeaveCrit();
      UserEnableConsoleMode(1LL);
      v31 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29, v28, v30);
      if ( v31 )
        v31[1] = KeQueryPerformanceCounter(0LL);
      v32 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v36 = PsGetCurrentThreadWin32Thread(v34, v33, v35);
      if ( v36 )
      {
        v38 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v36 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
        {
          v40 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
             && (qword_1C0186D80 & 0x200000010000000LL) != 0
             && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
          if ( v40 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LOBYTE(v37) = byte_1C0186D98 - 1;
            Template_xqx(
              v37,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v39,
              v38.LowPart,
              0,
              (char)gullUserCritAcquireToken);
          }
        }
        if ( v38.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v39,
            0,
            1000 * v38.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v36 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v32;
      gbValidateHandleForIL = 1;
    }
  }
  else
  {
    if ( IsMobileCore() )
      DwmSetProcessBreakOnTerminate(1LL);
    for ( i = *(_QWORD *)(PsGetProcessWin32Process(g_pepDwm) + 288); i; i = *(_QWORD *)(i + 584) )
    {
      *(_DWORD *)(i + 1096) |= 4u;
      v25 = *(_QWORD *)(i + 432);
      if ( v25 )
        *(_QWORD *)(v25 + 224) |= 1uLL;
    }
    xxxDwmControl(1037LL, 0LL);
  }
  return (unsigned int)v4;
}
