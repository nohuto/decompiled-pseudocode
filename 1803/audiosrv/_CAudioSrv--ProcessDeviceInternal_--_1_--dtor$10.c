/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$10 @ 0x18009DF23
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>((CAudioSessionManager **)(a2 + 56));
}
