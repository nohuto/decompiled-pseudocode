/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::dtor$2 @ 0x18006A710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::CreateAudioSession_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>((CAudioSession **)(a2 + 72));
}
