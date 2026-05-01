/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$0 @ 0x1801EC6CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Windows::Internal::MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>((void **)(a2 + 120));
}
