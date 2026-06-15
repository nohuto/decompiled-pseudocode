/*
 * XREFs of _CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor$6 @ 0x1800B2689
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::DoHandleDefaultDeviceChanged_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 216));
}
