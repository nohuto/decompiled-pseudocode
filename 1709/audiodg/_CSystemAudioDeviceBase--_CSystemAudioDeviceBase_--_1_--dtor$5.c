/*
 * XREFs of _CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor$5 @ 0x1400218E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceBase::_CSystemAudioDeviceBase_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(*(_QWORD *)(a2 + 40) + 264LL);
}
