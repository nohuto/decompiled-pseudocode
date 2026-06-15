/*
 * XREFs of ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1400300B8
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CpuManager_CpuManager__::_1_::dtor$0 @ 0x14001F4E0 (_Microsoft--WRL--Details--MakeAndInitialize_CpuManager_CpuManager__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResourceManager__::_1_::dtor$0 @ 0x14001F5B1 (_Microsoft--WRL--Details--MakeAndInitialize_GraphStreamingResourceManager_GraphStreamingResource.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::AudioDeviceModulesManager_Windows::Media::Devices::IAudioDeviceModulesManager_void_____ptr64__::_1_::dtor$0 @ 0x140020A70 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--AudioDeviceModulesManager_W.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache_____ptr64_&___ptr64_BRIDGE_STREAM_DESCRIPTOR_____ptr64_&___ptr64_IAudioProcessingObject_____ptr64_&___ptr64_IAudioMediaType_____ptr64_&___ptr64_unsigned_int_&___ptr64__::_1_::dtor$0 @ 0x14003335C (_Microsoft--WRL--Details--MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache___.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
