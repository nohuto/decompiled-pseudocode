/*
 * XREFs of ??1?$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ @ 0x18007CE74
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180010BE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     _lambda_cb1a7eba790d7310050f17c894bfcd12_::operator() @ 0x18004C8E4 (_lambda_cb1a7eba790d7310050f17c894bfcd12_--operator().c)
 *     __lambda_cb1a7eba790d7310050f17c894bfcd12_::operator()_::_1_::dtor$2 @ 0x18004CA80 (__lambda_cb1a7eba790d7310050f17c894bfcd12_--operator()_--_1_--dtor$2.c)
 *     _EffectPolicy::GetDelayedAECInsertionPolicy_::_1_::dtor$2 @ 0x180058DB0 (_EffectPolicy--GetDelayedAECInsertionPolicy_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::GetInitializedSystemEffectInterface_::_1_::dtor$0 @ 0x18005A060 (_CEndpointCharacteristics--GetInitializedSystemEffectInterface_--_1_--dtor$0.c)
 *     _InitializeStreamAndModeDescriptors_::_1_::dtor$89 @ 0x18005A3B0 (_InitializeStreamAndModeDescriptors_--_1_--dtor$89.c)
 *     _CreateSaDevice_::_1_::dtor$1 @ 0x18005A3FC (_CreateSaDevice_--_1_--dtor$1.c)
 *     _CreateSaDevice_::_1_::dtor$2 @ 0x18005A408 (_CreateSaDevice_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  void (*v2)(void); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v1);
    else
      v2();
  }
}
