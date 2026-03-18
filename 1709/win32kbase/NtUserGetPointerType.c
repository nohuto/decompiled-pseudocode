/*
 * XREFs of NtUserGetPointerType @ 0x1C00E82C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0121960 (-GetThreadPointerData@CTouchProcessor@@AEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 */

__int64 __fastcall NtUserGetPointerType(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r14
  int v5; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // r15d
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BOOL8 v17; // rdx
  PVOID v18; // rcx
  __int64 v19; // rdx
  CTouchProcessor *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG64 v23; // rcx
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  v7 = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = 0LL;
  do
  {
    v9 = 0;
    v10 = (__int64 *)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v10 )
      v8 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    v17 = 0LL;
    if ( CurrentProcess )
      v17 = CurrentProcess == g_pepDwm;
    if ( v17 || (PVOID)PsGetCurrentProcess(v14, v17) == gpepCSRSS && v8 != gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || (struct tagTHREADINFO *)v8 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( (struct tagTHREADINFO *)v8 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v18, UserRequest, 0, 0, 0LL);
      v9 = 1;
    }
  }
  while ( v9 == 1 );
  EtwTraceAcquiredSharedUserCrit(v14, v17, v15, v16);
  if ( !v5 || HIWORD(v5) || !v4 )
    goto LABEL_28;
  if ( v5 == 1 )
  {
    v25 = 4;
    goto LABEL_25;
  }
  if ( CTouchProcessor::GetThreadPointerData(v20, (struct tagTHREADINPUTPOINTERLIST *)(v8 + 1056), v5, &v25, 0LL, 0LL) )
  {
LABEL_25:
    v23 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_DWORD *)MmUserProbeAddress;
    *v4 = v25;
    v7 = 1;
  }
  else
  {
LABEL_28:
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v23, v19, v21, v22);
  return v7;
}
