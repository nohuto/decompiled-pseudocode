/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1400956B0
 * Callers:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     PpmPerfSelectProcessorState @ 0x140090780 (PpmPerfSelectProcessorState.c)
 *     PpmPerfRecordUtility @ 0x140091890 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140093020 (PpmParkRecordNodeStatistics.c)
 *     KiIntSteerEtwEventEnabled @ 0x140093280 (KiIntSteerEtwEventEnabled.c)
 *     PpmPerfAction @ 0x1400953A0 (PpmPerfAction.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140095700 (PpmCheckSnapAllDeliveredPerformance.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     EtwProviderEnabled @ 0x1400A6800 (EtwProviderEnabled.c)
 *     EtwWriteString @ 0x14027A0D0 (EtwWriteString.c)
 *     EtwpFailLogging @ 0x14027A444 (EtwpFailLogging.c)
 *     EtwpDiskProvTraceDisk @ 0x14027BB3C (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x1404CC5B0 (EtwpWriteUserEvent.c)
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
