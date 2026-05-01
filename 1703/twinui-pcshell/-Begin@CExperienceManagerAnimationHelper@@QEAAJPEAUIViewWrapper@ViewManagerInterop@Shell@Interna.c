/*
 * XREFs of ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4DWMTRANSITION_TARGET@@@Z @ 0x18018C040
 * Callers:
 *     ?OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800949C0 (-OnViewCloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180094AE0 (-OnViewUncloaking@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C3E68 (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C4BF8 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginWindowAnimation@CExperienceManagerAnimationHelper@@AEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x18018C1D8 (-BeginWindowAnimation@CExperienceManagerAnimationHelper@@AEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18018C300 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::Begin(__int64 a1, ExperienceManagerUtils *a2, unsigned int a3)
{
  HWND v5; // rax
  int v6; // eax
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = ExperienceManagerUtils::WindowFromViewWrapper(a2, a2);
  v6 = CExperienceManagerAnimationHelper::BeginWindowAnimation(a1, v5, a3, 0LL, 0LL, 0LL, 0LL, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x6E,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
      (const char *)(unsigned int)v6);
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
      (const char *)(unsigned int)v7);
  return (unsigned int)v7;
}
