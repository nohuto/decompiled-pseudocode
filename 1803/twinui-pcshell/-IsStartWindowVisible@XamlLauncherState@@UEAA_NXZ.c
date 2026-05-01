/*
 * XREFs of ?IsStartWindowVisible@XamlLauncherState@@UEAA_NXZ @ 0x1800788E0
 * Callers:
 *     ?ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x18007ACF0 (-ActiveZBandChangedForMonitor@ImmersiveMonitorHelper@@UEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANG.c)
 * Callees:
 *     ?IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z @ 0x180076A90 (-IsWindowFullyVisible@CStartExperienceManager@@UEAAJPEAE@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall XamlLauncherState::IsStartWindowVisible(XamlLauncherState *this)
{
  CStartExperienceManager *v1; // rcx
  __int64 (__fastcall *v2)(CStartExperienceManager *, bool *); // rax
  int IsWindowFullyVisible; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int8 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CStartExperienceManager *)*((_QWORD *)this + 7);
  v7 = 0;
  v2 = *(__int64 (__fastcall **)(CStartExperienceManager *, bool *))(*(_QWORD *)v1 + 136LL);
  if ( v2 == CStartExperienceManager::IsWindowFullyVisible )
    IsWindowFullyVisible = CStartExperienceManager::IsWindowFullyVisible(v1, (bool *)&v7);
  else
    IsWindowFullyVisible = v2(v1, (bool *)&v7);
  if ( IsWindowFullyVisible < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B6,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)IsWindowFullyVisible,
      v5);
  return v7 != 0;
}
