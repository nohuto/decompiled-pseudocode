/*
 * XREFs of _ATL::CComCreator_ATL::CComAggObject_CSystemAudioDeviceOffloadGraph___::CreateInstance_::_1_::dtor$1 @ 0x14003E954
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComCreator_ATL::CComAggObject_CSystemAudioDeviceOffloadGraph___::CreateInstance_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)(*(_QWORD *)(a2 + 48) + 8LL));
}
