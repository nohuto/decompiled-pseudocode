/*
 * XREFs of ??1?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x14003464C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache_____ptr64_&___ptr64_BRIDGE_STREAM_DESCRIPTOR_____ptr64_&___ptr64_IAudioProcessingObject_____ptr64_&___ptr64_IAudioMediaType_____ptr64_&___ptr64_unsigned_int_&___ptr64__::_1_::dtor$1 @ 0x1400345A0 (_Microsoft--WRL--Details--MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphO_ea_1400345A0.c)
 *     _CEndpointInstance::CreateApoEndpointInstance_::_1_::dtor$3 @ 0x14004266C (_CEndpointInstance--CreateApoEndpointInstance_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x140059F7B (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x14005A671 (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::~ComPtr<ISpatialAudioResourceTaskCompletion>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
