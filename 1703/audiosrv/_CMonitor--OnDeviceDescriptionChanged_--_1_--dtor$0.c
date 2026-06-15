/*
 * XREFs of _CMonitor::OnDeviceDescriptionChanged_::_1_::dtor$0 @ 0x1800B6D25
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitor::OnDeviceDescriptionChanged_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}
