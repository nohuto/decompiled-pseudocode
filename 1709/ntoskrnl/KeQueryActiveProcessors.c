/*
 * XREFs of KeQueryActiveProcessors @ 0x140204120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KAFFINITY KeQueryActiveProcessors(void)
{
  return qword_140401408[0];
}
