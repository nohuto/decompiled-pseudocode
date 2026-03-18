/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1400D2E10
 * Callers:
 *     PspGetRateControlSize @ 0x14050A33C (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x1405B4ABC (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
