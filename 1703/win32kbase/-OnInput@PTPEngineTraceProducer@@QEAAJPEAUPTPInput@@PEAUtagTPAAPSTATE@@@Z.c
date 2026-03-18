/*
 * XREFs of ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C01394D0
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012BBF0 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z @ 0x1C01396C0 (-OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnInput(
        PTPEngineTraceProducer *this,
        struct PTPInput *a2,
        struct tagTPAAPSTATE *a3)
{
  const GUID *v3; // r9
  const GUID *v7; // r9
  int v8; // r10d
  _DWORD v10[4]; // [rsp+30h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  char *v12; // [rsp+60h] [rbp-39h]
  int v13; // [rsp+68h] [rbp-31h]
  int v14; // [rsp+6Ch] [rbp-2Dh]
  _DWORD *v15; // [rsp+70h] [rbp-29h]
  int v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+7Ch] [rbp-1Dh]
  int *v18; // [rsp+80h] [rbp-19h]
  int v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+8Ch] [rbp-Dh]
  struct PTPInput *v21; // [rsp+90h] [rbp-9h]
  int v22; // [rsp+98h] [rbp-1h] BYREF
  int v23; // [rsp+9Ch] [rbp+3h]
  _DWORD *v24; // [rsp+A0h] [rbp+7h]
  int v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+ACh] [rbp+13h]
  struct tagTPAAPSTATE *v27; // [rsp+B0h] [rbp+17h]
  _DWORD v28[6]; // [rsp+B8h] [rbp+1Fh] BYREF

  LODWORD(v3) = dword_1C0188840;
  if ( (unsigned int)dword_1C0188840 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v12 = (char *)this + 552;
    v15 = v10;
    v18 = &v22;
    v13 = 8;
    v10[0] = 1;
    v16 = 4;
    v19 = 2;
    v21 = a2;
    v22 = 52;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A949, 0LL, v3, 6u, &pData);
    LODWORD(v3) = dword_1C0188840;
  }
  if ( *((_DWORD *)a2 + 12) && (unsigned int)v3 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v12 = (char *)this + 552;
    v15 = v10;
    v18 = &v22;
    v21 = (struct PTPInput *)((char *)a2 + 52);
    v22 = 96 * v8;
    v13 = 8;
    v10[0] = 1;
    v16 = 4;
    v26 = 0;
    v28[1] = 0;
    v28[0] = a3 != 0LL ? 0x80 : 0;
    v19 = 2;
    v24 = v28;
    v25 = 2;
    v27 = a3;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016AAD3, 0LL, v7, 8u, &pData);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPInput *))(**((_QWORD **)this + 3) + 16LL))(
           *((_QWORD *)this + 3),
           a2);
}
