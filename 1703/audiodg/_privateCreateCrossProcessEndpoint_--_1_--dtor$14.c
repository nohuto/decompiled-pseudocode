/*
 * XREFs of _privateCreateCrossProcessEndpoint_::_1_::dtor$14 @ 0x140021F8B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateCrossProcessEndpoint_::_1_::dtor_14(__int64 a1, __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)(a2 + 88));
}
