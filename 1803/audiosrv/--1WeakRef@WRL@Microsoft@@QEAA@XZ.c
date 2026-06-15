/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180097338
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x18001E380 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z @ 0x18002E010 (-RecalculateVolume@CAudioStream@@UEAAJ_N_J@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x180046D50 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005981C (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$9 @ 0x180068D24 (_CAudioResourceManager--DestroyStream_--_1_--dtor$9.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$5 @ 0x180068E3C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$5.c)
 *     __lambda_530575f8b419a08780554bb070101504_::operator()_::_1_::dtor$0 @ 0x180069180 (__lambda_530575f8b419a08780554bb070101504_--operator()_--_1_--dtor$0.c)
 *     _CSharedStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1800692C3 (_CSharedStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$2 @ 0x1800692E8 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$2.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$71 @ 0x180069318 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$71.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$5 @ 0x180069324 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$5.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$3 @ 0x18006957D (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$3.c)
 *     _CAudioResourceManager::CAudioResourceManager_::_1_::dtor$1 @ 0x180069A35 (_CAudioResourceManager--CAudioResourceManager_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____ptr64_&___ptr64_enum_APO_TYPE_&___ptr64__GUID_const_&___ptr64__::_1_::dtor$2 @ 0x180069F66 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObjec_ea_180069F66.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180096508 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$2 @ 0x180096BB5 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$2.c)
 *     ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x1800A05E0 (-GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x1800A08E0 (-GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z.c)
 *     ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x1800A0A40 (-ProviderFinalRelease@CMeterHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x1800A0A80 (-ProviderFinalRelease@CMeterSoftware@@UEAAXXZ.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800A0DC0 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ @ 0x1800A1140 (-NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x1800A1550 (-ProviderFinalRelease@CMuteHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x1800A15E0 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800A1920 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800A2770 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x1800A32E0 (-NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x1800A36F0 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800A37E0 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x1800A4AC0 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800AA0C0 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     _CAudioSessionManager::RegisterDisconnectNotificationClient_::_1_::dtor$1 @ 0x1800B30BC (_CAudioSessionManager--RegisterDisconnectNotificationClient_--_1_--dtor$1.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800B5518 (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     _CSharedStreamGroupProxy::OnEndpointAvailableForUse_::_1_::dtor$1 @ 0x1800CA3FF (_CSharedStreamGroupProxy--OnEndpointAvailableForUse_--_1_--dtor$1.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor$1 @ 0x1800CA6B7 (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::dtor$1 @ 0x1800CCB49 (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::dtor$1 @ 0x1800CCF21 (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--dtor$1.c)
 *     __lambda_99a80b67184a801990f45f5b271d3c4a_::operator()_::_1_::dtor$2 @ 0x1800CFA1E (__lambda_99a80b67184a801990f45f5b271d3c4a_--operator()_--_1_--dtor$2.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$8 @ 0x1800D1422 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$8.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$1 @ 0x1800D246B (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$1.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$2 @ 0x1800D3507 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$2.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800E1BA8 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800E5CB4 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice_____ptr64_&___ptr64_unsigned_int_&___ptr64__tagpropertykey_const_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x1800EE7BA (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMM_ea_1800EE7BA.c)
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::dtor$0 @ 0x1800F23CE (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Add_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1800F966E (_CExclusiveModeListener--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CExclusiveModeListener::RuntimeClassInitialize_::_1_::dtor$2 @ 0x1800F967A (_CExclusiveModeListener--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1800FACEC (-OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ.c)
 *     ?ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ @ 0x1800FB194 (-ReleasePhoneTopology@PhoneCallAudio@@AEAAJXZ.c)
 *     ?GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x1801177C0 (-GetDeviceByIdString@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 *     ?GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z @ 0x1801179D0 (-GetDeviceByInterfacePath@EndpointCollection@@UEAAJPEBGPEAPEAUIEndpointDevice@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::WeakRef::~WeakRef(Microsoft::WRL::WeakRef *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
