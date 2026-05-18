/*
 * XREFs of ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B20
 * Callers:
 *     DwmpCreateSessionProcess @ 0x180003020 (DwmpCreateSessionProcess.c)
 * Callees:
 *     _TlgWrite @ 0x180001078 (_TlgWrite.c)
 *     ?ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ @ 0x18000134C (-ReportAggregatedValues@_unnamed_type_gDwmInitTelemetryAggregator_@@QEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001498 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?WaitForLsa@@YAJXZ @ 0x18000192C (-WaitForLsa@@YAJXZ.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001AC8 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001DE4 (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x18000272C (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?StartLaunchAppService@@YAJXZ @ 0x1800036E8 (-StartLaunchAppService@@YAJXZ.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x1800039E0 (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x18000413C (DwmpSignalSessionShutdown.c)
 *     ?IsMobileCore@@YA_NXZ @ 0x1800050C8 (-IsMobileCore@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180007120 (__security_check_cookie.c)
 *     memset_0 @ 0x180007A10 (memset_0.c)
 *     IsWaitForInputIdlePresent @ 0x180007D08 (IsWaitForInputIdlePresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180007EB0 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180008090 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 */

__int64 __fastcall DwmpCreateSessionProcessWorker(PVOID Parameter)
{
  unsigned int v1; // edi
  HANDLE v2; // rbx
  int started; // eax
  unsigned int v4; // edx
  signed int v5; // ecx
  int v6; // eax
  signed int LastError; // eax
  __int64 v8; // rdx
  _unnamed_type_gDwmInitTelemetryAggregator_ *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // eax
  int v14[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+70h] [rbp-98h] BYREF
  HANDLE hToken; // [rsp+88h] [rbp-80h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+98h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  GUID *v19; // [rsp+128h] [rbp+20h]
  __int64 v20; // [rsp+130h] [rbp+28h]
  int *v21; // [rsp+138h] [rbp+30h]
  __int64 v22; // [rsp+140h] [rbp+38h]
  GUID *v23; // [rsp+148h] [rbp+40h]
  __int64 v24; // [rsp+150h] [rbp+48h]
  unsigned __int16 *v25; // [rsp+158h] [rbp+50h]
  __int64 v26; // [rsp+160h] [rbp+58h]
  unsigned __int16 *v27; // [rsp+168h] [rbp+60h]
  __int64 v28; // [rsp+170h] [rbp+68h]
  WCHAR Dst[264]; // [rsp+178h] [rbp+70h] BYREF

  v1 = (unsigned int)Parameter;
  v14[0] = 0;
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  memset_0(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.cb = 104;
  v2 = 0LL;
  StartupInfo.lpDesktop = L"Winsta0\\Default";
  hToken = 0LL;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18000E7C0 = GetCurrentThreadId();
  if ( v1 && (!ghDwmProcess || GetProcessId(ghDwmProcess) != v1) )
  {
    v14[0] = 1;
    goto LABEL_39;
  }
  if ( ghDwmProcess )
  {
    started = CleanupOldDwmProcess();
    v14[0] = started;
    if ( started < 0 )
    {
      v4 = 1220;
LABEL_8:
      v5 = started;
LABEL_9:
      DoStackCapture(v5, v4);
      goto LABEL_39;
    }
  }
  if ( gDwmFirstLaunch )
  {
    started = WaitForLsa();
    v14[0] = started;
    if ( started < 0 )
    {
      v4 = 1235;
      goto LABEL_8;
    }
    if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
      DwmMonitorExtInitialize();
  }
  if ( (unsigned __int8)IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(1LL);
  if ( IsMobileCore() )
  {
    if ( gDwmFirstLaunch )
    {
      memset_0(Dst, 0, 0x208uLL);
      ExpandEnvironmentStringsW(L"%SystemRoot%\\system32\\dwm.exe", Dst, 0x104u);
      started = StartLaunchAppService();
      v14[0] = started;
      if ( started < 0 )
      {
        v4 = 1295;
        goto LABEL_8;
      }
      CreateProcessInChamber(0LL, 0LL, Dst, 0LL, 0, 67109920, 0LL, &StartupInfo, &ProcessInformation);
    }
  }
  else
  {
    started = MapDwmVirtualAccountAndAdjustPrivileges();
    v14[0] = started;
    if ( started < 0 )
    {
      v4 = 1254;
      goto LABEL_8;
    }
    v6 = LogonDwmAccountAndSetTokenIntegrityLevel(&hToken);
    v14[0] = v6;
    if ( v6 < 0 )
    {
      DoStackCapture(v6, 0x4E9u);
      v2 = hToken;
      goto LABEL_39;
    }
    SetLastError(0);
    v2 = hToken;
    if ( !CreateProcessAsUserW(
            hToken,
            L"dwm.exe",
            0LL,
            0LL,
            0LL,
            0,
            0x4000420u,
            0LL,
            0LL,
            &StartupInfo,
            &ProcessInformation) )
    {
      LastError = GetLastError();
      v4 = 1277;
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v5 = LastError;
      if ( v5 >= 0 )
        v5 = -2003304445;
      v14[0] = v5;
      goto LABEL_9;
    }
  }
  if ( ProcessInformation.hProcess )
  {
    if ( (unsigned __int8)IsWaitForInputIdlePresent() )
      WaitForInputIdle(ProcessInformation.hProcess, 0xFFFFFFFF);
    if ( WaitForSingleObject(ProcessInformation.hProcess, 0) )
    {
      ghDwmProcess = ProcessInformation.hProcess;
      ProcessInformation.hProcess = 0LL;
      if ( (unsigned __int8)IsDwmMonitorExtDwmProcessCreatedPresent() )
        DwmMonitorExtDwmProcessCreated(ghDwmProcess);
    }
    else
    {
      v14[0] = -2147467259;
      TraceLoggingWriteEtw((const struct _TlgProvider_t *)4, -2147467259, 0LL);
      DwmpSignalSessionShutdown();
    }
  }
LABEL_39:
  gDwmFirstLaunch = 0;
  if ( ProcessInformation.hProcess )
  {
    CloseHandle(ProcessInformation.hProcess);
    ProcessInformation.hProcess = 0LL;
  }
  if ( ProcessInformation.hThread )
  {
    CloseHandle(ProcessInformation.hThread);
    ProcessInformation.hThread = 0LL;
  }
  if ( v2 )
    CloseHandle(v2);
  if ( (unsigned __int8)IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(0LL);
  if ( v14[0] < 0 )
  {
    ++dword_18000E7AC;
    if ( ++dword_18000E7B0 > 10 )
    {
      _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v9, v8, (__int64)v10, v11);
      dword_18000E7B0 = 0;
    }
    if ( (unsigned int)dword_18000E000 > 5 )
    {
      v8 = 0x400000000000LL;
      if ( (qword_18000E010 & 0x400000000000LL) != 0 && (qword_18000E018 & 0x400000000000LL) == qword_18000E018 )
      {
        v20 = 16LL;
        v19 = &gDwmInitTelemetryActivityId;
        v21 = v14;
        v23 = &gDwmInitTargetAppSessionGuid;
        v25 = &gBootId;
        v27 = &gSessionId;
        v22 = 4LL;
        v24 = 16LL;
        v26 = 2LL;
        v28 = 2LL;
        TlgWrite(v9, &unk_18000AC51, v10, v11, 7u, &pData);
      }
    }
    _unnamed_type_gDwmInitTelemetryAggregator_::ReportAggregatedValues(v9, v8, (__int64)v10, v11);
    TraceLoggingWriteEtw((const struct _TlgProvider_t *)2, v14[0], 0LL);
  }
  dword_18000E7C0 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  v12 = v14[0];
  if ( v14[0] < 0 )
  {
    DwmpSignalSessionShutdown();
    v12 = v14[0];
    if ( v14[0] < 0 )
    {
      DoStackCapture(v14[0], 0x58Cu);
      v12 = v14[0];
    }
  }
  TraceLoggingWriteEtw((const struct _TlgProvider_t *)0xA, v12, (const GUID *)v1);
  return 0LL;
}
