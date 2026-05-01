/*
 * XREFs of ??$CriticalProcessDidntUseAnyCpu@AEAY0BI@$$CBG@StartWindowTelemetry@@SAXAEAY0BI@$$CBG@Z @ 0x18015ABD8
 * Callers:
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180158644 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180147F6C (-Provider@CommonStartTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[24]>()
{
  const struct _TlgProvider_t *v0; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  const wchar_t *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]

  v0 = CommonStartTelemetryLogging::Provider();
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x400000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x400000000000LL) == *((_QWORD *)v0 + 3) )
  {
    v5 = 0;
    v3 = L"shellexperiencehost.exe";
    v4 = 48;
    LODWORD(v0) = TlgWrite(v0, &unk_1802025F3, 0LL, 0LL, 3u, &pData);
  }
  return (int)v0;
}
