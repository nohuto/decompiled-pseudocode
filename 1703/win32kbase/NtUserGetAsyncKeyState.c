/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C004E480
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     ApiSetEditionIsGpqForegroundInaccessible @ 0x1C004E1AC (ApiSetEditionIsGpqForegroundInaccessible.c)
 *     _GetAsyncKeyState @ 0x1C004E6C0 (_GetAsyncKeyState.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     EtwTraceUIPIInputError @ 0x1C008B6E0 (EtwTraceUIPIInputError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  struct tagTHREADINFO *v6; // rdi
  int v7; // esi
  struct tagTHREADINFO **v8; // rax
  PVOID CurrentProcess; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  _BOOL8 v12; // rdx
  __int64 v13; // rsi
  int v14; // ecx
  LARGE_INTEGER v15; // rdi
  int v16; // r8d
  __int64 v17; // rdx
  __int64 ThreadWin32Thread; // rdi
  __int64 v19; // r8
  PRKSEMAPHORE v21; // rcx
  char v22; // al

  v3 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  AsyncKeyState = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  do
  {
    v7 = 0;
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v6 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v12 = 0LL;
    if ( CurrentProcess )
      v12 = CurrentProcess == g_pepDwm;
    if ( v12 || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v21 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
      goto LABEL_34;
    }
    if ( v6 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v21 = gpsemRITBlockedOnDITWaiters;
LABEL_34:
      KeWaitForSingleObject(v21, UserRequest, 0, 0, 0LL);
      v7 = 1;
    }
  }
  while ( v7 == 1 );
  v13 = PsGetCurrentThreadWin32Thread(v10, v12, v11);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v22 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v22 = 0;
      }
      if ( v22 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v14) = byte_1C0186D98 - 1;
        Template_xqx(
          v14,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v16,
          v15.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v16,
        0,
        1000 * v15.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *(struct tagDESKTOP **)(ThreadWin32Thread + 408) != grpdeskRitInput
    || (!gptiForeground || PsGetCurrentProcessWin32Process(gptiForeground, v17, v19) != *((_QWORD *)gptiForeground + 47))
    && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 776), 0x18u) )
  {
LABEL_25:
    UserSetLastError(5LL);
    goto LABEL_23;
  }
  if ( (unsigned int)ApiSetEditionIsGpqForegroundInaccessible(1u, ThreadWin32Thread) )
  {
    EtwTraceUIPIInputError((struct tagTHREADINFO *)ThreadWin32Thread, 0LL, 3);
    goto LABEL_25;
  }
  AsyncKeyState = GetAsyncKeyState(v3);
  *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 432) + 124LL) = *((_DWORD *)gpsi + 1423);
  *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 432) + 128LL) = gafAsyncKeyState;
  *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 432) + 136LL) = gafAsyncKeyStateRecentDown;
LABEL_23:
  UserSessionSwitchLeaveCrit();
  return AsyncKeyState;
}
