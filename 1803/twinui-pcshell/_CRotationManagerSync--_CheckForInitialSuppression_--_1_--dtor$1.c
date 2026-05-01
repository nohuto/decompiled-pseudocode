/*
 * XREFs of _CRotationManagerSync::_CheckForInitialSuppression_::_1_::dtor$1 @ 0x18011BA42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CRotationManagerSync::_CheckForInitialSuppression_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Windows::Internal::MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((void **)(a2 + 40));
}
