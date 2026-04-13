/*
 * XREFs of _CreativeFramework::Actions::PinnedWebsiteManager::GetFaviconCache_::_1_::dtor$0 @ 0x1800C894E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreativeFramework::Actions::PinnedWebsiteManager::GetFaviconCache_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,int (*)(void *),&int CloseState(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>((__int64 *)(a2 + 72));
}
