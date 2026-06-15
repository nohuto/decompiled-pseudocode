/*
 * XREFs of _CAudioSessionVolumeChanged::Invoke_::_1_::dtor$0 @ 0x1800AAC3A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionVolumeChanged::Invoke_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>(*(CAudioSessionManager ***)(a2 + 88));
}
