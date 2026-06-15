/*
 * XREFs of _privateCreateCrossProcessEndpoint_::_1_::dtor$15 @ 0x140021F97
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall privateCreateCrossProcessEndpoint_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)(a2 + 48));
}
