/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180087C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsThreadWithinLoaderCallout(void)
{
  return stru_1801555A8.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
