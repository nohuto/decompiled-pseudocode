/*
 * XREFs of PspGetRateControlSize @ 0x140552260
 * Callers:
 *     PspFreeRateControl @ 0x140552180 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1405521CC (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1400A6DD8 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
