/*
 * XREFs of EtwpCoverageRecordAtHighIrql @ 0x14027AD0C
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140579114 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x14011E500 (EtwTelemetryCoverageReport.c)
 *     RtlStringCchCopyA @ 0x14011E620 (RtlStringCchCopyA.c)
 *     EtwpCoverageValidateCP @ 0x14011E708 (EtwpCoverageValidateCP.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
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
    EtwTelemetryCoverageReport(&v6);
    __writecr8(CurrentIrql);
    result = HIDWORD(v6);
    *(_DWORD *)(a1 + 12) = HIDWORD(v6);
  }
  return result;
}
