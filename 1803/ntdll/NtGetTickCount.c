/*
 * XREFs of NtGetTickCount @ 0x1800DF580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 NtGetTickCount()
{
  return (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
}
