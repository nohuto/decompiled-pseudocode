/*
 * XREFs of ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18018C974
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18018A310 (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x18018CADC (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x18018C880 (-QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(XamlLauncherState *this, unsigned __int64 *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  int CpuCyclesUsedByWindow; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 10);
  v8 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v3 + 280LL))(v3, &v8);
  if ( (int)result >= 0 )
  {
    CpuCyclesUsedByWindow = QueryCpuCyclesUsedByWindow(v8, a2);
    v6 = CpuCyclesUsedByWindow;
    if ( CpuCyclesUsedByWindow >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x932,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)CpuCyclesUsedByWindow);
      return v6;
    }
  }
  return result;
}
