/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x140078030
 * Callers:
 *     PopFxAddLogEntry @ 0x140077F7C (PopFxAddLogEntry.c)
 *     KeQueryWakeSource @ 0x140240D5C (KeQueryWakeSource.c)
 *     KiInterruptDispatchCommon @ 0x1402491BC (KiInterruptDispatchCommon.c)
 *     RtlpHpLfhBucketAllocate @ 0x14029972C (RtlpHpLfhBucketAllocate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140299C08 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     KiCopyCountersWorker @ 0x1407425C8 (KiCopyCountersWorker.c)
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
