/*
 * XREFs of KeGetSchedulingGroupSize @ 0x14001C870
 * Callers:
 *     PspGetRateControlSize @ 0x1404372B4 (PspGetRateControlSize.c)
 *     MiSessionObjectCreate @ 0x14057E230 (MiSessionObjectCreate.c)
 * Callees:
 *     <none>
 */

__int64 KeGetSchedulingGroupSize()
{
  return (unsigned int)(424 * KeMaximumProcessors + 128);
}
