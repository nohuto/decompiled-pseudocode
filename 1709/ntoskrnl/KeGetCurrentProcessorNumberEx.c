/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1400FDF40
 * Callers:
 *     PopFxAddLogEntry @ 0x1400FDE88 (PopFxAddLogEntry.c)
 *     KiInterruptDispatchCommon @ 0x14020AE24 (KiInterruptDispatchCommon.c)
 *     KiCopyCountersWorker @ 0x1406D8898 (KiCopyCountersWorker.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = CurrentPrcb->Group;
    *(_WORD *)&ProcNumber->Number = CurrentPrcb->GroupIndex;
  }
  return CurrentPrcb->Number;
}
