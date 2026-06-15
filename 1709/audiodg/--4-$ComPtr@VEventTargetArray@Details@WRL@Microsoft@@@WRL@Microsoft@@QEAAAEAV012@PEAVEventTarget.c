/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x14004B274
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140049F4C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Wind.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___ @ 0x14004A08C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Wind.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400166A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
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
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
  }
  return a1;
}
