/*
 * XREFs of ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14004E360
 * Callers:
 *     ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@W7EAAKXZ @ 0x14001FC70 (-Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001FC80 (-Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
