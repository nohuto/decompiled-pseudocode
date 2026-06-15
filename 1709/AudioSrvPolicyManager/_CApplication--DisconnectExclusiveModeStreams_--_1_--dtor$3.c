/*
 * XREFs of _CApplication::DisconnectExclusiveModeStreams_::_1_::dtor$3 @ 0x18002841D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplication::DisconnectExclusiveModeStreams_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}
