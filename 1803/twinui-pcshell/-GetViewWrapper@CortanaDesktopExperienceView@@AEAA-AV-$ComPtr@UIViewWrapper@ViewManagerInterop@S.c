/*
 * XREFs of ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180061AA8
 * Callers:
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x180061B24 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1800634C4 (-SetZBand@CortanaDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064984 (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180065C7C (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180186948 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get_ViewWrapper@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180068230 (-get_ViewWrapper@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CortanaDesktopExperienceView::GetViewWrapper(__int64 a1, __int64 *a2)
{
  TwinUI::Cortana::ShellExperienceView *v3; // rdi
  __int64 (__fastcall *v4)(TwinUI::Cortana::ShellExperienceView *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rax
  int ViewWrapper; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(TwinUI::Cortana::ShellExperienceView **)(a1 + 144);
  if ( v3 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a2);
    v4 = *(__int64 (__fastcall **)(TwinUI::Cortana::ShellExperienceView *__hidden, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v3 + 56LL);
    if ( v4 == TwinUI::Cortana::ShellExperienceView::get_ViewWrapper )
      ViewWrapper = TwinUI::Cortana::ShellExperienceView::get_ViewWrapper(
                      v3,
                      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)a2);
    else
      ViewWrapper = v4(v3, (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)a2);
    if ( ViewWrapper < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB23,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)ViewWrapper,
        1);
  }
  return a2;
}
