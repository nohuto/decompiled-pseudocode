/*
 * XREFs of ??1?$shared_ptr@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@std@@QEAA@XZ @ 0x18009762C
 * Callers:
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$83 @ 0x180067428 (_InitializeStreamAndModeDescriptors_--_1_--dtor$83.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$108 @ 0x180067458 (_InitializeStreamAndModeDescriptors_--_1_--dtor$108.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$192 @ 0x180067530 (_InitializeStreamAndModeDescriptors_--_1_--dtor$192.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$256 @ 0x1800675A8 (_InitializeStreamAndModeDescriptors_--_1_--dtor$256.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$39 @ 0x1800676D4 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$39.c)
 *     _DeriveAudioProcessingModeConfiguration_::_1_::dtor$100 @ 0x180067734 (_DeriveAudioProcessingModeConfiguration_--_1_--dtor$100.c)
 *     _SystemEffectChainDescriptor::Resolve_::_1_::dtor$0 @ 0x180068078 (_SystemEffectChainDescriptor--Resolve_--_1_--dtor$0.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$5 @ 0x1800684A4 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$5.c)
 *     _SystemEffectDescriptor::CreateOverridingChain_::_1_::dtor$7 @ 0x1800684B0 (_SystemEffectDescriptor--CreateOverridingChain_--_1_--dtor$7.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$6 @ 0x180068CD8 (_CAudioResourceManager--DestroyStream_--_1_--dtor$6.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$6 @ 0x180068E4C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$6.c)
 *     _CPowerReferenceManager::AcquirePowerReferenceForStream_::_1_::dtor$0 @ 0x180069730 (_CPowerReferenceManager--AcquirePowerReferenceForStream_--_1_--dtor$0.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$8 @ 0x18006A4AC (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$8.c)
 *     _SystemEffectDescriptor::GetOverridingChainDescriptorIndex_::_1_::dtor$1 @ 0x18006AA24 (_SystemEffectDescriptor--GetOverridingChainDescriptorIndex_--_1_--dtor$1.c)
 *     _CreateSaDevice_::_1_::dtor$170 @ 0x18006AECC (_CreateSaDevice_--_1_--dtor$170.c)
 *     _CreateSaDevice_::_1_::dtor$227 @ 0x18006AF44 (_CreateSaDevice_--_1_--dtor$227.c)
 *     _CKsSoftwareNotificationsMonitor::OnFormatCapsChange_::_1_::dtor$6 @ 0x1800C6E08 (_CKsSoftwareNotificationsMonitor--OnFormatCapsChange_--_1_--dtor$6.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor$2 @ 0x1800CA70C (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--dtor$2.c)
 *     _CWorkFifo::GetWorkItem_::_1_::dtor$0 @ 0x1800F3097 (_CWorkFifo--GetWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ProcessWorkItem_::_1_::dtor$0 @ 0x1800F3C16 (_CWorkFifo--ProcessWorkItem_--_1_--dtor$0.c)
 *     _CWorkFifo::ScheduleWorkItem_::_1_::dtor$2 @ 0x1800F48F2 (_CWorkFifo--ScheduleWorkItem_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800494E0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::~shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
