/*
 * XREFs of ??1?$MoveOnCopy@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@Internal@Windows@@QEAA@XZ @ 0x18000A8B8
 * Callers:
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1801C30C4 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1801C3158 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     _CApplicationManager::UncloakWindow_::_1_::dtor$0 @ 0x1801E65A4 (_CApplicationManager--UncloakWindow_--_1_--dtor$0.c)
 *     _CRotationManagerSync::_CheckForInitialSuppression_::_1_::dtor$1 @ 0x1801E7E8B (_CRotationManagerSync--_CheckForInitialSuppression_--_1_--dtor$1.c)
 *     _CStartExperienceManager::OnEventQueued_::_1_::dtor$5 @ 0x1801EB53D (_CStartExperienceManager--OnEventQueued_--_1_--dtor$5.c)
 *     _PenWorkspaceDiscoverBroker::RuntimeClassInitialize_::_1_::dtor$7 @ 0x1801EC257 (_PenWorkspaceDiscoverBroker--RuntimeClassInitialize_--_1_--dtor$7.c)
 *     _PenWorkspace::Discover::RecentAppsCache::TrackProcess_::_1_::dtor$5 @ 0x1801EC668 (_PenWorkspace--Discover--RecentAppsCache--TrackProcess_--_1_--dtor$5.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$0 @ 0x1801EC6CC (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$0.c)
 *     _IsShellInfraHostRunning_::_1_::dtor$0 @ 0x1801EEE3A (_IsShellInfraHostRunning_--_1_--dtor$0.c)
 *     __lambda_e749f471b43b5c52416cbe595e41d9dc_::operator()_::_1_::dtor$2 @ 0x1801EF358 (__lambda_e749f471b43b5c52416cbe595e41d9dc_--operator()_--_1_--dtor$2.c)
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
