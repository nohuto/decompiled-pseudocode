/*
 * XREFs of NtUserGetProcessDpiAwarenessContext @ 0x1C0027E70
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002A93C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserGetProcessDpiAwarenessContext(char *Handle, __int64 a2, __int64 a3)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  int v11; // ecx
  LARGE_INTEGER v12; // rdi
  int v13; // r8d
  PVOID v14; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rsi
  NTSTATUS v18; // eax
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  CurrentThreadDpiAwarenessContext = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(Handle, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
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
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v13,
        0,
        1000 * v12.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v14 = 0LL;
  gptiCurrent = v6;
  gbValidateHandleForIL = 1;
  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    goto LABEL_9;
  }
  v18 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v14 = Object;
  if ( v18 < 0 )
  {
    UserSetLastError(87LL);
    goto LABEL_13;
  }
  if ( (unsigned int)PsGetProcessSessionId(Object) == gSessionId )
  {
    CurrentProcessWin32Process = PsGetProcessWin32Process(v14);
LABEL_9:
    v16 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == PsGetCurrentProcessWin32Process() )
    {
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    }
    else if ( v16 )
    {
      CurrentThreadDpiAwarenessContext = *(_DWORD *)(v16 + 280);
      if ( !CurrentThreadDpiAwarenessContext )
        CurrentThreadDpiAwarenessContext = 16;
    }
    goto LABEL_11;
  }
  UserSetLastError(87LL);
LABEL_11:
  if ( v14 )
    ObfDereferenceObject(v14);
LABEL_13:
  UserSessionSwitchLeaveCrit();
  return CurrentThreadDpiAwarenessContext;
}
