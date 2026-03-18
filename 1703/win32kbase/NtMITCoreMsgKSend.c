/*
 * XREFs of NtMITCoreMsgKSend @ 0x1C00DF0F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     CoreMsgSend @ 0x1C006C2DC (CoreMsgSend.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtMITCoreMsgKSend(void *a1, char *a2, __int64 a3)
{
  __int64 v3; // r14
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  int v8; // edi
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID CurrentProcess; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _BOOL8 v18; // rdx
  PRKSEMAPHORE v19; // rcx
  LONGLONG v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  LARGE_INTEGER v25; // rbx
  bool v26; // al
  PVOID v27; // rax
  BOOL v28; // edx
  __int64 v30; // [rsp+20h] [rbp-48h]
  unsigned int v31; // [rsp+30h] [rbp-38h]

  v3 = (unsigned int)a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  do
  {
    v8 = 0;
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v9 )
      v7 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10, v12, v13);
    v18 = 0LL;
    if ( CurrentProcess )
      v18 = CurrentProcess == g_pepDwm;
    if ( v18
      || (PVOID)PsGetCurrentProcess(v15, v18, v16, v17) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v7 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v19 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v7 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v19 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v19, UserRequest, 0, 0, 0LL);
      v8 = 1;
    }
  }
  while ( v8 == 1 );
  v22 = PsGetCurrentThreadWin32Thread(v15, v18, v16);
  if ( v22 )
  {
    v25 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
    v20 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      LOBYTE(v21) = byte_1C0186D98 - 1;
      v26 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v26 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(v30) = 0;
        Template_xqx(v21, &AcquiredSharedUserCritEvent, v23, v25.QuadPart, v30, gullUserCritAcquireToken, 0);
      }
    }
    if ( v25.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 )
    {
      v20 = 1000 * v25.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v30) = 1000 * v25.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          (__int64)gullUserCritAcquireToken,
          &AcquiredSharedUserCritTelemetryEvent,
          v23,
          0LL,
          v30,
          gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v22 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  v27 = (PVOID)PsGetCurrentProcess(v21, v20, v23, v24);
  v28 = 0;
  if ( v27 )
    v28 = v27 == g_pepDwm;
  if ( v28 )
  {
    if ( (_DWORD)v3 )
    {
      if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( &a2[v3] > (char *)W32UserProbeAddress || &a2[v3] < a2 )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
    v31 = CoreMsgSend(a1, 1, a2, (const GUID *)(unsigned int)v3);
    UserSessionSwitchLeaveCrit();
    return v31;
  }
  else
  {
    UserSessionSwitchLeaveCrit();
    return 3221225506LL;
  }
}
