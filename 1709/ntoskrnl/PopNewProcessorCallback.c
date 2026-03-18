/*
 * XREFs of PopNewProcessorCallback @ 0x1406F4CF0
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckInitProcessors @ 0x1405B5958 (PpmCheckInitProcessors.c)
 *     PpmIdleRegisterDefaultStates @ 0x1405B8098 (PpmIdleRegisterDefaultStates.c)
 *     PpmEnableWmiInterface @ 0x1405E1624 (PpmEnableWmiInterface.c)
 *     PopCheckSkipTick @ 0x1405F2044 (PopCheckSkipTick.c)
 */

void __fastcall PopNewProcessorCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    if ( !PoSkipTickMode && PopSkipTickPolicy == 1 )
      PoSkipTickMode = !PopCheckSkipTick();
    PpmCheckInitProcessors(0);
    PpmEnableWmiInterface();
    PpmIdleRegisterDefaultStates();
  }
}
