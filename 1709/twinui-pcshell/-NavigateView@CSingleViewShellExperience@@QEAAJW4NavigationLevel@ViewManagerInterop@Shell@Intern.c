/*
 * XREFs of ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801D0E74
 * Callers:
 *     ?FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ @ 0x1800961A0 (-FocusHotkeyInvoked@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180096368 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180096878 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ @ 0x1800B5180 (-FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800BD570 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0C88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1801D8FC4 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 */

__int64 __fastcall CSingleViewShellExperience::NavigateView(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 24);
  if ( !v3 )
    return 0LL;
  v4 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(a1 + 72, v3, v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x1FE,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
