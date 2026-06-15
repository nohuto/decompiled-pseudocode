/*
 * XREFs of _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$5 @ 0x1800599FA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 160LL));
}
