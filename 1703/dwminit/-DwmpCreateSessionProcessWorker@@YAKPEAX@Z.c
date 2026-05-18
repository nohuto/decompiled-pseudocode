/*
 * XREFs of ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A00
 * Callers:
 *     DwmpCreateSessionProcess @ 0x180002E90 (DwmpCreateSessionProcess.c)
 * Callees:
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001360 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001518 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?IsMobileCore@@YA_NXZ @ 0x1800015FC (-IsMobileCore@@YA_NXZ.c)
 *     ?WaitForLsa@@YAJXZ @ 0x1800019E4 (-WaitForLsa@@YAJXZ.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001B80 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001E9C (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002734 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?AddData@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXW4DwmInitTelemetryAggregateType@@I_N1@Z @ 0x180003740 (-AddData@-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateTyp.c)
 *     ?StartLaunchAppService@@YAJXZ @ 0x18000393C (-StartLaunchAppService@@YAJXZ.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003C6C (-DoStackCapture@@YAXJI@Z.c)
 *     DwmpSignalSessionShutdown @ 0x18000440C (DwmpSignalSessionShutdown.c)
 *     ?ReportSessionShutdownOnCreateFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@J0GG@Z @ 0x180005894 (-ReportSessionShutdownOnCreateFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@J0GG@Z.c)
 *     ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800059A0 (-GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180006270 (__security_check_cookie.c)
 *     IsWaitForInputIdlePresent @ 0x180006754 (IsWaitForInputIdlePresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x1800068FC (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180006B28 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 *     memset_0 @ 0x1800072D8 (memset_0.c)
 */

__int64 __fastcall DwmpCreateSessionProcessWorker(PVOID Parameter)
{
  unsigned int v1; // esi
  signed int v2; // ebx
  HANDLE v3; // rdi
  int started; // eax
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // eax
  signed int LastError; // eax
  int v9; // r9d
  const struct _TlgProvider_t *v10; // rcx
  DwmInitAsimov::CDwmInitEventManager *Manager; // rax
  CDwmInitTelemetryAggregator *v12; // rax
  unsigned __int16 lpThreadAttributes; // [rsp+20h] [rbp-E0h]
  unsigned __int16 bInheritHandles; // [rsp+28h] [rbp-D8h]
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE hToken[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v18; // [rsp+90h] [rbp-70h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+A0h] [rbp-60h] BYREF
  WCHAR Dst[264]; // [rsp+110h] [rbp+10h] BYREF

  v1 = (unsigned int)Parameter;
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  v2 = 0;
  memset_0(&StartupInfo.lpReserved, 0, 0x60uLL);
  StartupInfo.cb = 104;
  StartupInfo.lpDesktop = L"Winsta0\\Default";
  v3 = 0LL;
  hToken[0] = 0LL;
  AcquireSRWLockExclusive(&gDwmStateLock);
  dword_18000C718 = GetCurrentThreadId();
  if ( v1 && (!ghDwmProcess || GetProcessId(ghDwmProcess) != v1) )
  {
    v2 = 1;
    goto LABEL_39;
  }
  if ( ghDwmProcess )
  {
    started = CleanupOldDwmProcess();
    v2 = started;
    if ( started < 0 )
    {
      v5 = 1250;
LABEL_8:
      v6 = started;
LABEL_9:
      DoStackCapture(v6, v5);
      goto LABEL_39;
    }
  }
  if ( gDwmFirstLaunch )
  {
    started = WaitForLsa();
    v2 = started;
    if ( started < 0 )
    {
      v5 = 1265;
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
      v2 = started;
      if ( started < 0 )
      {
        v5 = 1323;
        goto LABEL_8;
      }
      bInheritHandles = 1056;
      CreateProcessInChamber(0LL, 0LL, Dst, 0LL, 0);
    }
  }
  else
  {
    started = MapDwmVirtualAccountAndAdjustPrivileges();
    v2 = started;
    if ( started < 0 )
    {
      v5 = 1284;
      goto LABEL_8;
    }
    v7 = LogonDwmAccountAndSetTokenIntegrityLevel(hToken);
    v2 = v7;
    if ( v7 < 0 )
    {
      DoStackCapture(v7, 0x507u);
      v3 = hToken[0];
      goto LABEL_39;
    }
    SetLastError(0);
    v3 = hToken[0];
    if ( !CreateProcessAsUserW(
            hToken[0],
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
      v5 = 1307;
      v2 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v2 = LastError;
      if ( v2 >= 0 )
        v2 = -2003304445;
      v6 = v2;
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
      v2 = -2147467259;
      TraceLoggingWriteEtw(4, -2147467259, 0LL);
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
  if ( v3 )
    CloseHandle(v3);
  if ( (unsigned __int8)IsDwmLockScreenUpdatesPresent() )
    DwmLockScreenUpdates(0LL);
  if ( v2 < 0 )
  {
    LOBYTE(v9) = 1;
    CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::AddData(
      (unsigned int)&gDwmInitTelemetryAggregator,
      3,
      1,
      v9,
      1);
    *(GUID *)hToken = gDwmInitTargetAppSessionGuid;
    v18 = gDwmInitTelemetryActivityId;
    Manager = DwmInitAsimov::CDwmInitEventManager::GetManager(v10);
    DwmInitAsimov::CDwmInitEventManager::ReportSessionShutdownOnCreateFailure(
      Manager,
      &v18,
      v2,
      (struct _GUID *)hToken,
      lpThreadAttributes,
      bInheritHandles);
    if ( qword_18000C048 )
    {
      CDwmInitTelemetryAggregator::LogTelemetry(qword_18000C048);
      v12 = qword_18000C048;
      if ( qword_18000C048 )
      {
        *((_QWORD *)qword_18000C048 + 1) = 0LL;
        *((_QWORD *)v12 + 2) = 0LL;
      }
    }
    byte_18000C050 = 0;
    TraceLoggingWriteEtw(2, v2, 0LL);
  }
  dword_18000C718 = 0;
  ReleaseSRWLockExclusive(&gDwmStateLock);
  if ( v2 < 0 )
  {
    DwmpSignalSessionShutdown();
    DoStackCapture(v2, 0x5A4u);
  }
  TraceLoggingWriteEtw(10, v2, (const GUID *)v1);
  return 0LL;
}
