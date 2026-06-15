/*
 * XREFs of _CAudioChannelVolumeChanged::Invoke_::_1_::dtor$0 @ 0x1800AA9A1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioChannelVolumeChanged::Invoke_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>(*(CAudioSessionManager ***)(a2 + 104));
}
