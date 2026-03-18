/*
 * XREFs of KeQueryActiveProcessors @ 0x14015F3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_14044C5D8[0];
}
