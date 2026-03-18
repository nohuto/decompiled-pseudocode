/*
 * XREFs of PpmCheckPeriodicStart @ 0x140036130
 * Callers:
 *     <none>
 * Callees:
 *     PpmCheckStart @ 0x1400356C0 (PpmCheckStart.c)
 *     PpmEventTraceFailedPerfCheckStart @ 0x1400D0C8C (PpmEventTraceFailedPerfCheckStart.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

BOOLEAN __fastcall PpmCheckPeriodicStart(__int64 a1, __int64 a2, int a3)
{
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-18h] BYREF

  Timeout.QuadPart = 0LL;
  if ( KeWaitForSingleObject(&word_1403AA788, Executive, 0, 0, &Timeout) )
    return PpmEventTraceFailedPerfCheckStart(PpmCheckLastExecutionTime);
  PpmCheckMakeupCount = a3;
  return PpmCheckStart(0);
}
