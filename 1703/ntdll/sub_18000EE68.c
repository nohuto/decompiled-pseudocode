/*
 * XREFs of sub_18000EE68 @ 0x18000EE68
 * Callers:
 *     sub_18000A534 @ 0x18000A534 (sub_18000A534.c)
 *     sub_18000C540 @ 0x18000C540 (sub_18000C540.c)
 * Callees:
 *     sub_18000EEA8 @ 0x18000EEA8 (sub_18000EEA8.c)
 */

__int64 sub_18000EE68()
{
  __int64 *v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax

  v0 = qword_180159900;
  v1 = 32LL;
  do
  {
    result = sub_18000EEA8() & 0x7F7F7F7F7F7F7F7FLL;
    *v0++ = result;
    --v1;
  }
  while ( v1 );
  return result;
}
