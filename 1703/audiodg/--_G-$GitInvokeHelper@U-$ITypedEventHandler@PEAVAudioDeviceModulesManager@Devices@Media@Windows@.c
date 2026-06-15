/*
 * XREFs of ??_G?$GitInvokeHelper@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@V?$GitPtrSupportsAgile@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@@Internal@3@$01@Details@Internal@Windows@@UEAAPEAXI@Z @ 0x140049CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140019728 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 */

__int64 *__fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>,Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::AudioDeviceModulesManager *,Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs *>>,2>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Block + 5);
  *((_DWORD *)Block + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(Block + 3);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
