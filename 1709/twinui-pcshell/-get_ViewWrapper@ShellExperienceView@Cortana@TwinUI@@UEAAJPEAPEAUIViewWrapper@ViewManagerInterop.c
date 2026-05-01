/*
 * XREFs of ?get_ViewWrapper@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800CEBC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_ViewWrapper(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 9);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((_QWORD *)this + 9);
  return 0LL;
}
