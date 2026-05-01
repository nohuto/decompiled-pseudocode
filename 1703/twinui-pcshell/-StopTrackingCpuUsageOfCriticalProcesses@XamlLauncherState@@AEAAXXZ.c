/*
 * XREFs of ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180158644
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180154BA0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801584DC (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180158544 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801585AC (-SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0BI@$$CBG@StartWindowTelemetry@@SAXAEAY0BI@$$CBG@Z @ 0x18015ABD8 (--$CriticalProcessDidntUseAnyCpu@AEAY0BI@$$CBG@StartWindowTelemetry@@SAXAEAY0BI@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0N@$$CBG@StartWindowTelemetry@@SAXAEAY0N@$$CBG@Z @ 0x18015AC64 (--$CriticalProcessDidntUseAnyCpu@AEAY0N@$$CBG@StartWindowTelemetry@@SAXAEAY0N@$$CBG@Z.c)
 *     ??$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z @ 0x18015ACF0 (--$CriticalProcessDidntUseAnyCpu@AEAY0L@$$CBG@StartWindowTelemetry@@SAXAEAY0L@$$CBG@Z.c)
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
  if ( *((_QWORD *)this + 126) )
  {
    started = XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, &v6);
    if ( started >= 0 )
    {
      if ( v6 == *((_QWORD *)this + 126) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[24]>();
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x948,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)started);
    }
  }
  v7 = 0LL;
  if ( *((_QWORD *)this + 127) )
  {
    v3 = XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, &v7);
    if ( v3 >= 0 )
    {
      if ( v7 == *((_QWORD *)this + 127) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[13]>();
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x950,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v3);
    }
  }
  v8 = 0LL;
  if ( *((_QWORD *)this + 128) )
  {
    v4 = XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, &v8);
    if ( v4 >= 0 )
    {
      if ( v8 == *((_QWORD *)this + 128) )
        StartWindowTelemetry::CriticalProcessDidntUseAnyCpu<unsigned short const (&)[11]>();
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x958,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v4);
    }
  }
}
