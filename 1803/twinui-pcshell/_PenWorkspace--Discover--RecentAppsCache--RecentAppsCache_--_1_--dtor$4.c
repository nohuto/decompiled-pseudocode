/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x18019143F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Windows::Internal::MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((void **)(*(_QWORD *)(a2 + 80) + 144LL));
}
