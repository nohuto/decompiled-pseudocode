/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x1402419C0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 */

ULONG __noreturn KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
