/*
 * XREFs of NtUserRegisterSessionPort @ 0x1C0066170
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserRegisterSessionPort(void *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // ecx
  LARGE_INTEGER v12; // rdi
  int v13; // r8d
  NTSTATUS v14; // eax
  ULONG v16; // eax

  v4 = 0LL;
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
      LOBYTE(v11) = byte_1C0186D98 - 1;
      Template_xqx(
        v11,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v13,
        v12.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v13,
        0,
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  v14 = xxxDwmProcessStartup(a1);
  if ( v14 < 0 )
  {
    v16 = RtlNtStatusToDosError(v14);
    UserSetLastError(v16);
  }
  else
  {
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
