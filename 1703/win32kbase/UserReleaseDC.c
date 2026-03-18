/*
 * XREFs of UserReleaseDC @ 0x1C0028B90
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ReleaseCacheDC @ 0x1C002FBD0 (ReleaseCacheDC.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall UserReleaseDC(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // rdi
  struct tagTHREADINFO **v7; // rax
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // ecx
  LARGE_INTEGER v14; // rdi
  int v15; // r8d
  PRKSEMAPHORE v17; // rcx

  v4 = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v6 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v17, UserRequest, 0, 0, 0LL);
  }
  v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v13) = byte_1C0186D98 - 1;
      Template_xqx(v13, (unsigned int)&AcquiredSharedUserCritEvent, v15, v14.LowPart, 0, (char)gullUserCritAcquireToken);
    }
    if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v15,
        0,
        1000 * v14.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  LOBYTE(v4) = (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
  UserSessionSwitchLeaveCrit();
  return v4;
}
