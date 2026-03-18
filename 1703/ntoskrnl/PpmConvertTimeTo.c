/*
 * XREFs of PpmConvertTimeTo @ 0x140233688
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406CB0E0 (PdcPoCurrentPdcPhase.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406D52E0 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
