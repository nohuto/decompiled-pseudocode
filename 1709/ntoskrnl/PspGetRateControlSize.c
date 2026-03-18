/*
 * XREFs of PspGetRateControlSize @ 0x14050A33C
 * Callers:
 *     PspFreeRateControl @ 0x14050A25C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14050A2A8 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x1400D2E10 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
