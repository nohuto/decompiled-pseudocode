/*
 * XREFs of NtMITCoreMsgKGetConnectionHandle @ 0x1C00DED50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     CoreMsgOpenConnection @ 0x1C006B624 (CoreMsgOpenConnection.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtMITCoreMsgKGetConnectionHandle(CTouchProcessor *a1, CTouchProcessor *a2, __int64 a3)
{
  CTouchProcessor *v3; // r14
  CTouchProcessor *v4; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rsi
  int v7; // r15d
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID CurrentProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _BOOL8 v17; // rcx
  PRKSEMAPHORE v18; // rcx
  LONGLONG v19; // rdx
  LONGLONG v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  LARGE_INTEGER v24; // rsi
  bool v25; // al
  PVOID v26; // rax
  const GUID *v27; // r9
  BOOL v28; // ecx
  int v30; // edi
  __int64 v31; // [rsp+20h] [rbp-B8h]
  HANDLE Handle; // [rsp+40h] [rbp-98h] BYREF
  __int128 v33; // [rsp+60h] [rbp-78h]
  __int128 v34; // [rsp+70h] [rbp-68h]
  __int64 v35; // [rsp+80h] [rbp-58h]
  _OWORD v36[2]; // [rsp+88h] [rbp-50h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-30h]

  v3 = a2;
  v4 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  do
  {
    v7 = 0;
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v6 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9, v11, v12);
    v17 = 0LL;
    if ( CurrentProcess )
      v17 = CurrentProcess == g_pepDwm;
    if ( v17
      || (PVOID)PsGetCurrentProcess(v17, v14, v15, v16) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v6 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v18, UserRequest, 0, 0, 0LL);
      v7 = 1;
    }
  }
  while ( v7 == 1 );
  v23 = PsGetCurrentThreadWin32Thread(v17, v14, v15);
  if ( v23 )
  {
    v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v23 + 8));
    v19 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v25 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v25 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(v31) = 0;
        Template_xqx(v20, &AcquiredSharedUserCritEvent, v21, v24.QuadPart, v31, gullUserCritAcquireToken);
      }
    }
    if ( v24.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      v19 = 1000 * v24.QuadPart % gliQpcFreq.QuadPart;
      v20 = 1000 * v24.QuadPart / gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v31) = 1000 * v24.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(v20, &AcquiredSharedUserCritTelemetryEvent, v21, 0LL, v31, gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v23 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v26 = (PVOID)PsGetCurrentProcess(v20, v19, v21, v22);
  v28 = 0;
  if ( v26 )
    v28 = v26 == g_pepDwm;
  if ( v28 )
  {
    Handle = 0LL;
    if ( (CTouchProcessor *)((char *)v4 + 40) < v4 || (CTouchProcessor *)((char *)v4 + 40) > W32UserProbeAddress )
      v4 = W32UserProbeAddress;
    v33 = *(_OWORD *)v4;
    v34 = *((_OWORD *)v4 + 1);
    v35 = *((_QWORD *)v4 + 4);
    v36[0] = v33;
    v36[1] = v34;
    v37 = v35;
    v30 = CoreMsgOpenConnection(1, (const struct tagMsgRoutingInfo *)v36, &Handle, v27);
    if ( v30 >= 0 )
    {
      if ( v3 >= W32UserProbeAddress )
        v3 = W32UserProbeAddress;
      *(_QWORD *)v3 = Handle;
    }
    UserSessionSwitchLeaveCrit();
    return (unsigned int)v30;
  }
  else
  {
    UserSessionSwitchLeaveCrit();
    return 3221225506LL;
  }
}
