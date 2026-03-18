/*
 * XREFs of NtUserGetAsyncKeyState @ 0x1C00101F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceUIPIInputError @ 0x1C000EFC0 (EtwTraceUIPIInputError.c)
 *     ApiSetEditionIsGpqForegroundInaccessible @ 0x1C0011F2C (ApiSetEditionIsGpqForegroundInaccessible.c)
 *     _GetAsyncKeyState @ 0x1C0012190 (_GetAsyncKeyState.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1C00DFB54 (EtwInitializeAsyncKeyMonitor.c)
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C00ED678 (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 */

__int64 __fastcall NtUserGetAsyncKeyState(unsigned int a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  __int16 AsyncKeyState; // bx
  struct tagTHREADINFO *v4; // rdi
  int v5; // esi
  struct tagTHREADINFO **v6; // rax
  PVOID CurrentProcess; // rax
  BOOL v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rdi
  __int64 CurrentProcessWin32Process; // rax
  CAsyncKeyEventMonitor *v14; // rcx
  __int64 v15; // rcx
  PVOID v17; // rcx
  char v18; // al

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
  AsyncKeyState = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = 0LL;
  do
  {
    v5 = 0;
    v6 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v6 )
      v4 = *v6;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v8 = 0;
    if ( CurrentProcess )
      v8 = CurrentProcess == g_pepDwm;
    if ( v8 || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v4 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = gpsemDITHitTestWaiters;
      goto LABEL_31;
    }
    if ( v4 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = gpsemRITBlockedOnDITWaiters;
LABEL_31:
      KeWaitForSingleObject(v17, UserRequest, 0, 0, 0LL);
      v5 = 1;
    }
  }
  while ( v5 == 1 );
  EtwTraceAcquiredSharedUserCrit();
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v9, v10, v11);
  if ( gptiForeground )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v14 = gptiForeground;
    if ( CurrentProcessWin32Process != *((_QWORD *)gptiForeground + 50) && (WPP_MAIN_CB.SectorSize & 0x400) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0188DA8 - 1) <= 2u
        || (qword_1C0188D90 & 0x400) == 0
        || (v18 = 1, (qword_1C0188D98 & 0x400) != qword_1C0188D98) )
      {
        v18 = 0;
      }
      if ( v18 && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
        CAsyncKeyEventMonitor::OnKeyStateRequested(v14, *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 56LL));
    }
  }
  if ( *(struct tagDESKTOP **)(ThreadWin32Thread + 432) != grpdeskRitInput
    || (!gptiForeground || PsGetCurrentProcessWin32Process() != *((_QWORD *)gptiForeground + 50))
    && !RtlAreAnyAccessesGranted(*(_DWORD *)(ThreadWin32Thread + 864), 0x18u) )
  {
LABEL_24:
    UserSetLastError(5LL);
    goto LABEL_22;
  }
  if ( (unsigned int)ApiSetEditionIsGpqForegroundInaccessible(1LL, ThreadWin32Thread) )
  {
    EtwTraceUIPIInputError(
      (struct tagTHREADINFO *)ThreadWin32Thread,
      0LL,
      gpqForeground,
      *(_QWORD *)(gpqForeground + 420),
      3);
    goto LABEL_24;
  }
  AsyncKeyState = GetAsyncKeyState(a1);
  *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 124LL) = *((_DWORD *)gpsi + 1747);
  *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 456) + 128LL) = gafAsyncKeyState;
  v15 = *(_QWORD *)(ThreadWin32Thread + 456);
  *(_QWORD *)(v15 + 136) = gafAsyncKeyStateRecentDown;
LABEL_22:
  UserSessionSwitchLeaveCrit(v15);
  return AsyncKeyState;
}
