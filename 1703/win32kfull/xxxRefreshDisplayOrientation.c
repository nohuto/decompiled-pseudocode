/*
 * XREFs of xxxRefreshDisplayOrientation @ 0x1C00BA280
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C0007B00 (NtUserSetDisplayAutoRotationPreferences.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C00BA1B0 (NtUserSetActiveProcessForMonitor.c)
 *     xxxSetInformationThread @ 0x1C00C74B0 (xxxSetInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 xxxRefreshDisplayOrientation()
{
  return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
}
