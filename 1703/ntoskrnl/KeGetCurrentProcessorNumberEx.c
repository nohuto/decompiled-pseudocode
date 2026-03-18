/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140069950
 * Callers:
 *     PopFxAddLogEntry @ 0x140069898 (PopFxAddLogEntry.c)
 *     KiInterruptDispatchCommon @ 0x140204C2C (KiInterruptDispatchCommon.c)
 *     KiCopyCountersWorker @ 0x1406AD448 (KiCopyCountersWorker.c)
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
