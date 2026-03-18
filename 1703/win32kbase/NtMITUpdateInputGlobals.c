/*
 * XREFs of NtMITUpdateInputGlobals @ 0x1C0088840
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     IsDwmInputThread @ 0x1C0047D00 (IsDwmInputThread.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00490F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     UpconvertTime @ 0x1C0088980 (UpconvertTime.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtMITUpdateInputGlobals(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  __int16 v6; // r15
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  __int64 v9; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  int v16; // ecx
  LARGE_INTEGER v17; // rdi
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  PVOID CurrentProcess; // rax
  BOOL v26; // ecx

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
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
  if ( IsDwmInputThread() )
    goto LABEL_8;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v20, v19, v21, v22);
  v26 = 0;
  if ( CurrentProcess )
    v26 = CurrentProcess == g_pepDwm;
  if ( v26 )
  {
LABEL_8:
    v23 = UpconvertTime(v8);
    CInputGlobals::UpdateInputGlobals((__int64)gpInputGlobals, v23, v7, v6, a4, a5);
    v9 = 1LL;
  }
  UserSessionSwitchLeaveCrit();
  return v9;
}
