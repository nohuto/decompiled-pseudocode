/*
 * XREFs of NtUserUnregisterSessionPort @ 0x1C00E5C00
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserUnregisterSessionPort(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v4; // rbx
  struct tagTHREADINFO *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v15; // rdi
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // [rsp+20h] [rbp-18h]
  int v22; // [rsp+20h] [rbp-18h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = 1LL;
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v7, v6, v8);
  if ( v11 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v9 = 0x200000010000000LL;
    v15 = PerformanceCounter.QuadPart - *(_QWORD *)(v11 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v10) = byte_1C0186D98 - 1;
      if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        v22 = 0;
        Template_xqx(v10, &AcquiredExclusiveUserCritEvent, v12, v15, v22, gullUserCritAcquireToken);
      }
    }
    if ( v15 >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v21) = 1000 * v15 / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v12,
        0LL,
        v21,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9, v12, v13);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    xxxDwmProcessShutdown(0);
  }
  else
  {
    UserSetLastError(5LL, v17, v18, v19);
    v4 = 0LL;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
