/*
 * XREFs of ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180061964
 * Callers:
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x180061BE0 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 * Callees:
 *     ?NotifyView@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180068470 (-NotifyView@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::NotifyView(
        CortanaDesktopExperienceView *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  TwinUI::Cortana::ShellExperienceView *v3; // rcx
  int (*v4)(TwinUI::Cortana::ShellExperienceView *__hidden, HSTRING, struct Windows::Foundation::Collections::IPropertySet *); // rax
  int v5; // eax
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (TwinUI::Cortana::ShellExperienceView *)*((_QWORD *)this + 18);
  if ( !v3 )
    return 0LL;
  v4 = *(int (**)(TwinUI::Cortana::ShellExperienceView *__hidden, HSTRING, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v3 + 120LL);
  v5 = v4 == TwinUI::Cortana::ShellExperienceView::NotifyView
     ? TwinUI::Cortana::ShellExperienceView::NotifyView(v3, a2, a3)
     : ((__int64 (__fastcall *)(TwinUI::Cortana::ShellExperienceView *, HSTRING, struct Windows::Foundation::Collections::IPropertySet *))v4)(
         v3,
         a2,
         a3);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB44,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v5,
    v8);
  return v6;
}
