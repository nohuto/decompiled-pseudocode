/*
 * XREFs of PopNewProcessorCallback @ 0x14075D060
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleRegisterDefaultStates @ 0x14062769C (PpmIdleRegisterDefaultStates.c)
 *     PpmEnableWmiInterface @ 0x1406287CC (PpmEnableWmiInterface.c)
 *     PpmCheckInitProcessors @ 0x14063F434 (PpmCheckInitProcessors.c)
 *     PopCheckSkipTick @ 0x140655AD8 (PopCheckSkipTick.c)
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
