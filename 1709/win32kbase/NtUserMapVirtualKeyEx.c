/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C0057750
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     InternalMapVirtualKeyEx @ 0x1C00582A0 (InternalMapVirtualKeyEx.c)
 *     HKLtoPKL @ 0x1C00719E0 (HKLtoPKL.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v10; // rdi
  struct tagTHREADINFO **v11; // rax
  PVOID CurrentProcess; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  PVOID v20; // rcx

  v4 = a4;
  v6 = a2;
  v7 = a1;
  v8 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = 0LL;
  while ( 1 )
  {
    v11 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v11 )
      v10 = *v11;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v10 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v20 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v10 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v20 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v20, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredSharedUserCrit();
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v4 )
    v18 = HKLtoPKL(ThreadWin32Thread, a3);
  else
    v18 = *(_QWORD *)(ThreadWin32Thread + 416);
  if ( v18 )
    v8 = InternalMapVirtualKeyEx(v7, v6, *(_QWORD *)(*(_QWORD *)(v18 + 48) + 32LL));
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v8;
}
