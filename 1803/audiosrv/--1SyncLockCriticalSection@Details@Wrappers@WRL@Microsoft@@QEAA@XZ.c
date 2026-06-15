/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18006010C
 * Callers:
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180008FB0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ?AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001CB50 (-AddStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001D6B0 (-ConnectToSaDevice@CSharedStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@P.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18001EDF0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18001F1A0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?CodecStatusChanged@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z @ 0x1800267D4 (-CodecStatusChanged@AtmosCheck@@AEAA_NPEAUDolbyLicenseResult@@@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180034330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     _CVolumeProvider::GetDeviceVolumeStrip_::_1_::dtor$0 @ 0x180066CE0 (_CVolumeProvider--GetDeviceVolumeStrip_--_1_--dtor$0.c)
 *     _CAudioSessionManager::Disconnect_::_1_::dtor$3 @ 0x18006724E (_CAudioSessionManager--Disconnect_--_1_--dtor$3.c)
 *     _UseSupportedConnectorMode_::_1_::dtor$2 @ 0x1800677A0 (_UseSupportedConnectorMode_--_1_--dtor$2.c)
 *     _CSpatialAudioTechnologies::CreateTopologyList_::_1_::dtor$0 @ 0x180067EC1 (_CSpatialAudioTechnologies--CreateTopologyList_--_1_--dtor$0.c)
 *     _CSpatialAudioTech::GetAtmosCheck_::_1_::dtor$0 @ 0x180067F70 (_CSpatialAudioTech--GetAtmosCheck_--_1_--dtor$0.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$2 @ 0x18006853F (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$2.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$1 @ 0x180068563 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$1.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$3 @ 0x18006856F (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$3.c)
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::dtor$1 @ 0x180068EA4 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--dtor$1.c)
 *     _CAudioSession::GetOwningProcesses_::_1_::dtor$0 @ 0x180068F20 (_CAudioSession--GetOwningProcesses_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$0 @ 0x180069020 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::AddSaDevice_::_1_::dtor$0 @ 0x18006911C (_CDeviceGraphObjectsStore--AddSaDevice_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::AddStreamGroup_::_1_::dtor$0 @ 0x180069150 (_CDeviceGraphObjectsStore--AddStreamGroup_--_1_--dtor$0.c)
 *     _CProcessSubmixProxy::AddStream_::_1_::dtor$0 @ 0x180069200 (_CProcessSubmixProxy--AddStream_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::UpdateAuxiliaryStreamState_::_1_::dtor$0 @ 0x180069268 (_CSharedStreamGroupProxy--UpdateAuxiliaryStreamState_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$0 @ 0x1800692D0 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$0.c)
 *     _CProcessSubmixManager::OnNewProcessSubmix_::_1_::dtor$0 @ 0x1800695DD (_CProcessSubmixManager--OnNewProcessSubmix_--_1_--dtor$0.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$13 @ 0x18006A7D3 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$13.c)
 *     _CEndpointCharacteristics::GetMixFormat_::_1_::dtor$0 @ 0x18006AC80 (_CEndpointCharacteristics--GetMixFormat_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetStreamGroupFormat_::_1_::dtor$0 @ 0x18006AC90 (_CEndpointCharacteristics--GetStreamGroupFormat_--_1_--dtor$0.c)
 *     _CVolumeProvider::CreateDeviceVolumeStrip_::_1_::dtor$1 @ 0x18006B23B (_CVolumeProvider--CreateDeviceVolumeStrip_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$1 @ 0x180096BA9 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$1.c)
 *     _CAudioSession::RegisterOwnerProcess_::_1_::dtor$0 @ 0x1800AC82E (_CAudioSession--RegisterOwnerProcess_--_1_--dtor$0.c)
 *     _CAudioSessionManager::RegisterDisconnectNotificationClient_::_1_::dtor$0 @ 0x1800B30B0 (_CAudioSessionManager--RegisterDisconnectNotificationClient_--_1_--dtor$0.c)
 *     _CPolicyConfig::RefreshConnectorFormats_::_1_::dtor$3 @ 0x1800BCD58 (_CPolicyConfig--RefreshConnectorFormats_--_1_--dtor$3.c)
 *     _CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor$3 @ 0x1800BDFE9 (_CPolicyConfig--SetDeviceFormatInternal_--_1_--dtor$3.c)
 *     _CPolicyConfig::ValidateSpatialAudioSettingsCallback_::_1_::dtor$0 @ 0x1800BF5E9 (_CPolicyConfig--ValidateSpatialAudioSettingsCallback_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::AddStream_::_1_::dtor$0 @ 0x1800C84D4 (_CBaseStreamGroupProxy--AddStream_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::EnumerateProcessSubmixes_::_1_::dtor$0 @ 0x1800C947F (_CBaseStreamGroupProxy--EnumerateProcessSubmixes_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::RemoveStream_::_1_::dtor$1 @ 0x1800CABDF (_CBaseStreamGroupProxy--RemoveStream_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::dtor$0 @ 0x1800CCB3D (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::dtor$1 @ 0x1800CCD5F (_CDeviceGraphStore--GetAllStreamGroups_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::dtor$0 @ 0x1800CCF15 (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::dtor$1 @ 0x1800CD14F (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetSaDevices_::_1_::dtor$0 @ 0x1800CD247 (_CDeviceGraphObjectsStore--GetSaDevices_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$0 @ 0x1800CD8DE (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$0.c)
 *     __lambda_99a80b67184a801990f45f5b271d3c4a_::operator()_::_1_::dtor$3 @ 0x1800CFA2A (__lambda_99a80b67184a801990f45f5b271d3c4a_--operator()_--_1_--dtor$3.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$9 @ 0x1800D142E (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$9.c)
 *     _CAudioResourceManager::FreeResourcesAndLockForStreamGroupConnectionDisconnection_::_1_::dtor$0 @ 0x1800D17C6 (_CAudioResourceManager--FreeResourcesAndLockForStreamGroupConnectionDisconnection_--_1_--dtor$0.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$2 @ 0x1800D2477 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$2.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$3 @ 0x1800D3513 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$3.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$0 @ 0x1800D6D11 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$0.c)
 *     ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800D6D80 (-GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixP.c)
 *     asm_GetApplicationSubmixes$dtor$1 @ 0x1800D7F13 (asm_GetApplicationSubmixes$dtor$1.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange_::_1_::dtor$0 @ 0x1800F31BB (_Sarm--CSpatialAudioResourceManager--HandleAppVolumePolicyChange_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects_::_1_::dtor$0 @ 0x1800F3255 (_Sarm--CSpatialAudioResourceManager--HandleRedistributeObjects_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects_::_1_::dtor$0 @ 0x1800F3366 (_Sarm--CSpatialAudioResourceManager--HandleRequestForDynamicObjects_--_1_--dtor$0.c)
 *     _std::_Func_impl_no_alloc__lambda_afaf78576840e78fa8c7f1d1d7e112d3__void_::_Do_call_::_1_::dtor$3 @ 0x1800F520E (_std--_Func_impl_no_alloc__lambda_afaf78576840e78fa8c7f1d1d7e112d3__void_--_Do_call_--_1_--dtor$.c)
 *     std::_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_::_Do_call @ 0x1800F5230 (std--_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_--_Do_call.c)
 *     _CExclusiveModeListener::OnHmdAdded_::_1_::dtor$0 @ 0x1800F8BD7 (_CExclusiveModeListener--OnHmdAdded_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHmdRemoved_::_1_::dtor$0 @ 0x1800F8EEB (_CExclusiveModeListener--OnHmdRemoved_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$0 @ 0x1800F90DA (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$0.c)
 *     _CSpatialProperties::ClearSpatialAudioSettings_::_1_::dtor$0 @ 0x1800FDD16 (_CSpatialProperties--ClearSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$5 @ 0x1800FEB25 (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$5.c)
 *     _SpatialAudioDeviceStateWriter::ResetState_::_1_::dtor$0 @ 0x1801024F0 (_SpatialAudioDeviceStateWriter--ResetState_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetActiveSpatialAudioEncoderId_::_1_::dtor$0 @ 0x180102587 (_SpatialAudioDeviceStateWriter--SetActiveSpatialAudioEncoderId_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialRendererSelectionMode_::_1_::dtor$0 @ 0x180102627 (_SpatialAudioDeviceStateWriter--SetSpatialRendererSelectionMode_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialVssSelectionMode_::_1_::dtor$0 @ 0x1801026C0 (_SpatialAudioDeviceStateWriter--SetSpatialVssSelectionMode_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
