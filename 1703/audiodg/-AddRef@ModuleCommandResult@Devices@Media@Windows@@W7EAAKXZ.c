/*
 * XREFs of ?AddRef@ModuleCommandResult@Devices@Media@Windows@@W7EAAKXZ @ 0x14001F760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::ModuleCommandResult::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(a1 - 8);
}
