/*
 * XREFs of SeMarkLogonSessionForTerminationNotification @ 0x140459520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeMarkLogonSessionForTerminationNotification(PLUID LogonId)
{
  return SeMarkLogonSessionForTerminationNotificationEx(LogonId, 0LL);
}
