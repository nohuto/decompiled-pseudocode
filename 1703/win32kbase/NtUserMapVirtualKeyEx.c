/*
 * XREFs of NtUserMapVirtualKeyEx @ 0x1C0029060
 * Callers:
 *     <none>
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x1C0028EF0 (InternalMapVirtualKeyEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     HKLtoPKL @ 0x1C0079610 (HKLtoPKL.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtUserMapVirtualKeyEx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // r15d
  unsigned int v7; // r12d
  unsigned int v8; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v10; // rdi
  struct tagTHREADINFO **v11; // rax
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // ecx
  LARGE_INTEGER v18; // rdi
  int v19; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rax
  PRKSEMAPHORE v23; // rcx

  v6 = a2;
  v7 = a1;
  v8 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
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
      v23 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v10 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v23 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v23, UserRequest, 0, 0, 0LL);
  }
  v16 = PsGetCurrentThreadWin32Thread(v14, v13, v15);
  if ( v16 )
  {
    v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v17) = byte_1C0186D98 - 1;
      Template_xqx(v17, (unsigned int)&AcquiredSharedUserCritEvent, v19, v18.LowPart, 0, (char)gullUserCritAcquireToken);
    }
    if ( v18.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v19,
        0,
        1000 * v18.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v16 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( a4 )
    v21 = HKLtoPKL(ThreadWin32Thread, a3);
  else
    v21 = *(_QWORD *)(ThreadWin32Thread + 392);
  if ( v21 )
    v8 = InternalMapVirtualKeyEx(v7, v6, *(_QWORD *)(*(_QWORD *)(v21 + 48) + 32LL));
  UserSessionSwitchLeaveCrit();
  return v8;
}
