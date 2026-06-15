/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::AudioDeviceModulesManager_Windows::Media::Devices::IAudioDeviceModulesManager_ATL::CHandle_&___ptr64__::_1_::dtor$2 @ 0x140021E88
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BC00 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::AudioDeviceModulesManager_Windows::Media::Devices::IAudioDeviceModulesManager_ATL::CHandle_____ptr64__::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(*(Windows::Media::Devices::SendCommandAsyncOperation **)(a2 + 48));
}
