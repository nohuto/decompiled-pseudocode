/*
 * XREFs of EtwpCoverageValidateCP @ 0x1400C3100
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x1402ADEDC (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageRecord @ 0x14056F594 (EtwpCoverageRecord.c)
 *     EtwpCoverageCheckCP @ 0x1407A6BE8 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageResetCP @ 0x1407A6F68 (EtwpCoverageResetCP.c)
 * Callees:
 *     TelemetryCoverageValidateName @ 0x1400C3158 (TelemetryCoverageValidateName.c)
 *     TelemetryCoverageStringHashInternal @ 0x1400C31C0 (TelemetryCoverageStringHashInternal.c)
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
