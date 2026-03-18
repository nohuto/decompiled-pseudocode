/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C00E7E80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C00E7B04 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  PRKSEMAPHORE v20; // rcx
  __int64 v21; // rdi
  LARGE_INTEGER v22; // rcx
  LARGE_INTEGER v23; // rbx
  LARGE_INTEGER v24; // r8
  int v25; // ebx
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 ProcessWin32Process; // [rsp+30h] [rbp-38h] BYREF
  int v29; // [rsp+38h] [rbp-30h]
  int v30; // [rsp+3Ch] [rbp-2Ch]
  int v31; // [rsp+40h] [rbp-28h]
  __int64 v32; // [rsp+48h] [rbp-20h]
  __int64 v33; // [rsp+50h] [rbp-18h]
  __int64 v34; // [rsp+58h] [rbp-10h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11, v13, v14);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v17, v16, v18, v19) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v20 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v20 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v20, UserRequest, 0, 0, 0LL);
  }
  v21 = PsGetCurrentThreadWin32Thread(v17, v16, v18);
  if ( v21 )
  {
    v23 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v21 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LODWORD(v27) = 0;
      LOBYTE(v22.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v22.QuadPart,
        &AcquiredSharedUserCritEvent,
        v24.QuadPart,
        v23.QuadPart,
        v27,
        gullUserCritAcquireToken);
    }
    if ( v23.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v27) = 1000 * v23.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredSharedUserCritTelemetryEvent,
        v24.QuadPart,
        0LL,
        v27,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v21 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  ProcessWin32Process = PsGetProcessWin32Process(a5);
  if ( ProcessWin32Process )
  {
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = a1;
    v33 = a2;
    v34 = a3;
    v25 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&ProcessWin32Process);
    if ( v25 >= 0 )
      v25 = 0;
  }
  else
  {
    v25 = -1073741811;
  }
  UserSessionSwitchLeaveCrit();
  return (unsigned int)v25;
}
