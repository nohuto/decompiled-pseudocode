/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A1724
 * Callers:
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::catch$56 @ 0x180059D28 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--catch$56.c)
 *     _CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch$53 @ 0x18005BE67 (_CProcessSubmixManager--OnNewProcessSubmix_--_1_--catch$53.c)
 *     AudioServerGetEndpointVpoContext$catch$45 @ 0x1800A2B35 (AudioServerGetEndpointVpoContext$catch$45.c)
 *     AudioServerGetStreamVpoContext$catch$128 @ 0x1800A37CD (AudioServerGetStreamVpoContext$catch$128.c)
 *     _CBaseStreamGroupProxy::EnumerateProcessSubmixes_::_1_::catch$15 @ 0x1800A5C30 (_CBaseStreamGroupProxy--EnumerateProcessSubmixes_--_1_--catch$15.c)
 *     _CDeviceGraphObjectsStore::GetStreamGroups_::_1_::catch$16 @ 0x1800A8C7F (_CDeviceGraphObjectsStore--GetStreamGroups_--_1_--catch$16.c)
 *     _CDeviceGraphStore::GetStreamGroups_::_1_::catch$104 @ 0x1800A8E8A (_CDeviceGraphStore--GetStreamGroups_--_1_--catch$104.c)
 *     _CDeviceGraphStore::GetSubmixesForApplication_::_1_::catch$399 @ 0x1800A9532 (_CDeviceGraphStore--GetSubmixesForApplication_--_1_--catch$399.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$181 @ 0x1800AF56A (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$181.c)
 *     asm_GetApplicationSubmixFromId$catch$18 @ 0x1800AFFA9 (asm_GetApplicationSubmixFromId$catch$18.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800A13E4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException();
}
