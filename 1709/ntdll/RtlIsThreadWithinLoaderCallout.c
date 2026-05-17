/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180086F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_1801595F8 == NtCurrentTeb()->ClientId.UniqueThread;
}
