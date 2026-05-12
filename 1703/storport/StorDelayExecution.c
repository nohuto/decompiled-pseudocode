/*
 * XREFs of StorDelayExecution @ 0x1C001EBC4
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B3F0 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDelayExecution(ULONG a1)
{
  union _LARGE_INTEGER Interval; // [rsp+38h] [rbp+10h] BYREF

  if ( KeGetCurrentIrql() >= 2u )
  {
    KeStallExecutionProcessor(a1);
  }
  else
  {
    Interval.QuadPart = -10LL * a1;
    KeDelayExecutionThread(0, 0, &Interval);
  }
}
