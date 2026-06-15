/*
 * XREFs of ?add_ModuleNotificationReceived@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x14004EDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14002F07C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@2@PEAPEAU342@@Z @ 0x140047698 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PE.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1400498A4 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Win.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::add_ModuleNotificationReceived(
        __int64 a1,
        __int64 a2,
        struct IUnknown **a3)
{
  int v6; // ebx
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
    v6 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>>(
           a2,
           &v8);
    if ( v6 >= 0 )
    {
      if ( v8 )
        v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
               a1 + 72,
               v8,
               *(void **)(*(_QWORD *)a2 + 24LL),
               a3);
      else
        v6 = -2147024809;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v6;
}
