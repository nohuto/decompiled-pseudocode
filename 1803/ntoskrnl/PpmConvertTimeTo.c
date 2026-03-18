/*
 * XREFs of PpmConvertTimeTo @ 0x14027EA84
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140764990 (PdcPoCurrentPdcPhase.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14076E360 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     PpmConvertTime @ 0x14003884C (PpmConvertTime.c)
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
