/*
 * XREFs of ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180078F1C
 * Callers:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180078E68 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1802313C0 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x180067ED0 (-GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x180091928 (-QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedByCortana(XamlLauncherState *this, unsigned __int64 *a2)
{
  CortanaSharedExperienceManager *v3; // rcx
  __int64 (__fastcall *v4)(CortanaSharedExperienceManager *, HWND *); // rax
  __int64 result; // rax
  int CpuCyclesUsedByWindow; // eax
  unsigned int v7; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  v3 = (CortanaSharedExperienceManager *)*((_QWORD *)this + 11);
  v4 = *(__int64 (__fastcall **)(CortanaSharedExperienceManager *, HWND *))(*(_QWORD *)v3 + 392LL);
  if ( v4 == CortanaSharedExperienceManager::GetWindowHandle )
    result = CortanaSharedExperienceManager::GetWindowHandle(v3, &v10);
  else
    result = v4(v3, &v10);
  if ( (int)result >= 0 )
  {
    CpuCyclesUsedByWindow = QueryCpuCyclesUsedByWindow(v10, a2);
    v7 = CpuCyclesUsedByWindow;
    if ( CpuCyclesUsedByWindow < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x93B,
        (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)CpuCyclesUsedByWindow,
        v8);
      return v7;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
