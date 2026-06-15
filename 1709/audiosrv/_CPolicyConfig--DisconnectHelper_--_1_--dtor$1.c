/*
 * XREFs of _CPolicyConfig::DisconnectHelper_::_1_::dtor$1 @ 0x1800838D3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::DisconnectHelper_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>((CAudioSessionManager **)(a2 + 96));
}
