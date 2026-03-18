/*
 * XREFs of NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00F1690
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     DrvGetDeviceFromName @ 0x1C00620F0 (DrvGetDeviceFromName.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  CTouchProcessor *v4; // rdx
  unsigned int v5; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v7; // rdi
  int v8; // esi
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  _BOOL8 v18; // rcx
  PRKSEMAPHORE v19; // rcx
  __int64 v20; // rsi
  LARGE_INTEGER v21; // rcx
  LARGE_INTEGER v22; // rdi
  LARGE_INTEGER v23; // r8
  char v24; // al
  wchar_t *DeviceFromName; // rax
  CTouchProcessor *v26; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-98h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  WCHAR SourceString[8]; // [rsp+40h] [rbp-78h] BYREF
  __int128 v31; // [rsp+50h] [rbp-68h]
  __int128 v32; // [rsp+60h] [rbp-58h]
  __int128 v33; // [rsp+70h] [rbp-48h]
  int v34; // [rsp+80h] [rbp-38h]

  v4 = (CTouchProcessor *)a1;
  if ( a1 >= (unsigned __int64)W32UserProbeAddress )
    v4 = W32UserProbeAddress;
  *(_OWORD *)SourceString = *(_OWORD *)v4;
  v31 = *((_OWORD *)v4 + 1);
  v32 = *((_OWORD *)v4 + 2);
  v33 = *((_OWORD *)v4 + 3);
  v34 = *((_DWORD *)v4 + 16);
  v5 = 0;
  HIWORD(v33) = 0;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, v4, a3);
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
      || (PVOID)PsGetCurrentProcess(v18, v15, v16, v17) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
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
      goto LABEL_19;
    }
    if ( v7 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v19 = gpsemRITBlockedOnDITWaiters;
LABEL_19:
      KeWaitForSingleObject(v19, UserRequest, 0, 0, 0LL);
      v8 = 1;
    }
  }
  while ( v8 == 1 );
  v20 = PsGetCurrentThreadWin32Thread(v18, v15, v16);
  if ( v20 )
  {
    v22 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v20 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v24 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v24 = 0;
      }
      if ( v24 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(Timeout) = 0;
        Template_xqx(
          v21.QuadPart,
          &AcquiredSharedUserCritEvent,
          v23.QuadPart,
          v22.QuadPart,
          Timeout,
          gullUserCritAcquireToken);
      }
    }
    if ( v22.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v22.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        1000 * v22.QuadPart / gliQpcFreq.QuadPart,
        &AcquiredSharedUserCritTelemetryEvent,
        v23.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v20 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceFromName = DrvGetDeviceFromName(&DestinationString, 0);
  if ( DeviceFromName && (*((_DWORD *)DeviceFromName + 40) & 0x4000000) != 0 )
  {
    v26 = (CTouchProcessor *)(a1 + 64);
    if ( a1 + 64 >= (unsigned __int64)W32UserProbeAddress )
      v26 = W32UserProbeAddress;
    *(_DWORD *)v26 = *((_DWORD *)DeviceFromName + 68);
  }
  else
  {
    v5 = -1073741811;
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
