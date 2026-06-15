/*
 * XREFs of ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14004F5C0
 * Callers:
 *     ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@W7EAAKXZ @ 0x14001F970 (-Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001F980 (-Release@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
