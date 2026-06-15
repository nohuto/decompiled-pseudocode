/*
 * XREFs of _ATL::CComAggObject_CSystemAudioDeviceShared_::CComAggObject_CSystemAudioDeviceShared__::_1_::dtor$0 @ 0x14003BE8B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComAggObject_CSystemAudioDeviceShared_::CComAggObject_CSystemAudioDeviceShared__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)(*(_QWORD *)(a2 + 64) + 8LL));
}
