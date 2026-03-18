/*
 * XREFs of PpmCheckReset @ 0x1401865D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x14016CE7C (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  return 0LL;
}
