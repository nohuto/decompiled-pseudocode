/*
 * XREFs of _CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor$5 @ 0x14003C8CE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemAudioDeviceOffload::_CSystemAudioDeviceOffload_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 40) + 432LL));
}
