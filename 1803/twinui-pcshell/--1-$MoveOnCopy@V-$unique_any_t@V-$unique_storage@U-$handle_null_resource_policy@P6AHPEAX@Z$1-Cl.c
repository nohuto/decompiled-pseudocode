/*
 * XREFs of ??1?$MoveOnCopy@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@Internal@Windows@@QEAA@XZ @ 0x1800F8058
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001A310 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x1800B196C (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$5.c)
 *     _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x1800B58DF (_CStartExperienceManager--OnEventQueued_--_1_--dtor$5.c)
 *     _CApplicationManager::UncloakWindow_::_1_::dtor$0 @ 0x18010E53A (_CApplicationManager--UncloakWindow_--_1_--dtor$0.c)
 *     _CRotationManagerSync::_CheckForInitialSuppression_::_1_::dtor$1 @ 0x18011BA42 (_CRotationManagerSync--_CheckForInitialSuppression_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$4 @ 0x18019143F (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$4.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$0 @ 0x18019673C (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$0.c)
 *     _IsShellInfraHostRunning_::_1_::dtor$0 @ 0x1801DD1E4 (_IsShellInfraHostRunning_--_1_--dtor$0.c)
 *     __lambda_5eeb3274d8dd6409222f94091fb661d1_::operator()_::_1_::dtor$2 @ 0x1801E311B (__lambda_5eeb3274d8dd6409222f94091fb661d1_--operator()_--_1_--dtor$2.c)
 *     __lambda_4f3507863b21d28a47ffae36e7c55767_::operator()_::_1_::dtor$2 @ 0x1801EE355 (__lambda_4f3507863b21d28a47ffae36e7c55767_--operator()_--_1_--dtor$2.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1802FE5A8 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1802FE680 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x1802FE710 (-CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall Windows::Internal::MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::~MoveOnCopy<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
