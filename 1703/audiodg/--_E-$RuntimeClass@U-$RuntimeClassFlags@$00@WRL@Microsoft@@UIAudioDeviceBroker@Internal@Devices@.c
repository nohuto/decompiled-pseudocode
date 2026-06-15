/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140049DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001CB20 (--3@YAXPEAX@Z.c)
 *     ??1?$RuntimeClass@U?$InterfaceList@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAA@XZ @ 0x14002F4E4 (--1-$RuntimeClass@U-$InterfaceList@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Wi.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
