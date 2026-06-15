/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18007B17C
 * Callers:
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x1800148D0 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x1800349B4 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$0 @ 0x180059957 (_CAudioResourceManager--GetSaDeviceForSharedStream_--_1_--dtor$0.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$2 @ 0x180059CF8 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$2.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$5 @ 0x180059D1C (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$5.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$4 @ 0x180059D9E (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$4.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$2 @ 0x180059E78 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____ptr64_&___ptr64_enum_APO_TYPE_&___ptr64__GUID_const_&___ptr64__::_1_::dtor$0 @ 0x18005A480 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_sh.c)
 *     _CSharedStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$2 @ 0x18005BCB0 (_CSharedStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CProcessSubmixProxy_IProcessSubmixProxy_ProcessSubmixParams_____ptr64_&___ptr64_PROCESS_SUBMIX_DESCRIPTOR_____ptr64_IStreamGroupProxy_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$0 @ 0x18005BE37 (_Microsoft--WRL--Details--MakeAndInitialize_CProcessSubmixProxy_IProcessSubmixProxy_ProcessSubmi.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18007A2D4 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?ProviderFinalRelease@CMeterHardware@@UEAAXXZ @ 0x180083C60 (-ProviderFinalRelease@CMeterHardware@@UEAAXXZ.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180084000 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ @ 0x180084390 (-NotifyAudioDGTerminated@CMuteSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x1800846C0 (-ProviderFinalRelease@CMuteHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x180084740 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1800848C0 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1800855A0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ @ 0x180085E20 (-NotifyAudioDGTerminated@CVolumeSoftware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x180086210 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800862A0 (-ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180087390 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 *     _CMMNotificationDelegator::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800A5196 (_CMMNotificationDelegator--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetStreamGroups_::_1_::dtor$1 @ 0x1800A8C5B (_CDeviceGraphObjectsStore--GetStreamGroups_--_1_--dtor$1.c)
 *     _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$8 @ 0x1800AB852 (_CAudioResourceManager--CreateInternalLoopbackStream_--_1_--dtor$8.c)
 *     _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$1 @ 0x1800AC614 (_CAudioResourceManager--ReevaluateSaDeviceSettings_--_1_--dtor$1.c)
 *     _CAudioResourceManager::UpdateAuxiliaryInputForStreamGroup_::_1_::dtor$2 @ 0x1800AD5A3 (_CAudioResourceManager--UpdateAuxiliaryInputForStreamGroup_--_1_--dtor$2.c)
 *     ?Shutdown@CMonitorManager@@QEAAXXZ @ 0x1800B4E20 (-Shutdown@CMonitorManager@@QEAAXXZ.c)
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x1800B80E0 (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1800C01C1 (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice_____pt.c)
 *     _util::InterfaceMap_IAudioStreamInfo_Sarm::CStreamResource_::Add_::_1_::dtor$0 @ 0x1800C22DE (_util--InterfaceMap_IAudioStreamInfo_Sarm--CStreamResource_--Add_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
