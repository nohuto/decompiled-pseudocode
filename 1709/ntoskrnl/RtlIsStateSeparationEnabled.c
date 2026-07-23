/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x1405C4F10
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x400) != 0;
}
