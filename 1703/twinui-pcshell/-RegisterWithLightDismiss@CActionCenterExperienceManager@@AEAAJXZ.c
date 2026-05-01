/*
 * XREFs of ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180093630
 * Callers:
 *     ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x18009335C (-TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 *     ?OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094E00 (-OnViewShown@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180033754 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018D9A4 (-InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAU.c)
 */

__int64 __fastcall CActionCenterExperienceManager::RegisterWithLightDismiss(CActionCenterExperienceManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  SHRegGetBOOL(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
    L"DisableLightDismiss",
    &v6);
  if ( v6 )
    return 0LL;
  v2 = SingleViewLightDismissHelper::InternalRegisterWithLightDismiss(
         (char *)this + 312,
         2050LL,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
         *((_QWORD *)this + 17));
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x35,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\lightdismisshelper.cpp",
    (const char *)(unsigned int)v2);
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x439,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v3);
  return v3;
}
