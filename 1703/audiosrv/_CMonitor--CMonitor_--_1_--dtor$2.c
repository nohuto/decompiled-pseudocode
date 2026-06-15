/*
 * XREFs of _CMonitor::CMonitor_::_1_::dtor$2 @ 0x1800B1243
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::CMonitor_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 72LL));
}
