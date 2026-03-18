/*
 * XREFs of xxxRefreshDisplayOrientation @ 0x1C0042640
 * Callers:
 *     NtUserSetDisplayAutoRotationPreferences @ 0x1C000D040 (NtUserSetDisplayAutoRotationPreferences.c)
 *     NtUserSetActiveProcessForMonitor @ 0x1C0042E30 (NtUserSetActiveProcessForMonitor.c)
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 xxxRefreshDisplayOrientation()
{
  return (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 8LL))(P);
}
