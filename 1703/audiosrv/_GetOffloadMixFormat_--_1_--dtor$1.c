/*
 * XREFs of _GetOffloadMixFormat_::_1_::dtor$1 @ 0x180080E1A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOffloadMixFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
