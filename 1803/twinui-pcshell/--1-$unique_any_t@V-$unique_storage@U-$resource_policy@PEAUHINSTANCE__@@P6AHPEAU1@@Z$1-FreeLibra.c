/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800FA190
 * Callers:
 *     _CVirtualTouchpadExperienceManager::PositionCursorForInteraction_::_1_::dtor$0 @ 0x1801823DF (_CVirtualTouchpadExperienceManager--PositionCursorForInteraction_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::UpdateFramePosition_::_1_::dtor$0 @ 0x180183914 (_CVirtualTouchpadExperienceManager--UpdateFramePosition_--_1_--dtor$0.c)
 *     _CVirtualTouchpadExperienceManager::get_AreExperienceViewAndCursorOnTheSameMonitor_::_1_::dtor$0 @ 0x180183CE4 (_CVirtualTouchpadExperienceManager--get_AreExperienceViewAndCursorOnTheSameMonitor_--_1_--dtor$0.c)
 *     __anonymous_namespace_::GetFriendlyNameForTaskbarSpecialCases_::_1_::dtor$0 @ 0x180265A04 (__anonymous_namespace_--GetFriendlyNameForTaskbarSpecialCases_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,0,std::nullptr_t>>>(
        HMODULE *a1)
{
  HMODULE v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return FreeLibrary(v1);
  return result;
}
