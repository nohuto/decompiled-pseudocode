/*
 * XREFs of _Microsoft::WRL::Details::MakeAndInitialize_CpuManager_CpuManager__::_1_::dtor$2 @ 0x140020638
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BC00 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAndInitialize_CpuManager_CpuManager__::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(*(Windows::Media::Devices::SendCommandAsyncOperation **)(a2 + 104));
}
