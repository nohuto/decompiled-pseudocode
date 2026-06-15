/*
 * XREFs of _CAudioStream::Initialize_::_1_::dtor$0 @ 0x18005A7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(a2 + 72);
}
