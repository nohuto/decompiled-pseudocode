/*
 * XREFs of NtMITCoreMsgKGetConnectionHandle @ 0x1C00E5F30
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     CoreMsgOpenConnection @ 0x1C0087E20 (CoreMsgOpenConnection.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall NtMITCoreMsgKGetConnectionHandle(ULONG64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  ULONG64 v5; // r15
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v7; // r14
  int v8; // r12d
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _BOOL8 v16; // rcx
  PVOID v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  PVOID v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  const GUID *v23; // r9
  _BOOL8 v24; // rcx
  ULONG64 v26; // rdx
  ULONG64 v27; // rcx
  int v28; // ebx
  __int64 v29; // r8
  __int64 v30; // r9
  HANDLE Handle; // [rsp+40h] [rbp-98h] BYREF
  __int128 v32; // [rsp+60h] [rbp-78h]
  __int128 v33; // [rsp+70h] [rbp-68h]
  __int64 v34; // [rsp+80h] [rbp-58h]
  _OWORD v35[2]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-30h]

  v4 = a2;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  do
  {
    v8 = 0;
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v9 )
      v7 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
    v16 = 0LL;
    if ( CurrentProcess )
      v16 = CurrentProcess == g_pepDwm;
    if ( v16 || (PVOID)PsGetCurrentProcess(v16, v13) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v7 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v7 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v17, UserRequest, 0, 0, 0LL);
      v8 = 1;
    }
  }
  while ( v8 == 1 );
  EtwTraceAcquiredSharedUserCrit(v16, v13, v14, v15);
  v20 = (PVOID)PsGetCurrentProcess(v19, v18);
  v24 = 0LL;
  if ( v20 )
    v24 = v20 == g_pepDwm;
  if ( v24 )
  {
    Handle = 0LL;
    if ( v5 + 40 < v5 || v5 + 40 > MmUserProbeAddress )
      v5 = MmUserProbeAddress;
    v32 = *(_OWORD *)v5;
    v33 = *(_OWORD *)(v5 + 16);
    v34 = *(_QWORD *)(v5 + 32);
    v35[0] = v32;
    v35[1] = v33;
    v36 = v34;
    v28 = CoreMsgOpenConnection(1, (const struct tagMsgRoutingInfo *)v35, &Handle, v23);
    if ( v28 >= 0 )
    {
      v27 = MmUserProbeAddress;
      v26 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_QWORD *)MmUserProbeAddress;
      *v4 = Handle;
    }
    UserSessionSwitchLeaveCrit(v27, v26, v29, v30);
    return (unsigned int)v28;
  }
  else
  {
    UserSessionSwitchLeaveCrit(v24, v21, v22, (__int64)v23);
    return 3221225506LL;
  }
}
