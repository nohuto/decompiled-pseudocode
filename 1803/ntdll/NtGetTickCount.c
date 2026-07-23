/*
 * XREFs of NtGetTickCount @ 0x1800DF580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NtGetTickCount(void)
{
  return (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
}
