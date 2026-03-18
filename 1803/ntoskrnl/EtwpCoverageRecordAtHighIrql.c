/*
 * XREFs of EtwpCoverageRecordAtHighIrql @ 0x1402ADEDC
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x14056F324 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     EtwpCoverageValidateCP @ 0x1400C3100 (EtwpCoverageValidateCP.c)
 *     RtlStringCchCopyA @ 0x1400C324C (RtlStringCchCopyA.c)
 *     EtwTelemetryCoverageReport @ 0x14014D4B0 (EtwTelemetryCoverageReport.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpCoverageRecordAtHighIrql(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8
  unsigned __int8 CurrentIrql; // bl
  int v5; // [rsp+20h] [rbp-78h] BYREF
  __int128 v6; // [rsp+28h] [rbp-70h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h]
  char pszDest[64]; // [rsp+40h] [rbp-58h] BYREF

  result = EtwpCoverageValidateCP(a1, &v5);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v6 = *(_OWORD *)a1;
    v7 = v3;
    RtlStringCchCopyA(pszDest, 0x40uLL, (NTSTRSAFE_PCSTR)v6);
    HIDWORD(v6) = 0;
    *(_QWORD *)&v6 = pszDest;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    EtwTelemetryCoverageReport((__int64)&v6);
    __writecr8(CurrentIrql);
    result = HIDWORD(v6);
    *(_DWORD *)(a1 + 12) = HIDWORD(v6);
  }
  return result;
}
