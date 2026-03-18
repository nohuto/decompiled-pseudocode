/*
 * XREFs of SeDeleteObjectAuditAlarm @ 0x1406F5190
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall SeDeleteObjectAuditAlarm(PVOID Object, HANDLE Handle)
{
  SeDeleteObjectAuditAlarmWithTransaction(Object, Handle, 0LL);
}
