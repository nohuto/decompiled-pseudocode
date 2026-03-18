/*
 * XREFs of PsSetCreateThreadNotifyRoutine @ 0x1406281E0
 * Callers:
 *     <none>
 * Callees:
 *     PspSetCreateThreadNotifyRoutine @ 0x140628250 (PspSetCreateThreadNotifyRoutine.c)
 */

NTSTATUS __stdcall PsSetCreateThreadNotifyRoutine(PCREATE_THREAD_NOTIFY_ROUTINE NotifyRoutine)
{
  return PspSetCreateThreadNotifyRoutine(NotifyRoutine, 0LL);
}
