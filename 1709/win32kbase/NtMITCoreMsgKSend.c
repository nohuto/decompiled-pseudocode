/*
 * XREFs of NtMITCoreMsgKSend @ 0x1C00E61F0
 * Callers:
 *     <none>
 * Callees:
 *     CoreMsgSend @ 0x1C0011904 (CoreMsgSend.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 __fastcall NtMITCoreMsgKSend(void *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  int v9; // esi
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BOOL8 v17; // rcx
  PVOID v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _BOOL8 v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31; // [rsp+38h] [rbp-30h]

  v4 = (unsigned int)a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = 0LL;
  do
  {
    v9 = 0;
    v10 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v10 )
      v8 = *v10;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v12, v11);
    v17 = 0LL;
    if ( CurrentProcess )
      v17 = CurrentProcess == g_pepDwm;
    if ( v17 || (PVOID)PsGetCurrentProcess(v17, v14) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v8 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v8 != gptiRit )
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
  EtwTraceAcquiredSharedUserCrit(v17, v14, v15, v16);
  v21 = (PVOID)PsGetCurrentProcess(v20, v19);
  v25 = 0LL;
  if ( v21 )
    v25 = v21 == g_pepDwm;
  if ( v25 )
  {
    if ( (_DWORD)v4 )
    {
      if ( ((PsGetCurrentProcessWow64Process(v25) == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a2[v4] > MmUserProbeAddress || &a2[v4] < a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v31 = CoreMsgSend(a1, 1, a2, (const GUID *)(unsigned int)v4);
    UserSessionSwitchLeaveCrit(v28, v27, v29, v30);
    return v31;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v25, v22, v23, v24);
    return 3221225506LL;
  }
}
