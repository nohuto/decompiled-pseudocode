/*
 * XREFs of _TSSession::_TSSession_::_1_::dtor$6 @ 0x180028BE3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TSSession::_TSSession_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 256LL));
}
