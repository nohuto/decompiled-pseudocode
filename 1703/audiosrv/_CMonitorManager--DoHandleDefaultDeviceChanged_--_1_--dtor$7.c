/*
 * XREFs of _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$7 @ 0x1800B2695
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 216));
}
