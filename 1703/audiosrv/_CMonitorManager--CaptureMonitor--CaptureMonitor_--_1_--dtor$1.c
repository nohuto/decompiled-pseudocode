/*
 * XREFs of _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$1 @ 0x1800B143D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 40LL));
}
