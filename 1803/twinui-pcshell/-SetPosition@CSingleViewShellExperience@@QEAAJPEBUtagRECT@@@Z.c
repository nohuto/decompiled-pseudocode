/*
 * XREFs of ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18006C054
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x180076B2C (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007B700 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x180158498 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CCortanaConversationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180159860 (-OnViewPropertiesChanging@CCortanaConversationExperienceManager@@MEAAJPEAVCSingleViewShellExperi.c)
 *     ?OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180160080 (-OnViewPropertiesChanging@ImeNotificationExperienceManager@@MEAAJPEAVCSingleViewShellExperience@.c)
 *     ?PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ @ 0x18016106C (-PositionApplicationOnPrimaryMonitor@CTaskContinuityActivitiesExperienceManager@@AEAAJXZ.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801653A0 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x180166908 (-ShowInHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z @ 0x18016DCE4 (-UpdateViewPositionAndEffects@CPeopleBarFlyoutExperienceManager@@AEAAJ_N@Z.c)
 *     ?PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ @ 0x18016F3C8 (-PositionJumpView@CPeopleBarJumpViewExperienceManager@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CPeopleTestExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18016FEB0 (-OnViewPropertiesChanging@CPeopleTestExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801712A8 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180176800 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18017F688 (-UpdateWindowPosition@CQuickConnectExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewPropertiesChanging@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180182080 (-OnViewPropertiesChanging@CVirtualTouchpadExperienceManager@@MEAAJPEAVCSingleViewShellExperience.c)
 * Callees:
 *     ?SetPosition@DesktopSingleViewShellExperiencePersonality@@UEAAJPEBUtagRECT@@@Z @ 0x18006DE80 (-SetPosition@DesktopSingleViewShellExperiencePersonality@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSingleViewShellExperience::SetPosition(CSingleViewShellExperience *this, const struct tagRECT *a2)
{
  DesktopSingleViewShellExperiencePersonality *v2; // rcx
  __int64 (__fastcall *v3)(DesktopSingleViewShellExperiencePersonality *__hidden, const struct tagRECT *); // rax
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (DesktopSingleViewShellExperiencePersonality *)*((_QWORD *)this + 10);
  v3 = *(__int64 (__fastcall **)(DesktopSingleViewShellExperiencePersonality *__hidden, const struct tagRECT *))(*(_QWORD *)v2 + 96LL);
  if ( v3 == DesktopSingleViewShellExperiencePersonality::SetPosition )
    v4 = DesktopSingleViewShellExperiencePersonality::SetPosition(v2, a2);
  else
    v4 = v3(v2, a2);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F5,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4,
      v7);
  return v5;
}
