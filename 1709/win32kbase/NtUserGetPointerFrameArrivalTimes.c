/*
 * XREFs of NtUserGetPointerFrameArrivalTimes @ 0x1C00E7EC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z @ 0x1C01200E4 (-GetPointerFrameArrivalTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEA_K@Z.c)
 */

__int64 __fastcall NtUserGetPointerFrameArrivalTimes(__int64 a1, __int64 a2, volatile void *a3, __int64 a4)
{
  __int64 v5; // r13
  int v6; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  int PointerFrameArrivalTimesInternal; // ebx
  struct tagTHREADINFO *v9; // rdi
  int v10; // r14d
  struct tagTHREADINFO **v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BOOL8 v18; // rcx
  PVOID v19; // rcx
  __int64 v20; // rcx
  __int64 CurrentProcessWow64Process; // rax
  CTouchProcessor *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9

  v5 = (unsigned int)a2;
  v6 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  PointerFrameArrivalTimesInternal = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  do
  {
    v10 = 0;
    v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v11 )
      v9 = *v11;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v13, v12);
    v18 = 0LL;
    if ( CurrentProcess )
      v18 = CurrentProcess == g_pepDwm;
    if ( v18 || (PVOID)PsGetCurrentProcess(v18, v15) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v9 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v19 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v9 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v19 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v19, UserRequest, 0, 0, 0LL);
      v10 = 1;
    }
  }
  while ( v10 == 1 );
  EtwTraceAcquiredSharedUserCrit(v18, v15, v16, v17);
  if ( !v6 || HIWORD(v6) || (unsigned int)(v5 - 1) > 0x63 || !a3 || v6 == 1 )
  {
    UserSetLastError(87);
  }
  else
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v20);
    ProbeForWrite(a3, 8 * v5, CurrentProcessWow64Process != 0 ? 1 : 4);
    PointerFrameArrivalTimesInternal = CTouchProcessor::GetPointerFrameArrivalTimesInternal(
                                         v22,
                                         v9,
                                         v6,
                                         v5,
                                         (unsigned __int64 *)a3);
  }
  UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  return PointerFrameArrivalTimesInternal;
}
