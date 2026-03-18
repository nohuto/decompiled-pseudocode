/*
 * XREFs of ReferenceDwmApiPort @ 0x1C00700A0
 * Callers:
 *     PowerOnMonitor @ 0x1C0065390 (PowerOnMonitor.c)
 *     SetConnectCompletedState @ 0x1C006FB00 (SetConnectCompletedState.c)
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z @ 0x1C006FE50 (-ClearSystemVisual@CHwndTargetProp@@QEAAHH@Z.c)
 *     ?SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z @ 0x1C006FF00 (-SetSystemVisual@CHwndTargetProp@@QEAAJHPEAUCompositionObject@@@Z.c)
 *     DxgkEngNotifyDisplayChange @ 0x1C00F0990 (DxgkEngNotifyDisplayChange.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

PVOID ReferenceDwmApiPort()
{
  PVOID v0; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PRKSEMAPHORE v17; // rcx
  __int64 v18; // rdi
  int v19; // ecx
  LARGE_INTEGER v20; // rbx
  int v21; // r8d

  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 || ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
  }
  else
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v7 )
        v6 = *v7;
      CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8, v10, v11);
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v14, v13, v15, v16) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
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
    v18 = PsGetCurrentThreadWin32Thread(v14, v13, v15);
    if ( v18 )
    {
      v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v18 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v19) = byte_1C0186D98 - 1;
        Template_xqx(
          v19,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v21,
          v20.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v20.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v21,
          0,
          1000 * v20.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v18 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    v0 = g_pDwmApiPort;
    if ( g_pDwmApiPort )
      ObfReferenceObject(g_pDwmApiPort);
    UserSessionSwitchLeaveCrit();
  }
  return v0;
}
