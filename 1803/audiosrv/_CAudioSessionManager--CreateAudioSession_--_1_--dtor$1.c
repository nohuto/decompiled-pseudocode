/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::dtor$1 @ 0x18006A6EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::CreateAudioSession_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>((CAudioSession **)(a2 + 80));
}
