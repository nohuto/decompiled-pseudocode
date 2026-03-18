/*
 * XREFs of EtwpCoverageValidateCP @ 0x14011E708
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x14027AD0C (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageRecord @ 0x140579384 (EtwpCoverageRecord.c)
 *     EtwpCoverageCheckCP @ 0x140744ED4 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x140745254 (EtwpCoverageResetCP.c)
 * Callees:
 *     TelemetryCoverageValidateName @ 0x14011E760 (TelemetryCoverageValidateName.c)
 *     TelemetryCoverageStringHashInternal @ 0x14011E7C8 (TelemetryCoverageStringHashInternal.c)
 */

__int64 __fastcall EtwpCoverageValidateCP(__int64 a1, _DWORD *a2)
{
  __int64 v4; // r11
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)TelemetryCoverageStringHashInternal(*(_QWORD *)a1, &v6) == *(_DWORD *)(a1 + 8)
    && (unsigned int)TelemetryCoverageValidateName(v4) )
  {
    *a2 = v6;
    return 1LL;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = -1;
    return 0LL;
  }
}
