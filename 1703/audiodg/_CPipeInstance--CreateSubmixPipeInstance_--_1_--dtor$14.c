/*
 * XREFs of _CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor$14 @ 0x140021A8C
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BC00 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

void __fastcall CPipeInstance::CreateSubmixPipeInstance_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(*(Windows::Media::Devices::SendCommandAsyncOperation **)(a2 + 144));
}
