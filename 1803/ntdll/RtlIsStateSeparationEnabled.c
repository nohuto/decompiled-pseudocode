/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x180081700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return (MEMORY[0x7FFE02F0] & 0x400) != 0;
}
