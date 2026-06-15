/*
 * XREFs of ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x1400189B0
 * Callers:
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x1400161F0 (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAKXZ @ 0x14001EB10 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001EB20 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::Release(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::Release(this);
}
