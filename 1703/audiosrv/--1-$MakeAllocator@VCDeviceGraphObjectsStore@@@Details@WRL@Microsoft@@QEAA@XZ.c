/*
 * XREFs of ??1?$MakeAllocator@VCDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18007CF3C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Sarm::CSpatialAudioResourceManager_ISpatialAudioResourceManager_IAudioPolicyManager_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x18005BAE9 (_Microsoft--WRL--Details--MakeAndInitialize_Sarm--CSpatialAudioResourceManager_ISpa_ea_18005BAE9.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupProxy_StreamGroupParams_____ptr64_&___ptr64_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$1 @ 0x18005BC74 (_Microsoft--WRL--Details--MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupPro_ea_18005BC74.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceParams_____ptr64_&___ptr64_CEndpointCharacteristics_____ptr64_&___ptr64_enum__AUDCLNT_SHAREMODE_&___ptr64_unsigned_long_&___ptr64_SaDeviceResourceParams_____ptr64__::_1_::dtor$1 @ 0x18005BDE0 (_Microsoft--WRL--Details--MakeAndInitialize_CSaDeviceProxy_ISaDeviceProxy_SaDeviceP_ea_18005BDE0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CProcessSubmixProxy_IProcessSubmixProxy_ProcessSubmixParams_____ptr64_&___ptr64_PROCESS_SUBMIX_DESCRIPTOR_____ptr64_IStreamGroupProxy_____ptr64_unsigned_long_&___ptr64__::_1_::dtor$1 @ 0x18005BE43 (_Microsoft--WRL--Details--MakeAndInitialize_CProcessSubmixProxy_IProcessSubmixProxy_ea_18005BE43.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore__::_1_::dtor$1 @ 0x18005BFD1 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphOb_ea_18005BFD1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__::_1_::dtor$1 @ 0x18005C3F2 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphStore_IDeviceGraphStore__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__::_1_::dtor$1 @ 0x18005C46B (_Microsoft--WRL--Details--MakeAndInitialize_CAudioResourceManager_IAudioResourceMan_ea_18005C46B.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CEndpointCharacteristics_CEndpointCharacteristics_unsigned_short_const_____ptr64_&___ptr64_int_&___ptr64__::_1_::dtor$1 @ 0x18005C4C7 (_Microsoft--WRL--Details--MakeAndInitialize_CEndpointCharacteristics_CEndpointChara_ea_18005C4C7.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroupProxy_StreamGroupParams_____ptr64_&___ptr64_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&___ptr64_unsigned_long_&___ptr64__::_1_::dtor$1 @ 0x1800A493C (_Microsoft--WRL--Details--MakeAndInitialize_CExclusiveStreamGroupProxy_IStreamGroup_ea_1800A493C.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMMDevice_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x1800C01CD (_Microsoft--WRL--Details--MakeAndInitialize_CHybridPropertyStore_IPropertyStore_IMM_ea_1800C01CD.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<CDeviceGraphObjectsStore>::~MakeAllocator<CDeviceGraphObjectsStore>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, 0LL);
}
