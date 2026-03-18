/*
 * XREFs of KeGetSchedulingGroupSize @ 0x1400A6DD8
 * Callers:
 *     PspGetRateControlSize @ 0x140552260 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x14060A7FC (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
