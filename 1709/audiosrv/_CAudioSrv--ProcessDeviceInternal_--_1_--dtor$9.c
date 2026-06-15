/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$9 @ 0x180062E45
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>((CAudioSessionManager **)(a2 + 56));
}
