/*
 * XREFs of _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$7 @ 0x140021A48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)(a2 + 56));
}
