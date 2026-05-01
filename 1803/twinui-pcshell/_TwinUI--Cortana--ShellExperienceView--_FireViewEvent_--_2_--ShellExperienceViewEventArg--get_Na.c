/*
 * XREFs of _TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_Name @ 0x180068EC0
 * Callers:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180065D90 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180067290 (-_OnViewEventHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Sh.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::get_Name(
        __int64 a1,
        HSTRING *a2)
{
  HRESULT v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WindowsDuplicateString(*(HSTRING *)(a1 + 32), a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v2,
      v5);
  return v3;
}
