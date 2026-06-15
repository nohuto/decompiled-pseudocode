/*
 * XREFs of _CMonitorManager::HandleDeviceRemoved_::_1_::dtor$0 @ 0x1800B2D3A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::HandleDeviceRemoved_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 144));
}
