/*
 * XREFs of ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140031760
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CpuManager_CpuManager__::_1_::dtor$1 @ 0x14002062C (_Microsoft--WRL--Details--MakeAndInitialize_CpuManager_CpuManager__--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResourceManager__::_1_::dtor$1 @ 0x140021E1C (_Microsoft--WRL--Details--MakeAndInitialize_GraphStreamingResourceManager_GraphStre_ea_140021E1C.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::AudioDeviceModulesManager_Windows::Media::Devices::IAudioDeviceModulesManager_ATL::CHandle_&___ptr64__::_1_::dtor$1 @ 0x140021E7C (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--AudioDeviceMod_ea_140021E7C.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache_____ptr64_&___ptr64_BRIDGE_STREAM_DESCRIPTOR_____ptr64_&___ptr64_IAudioProcessingObject_____ptr64_&___ptr64_IAudioMediaType_____ptr64_&___ptr64_unsigned_int_&___ptr64__::_1_::dtor$1 @ 0x140034C4F (_Microsoft--WRL--Details--MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphO_ea_140034C4F.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
