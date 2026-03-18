/*
 * XREFs of KeQueryMaximumProcessorCount @ 0x1401FDF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG KeQueryMaximumProcessorCount(void)
{
  return KeQueryMaximumProcessorCountEx(0);
}
