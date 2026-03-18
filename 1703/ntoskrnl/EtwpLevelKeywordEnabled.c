/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1400F2C40
 * Callers:
 *     PpmCheckRun @ 0x140045590 (PpmCheckRun.c)
 *     PpmPerfSelectProcessorState @ 0x1400461B0 (PpmPerfSelectProcessorState.c)
 *     PpmPerfRecordUtility @ 0x140046730 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140046970 (PpmParkRecordNodeStatistics.c)
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     PpmCheckStart @ 0x14006F670 (PpmCheckStart.c)
 *     EtwProviderEnabled @ 0x14007D750 (EtwProviderEnabled.c)
 *     EtwpEventWriteFull @ 0x140085400 (EtwpEventWriteFull.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     PpmPerfAction @ 0x1400F2880 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x1400F3250 (PpmCheckSnapAllDeliveredPerformance.c)
 *     EtwpFailLogging @ 0x1401319A4 (EtwpFailLogging.c)
 *     EtwWriteString @ 0x140252970 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x140253D84 (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x1404F0990 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpLevelKeywordEnabled(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v3; // al
  bool result; // al

  result = *(_DWORD *)a1
        && ((v3 = *(_BYTE *)(a1 + 4), a2 <= v3) || !v3)
        && ((*(_DWORD *)(a1 + 8) & 0x40) != 0 && !a3
         || (*(_QWORD *)(a1 + 16) & a3) != 0 && (a3 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24));
  return result;
}
