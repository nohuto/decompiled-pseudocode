/*
 * XREFs of AcpiDiagTraceAmliWatchdogTimeout @ 0x1C0006C5C
 * Callers:
 *     AmliWatchdogTimeoutAction @ 0x1C0042970 (AmliWatchdogTimeoutAction.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C000803C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0008068 (_TlgWrite.c)
 */

void AcpiDiagTraceAmliWatchdogTimeout()
{
  __int64 v0; // r9
  __int64 v1; // r10
  unsigned __int64 v2; // r10
  int v3; // [rsp+30h] [rbp-29h] BYREF
  int v4; // [rsp+34h] [rbp-25h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  _DWORD *v6; // [rsp+60h] [rbp+7h]
  __int64 v7; // [rsp+68h] [rbp+Fh]
  __int64 v8; // [rsp+70h] [rbp+17h]
  _DWORD v9[2]; // [rsp+78h] [rbp+1Fh] BYREF
  int *v10; // [rsp+80h] [rbp+27h]
  __int64 v11; // [rsp+88h] [rbp+2Fh]
  int *v12; // [rsp+90h] [rbp+37h]
  __int64 v13; // [rsp+98h] [rbp+3Fh]

  if ( hProvider > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      v2 = v1 - *(_QWORD *)(v0 + 456);
      v4 = AmliWatchdogTimeout;
      v6 = v9;
      v8 = *(_QWORD *)(v0 + 448);
      v9[0] = *(unsigned __int16 *)(v0 + 440);
      v10 = &v3;
      v12 = &v4;
      v3 = v2 / 0x2710;
      v7 = 2LL;
      v9[1] = 0;
      v11 = 4LL;
      v13 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C005B9E1, 0LL, (LPCGUID)v0, 6u, &pData);
    }
  }
}
