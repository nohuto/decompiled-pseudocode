/*
 * XREFs of _CSubmixImpl::_CSubmixImpl_::_1_::dtor$0 @ 0x140020CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::_CSubmixImpl_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>(*(_QWORD *)(a2 + 112) + 8LL);
}
