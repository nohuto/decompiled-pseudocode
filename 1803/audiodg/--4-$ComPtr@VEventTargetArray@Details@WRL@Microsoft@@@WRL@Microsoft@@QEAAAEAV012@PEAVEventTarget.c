/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x14004923C
 * Callers:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::Internal::AudioDeviceBroker_____ptr64_Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs_____ptr64___ @ 0x140047DEC (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d65a1343ddfc987a61a87e0c3596fa56__Wind.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager_____ptr64_Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs_____ptr64___ @ 0x140047F2C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_f767560c0c974952e07d01e413afc9d2__Wind.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140016620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x14004C858 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // r10
  __int64 v4; // rcx

  v3 = a2;
  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>>::InternalAddRef(a2);
      v4 = *a1;
    }
    *a1 = v3;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  return a1;
}
