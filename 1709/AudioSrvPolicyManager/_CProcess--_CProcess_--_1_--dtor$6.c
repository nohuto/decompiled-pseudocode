/*
 * XREFs of _CProcess::_CProcess_::_1_::dtor$6 @ 0x18002864C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::_CProcess_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 296LL));
}
