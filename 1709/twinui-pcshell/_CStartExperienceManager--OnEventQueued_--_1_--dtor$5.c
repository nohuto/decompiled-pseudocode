/*
 * XREFs of _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x1801EB53D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CStartExperienceManager::OnEventQueued_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return Windows::Internal::MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((void **)(a2 + 176));
}
