/*
 * XREFs of ?get_ViewWrapper@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180068230
 * Callers:
 *     ?GetViewWrapper@CortanaDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180061AA8 (-GetViewWrapper@CortanaDesktopExperienceView@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerInterop@S.c)
 *     ?_GetViewWrapper@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180067378 (-_GetViewWrapper@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@UIViewWrapper@ViewManagerIntero.c)
 *     ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x180067ED0 (-GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_ViewWrapper(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rcx

  v4 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((_QWORD *)this + 9);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((_QWORD *)this + 9);
  }
  *a2 = v4;
  return 0LL;
}
