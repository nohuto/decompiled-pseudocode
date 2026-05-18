/*
 * XREFs of __security_check_cookie @ 0x180006270
 * Callers:
 *     ?UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z @ 0x180001254 (-UtilGetProcessTelemetryAppSessionGuid@@YAJPEAXPEAU_GUID@@PEAG2@Z.c)
 *     ?LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ @ 0x180001360 (-LogTelemetry@CDwmInitTelemetryAggregator@@UEAAXXZ.c)
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x180001518 (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     DllMain @ 0x180001644 (DllMain.c)
 *     ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001B80 (-MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ.c)
 *     ?LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z @ 0x180001E9C (-LogonDwmAccountAndSetTokenIntegrityLevel@@YAJPEAPEAX@Z.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x180002734 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A00 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpCreateSessionProcess @ 0x180002E90 (DwmpCreateSessionProcess.c)
 *     DwmpTerminateSessionProcess @ 0x1800032E0 (DwmpTerminateSessionProcess.c)
 *     ?StartLaunchAppService@@YAJXZ @ 0x18000393C (-StartLaunchAppService@@YAJXZ.c)
 *     DwmpSignalSessionShutdown @ 0x18000440C (DwmpSignalSessionShutdown.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000491C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x180005180 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 *     ?PostEvent@RestartEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180005340 (-PostEvent@RestartEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@FallbackToBddEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180005430 (-PostEvent@FallbackToBddEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@SessionShutdownOnCreateFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x180005520 (-PostEvent@SessionShutdownOnCreateFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?PostEvent@SessionShutdownOnRestartFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z @ 0x1800055F0 (-PostEvent@SessionShutdownOnRestartFailureEventData@DwmInitAsimov@@UEAAXPEBU_TlgProvider_t@@@Z.c)
 *     ?ReportRestart@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@KH0GG@Z @ 0x18000577C (-ReportRestart@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@KH0GG@Z.c)
 *     ?ReportFallbackToBdd@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z @ 0x180005808 (-ReportFallbackToBdd@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z.c)
 *     ?ReportSessionShutdownOnCreateFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@J0GG@Z @ 0x180005894 (-ReportSessionShutdownOnCreateFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@J0GG@Z.c)
 *     ?ReportSessionShutdownOnRestartFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z @ 0x180005910 (-ReportSessionShutdownOnRestartFailure@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z.c)
 *     __GSHandlerCheckCommon @ 0x180007278 (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
LABEL_4:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto LABEL_4;
  }
}
