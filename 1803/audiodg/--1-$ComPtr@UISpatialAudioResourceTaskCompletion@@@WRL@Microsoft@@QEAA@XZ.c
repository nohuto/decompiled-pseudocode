/*
 * XREFs of ??1?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAA@XZ @ 0x140033420
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphObjectCache_____ptr64_&___ptr64_BRIDGE_STREAM_DESCRIPTOR_____ptr64_&___ptr64_IAudioProcessingObject_____ptr64_&___ptr64_IAudioMediaType_____ptr64_&___ptr64_unsigned_int_&___ptr64__::_1_::dtor$1 @ 0x140033368 (_Microsoft--WRL--Details--MakeAndInitialize_CApoEndpoint_CApoEndpoint_IDeviceGraphO_ea_140033368.c)
 *     _CEndpointInstance::CreateApoEndpointInstance_::_1_::dtor$3 @ 0x1400407C3 (_CEndpointInstance--CreateApoEndpointInstance_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x140057BDF (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::~ComPtr<ISpatialAudioResourceTaskCompletion>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
