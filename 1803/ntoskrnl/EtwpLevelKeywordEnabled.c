/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x1401093F0
 * Callers:
 *     PpmPerfSelectProcessorState @ 0x140037040 (PpmPerfSelectProcessorState.c)
 *     PpmPerfRecordUtility @ 0x1400374B0 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x1400376E0 (PpmParkRecordNodeStatistics.c)
 *     EtwProviderEnabled @ 0x140062600 (EtwProviderEnabled.c)
 *     EtwpFailLogging @ 0x1400CF814 (EtwpFailLogging.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     PpmPerfSnapDeliveredPerformance @ 0x140109130 (PpmPerfSnapDeliveredPerformance.c)
 *     KiIntSteerEtwEventEnabled @ 0x1401093A0 (KiIntSteerEtwEventEnabled.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140109AF0 (PpmCheckSnapAllDeliveredPerformance.c)
 *     EtwWriteString @ 0x1402AD080 (EtwWriteString.c)
 *     EtwpDiskProvTraceDisk @ 0x1402AF660 (EtwpDiskProvTraceDisk.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
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
