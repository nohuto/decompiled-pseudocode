/*
 * XREFs of ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1802313C0
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x18022FF10 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180078EB8 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180078F1C (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180078F80 (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0BI@$$CBG@StartWindowTelemetry@@SAXAEAY0BI@$$CBG@Z @ 0x18022BE84 (--$CriticalProcessDidntUseAnyCpu@AEAY0BI@$$CBG@StartWindowTelemetry@@SAXAEAY0BI@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18022BF94 (--$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0N@$$CBG@StartWindowTelemetry@@SAXAEAY0N@$$CBG@Z @ 0x18022C0A4 (--$CriticalProcessDidntUseAnyCpu@AEAY0N@$$CBG@StartWindowTelemetry@@SAXAEAY0N@$$CBG@Z.c)
 */

void __fastcall XamlLauncherState::StopTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  int started; // eax
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( *((_QWORD *)this + 128) )
  {
    started = XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, &v6);
    if ( started >= 0 )
    {
      if ( v6 == *((_QWORD *)this + 128) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[24]>();
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2400LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)started);
    }
  }
  v7 = 0LL;
  if ( *((_QWORD *)this + 129) )
  {
    v3 = XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, &v7);
    if ( v3 >= 0 )
    {
      if ( v7 == *((_QWORD *)this + 129) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[13]>();
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2408LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
    }
  }
  v8 = 0LL;
  if ( *((_QWORD *)this + 130) )
  {
    v4 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, &v8);
    if ( v4 >= 0 )
    {
      if ( v8 == *((_QWORD *)this + 130) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[11]>();
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2416LL,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v4);
    }
  }
}
