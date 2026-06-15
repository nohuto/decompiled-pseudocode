/*
 * XREFs of ?Release@AudioDeviceModule@Devices@Media@Windows@@UEAAKXZ @ 0x14004E370
 * Callers:
 *     ?Release@AudioDeviceModule@Devices@Media@Windows@@W7EAAKXZ @ 0x14001FC90 (-Release@AudioDeviceModule@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceModule@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001FCA0 (-Release@AudioDeviceModule@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
