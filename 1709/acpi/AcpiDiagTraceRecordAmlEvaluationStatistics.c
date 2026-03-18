/*
 * XREFs of AcpiDiagTraceRecordAmlEvaluationStatistics @ 0x1C0041B08
 * Callers:
 *     FreeContext @ 0x1C005FFB8 (FreeContext.c)
 * Callees:
 *     _TlgWrite @ 0x1C00253BC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0025458 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 */

BOOLEAN __fastcall AcpiDiagTraceRecordAmlEvaluationStatistics(__int64 a1)
{
  __int64 v1; // r8
  BOOLEAN result; // al
  const GUID *v3; // r8
  const GUID *v4; // r9
  __int64 v5; // r10
  int v6; // r11d
  int v7; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v9; // [rsp+60h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+1Fh]
  __int64 v11; // [rsp+70h] [rbp+27h]
  _DWORD v12[2]; // [rsp+78h] [rbp+2Fh] BYREF
  int *v13; // [rsp+80h] [rbp+37h]
  __int64 v14; // [rsp+88h] [rbp+3Fh]

  v1 = *(_QWORD *)(a1 + 456);
  result = 75 * (MEMORY[0xFFFFF78000000008] - v1);
  if ( v1 && (unsigned int)((MEMORY[0xFFFFF78000000008] - v1) / 0x2710uLL) >= 0x3E8 && hProvider > 5u )
  {
    result = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL);
    if ( result )
    {
      v7 = (int)v4;
      v9 = v12;
      v11 = *(_QWORD *)(v5 + 448);
      v12[0] = *(unsigned __int16 *)(v5 + 440);
      v13 = &v7;
      v10 = 2LL;
      v12[1] = v6;
      v14 = 4LL;
      return TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C006A000, v3, v4, 5u, &pData);
    }
  }
  return result;
}
