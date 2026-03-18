/*
 * XREFs of NtUserReleaseDC @ 0x1C0057880
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     ReleaseCacheDC @ 0x1C0057AF0 (ReleaseCacheDC.c)
 *     McTemplateK0xqx @ 0x1C00E4B64 (McTemplateK0xqx.c)
 */

_BOOL8 __fastcall NtUserReleaseDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  PVOID CurrentProcess; // rax
  _BOOL8 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID v14; // rcx
  __int64 v15; // rbx
  DWORD LowPart; // eax
  int v17; // r8d

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
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
      v14 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v14 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v14, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredSharedUserCrit();
  v9 = (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
  {
    v11 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x200000010000000LL) != 0
    && (qword_1C0188D98 & 0x200000010000000LL) == qword_1C0188D98 )
  {
    v15 = PsGetCurrentThreadWin32Thread(v10, 0x200000010000000LL, v11, v12);
    if ( v15 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        McTemplateK0xqx(
          *(_QWORD *)(v15 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v17,
          LowPart - *(_DWORD *)(v15 + 8),
          0,
          *(_QWORD *)(v15 + 16));
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v9;
}
