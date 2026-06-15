/*
 * XREFs of _CProcess::CProcess_::_1_::dtor$18 @ 0x180036F3B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CProcess::CProcess_::_1_::dtor_18(__int64 a1, __int64 a2)
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((void **)(*(_QWORD *)(a2 + 64) + 616LL));
}
