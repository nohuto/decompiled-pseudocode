/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180059EF0
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180004CD0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x1800091D0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000DC60 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000E1B0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     _CExclusiveModeListener::OnHoloshellStateChange_::_1_::dtor$0 @ 0x1800365A0 (_CExclusiveModeListener--OnHoloshellStateChange_--_1_--dtor$0.c)
 *     _CVolumeProvider::GetDeviceVolumeStrip_::_1_::dtor$0 @ 0x180037C20 (_CVolumeProvider--GetDeviceVolumeStrip_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$0 @ 0x180037FCA (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$1 @ 0x180038235 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::AddSaDevice_::_1_::dtor$0 @ 0x180038265 (_CDeviceGraphObjectsStore--AddSaDevice_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::AddStreamGroup_::_1_::dtor$0 @ 0x180038293 (_CDeviceGraphObjectsStore--AddStreamGroup_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$0 @ 0x1800385A0 (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$0.c)
 *     _CProcessSubmixProxy::AddStream_::_1_::dtor$0 @ 0x1800385E6 (_CProcessSubmixProxy--AddStream_--_1_--dtor$0.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$9 @ 0x180038E59 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$9.c)
 *     _CAudioSession::GetOwningProcesses_::_1_::dtor$0 @ 0x1800391EE (_CAudioSession--GetOwningProcesses_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetMixFormat_::_1_::dtor$0 @ 0x1800397F0 (_CEndpointCharacteristics--GetMixFormat_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetStreamGroupFormat_::_1_::dtor$0 @ 0x18003980C (_CEndpointCharacteristics--GetStreamGroupFormat_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::UpdateAuxiliaryStreamState_::_1_::dtor$0 @ 0x180039B47 (_CSharedStreamGroupProxy--UpdateAuxiliaryStreamState_--_1_--dtor$0.c)
 *     _CProcessSubmixManager::OnNewProcessSubmix_::_1_::dtor$0 @ 0x18003A1D5 (_CProcessSubmixManager--OnNewProcessSubmix_--_1_--dtor$0.c)
 *     _CVolumeProvider::CreateDeviceVolumeStrip_::_1_::dtor$1 @ 0x18006E8BA (_CVolumeProvider--CreateDeviceVolumeStrip_--_1_--dtor$1.c)
 *     _CAudioSession::RegisterOwnerProcess_::_1_::dtor$0 @ 0x1800751D9 (_CAudioSession--RegisterOwnerProcess_--_1_--dtor$0.c)
 *     _CPolicyConfig::ValidateSpatialAudioSettingsCallback_::_1_::dtor$0 @ 0x180089729 (_CPolicyConfig--ValidateSpatialAudioSettingsCallback_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::AddStream_::_1_::dtor$0 @ 0x180092AF6 (_CBaseStreamGroupProxy--AddStream_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::EnumerateProcessSubmixes_::_1_::dtor$0 @ 0x180093421 (_CBaseStreamGroupProxy--EnumerateProcessSubmixes_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::dtor$0 @ 0x18009690D (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetAllStreamGroups_::_1_::dtor$1 @ 0x180096B13 (_CDeviceGraphStore--GetAllStreamGroups_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::dtor$0 @ 0x180096D10 (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetConnectedStreamGroups_::_1_::dtor$1 @ 0x180096F19 (_CDeviceGraphStore--GetConnectedStreamGroups_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetSaDevices_::_1_::dtor$0 @ 0x180097013 (_CDeviceGraphObjectsStore--GetSaDevices_--_1_--dtor$0.c)
 *     _CDeviceGraphStore::GetSubmixHelper_::_1_::dtor$0 @ 0x1800976E2 (_CDeviceGraphStore--GetSubmixHelper_--_1_--dtor$0.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$9 @ 0x18009A697 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$9.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$2 @ 0x18009B44D (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$2.c)
 *     _CAudioResourceManager::ReevaluateSaDevicesForEndpoint_::_1_::dtor$0 @ 0x18009B59F (_CAudioResourceManager--ReevaluateSaDevicesForEndpoint_--_1_--dtor$0.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$3 @ 0x18009C6FB (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$3.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$0 @ 0x18009FA76 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$0.c)
 *     ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x18009FAE0 (-GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixP.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange_::_1_::dtor$0 @ 0x1800C098B (_Sarm--CSpatialAudioResourceManager--HandleAppVolumePolicyChange_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleRedistributeObjects_::_1_::dtor$0 @ 0x1800C0A25 (_Sarm--CSpatialAudioResourceManager--HandleRedistributeObjects_--_1_--dtor$0.c)
 *     _Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects_::_1_::dtor$0 @ 0x1800C0B36 (_Sarm--CSpatialAudioResourceManager--HandleRequestForDynamicObjects_--_1_--dtor$0.c)
 *     _std::_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std::allocator_int__void_::_Do_call_::_1_::dtor$5 @ 0x1800C2B2E (_std--_Func_impl__lambda_afaf78576840e78fa8c7f1d1d7e112d3__std--allocator_int__void_--_Do_call_-.c)
 *     std::_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std::allocator_int__void_::_Do_call @ 0x1800C2B40 (std--_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std--allocator_int__void_--_Do_call.c)
 *     _CExclusiveModeListener::OnHmdAdded_::_1_::dtor$0 @ 0x1800C6773 (_CExclusiveModeListener--OnHmdAdded_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::OnHmdRemoved_::_1_::dtor$0 @ 0x1800C6A8B (_CExclusiveModeListener--OnHmdRemoved_--_1_--dtor$0.c)
 *     _CSpatialProperties::ClearSpatialAudioSettings_::_1_::dtor$0 @ 0x1800C95CE (_CSpatialProperties--ClearSpatialAudioSettings_--_1_--dtor$0.c)
 *     _CSpatialProperties::ProcessPropertyChange_::_1_::dtor$5 @ 0x1800CB273 (_CSpatialProperties--ProcessPropertyChange_--_1_--dtor$5.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$1 @ 0x1800CB9B3 (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$1.c)
 *     _CSpatialProperties::SetSpatialAudioSettings_::_1_::dtor$3 @ 0x1800CB9BF (_CSpatialProperties--SetSpatialAudioSettings_--_1_--dtor$3.c)
 *     _CSpatialProperties::SetSpatialAudioSettingsInternal_::_1_::dtor$2 @ 0x1800CD2BB (_CSpatialProperties--SetSpatialAudioSettingsInternal_--_1_--dtor$2.c)
 *     _CSpatialAudioTechnologies::CreateTopologyList_::_1_::dtor$0 @ 0x1800CE3AB (_CSpatialAudioTechnologies--CreateTopologyList_--_1_--dtor$0.c)
 *     _CSpatialAudioTech::GetAtmosCheck_::_1_::dtor$0 @ 0x1800CE669 (_CSpatialAudioTech--GetAtmosCheck_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::ResetState_::_1_::dtor$0 @ 0x1800D3C30 (_SpatialAudioDeviceStateWriter--ResetState_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetActiveSpatialAudioEncoderId_::_1_::dtor$0 @ 0x1800D3CC7 (_SpatialAudioDeviceStateWriter--SetActiveSpatialAudioEncoderId_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialRendererSelectionMode_::_1_::dtor$0 @ 0x1800D3D67 (_SpatialAudioDeviceStateWriter--SetSpatialRendererSelectionMode_--_1_--dtor$0.c)
 *     _SpatialAudioDeviceStateWriter::SetSpatialVssSelectionMode_::_1_::dtor$0 @ 0x1800D3E00 (_SpatialAudioDeviceStateWriter--SetSpatialVssSelectionMode_--_1_--dtor$0.c)
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
