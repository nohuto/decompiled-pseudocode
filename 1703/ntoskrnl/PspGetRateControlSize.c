/*
 * XREFs of PspGetRateControlSize @ 0x1404372B4
 * Callers:
 *     PspFreeRateControl @ 0x1404371D4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140437220 (PspAllocateRateControl.c)
 * Callees:
 *     KeGetSchedulingGroupSize @ 0x14001C870 (KeGetSchedulingGroupSize.c)
 */

__int64 __fastcall PspGetRateControlSize(int a1)
{
  if ( a1 )
    return (unsigned int)KeGetSchedulingGroupSize() + 128;
  else
    return 72LL;
}
