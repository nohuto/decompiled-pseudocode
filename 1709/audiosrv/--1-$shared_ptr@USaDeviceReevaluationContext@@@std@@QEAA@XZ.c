/*
 * XREFs of ??1?$shared_ptr@USaDeviceReevaluationContext@@@std@@QEAA@XZ @ 0x18005AF54
 * Callers:
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$5 @ 0x180038482 (_CAudioResourceManager--DestroyStream_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$4 @ 0x1800397E4 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$4.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$7 @ 0x180039850 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$7.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$32 @ 0x180039880 (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$32.c)
 *     _SystemEffectDescriptor::GetOverridingChainDescriptorIndex_::_1_::dtor$1 @ 0x1800398C8 (_SystemEffectDescriptor--GetOverridingChainDescriptorIndex_--_1_--dtor$1.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$10 @ 0x180039904 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$10.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$103 @ 0x1800399AC (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$103.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$0 @ 0x180039DD3 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$0.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180090CE4 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$4 @ 0x180091109 (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$4.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$5 @ 0x1800BC447 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$5.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$7 @ 0x1800BC453 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$7.c)
 *     _SystemEffectChainDescriptor::Resolve_::_1_::dtor$0 @ 0x1800BD5F8 (_SystemEffectChainDescriptor--Resolve_--_1_--dtor$0.c)
 *     _CWorkFifo::GetWorkItem_::_1_::dtor$0 @ 0x1800C0867 (_CWorkFifo--GetWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ProcessWorkItem_::_1_::dtor$0 @ 0x1800C140E (_CWorkFifo--ProcessWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$2 @ 0x1800C218D (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<SaDeviceReevaluationContext>::~shared_ptr<SaDeviceReevaluationContext>(__int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
