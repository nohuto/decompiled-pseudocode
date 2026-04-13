/*
 * XREFs of _ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys_::_1_::dtor$2 @ 0x1800B60EE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>((void **)(a2 + 80));
}
