/*
 * XREFs of _KsNotifications_CreateMonitor_::_1_::dtor$4 @ 0x1800594F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KsNotifications_CreateMonitor_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
