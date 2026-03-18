/*
 * XREFs of ?OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01396D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PTPEngineTraceProducer::OnTelemetryOutput(
        PTPEngineTraceProducer *this,
        const struct PTPTelemetryOutput *a2)
{
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  char *v7; // [rsp+60h] [rbp-9h]
  __int64 v8; // [rsp+68h] [rbp-1h]
  int *v9; // [rsp+70h] [rbp+7h]
  __int64 v10; // [rsp+78h] [rbp+Fh]
  __int64 *v11; // [rsp+80h] [rbp+17h]
  __int64 v12; // [rsp+88h] [rbp+1Fh]
  const struct PTPTelemetryOutput *v13; // [rsp+90h] [rbp+27h]
  __int64 v14; // [rsp+98h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_1C0188840 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
  {
    v8 = 8LL;
    v7 = (char *)this + 536;
    v9 = &v5;
    v11 = &v14;
    v5 = (int)v4;
    v10 = 4LL;
    v12 = 2LL;
    v13 = a2;
    v14 = 32LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016AA09, 0LL, v4, 6u, &pData);
  }
  (*(void (__fastcall **)(_QWORD, const struct PTPTelemetryOutput *))(**((_QWORD **)this + 2) + 8LL))(
    *((_QWORD *)this + 2),
    a2);
}
