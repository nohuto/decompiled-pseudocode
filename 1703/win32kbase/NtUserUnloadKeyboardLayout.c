/*
 * XREFs of NtUserUnloadKeyboardLayout @ 0x1C00E5A90
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     xxxUnloadKeyboardLayout @ 0x1C012D390 (xxxUnloadKeyboardLayout.c)
 */

__int64 __fastcall NtUserUnloadKeyboardLayout(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  LARGE_INTEGER v9; // rcx
  LARGE_INTEGER v10; // rbx
  LARGE_INTEGER v11; // r8
  struct tagWINDOWSTATION *ProcessWindowStation; // rax
  __int64 v13; // rbx
  __int64 v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v6, v5, v7);
  if ( v8 )
  {
    v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      v16 = 0;
      LOBYTE(v9.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v9.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v11.QuadPart,
        v10.QuadPart,
        v16,
        gullUserCritAcquireToken);
    }
    if ( v10.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v15) = 1000 * v10.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v11.QuadPart,
        0LL,
        v15,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  ProcessWindowStation = (struct tagWINDOWSTATION *)_GetProcessWindowStation(0LL);
  v13 = (int)xxxUnloadKeyboardLayout(ProcessWindowStation);
  UserSessionSwitchLeaveCrit();
  return v13;
}
