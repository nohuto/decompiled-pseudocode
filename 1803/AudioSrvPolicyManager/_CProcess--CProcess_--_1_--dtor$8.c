/*
 * XREFs of _CProcess::CProcess_::_1_::dtor$8 @ 0x180036E7D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::CProcess_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>((void **)(*(_QWORD *)(a2 + 64) + 240LL));
}
