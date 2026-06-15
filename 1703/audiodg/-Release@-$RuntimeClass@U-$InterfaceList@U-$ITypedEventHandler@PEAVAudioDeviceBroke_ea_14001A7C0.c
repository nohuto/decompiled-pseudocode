/*
 * XREFs of ?Release@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001A7C0
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@AEAVCHandle@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@AEAVCHandle@ATL@@@Z @ 0x140017750 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x14001A8D0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@VNil@Details@23@V562.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx
  void (__fastcall *v3)(volatile signed __int32 *, __int64); // rax

  v1 = _InterlockedDecrement(a1 + 3);
  if ( !v1 )
  {
    if ( a1 )
    {
      v3 = *(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 32LL);
      if ( (char *)v3 == (char *)Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor' )
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
          a1,
          1LL);
      else
        v3(a1, 1LL);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
  }
  return v1;
}
