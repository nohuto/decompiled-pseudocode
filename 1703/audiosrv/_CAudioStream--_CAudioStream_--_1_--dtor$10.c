/*
 * XREFs of _CAudioStream::_CAudioStream_::_1_::dtor$10 @ 0x18005A86F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::_CAudioStream_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 96) + 208LL));
}
