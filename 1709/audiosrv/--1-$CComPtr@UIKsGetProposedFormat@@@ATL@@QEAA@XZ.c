/*
 * XREFs of ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18005C8C8
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180022BF0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___ @ 0x180035CC0 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0___.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e35704f6cd4a0____::_1_::dtor$5 @ 0x180036148 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_e9af1581bd6c783f369e357_ea_180036148.c)
 *     _ClearMixFormatCache_::_1_::dtor$0 @ 0x180036958 (_ClearMixFormatCache_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____ptr64_&___ptr64_enum_APO_TYPE_&___ptr64__GUID_const_&___ptr64__::_1_::dtor$4 @ 0x180039644 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObjec_ea_180039644.c)
 *     _CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode_::_1_::dtor$4 @ 0x1800397A8 (_CEndpointCharacteristics--GetProposedConnectorFormatForProcessingMode_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$0 @ 0x1800397C0 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$0.c)
 *     _IsStreamFormatSupportedForMixFormat_::_1_::dtor$28 @ 0x18003985C (_IsStreamFormatSupportedForMixFormat_--_1_--dtor$28.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee____::_1_::dtor$5 @ 0x1800AEABA (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa_ea_1800AEABA.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe4847539b299dd7____::_1_::dtor$5 @ 0x1800AF081 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_2bd14234de5ddbaffe48475_ea_1800AF081.c)
 *     __lambda_9b7b4ff0acd9889e01bbf173a6c75851_::operator()_::_1_::dtor$2 @ 0x1800B04DD (__lambda_9b7b4ff0acd9889e01bbf173a6c75851_--operator()_--_1_--dtor$2.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$0 @ 0x1800B2BFC (_CheckConnectorSupportForPeriodicity_--_1_--dtor$0.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$1 @ 0x1800B2C08 (_CheckConnectorSupportForPeriodicity_--_1_--dtor$1.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$2 @ 0x1800B2C14 (_CheckConnectorSupportForPeriodicity_--_1_--dtor$2.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$3 @ 0x1800B2C20 (_CheckConnectorSupportForPeriodicity_--_1_--dtor$3.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$4 @ 0x1800B2C2C (_CheckConnectorSupportForPeriodicity_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat_::_1_::dtor$2 @ 0x1800B38E3 (_CEndpointCharacteristics--DiscoverPeriodicityCharacteristicsForFormat_--_1_--dtor$2.c)
 *     _GetSupportedDataRangeForEndpoint_::_1_::dtor$4 @ 0x1800B64C7 (_GetSupportedDataRangeForEndpoint_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::UpdateDeviceFormatEPProperty_::_1_::dtor$3 @ 0x1800B8856 (_CEndpointCharacteristics--UpdateDeviceFormatEPProperty_--_1_--dtor$3.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$2 @ 0x1800BDF1B (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$2.c)
 *     _CKsNotificationsMonitor::Initialize_::_1_::dtor$0 @ 0x1800BE466 (_CKsNotificationsMonitor--Initialize_--_1_--dtor$0.c)
 *     _KsNotifications_AudioInterfaceArrival_::_1_::dtor$0 @ 0x1800BE591 (_KsNotifications_AudioInterfaceArrival_--_1_--dtor$0.c)
 *     _KsNotifications_AudioInterfaceArrival_::_1_::dtor$2 @ 0x1800BE5A9 (_KsNotifications_AudioInterfaceArrival_--_1_--dtor$2.c)
 *     _KsNotifications_ServiceStart_::_1_::dtor$0 @ 0x1800BE9C5 (_KsNotifications_ServiceStart_--_1_--dtor$0.c)
 *     _MigrateSpatialProperties_::_1_::dtor$0 @ 0x1800CA1D9 (_MigrateSpatialProperties_--_1_--dtor$0.c)
 *     _GetConnectorSignalProcessingModes_::_1_::dtor$4 @ 0x1800DD17C (_GetConnectorSignalProcessingModes_--_1_--dtor$4.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$0 @ 0x1800DD499 (_InitializeSystemEffectsInterface_--_1_--dtor$0.c)
 *     _TelephonyController::CreateCallInstance_::_1_::dtor$0 @ 0x1800ED497 (_TelephonyController--CreateCallInstance_--_1_--dtor$0.c)
 *     _TelephonyController::Initialize_::_1_::dtor$5 @ 0x1800EE61A (_TelephonyController--Initialize_--_1_--dtor$5.c)
 *     _TelephonyController::ResetCallState_::_1_::dtor$0 @ 0x1800EEC26 (_TelephonyController--ResetCallState_--_1_--dtor$0.c)
 *     _TelephonyControllerCallInstance::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800EEF5F (_TelephonyControllerCallInstance--_scalar_deleting_destructor__--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
