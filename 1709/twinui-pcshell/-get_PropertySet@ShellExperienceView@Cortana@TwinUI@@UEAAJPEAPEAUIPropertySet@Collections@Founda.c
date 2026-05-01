/*
 * XREFs of ?get_PropertySet@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800CEC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::get_PropertySet(
        TwinUI::Cortana::ShellExperienceView *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct Windows::Foundation::Collections::IPropertySet *)*((_QWORD *)this + 10);
  return 0LL;
}
