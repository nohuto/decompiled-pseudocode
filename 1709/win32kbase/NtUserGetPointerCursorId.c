/*
 * XREFs of NtUserGetPointerCursorId @ 0x1C00E7CE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C011F6C0 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 */

__int64 __fastcall NtUserGetPointerCursorId(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  int v5; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  int v8; // r14d
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _BOOL8 v16; // rcx
  PVOID v17; // rcx
  CTouchProcessor *v18; // rcx
  ULONG64 v19; // rdx
  ULONG64 v20; // rcx
  int PointerCursorId; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v25; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  v5 = a1;
  v25 = 0;
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
  if ( v5 && !HIWORD(v5) && v4 )
  {
    PointerCursorId = CTouchProcessor::GetPointerCursorId(v18, v7, v5, &v25);
    if ( PointerCursorId )
    {
      v20 = MmUserProbeAddress;
      v19 = MmUserProbeAddress;
      if ( (unsigned __int64)v4 >= MmUserProbeAddress )
        v4 = (_DWORD *)MmUserProbeAddress;
      *v4 = v25;
    }
  }
  else
  {
    PointerCursorId = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v20, v19, v22, v23);
  return PointerCursorId;
}
