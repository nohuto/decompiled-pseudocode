/*
 * XREFs of ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18007B9A0
 * Callers:
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004BC5C (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2____::_1_::dtor$5 @ 0x18004C0E4 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3_ea_18004C0E4.c)
 *     _GetConnectorSignalProcessingModes_::_1_::dtor$4 @ 0x1800594A8 (_GetConnectorSignalProcessingModes_--_1_--dtor$4.c)
 *     _KsNotifications_CreateMonitor_::_1_::dtor$6 @ 0x180059500 (_KsNotifications_CreateMonitor_--_1_--dtor$6.c)
 *     _CEndpointCharacteristics::AreEffectsDisabled_::_1_::dtor$1 @ 0x180059FE4 (_CEndpointCharacteristics--AreEffectsDisabled_--_1_--dtor$1.c)
 *     _CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode_::_1_::dtor$4 @ 0x18005A050 (_CEndpointCharacteristics--GetProposedConnectorFormatForProcessingMode_--_1_--dtor$4.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____ptr64_&___ptr64_enum_APO_TYPE_&___ptr64__GUID_const_&___ptr64__::_1_::dtor$4 @ 0x18005A4C0 (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObjec_ea_18005A4C0.c)
 *     _KsNotifications_ServiceStart_::_1_::dtor$0 @ 0x18005C23E (_KsNotifications_ServiceStart_--_1_--dtor$0.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee____::_1_::dtor$5 @ 0x1800BAB56 (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa_ea_1800BAB56.c)
 *     _CEndpointCharacteristics::GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc____::_1_::dtor$5 @ 0x1800BB11D (_CEndpointCharacteristics--GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8_ea_1800BB11D.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$0 @ 0x1800BC5B0 (_CheckConnectorSupportForPeriodicity_--_1_--dtor$0.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$1 @ 0x1800BC5BC (_CheckConnectorSupportForPeriodicity_--_1_--dtor$1.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$2 @ 0x1800BC5C8 (_CheckConnectorSupportForPeriodicity_--_1_--dtor$2.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$3 @ 0x1800BC5D4 (_CheckConnectorSupportForPeriodicity_--_1_--dtor$3.c)
 *     _CheckConnectorSupportForPeriodicity_::_1_::dtor$4 @ 0x1800BC5E0 (_CheckConnectorSupportForPeriodicity_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat_::_1_::dtor$2 @ 0x1800BD04B (_CEndpointCharacteristics--DiscoverPeriodicityCharacteristicsForFormat_--_1_--dtor$2.c)
 *     _GetSupportedDataRangeForEndpoint_::_1_::dtor$4 @ 0x1800BE04B (_GetSupportedDataRangeForEndpoint_--_1_--dtor$4.c)
 *     _CEndpointCharacteristics::UpdateDeviceFormatEPProperty_::_1_::dtor$3 @ 0x1800BF39A (_CEndpointCharacteristics--UpdateDeviceFormatEPProperty_--_1_--dtor$3.c)
 *     _KsNotifications_AudioInterfaceArrival_::_1_::dtor$0 @ 0x1800C17F1 (_KsNotifications_AudioInterfaceArrival_--_1_--dtor$0.c)
 *     _KsNotifications_AudioInterfaceArrival_::_1_::dtor$2 @ 0x1800C1809 (_KsNotifications_AudioInterfaceArrival_--_1_--dtor$2.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$0 @ 0x1800D097F (_FillAPOInitSystemEffectsStructure_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$4 @ 0x1800D09AF (_FillAPOInitSystemEffectsStructure_--_1_--dtor$4.c)
 *     _InitializeSystemEffectsInterface_::_1_::dtor$0 @ 0x1800D0C6A (_InitializeSystemEffectsInterface_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
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
