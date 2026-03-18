/*
 * XREFs of NtMITSetInputCallbacks @ 0x1C0069B30
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetMITInputCallbacks @ 0x1C0069CA0 (UserSetMITInputCallbacks.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtMITSetInputCallbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r14d
  int v7; // r15d
  int v8; // r12d
  int v9; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  LARGE_INTEGER PerformanceCounter; // rax
  LONGLONG v21; // rbx
  PVOID CurrentProcess; // rax
  __int64 v24; // rdi
  bool v25; // bl
  int v26; // r9d

  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v17 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
  if ( v17 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v15 = 0x200000010000000LL;
    v21 = PerformanceCounter.QuadPart - *(_QWORD *)(v17 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v16) = byte_1C0186D98 - 1;
      if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        Template_xqx(v16, (unsigned int)&AcquiredExclusiveUserCritEvent, v18, v21, 0, (char)gullUserCritAcquireToken);
      }
    }
    if ( v21 >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v18,
        0,
        1000 * v21 / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    *(_QWORD *)(v17 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v11;
  gbValidateHandleForIL = 1;
  CurrentProcess = (PVOID)PsGetCurrentProcess(v16, v15, v18, v19);
  if ( CurrentProcess
    && CurrentProcess == g_pepDwm
    && (v24 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v24, 0LL),
        v25 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v24 + 40),
        ExReleasePushLockSharedEx(v24, 0LL),
        KeLeaveCriticalRegion(),
        !v25) )
  {
    v9 = UserSetMITInputCallbacks(v8, v7, v6, v26, a5, a6);
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v9;
}
