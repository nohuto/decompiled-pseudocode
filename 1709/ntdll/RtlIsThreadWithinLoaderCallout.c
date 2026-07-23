/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180086F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsThreadWithinLoaderCallout(void)
{
  return LdrpLoaderLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread;
}
