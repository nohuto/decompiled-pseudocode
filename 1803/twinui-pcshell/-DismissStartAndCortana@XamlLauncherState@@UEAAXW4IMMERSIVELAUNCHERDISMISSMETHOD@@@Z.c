/*
 * XREFs of ?DismissStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180078AA0
 * Callers:
 *     ?Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1800782B0 (-Dismiss@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ?BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z @ 0x18001F350 (-BlockDismiss@TabletModePositioner@@UEAAJPEAH@Z.c)
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078930 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1800789B0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x180090200 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall XamlLauncherState::DismissStartAndCortana(__int64 a1, unsigned int a2)
{
  TabletModePositioner *v4; // rcx
  __int64 (__fastcall *v5)(TabletModePositioner *, int *); // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  int active; // eax
  int v10; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v13; // [rsp+30h] [rbp+8h] BYREF

  if ( XamlLauncherState::IsStartVisible((XamlLauncherState *)a1) )
  {
    v4 = *(TabletModePositioner **)(a1 + 80);
    if ( v4
      && ((v5 = *(__int64 (__fastcall **)(TabletModePositioner *, int *))(*(_QWORD *)v4 + 24LL),
           v5 != TabletModePositioner::BlockDismiss)
        ? (v6 = v5(v4, &v13))
        : (v6 = TabletModePositioner::BlockDismiss(v4, &v13)),
          v6 < 0 || v13) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 128LL))(*(_QWORD *)(a1 + 56));
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x29B,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v10,
          v11);
    }
    else
    {
      v7 = *(_QWORD *)(a1 + 72);
      v8 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL);
      if ( v8 == CRealmActivationHistory::SetActiveApp )
        active = CRealmActivationHistory::SetActiveApp(v7, 3LL);
      else
        active = v8(v7, 3LL);
      if ( active < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x295,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)active,
          v11);
      XamlLauncherState::HideStartAndCortana(a1, a2);
    }
  }
}
