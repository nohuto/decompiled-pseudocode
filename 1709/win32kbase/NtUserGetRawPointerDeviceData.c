/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1C00E84C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0027000 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0120E68 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(__int64 a1, __int64 a2, __int64 a3, char *a4, volatile void *Address)
{
  int v6; // r13d
  int v7; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  int PointerRawDataInternal; // edi
  struct tagTHREADINFO *v10; // r14
  int v11; // ebx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _BOOL8 v19; // rcx
  PVOID v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // r15
  int v24; // ecx
  __int64 v25; // rcx
  void *v26; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v28; // rcx
  CTouchProcessor *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int16 v35; // [rsp+C0h] [rbp+8h]
  unsigned int v36; // [rsp+C8h] [rbp+10h]
  unsigned int v37; // [rsp+D0h] [rbp+18h]

  v37 = a3;
  v36 = a2;
  v35 = a1;
  v6 = a2;
  v7 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  PointerRawDataInternal = 0;
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v10 = 0LL;
  do
  {
    v11 = 0;
    v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v12 )
      v10 = *v12;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
    v19 = 0LL;
    if ( CurrentProcess )
      v19 = CurrentProcess == g_pepDwm;
    if ( v19 || (PVOID)PsGetCurrentProcess(v19, v16) == gpepCSRSS && v10 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v10 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v20 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v10 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v20 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v20, UserRequest, 0, 0, 0LL);
      v11 = 1;
    }
  }
  while ( v11 == 1 );
  EtwTraceAcquiredSharedUserCrit(v19, v16, v17, v18);
  if ( !v7
    || HIWORD(v7)
    || !v6
    || !v37
    || !a4
    || !Address
    || (v21 = v37 * (unsigned __int64)v36, v21 > 0xFFFFFFFF)
    || (v22 = (unsigned int)v21, v23 = 28LL * v37, v23 > 0xFFFFFFFF) )
  {
    v24 = 87;
    goto LABEL_38;
  }
  if ( (unsigned int)v23 >= 0x2710000 || (v26 = (void *)Win32AllocPoolWithQuota((unsigned int)v23, 0x78707355u)) == 0LL )
  {
    v24 = 8;
LABEL_38:
    UserSetLastError(v24);
    goto LABEL_39;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v25);
  ProbeForWrite(Address, 4 * v22, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( v23 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v28) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a4[v23] > MmUserProbeAddress || &a4[v23] < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v26, a4, (unsigned int)v23);
  PointerRawDataInternal = CTouchProcessor::GetPointerRawDataInternal(
                             v29,
                             v10,
                             v35,
                             v36,
                             v37,
                             (const struct tagPOINTER_DEVICE_PROPERTY *)v26,
                             v22,
                             (int *)Address);
  Win32FreePool((__int64)v26);
LABEL_39:
  UserSessionSwitchLeaveCrit(v31, v30, v32, v33);
  return PointerRawDataInternal;
}
