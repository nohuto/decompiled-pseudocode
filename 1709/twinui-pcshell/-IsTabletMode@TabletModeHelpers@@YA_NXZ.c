/*
 * XREFs of ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800A01E4
 * Callers:
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800D8870 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 *     ?Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW_FLAGS@@@Z @ 0x180158840 (-Show@XamlAllUpViewHost@@UEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveMonitor@@W4ALL_UP_VIEW.c)
 *     ?GetContextMenu@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitcherViewModel@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180170EAC (-GetContextMenu@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitch.c)
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18017FEA0 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

char __fastcall TabletModeHelpers::IsTabletMode(TabletModeHelpers *this)
{
  char v1; // bl
  NTSTATUS v2; // eax
  signed int v3; // eax
  unsigned __int64 v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v7 = 0;
  v2 = RtlQueryWnfStateData(&v8, WNF_TMCN_ISTABLETMODE, TabletModeHelpers::QueryTabletModeCallback, &v7, 0LL);
  v3 = RtlNtStatusToDosError(v2);
  v4 = (unsigned __int16)v3 | 0x80070000;
  if ( v3 <= 0 )
    v4 = (unsigned int)v3;
  if ( (v4 & 0x80000000) == 0LL )
    return v7 == 1;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30,
    (__int64)"internal\\onecoreuapshell\\private\\inc\\tabletmodehelpers.h",
    (const char *)v4);
  return v1;
}
