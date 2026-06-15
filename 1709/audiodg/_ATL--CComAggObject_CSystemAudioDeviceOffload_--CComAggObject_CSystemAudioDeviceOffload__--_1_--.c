/*
 * XREFs of _ATL::CComAggObject_CSystemAudioDeviceOffload_::CComAggObject_CSystemAudioDeviceOffload__::_1_::dtor$0 @ 0x14003C42D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComAggObject_CSystemAudioDeviceOffload_::CComAggObject_CSystemAudioDeviceOffload__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)(*(_QWORD *)(a2 + 64) + 8LL));
}
