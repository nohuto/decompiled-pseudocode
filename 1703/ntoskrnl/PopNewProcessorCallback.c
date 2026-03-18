/*
 * XREFs of PopNewProcessorCallback @ 0x1406C51D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmEnableWmiInterface @ 0x14059FC64 (PpmEnableWmiInterface.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405A80EC (PpmIdleRegisterDefaultStates.c)
 *     PpmCheckInitProcessors @ 0x1405BFD98 (PpmCheckInitProcessors.c)
 *     PopCheckSkipTick @ 0x1405D5B10 (PopCheckSkipTick.c)
 */

void __fastcall PopNewProcessorCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    if ( !PoSkipTickMode && PopSkipTickPolicy == 1 && !PopCheckSkipTick() )
      PoSkipTickMode = 2 - (PoAllowOpportunisticTickSkipping != 0);
    PpmCheckInitProcessors(0);
    PpmEnableWmiInterface();
    PpmIdleRegisterDefaultStates();
  }
}
