/*
 * XREFs of _CortanaDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor$0 @ 0x1801EBF96
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegion_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,0,std::nullptr_t>>>((void **)(a2 + 72));
}
