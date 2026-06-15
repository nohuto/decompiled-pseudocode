/*
 * XREFs of ?OnEndpointUnavailableForUse@CBaseStreamGroupProxy@@UEAAXPEBG@Z @ 0x180044230
 * Callers:
 *     _std::make_shared_CPdcTimerActivation_CPdcActivationClient_____ptr64_CVADServer_____ptr64_&___ptr64__::_1_::dtor$5 @ 0x180063A3A (_std--make_shared_CPdcTimerActivation_CPdcActivationClient_____ptr64_CVADServer_____ea_180063A3A.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_short_const_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x180066914 (_Microsoft--WRL--Details--MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_shor_ea_180066914.c)
 *     _ATL::CAtlArray_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_________::Add_::_1_::dtor$0 @ 0x180067DD1 (_ATL--CAtlArray_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_un.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$1 @ 0x180067FC4 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointChara_ea_180067FC4.c)
 *     _SystemEffectChainDescriptor::MarkAsUnresolved_::_1_::dtor$6 @ 0x180068021 (_SystemEffectChainDescriptor--MarkAsUnresolved_--_1_--dtor$6.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$3 @ 0x1800685B5 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$3.c)
 *     _ATL::CAtlMap_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______Microsoft::WRL::ComPtr_CEndpointCharacteristics__ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short________ATL::CElementTraits_Microsoft::WRL::ComPtr_CEndpointCharacteristics_____::NewNode_::_1_::dtor$0 @ 0x180068A03 (_ATL--CAtlMap_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChT_ea_180068A03.c)
 *     _ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession_____ptr64_CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____ptr64___::NewNode_::_1_::dtor$0 @ 0x180068A65 (_ATL--CAtlMap_CAudioSessionInstanceId_CAudioSession_____ptr64_CAudioSessionInstance_ea_180068A65.c)
 *     _CWorkFifo::CWorkFifo_::_1_::dtor$4 @ 0x180068BCA (_CWorkFifo--CWorkFifo_--_1_--dtor$4.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$103 @ 0x180068D98 (_CAudioResourceManager--DestroyStream_--_1_--dtor$103.c)
 *     _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::dtor$1 @ 0x180068F60 (_CPlaybackNotifier--UpdateAudioPlaybackStatus_--_1_--dtor$1.c)
 *     _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$2 @ 0x18006902C (_CDeviceGraphStore--GetDeviceGraphStoreForEndpoint_--_1_--dtor$2.c)
 *     _std::_Ref_count_obj_std::function_void___cdecl(void)___::_Ref_count_obj_std::function_void___cdecl(void)____std::function_void___cdecl(void)__&___ptr64__::_1_::dtor$1 @ 0x1800691C8 (_std--_Ref_count_obj_std--function_void___cdecl(void)___--_Ref_count_obj_std--funct_ea_1800691C8.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$131 @ 0x180069395 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$131.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__::_1_::dtor$1 @ 0x180069D96 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioResourceManager_IAudioResourceMan_ea_180069D96.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObject_unsigned_short_const_____ptr64_&___ptr64_enum_APO_TYPE_&___ptr64__GUID_const_&___ptr64__::_1_::dtor$1 @ 0x180069F0C (_Microsoft--WRL--Details--MakeAndInitialize_CAPOWrapperClient_IAudioProcessingObjec_ea_180069F0C.c)
 *     _CAudioStream::RecalculateVolume_::_1_::dtor$36 @ 0x180069FE9 (_CAudioStream--RecalculateVolume_--_1_--dtor$36.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor$1 @ 0x18006B10C (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Sarm::CSpatialAudioResourceManager_ISpatialAudioResourceManager_IAudioPolicyManager_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18006B150 (_Microsoft--WRL--Details--MakeAndInitialize_Sarm--CSpatialAudioResourceManager_ISpa_ea_18006B150.c)
 *     _CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int_____ptr64_0_0_::Clear_::_1_::dtor$0 @ 0x18006B217 (_CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int_____ptr64_0_0_--Clear_--_1_--dtor.c)
 *     _std::basic_string_char_std::char_traits_char__std::allocator_char___::basic_string_char_std::char_traits_char__std::allocator_char____::_1_::dtor$0 @ 0x180096F45 (_std--basic_string_char_std--char_traits_char__std--allocator_char___--basic_string_char_std--ch.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x180097103 (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short.c)
 *     _ATL::CAtlArray_CAudioSessionNotificationProcess_ATL::CElementTraits_CAudioSessionNotificationProcess___::Add_::_1_::dtor$0 @ 0x1800B1761 (_ATL--CAtlArray_CAudioSessionNotificationProcess_ATL--CElementTraits_CAudioSessionNotificationPr.c)
 *     _std::make_shared_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____unsigned_short_const_____ptr64__::_1_::dtor$4 @ 0x1800C7C83 (_std--make_shared_std--basic_string_unsigned_short_std--char_traits_unsigned_short__ea_1800C7C83.c)
 *     _CSharedStreamGroupProxy::OnEndpointUnavailableForUse_::_1_::dtor$9 @ 0x1800CA6EC (_CSharedStreamGroupProxy--OnEndpointUnavailableForUse_--_1_--dtor$9.c)
 *     _ATL::CComAggObject_CAPOWrapperSrv_::CComAggObject_CAPOWrapperSrv__::_1_::dtor$0 @ 0x1800EDB81 (_ATL--CComAggObject_CAPOWrapperSrv_--CComAggObject_CAPOWrapperSrv__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveModeListener_CExclusiveModeListener__::_1_::dtor$1 @ 0x1800F1A0E (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveModeListener_CExclusiveModeLi_ea_1800F1A0E.c)
 *     _CAggregateTelemetry_CAggregateValuesClusteredBase_enum_SarmErrorEvent_unsigned_int_____ptr64__enum_SarmErrorEvent_unsigned_int_____ptr64_0_0_::AddData_::_1_::dtor$0 @ 0x1800F5C48 (_CAggregateTelemetry_CAggregateValuesClusteredBase_enum_SarmErrorEvent_unsigned_int_____ptr64__e.c)
 *     _CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int_____ptr64_0_0_::AddData_::_1_::dtor$0 @ 0x1800F5D2C (_CAggregateTelemetryClustered_enum_SarmErrorEvent_unsigned_int_____ptr64_0_0_--AddData_--_1_--dt.c)
 *     _CAggregateTelemetry_CAggregateValuesClusteredBase_enum_SarmErrorEvent_unsigned_int_____ptr64__enum_SarmErrorEvent_unsigned_int_____ptr64_0_0_::Log_::_1_::dtor$0 @ 0x1800F5DD7 (_CAggregateTelemetry_CAggregateValuesClusteredBase_enum_SarmErrorEvent_unsigned_int_ea_1800F5DD7.c)
 *     _ATL::CAtlList_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short_________::NewNode_::_1_::dtor$0 @ 0x1800FC52F (_ATL--CAtlList_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChTraitsCRT_uns.c)
 *     _ATL::CAtlMap_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short______enum_RmResourceType_ATL::CElementTraits_ATL::CStringT_unsigned_short_ATL::StrTraitATL_unsigned_short_ATL::ChTraitsCRT_unsigned_short________ATL::CElementTraits_enum_RmResourceType___::NewNode_::_1_::dtor$0 @ 0x180113FDB (_ATL--CAtlMap_ATL--CStringT_unsigned_short_ATL--StrTraitATL_unsigned_short_ATL--ChT_ea_180113FDB.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseStreamGroupProxy::OnEndpointUnavailableForUse(
        CBaseStreamGroupProxy *this,
        const unsigned __int16 *a2)
{
  ;
}
