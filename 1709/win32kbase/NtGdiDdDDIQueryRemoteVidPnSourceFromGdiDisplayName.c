/*
 * XREFs of NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00F4400
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     DrvGetDeviceFromName @ 0x1C005A6D0 (DrvGetDeviceFromName.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v5; // rax
  unsigned int v6; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v8; // rdi
  int v9; // esi
  struct tagTHREADINFO **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  PVOID CurrentProcess; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  BOOL v17; // eax
  PVOID v18; // rcx
  wchar_t *DeviceFromName; // rax
  _DWORD *v20; // rdx
  ULONG64 v21; // rcx
  __int64 v22; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  WCHAR SourceString[8]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v26; // [rsp+50h] [rbp-68h]
  __int128 v27; // [rsp+60h] [rbp-58h]
  __int128 v28; // [rsp+70h] [rbp-48h]
  int v29; // [rsp+80h] [rbp-38h]

  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)SourceString = *(_OWORD *)v5;
  v26 = *(_OWORD *)(v5 + 16);
  v27 = *(_OWORD *)(v5 + 32);
  v28 = *(_OWORD *)(v5 + 48);
  v29 = *(_DWORD *)(v5 + 64);
  v6 = 0;
  HIWORD(v28) = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, MmUserProbeAddress, a3, a4);
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
    v17 = 0;
    if ( CurrentProcess )
      v17 = CurrentProcess == g_pepDwm;
    if ( v17
      || (PVOID)PsGetCurrentProcess(CurrentProcess, v13) == gpepCSRSS && v8 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v8 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = gpsemDITHitTestWaiters;
      goto LABEL_19;
    }
    if ( v8 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = gpsemRITBlockedOnDITWaiters;
LABEL_19:
      KeWaitForSingleObject(v18, UserRequest, 0, 0, 0LL);
      v9 = 1;
    }
  }
  while ( v9 == 1 );
  EtwTraceAcquiredSharedUserCrit((__int64)CurrentProcess, v13, v15, v16);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString, 0);
  if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x4000000) != 0 )
  {
    v20 = (_DWORD *)(a1 + 64);
    v21 = MmUserProbeAddress;
    if ( a1 + 64 >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = *((_DWORD *)DeviceFromName + 68);
  }
  else
  {
    v6 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v21, (__int64)v20, (__int64)DeviceFromName, v22);
  return v6;
}
