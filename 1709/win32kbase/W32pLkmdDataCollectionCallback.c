/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C00ED470
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C00ED0E8 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

__int64 __fastcall W32pLkmdDataCollectionCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  PVOID v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ebx
  __int64 ProcessWin32Process; // [rsp+30h] [rbp-38h] BYREF
  int v26; // [rsp+38h] [rbp-30h]
  int v27; // [rsp+3Ch] [rbp-2Ch]
  int v28; // [rsp+40h] [rbp-28h]
  __int64 v29; // [rsp+48h] [rbp-20h]
  __int64 v30; // [rsp+50h] [rbp-18h]
  __int64 v31; // [rsp+58h] [rbp-10h]

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = 0LL;
  while ( 1 )
  {
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v10 )
      v9 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v15, v14) == gpepCSRSS && v9 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v9 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v18, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredSharedUserCrit(v15, v14, v16, v17);
  ProcessWin32Process = PsGetProcessWin32Process(a5);
  if ( ProcessWin32Process )
  {
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = a1;
    v30 = a2;
    v31 = a3;
    v23 = _AddWin32TriageDataToDump((struct tagWIN32_TRIAGE_DATA *)&ProcessWin32Process);
    if ( v23 >= 0 )
      v23 = 0;
  }
  else
  {
    v23 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  return (unsigned int)v23;
}
