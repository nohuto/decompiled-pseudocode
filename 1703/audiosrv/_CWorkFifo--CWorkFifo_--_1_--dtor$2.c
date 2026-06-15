/*
 * XREFs of _CWorkFifo::CWorkFifo_::_1_::dtor$2 @ 0x18005BACA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWorkFifo::CWorkFifo_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(*(_QWORD *)(a2 + 64) + 224LL);
}
