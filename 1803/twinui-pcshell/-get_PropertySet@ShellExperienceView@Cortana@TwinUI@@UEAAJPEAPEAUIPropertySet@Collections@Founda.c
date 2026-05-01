/*
 * XREFs of ?get_PropertySet@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180068280
 * Callers:
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180064B10 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_PropertySet(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  struct Windows::Foundation::Collections::IPropertySet *v4; // rcx

  v4 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 10);
  }
  *a2 = v4;
  return 0LL;
}
