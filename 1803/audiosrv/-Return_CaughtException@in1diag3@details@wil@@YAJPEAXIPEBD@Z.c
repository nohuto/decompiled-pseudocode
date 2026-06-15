/*
 * XREFs of ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800A6AEC
 * Callers:
 *     _CVolumeProvider::GetDeviceVolumeStrip_::_1_::catch$27 @ 0x180066CF8 (_CVolumeProvider--GetDeviceVolumeStrip_--_1_--catch$27.c)
 *     _CAudioSession::ForEachOwningProcess_::_1_::catch$83 @ 0x180068EED (_CAudioSession--ForEachOwningProcess_--_1_--catch$83.c)
 *     _CAudioSession::GetOwningProcesses_::_1_::catch$9 @ 0x180068F2C (_CAudioSession--GetOwningProcesses_--_1_--catch$9.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::catch$119 @ 0x180069044 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--catch$119.c)
 *     _CProcessSubmixProxy::AddStream_::_1_::catch$116 @ 0x180069218 (_CProcessSubmixProxy--AddStream_--_1_--catch$116.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::catch$201 @ 0x1800693C1 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--catch$201.c)
 *     _CProcessSubmixManager::OnNewProcessSubmix_::_1_::catch$37 @ 0x1800695E9 (_CProcessSubmixManager--OnNewProcessSubmix_--_1_--catch$37.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::catch$23 @ 0x18006A7DF (_CAudioSessionManager--CreateAudioSession_--_1_--catch$23.c)
 *     _CAudioSession::FinishConstruction_::_1_::catch$5 @ 0x18006A913 (_CAudioSession--FinishConstruction_--_1_--catch$5.c)
 *     _CVolumeProvider::CreateDeviceVolumeStrip_::_1_::catch$2 @ 0x18006B247 (_CVolumeProvider--CreateDeviceVolumeStrip_--_1_--catch$2.c)
 *     _CAudioSession::RegisterOwnerProcess_::_1_::catch$5 @ 0x1800AC852 (_CAudioSession--RegisterOwnerProcess_--_1_--catch$5.c)
 *     _CAudioSessionManager::RegisterDisconnectNotificationClient_::_1_::catch$50 @ 0x1800B30C8 (_CAudioSessionManager--RegisterDisconnectNotificationClient_--_1_--catch$50.c)
 *     AudioServerGetEndpointVpoContext$catch$53 @ 0x1800C4505 (AudioServerGetEndpointVpoContext$catch$53.c)
 *     AudioServerGetStreamVpoContext$catch$177 @ 0x1800C537A (AudioServerGetStreamVpoContext$catch$177.c)
 *     _CBaseStreamGroupProxy::AddStream_::_1_::catch$2 @ 0x1800C84EC (_CBaseStreamGroupProxy--AddStream_--_1_--catch$2.c)
 *     _CBaseStreamGroupProxy::EnumerateProcessSubmixes_::_1_::catch$19 @ 0x1800C948B (_CBaseStreamGroupProxy--EnumerateProcessSubmixes_--_1_--catch$19.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::catch$20 @ 0x1800CCB6D (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--catch$20.c)
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::catch$107 @ 0x1800CCD6B (_CDeviceGraphStore--GetAllStreamGroups_--_1_--catch$107.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::catch$21 @ 0x1800CCF51 (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--catch$21.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::catch$107 @ 0x1800CD15B (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--catch$107.c)
 *     _CDeviceGraphObjectsStore::GetSaDevices_::_1_::catch$17 @ 0x1800CD253 (_CDeviceGraphObjectsStore--GetSaDevices_--_1_--catch$17.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::catch$417 @ 0x1800CD91A (_CDeviceGraphStore--GetSubmixHelper_--_1_--catch$417.c)
 *     _CDeviceGraphStore::GetSubmixesForApplication_::_1_::catch$22 @ 0x1800CDA2E (_CDeviceGraphStore--GetSubmixesForApplication_--_1_--catch$22.c)
 *     _CDeviceGraphStore::GetSubmixesForPID_::_1_::catch$22 @ 0x1800CDB3D (_CDeviceGraphStore--GetSubmixesForPID_--_1_--catch$22.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0 @ 0x1800D6855 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::catch$0_0 @ 0x1800D68C1 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--catch$0_0.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::catch$213 @ 0x1800D6D41 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--catch$213.c)
 *     asm_GetApplicationSubmixFromId$catch$25 @ 0x1800D7CE8 (asm_GetApplicationSubmixFromId$catch$25.c)
 *     asm_GetApplicationSubmixes$catch$127 @ 0x1800D7F2B (asm_GetApplicationSubmixes$catch$127.c)
 * Callees:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800A6994 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_CaughtException(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4)
{
  return wil::details::ReportFailure_CaughtException();
}
