/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x140491090
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     PpDevCfgInit @ 0x1408B341C (PpDevCfgInit.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x400) != 0;
}
