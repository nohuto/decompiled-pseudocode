/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18006F1C8
 * Callers:
 *     _CVolumeProvider::GetDeviceVolumeStrip_::_1_::catch$24 @ 0x180037C38 (_CVolumeProvider--GetDeviceVolumeStrip_--_1_--catch$24.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::catch$22 @ 0x180038012 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--catch$22.c)
 *     _CProcessSubmixProxy::AddStream_::_1_::catch$1 @ 0x1800385F2 (_CProcessSubmixProxy--AddStream_--_1_--catch$1.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::catch$25 @ 0x180038E65 (_CAudioSessionManager--CreateAudioSession_--_1_--catch$25.c)
 *     _CAudioSession::FinishConstruction_::_1_::catch$5 @ 0x180039179 (_CAudioSession--FinishConstruction_--_1_--catch$5.c)
 *     _CAudioSession::ForEachOwningProcess_::_1_::catch$88 @ 0x1800391BB (_CAudioSession--ForEachOwningProcess_--_1_--catch$88.c)
 *     _CAudioSession::GetOwningProcesses_::_1_::catch$15 @ 0x1800391FA (_CAudioSession--GetOwningProcesses_--_1_--catch$15.c)
 *     _CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch$35 @ 0x18003A1E1 (_CProcessSubmixManager--OnNewProcessSubmix_--_1_--catch$35.c)
 *     _CVolumeProvider::CreateDeviceVolumeStrip_::_1_::catch$2 @ 0x18006E8C6 (_CVolumeProvider--CreateDeviceVolumeStrip_--_1_--catch$2.c)
 *     _CAudioSession::RegisterOwnerProcess_::_1_::catch$4 @ 0x1800751FD (_CAudioSession--RegisterOwnerProcess_--_1_--catch$4.c)
 *     AudioServerGetEndpointVpoContext$catch$45 @ 0x18008F217 (AudioServerGetEndpointVpoContext$catch$45.c)
 *     AudioServerGetStreamVpoContext$catch$133 @ 0x18008FF60 (AudioServerGetStreamVpoContext$catch$133.c)
 *     _CBaseStreamGroupProxy::AddStream_::_1_::catch$1 @ 0x180092B02 (_CBaseStreamGroupProxy--AddStream_--_1_--catch$1.c)
 *     _CBaseStreamGroupProxy::EnumerateProcessSubmixes_::_1_::catch$17 @ 0x18009342D (_CBaseStreamGroupProxy--EnumerateProcessSubmixes_--_1_--catch$17.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::catch$18 @ 0x18009693D (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--catch$18.c)
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::catch$110 @ 0x180096B1F (_CDeviceGraphStore--GetAllStreamGroups_--_1_--catch$110.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::catch$19 @ 0x180096D4C (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--catch$19.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::catch$110 @ 0x180096F25 (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--catch$110.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::catch$404 @ 0x18009771E (_CDeviceGraphStore--GetSubmixHelper_--_1_--catch$404.c)
 *     _CDeviceGraphStore::GetSubmixesForApplication_::_1_::catch$36 @ 0x18009782E (_CDeviceGraphStore--GetSubmixesForApplication_--_1_--catch$36.c)
 *     _CDeviceGraphStore::GetSubmixesForPID_::_1_::catch$36 @ 0x18009793D (_CDeviceGraphStore--GetSubmixesForPID_--_1_--catch$36.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0 @ 0x18009F545 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0_0 @ 0x18009F5B1 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0_0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch$204 @ 0x18009FAA6 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--catch$204.c)
 *     asm_GetApplicationSubmixFromId$catch$18 @ 0x1800A0979 (asm_GetApplicationSubmixFromId$catch$18.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x18006EDDC (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException();
}
