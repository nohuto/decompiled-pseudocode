/*
 * XREFs of PopPowerButtonBugcheckWatchCallback @ 0x1406CFF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __fastcall PopPowerButtonBugcheckWatchCallback(HANDLE Handle)
{
  return PopPowerButtonBugcheckConfigure(Handle);
}
