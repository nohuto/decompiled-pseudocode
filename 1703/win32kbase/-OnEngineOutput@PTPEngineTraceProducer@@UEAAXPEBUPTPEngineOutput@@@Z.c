/*
 * XREFs of ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C0139230
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PTPEngineTraceProducer::OnEngineOutput(PTPEngineTraceProducer *this, const struct PTPEngineOutput *a2)
{
  const GUID *v2; // r9
  const GUID *v5; // r9
  int v6; // r10d
  _DWORD v7[4]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  char *v9; // [rsp+60h] [rbp-19h]
  int v10; // [rsp+68h] [rbp-11h]
  int v11; // [rsp+6Ch] [rbp-Dh]
  _DWORD *v12; // [rsp+70h] [rbp-9h]
  int v13; // [rsp+78h] [rbp-1h]
  int v14; // [rsp+7Ch] [rbp+3h]
  int *v15; // [rsp+80h] [rbp+7h]
  int v16; // [rsp+88h] [rbp+Fh]
  int v17; // [rsp+8Ch] [rbp+13h]
  const struct PTPEngineOutput *v18; // [rsp+90h] [rbp+17h]
  int v19; // [rsp+98h] [rbp+1Fh] BYREF
  int v20; // [rsp+9Ch] [rbp+23h]

  LODWORD(v2) = dword_1C0188840;
  if ( (unsigned int)dword_1C0188840 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
  {
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v9 = (char *)this + 536;
    v12 = v7;
    v15 = &v19;
    v10 = 8;
    v7[0] = 1;
    v13 = 4;
    v16 = 2;
    v18 = a2;
    v19 = 24;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016AB62, 0LL, v2, 6u, &pData);
    LODWORD(v2) = dword_1C0188840;
  }
  if ( *((_DWORD *)a2 + 5) && (unsigned int)v2 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
  {
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v9 = (char *)this + 536;
    v12 = v7;
    v15 = &v19;
    v18 = (const struct PTPEngineOutput *)((char *)a2 + 24);
    v20 = 0;
    v19 = 96 * v6;
    v10 = 8;
    v7[0] = 1;
    v13 = 4;
    v16 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016AB20, 0LL, v5, 6u, &pData);
  }
  (***((void (__fastcall ****)(_QWORD, const struct PTPEngineOutput *))this + 2))(*((_QWORD *)this + 2), a2);
}
