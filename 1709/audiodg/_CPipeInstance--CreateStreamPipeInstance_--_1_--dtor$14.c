/*
 * XREFs of _CPipeInstance::CreateStreamPipeInstance_::_1_::dtor$14 @ 0x1400205C0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001C2A0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

void __fastcall CPipeInstance::CreateStreamPipeInstance_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(*(Windows::Media::Devices::SendCommandAsyncOperation **)(a2 + 168));
}
