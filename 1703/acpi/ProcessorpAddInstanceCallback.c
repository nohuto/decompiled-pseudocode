/*
 * XREFs of ProcessorpAddInstanceCallback @ 0x1C0063200
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibAcquireArbiterLock @ 0x1C0005C3C (IrqLibAcquireArbiterLock.c)
 *     ProcessorAddInstance @ 0x1C00841F0 (ProcessorAddInstance.c)
 */

void __fastcall ProcessorpAddInstanceCallback(
        PVOID CallbackContext,
        PKE_PROCESSOR_CHANGE_NOTIFY_CONTEXT ChangeContext,
        PNTSTATUS OperationStatus)
{
  if ( ChangeContext->State == KeProcessorAddCompleteNotify )
  {
    IrqLibAcquireArbiterLock(0);
    ProcessorAddInstance((unsigned int)ChangeContext[1].State, ChangeContext->NtNumber);
    KeSetEvent(Object, 0, 0);
  }
}
