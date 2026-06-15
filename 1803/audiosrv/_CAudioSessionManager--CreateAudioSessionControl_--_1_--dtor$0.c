/*
 * XREFs of _CAudioSessionManager::CreateAudioSessionControl_::_1_::dtor$0 @ 0x1800672D6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::CreateAudioSessionControl_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CServerAudioSessionControl>::~CComPtr<CServerAudioSessionControl>(a2 + 96);
}
