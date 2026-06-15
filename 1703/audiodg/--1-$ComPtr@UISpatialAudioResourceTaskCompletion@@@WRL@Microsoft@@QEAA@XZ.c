/*
 * XREFs of ??1?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x140057DC4
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache_____ptr64_&___ptr64_BRIDGE_STREAM_DESCRIPTOR_____ptr64_&___ptr64_IAudioProcessingObject_____ptr64_&___ptr64_IAudioMediaType_____ptr64_&___ptr64_unsigned_int_&___ptr64__::_1_::dtor$0 @ 0x140034C43 (_Microsoft--WRL--Details--MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache___.c)
 *     _CEndpointInstance::CreateApoEndpointInstance_::_1_::dtor$3 @ 0x140041E1C (_CEndpointInstance--CreateApoEndpointInstance_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x14005784F (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 *     _CSpatialCrossProcessBaseEndpoint::_CSpatialCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x140057F4D (_CSpatialCrossProcessBaseEndpoint--_CSpatialCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::~ComPtr<ISpatialAudioResourceTaskCompletion>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
