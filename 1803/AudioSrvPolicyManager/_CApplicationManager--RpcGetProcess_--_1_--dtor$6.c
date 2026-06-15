/*
 * XREFs of _CApplicationManager::RpcGetProcess_::_1_::dtor$6 @ 0x180037351
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HLOCAL __fastcall CApplicationManager::RpcGetProcess_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>>((void **)(a2 + 216));
}
