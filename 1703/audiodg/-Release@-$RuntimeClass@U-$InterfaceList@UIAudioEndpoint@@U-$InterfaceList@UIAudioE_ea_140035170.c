/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@UIAudioEndpoint@@U?$InterfaceList@UIAudioEndpointRT@@U?$InterfaceList@UIAudioOutputEndpointRT@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140035170
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAudioEndpoint@@U?$InterfaceList@UIAudioEndpointRT@@U?$InterfaceList@UIAudioOutputEndpointRT@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x14001E950 (-Release@-$RuntimeClass@U-$InterfaceList@UIAudioEndpoint@@U-$InterfaceList@UIAudioEndpointRT@@U-.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIAudioEndpoint@@U?$InterfaceList@UIAudioEndpointRT@@U?$InterfaceList@UIAudioOutputEndpointRT@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x14001E960 (-Release@-$RuntimeClass@U-$InterfaceList@UIAudioEndpoint@@U-$InterfaceList@UIAudioE_ea_14001E960.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAudioEndpoint,Microsoft::WRL::Details::InterfaceList<IAudioEndpointRT,Microsoft::WRL::Details::InterfaceList<IAudioOutputEndpointRT,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 7);
  if ( !v1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
