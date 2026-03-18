/*
 * XREFs of ?OnEngineOutput@PTPEngineTraceProducer@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C013C880
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PTPEngineTraceProducer::OnEngineOutput(PTPEngineTraceProducer *this, const struct PTPEngineOutput *a2)
{
  unsigned int v2; // r10d
  const GUID *v5; // r9
  const GUID *v6; // r9
  _DWORD v7[4]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  _DWORD *v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  int *v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]
  const struct PTPEngineOutput *v18; // [rsp+90h] [rbp+37h]
  int v19; // [rsp+98h] [rbp+3Fh] BYREF
  int v20; // [rsp+9Ch] [rbp+43h]

  v2 = dword_1C019EBC0;
  if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 5uLL) )
  {
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v9 = (char *)this + 560;
    v12 = v7;
    v15 = &v19;
    v10 = 8;
    v7[0] = 1;
    v13 = 4;
    v16 = 2;
    v18 = a2;
    v19 = 24;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C01790BD, 0LL, v5, 6u, &pData);
    v2 = dword_1C019EBC0;
  }
  if ( *((_DWORD *)a2 + 5) && v2 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 5uLL) )
  {
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v9 = (char *)this + 560;
    v12 = v7;
    v15 = &v19;
    v18 = (const struct PTPEngineOutput *)((char *)a2 + 24);
    v20 = 0;
    v19 = 96 * (_DWORD)v6;
    v10 = 8;
    v7[0] = 1;
    v13 = 4;
    v16 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C017907B, 0LL, v6, 6u, &pData);
  }
  (***((void (__fastcall ****)(_QWORD, const struct PTPEngineOutput *))this + 2))(*((_QWORD *)this + 2), a2);
}
