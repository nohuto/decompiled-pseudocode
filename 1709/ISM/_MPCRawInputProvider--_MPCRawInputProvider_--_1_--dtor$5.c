/*
 * XREFs of _MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor$5 @ 0x1800CF903
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>((void **)(*(_QWORD *)(a2 + 80) + 2672LL));
}
