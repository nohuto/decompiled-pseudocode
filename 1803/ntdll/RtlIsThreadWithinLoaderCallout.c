/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x18007D880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsThreadWithinLoaderCallout(void)
{
  return stru_1801565B0.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
