/*
 * XREFs of ?TakeKeyboardFocus@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180065E70
 * Callers:
 *     ?TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180067A20 (-TakeKeyboardFocus@CortanaSharedExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180068440 (-BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::TakeKeyboardFocus(CortanaDesktopExperienceView *this)
{
  TwinUI::Cortana::ShellExperienceView *v1; // rcx
  __int64 (*v2)(void); // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 15);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 112LL);
  if ( (char *)v2 == (char *)TwinUI::Cortana::ShellExperienceView::BringToForeground )
    v3 = TwinUI::Cortana::ShellExperienceView::BringToForeground(v1);
  else
    v3 = v2();
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x30D,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
