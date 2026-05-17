/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180087C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (HANDLE)qword_1801555B8 == NtCurrentTeb()->ClientId.UniqueThread;
}
