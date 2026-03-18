/*
 * XREFs of ?OnTelemetryOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C013CD40
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PTPEngineTraceProducer::OnTelemetryOutput(
        PTPEngineTraceProducer *this,
        const struct PTPTelemetryOutput *a2)
{
  const GUID *v4; // r9
  int v5; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v7; // [rsp+60h] [rbp+7h]
  __int64 v8; // [rsp+68h] [rbp+Fh]
  int *v9; // [rsp+70h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  __int64 *v11; // [rsp+80h] [rbp+27h]
  __int64 v12; // [rsp+88h] [rbp+2Fh]
  const struct PTPTelemetryOutput *v13; // [rsp+90h] [rbp+37h]
  __int64 v14; // [rsp+98h] [rbp+3Fh] BYREF

  if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 9uLL) )
  {
    v8 = 8LL;
    v7 = (char *)this + 560;
    v9 = &v5;
    v11 = &v14;
    v5 = 1;
    v10 = 4LL;
    v12 = 2LL;
    v13 = a2;
    v14 = 32LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178F70, 0LL, v4, 6u, &pData);
  }
  (*(void (__fastcall **)(_QWORD, const struct PTPTelemetryOutput *))(**((_QWORD **)this + 2) + 8LL))(
    *((_QWORD *)this + 2),
    a2);
}
