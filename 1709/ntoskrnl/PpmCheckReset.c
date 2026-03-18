/*
 * XREFs of PpmCheckReset @ 0x140153090
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1401530A8 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(int a1)
{
  PpmResetPerfTimes(a1);
  return 0LL;
}
