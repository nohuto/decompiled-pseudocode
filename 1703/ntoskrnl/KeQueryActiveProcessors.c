/*
 * XREFs of KeQueryActiveProcessors @ 0x1401FDF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_1403E42B8[0];
}
