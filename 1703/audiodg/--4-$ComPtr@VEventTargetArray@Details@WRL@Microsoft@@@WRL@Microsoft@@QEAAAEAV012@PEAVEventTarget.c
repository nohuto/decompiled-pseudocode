/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x140049A30
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_01b468a4540f623758798edfc5ae3ab2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___ @ 0x140048728 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_01b468a4540f623758798edfc5ae3ab2__Wind.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_7a5afc4a4ab7279ab8854289e6e83419__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140048860 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_7a5afc4a4ab7279ab8854289e6e83419__Wind.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 *a2)
{
  volatile signed __int32 *v3; // rcx

  if ( *a1 != a2 )
  {
    if ( a2 )
      _InterlockedIncrement(a2 + 3);
    v3 = *a1;
    *a1 = a2;
    if ( v3 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  }
  return a1;
}
