/*
 * XREFs of PpmConvertTimeTo @ 0x1402489FC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406FF060 (PdcPoCurrentPdcPhase.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14070AC40 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     PpmConvertTime @ 0x14008D4CC (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
