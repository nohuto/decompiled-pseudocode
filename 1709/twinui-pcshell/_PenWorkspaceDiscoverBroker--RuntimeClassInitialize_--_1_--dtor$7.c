/*
 * XREFs of _PenWorkspaceDiscoverBroker::RuntimeClassInitialize_::_1_::dtor$7 @ 0x1801EC257
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PenWorkspaceDiscoverBroker::RuntimeClassInitialize_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return Windows::Internal::MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((void **)(*(_QWORD *)(a2 + 168) + 144LL));
}
