/*
 * XREFs of NtMITActivateInputProcessing @ 0x1C008AFE0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     UserActivateMITInputProcessing @ 0x1C008B110 (UserActivateMITInputProcessing.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtMITActivateInputProcessing(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v5; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  int v12; // ecx
  LARGE_INTEGER v13; // rbx
  int v14; // r8d
  __int64 v15; // rdi
  bool v16; // bl
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9

  v3 = a2;
  v5 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
  if ( v11 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v12) = byte_1C0186D98 - 1;
      Template_xqx(
        v12,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v14,
        v13.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v14,
        0,
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v15 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v15, 0LL);
  v16 = (unsigned int)PsGetCurrentThreadId() == *(_DWORD *)(v15 + 40);
  ExReleasePushLockSharedEx(v15, 0LL);
  KeLeaveCriticalRegion();
  if ( v16 )
    v5 = UserActivateMITInputProcessing(a1, v3);
  else
    UserSetLastError(5LL, v17, v18, v19);
  UserSessionSwitchLeaveCrit();
  return v5;
}
