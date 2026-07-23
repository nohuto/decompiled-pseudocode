/*
 * XREFs of ZwPrivilegedServiceAuditAlarm @ 0x14017FEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SubsystemName);
}
