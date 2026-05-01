/*
 * XREFs of _CVirtualTouchpadExperienceManager::get_AreExperienceViewAndCursorOnTheSameMonitor_::_1_::dtor$0 @ 0x18019C9CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __fastcall CVirtualTouchpadExperienceManager::get_AreExperienceViewAndCursorOnTheSameMonitor_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,0,std::nullptr_t>>>((HMODULE *)(a2 + 56));
}
