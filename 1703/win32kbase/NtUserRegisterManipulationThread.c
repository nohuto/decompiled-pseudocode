/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C0091F00
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserRegisterManipulationThread(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v5; // rbx
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v16; // rdi
  PVOID CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = 1LL;
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v12 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v10 = 0x200000010000000LL;
    v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v12 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v11) = byte_1C0186D98 - 1;
      if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        Template_xqx(v11, (unsigned int)&AcquiredExclusiveUserCritEvent, v13, v16, 0, (char)gullUserCritAcquireToken);
      }
    }
    if ( v16 >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v13,
        0,
        1000 * v16 / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10, v13, v14);
  if ( CurrentProcess && CurrentProcess == g_pepDwm )
  {
    gptiManipulationThread = (__int64)gptiCurrent;
    glpfnManipulationThreadCallback = a1;
  }
  else
  {
    UserSetLastError(5LL, v18, v19, v20);
    v5 = 0LL;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
