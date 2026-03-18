/*
 * XREFs of HvlpEtwRegister @ 0x1401EB18C
 * Callers:
 *     HvlPhase2Initialize @ 0x140168040 (HvlPhase2Initialize.c)
 * Callees:
 *     EtwRegister @ 0x140589230 (EtwRegister.c)
 */

NTSTATUS HvlpEtwRegister()
{
  EtwRegister(&HvlGlobalSystemEventsGuid, 0LL, 0LL, &HvlGlobalSystemEventsHandle);
  return EtwSetInformation(
           HvlGlobalSystemEventsHandle,
           EventProviderSetTraits,
           &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
           (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
}
