/*
 * XREFs of NtMITEnableMouseIntercept @ 0x1C00DF5B0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     EnableMouseIntercept @ 0x1C012E770 (EnableMouseIntercept.c)
 */

__int64 __fastcall NtMITEnableMouseIntercept(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rbx
  LARGE_INTEGER v13; // r8
  __int64 v14; // rdi
  bool v15; // bl
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-18h]

  v3 = a1;
  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v8, v7, v9);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v11.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v11.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v13.QuadPart,
        v12.QuadPart,
        0,
        gullUserCritAcquireToken);
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v21) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v13.QuadPart,
        0LL,
        v21,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v14 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v14, 0LL);
  v15 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v14 + 40);
  ExReleasePushLockSharedEx(v14, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    v19 = 5LL;
LABEL_21:
    UserSetLastError(v19, v16, v17, v18);
    goto LABEL_22;
  }
  if ( (v3 & 0xFFFFFFFE) != 0 )
  {
    v19 = 87LL;
    goto LABEL_21;
  }
  if ( !(unsigned __int8)EnableMouseIntercept(v3) )
  {
    v19 = 5023LL;
    goto LABEL_21;
  }
  v4 = 1;
LABEL_22:
  UserSessionSwitchLeaveCrit();
  return v4;
}
