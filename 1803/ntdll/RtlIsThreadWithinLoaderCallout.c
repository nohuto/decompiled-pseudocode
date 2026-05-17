/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x18007D880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (HANDLE)qword_1801565C0 == NtCurrentTeb()->ClientId.UniqueThread;
}
