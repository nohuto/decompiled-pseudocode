/*
 * XREFs of _CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor$2 @ 0x140020AAF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::_CSystemAudioDeviceSharedBase_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(*(_QWORD *)(a2 + 56) + 328LL);
}
