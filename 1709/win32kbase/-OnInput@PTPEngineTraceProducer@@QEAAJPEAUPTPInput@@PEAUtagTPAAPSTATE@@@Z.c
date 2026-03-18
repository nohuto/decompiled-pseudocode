/*
 * XREFs of ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C0138808
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C012B348 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z @ 0x1C01389F0 (-OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnInput(
        PTPEngineTraceProducer *this,
        struct PTPInput *a2,
        struct tagTPAAPSTATE *a3)
{
  unsigned int v3; // r10d
  const GUID *v6; // r9
  int v7; // edx
  const GUID *v8; // r9
  _DWORD v10[4]; // [rsp+30h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  char *v12; // [rsp+60h] [rbp-19h]
  int v13; // [rsp+68h] [rbp-11h]
  int v14; // [rsp+6Ch] [rbp-Dh]
  _DWORD *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  int *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  struct PTPInput *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh] BYREF
  int v23; // [rsp+9Ch] [rbp+23h]
  _DWORD *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]
  const GUID *v27; // [rsp+B0h] [rbp+37h]
  _DWORD v28[2]; // [rsp+B8h] [rbp+3Fh] BYREF

  v3 = dword_1C018D230;
  if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 3uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v12 = (char *)this + 576;
    v15 = v10;
    v18 = &v22;
    v13 = 8;
    v10[0] = 2;
    v16 = 4;
    v26 = 0;
    v28[1] = 0;
    v28[0] = v6 != 0LL ? 0x80 : 0;
    v19 = 2;
    v21 = a2;
    v22 = 52;
    v24 = v28;
    v25 = 2;
    v27 = v6;
    TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016AC49, 0LL, v6, 8u, &pData);
    v3 = dword_1C018D230;
  }
  if ( *((_DWORD *)a2 + 12) && v3 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 3uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v12 = (char *)this + 576;
    v15 = v10;
    v18 = &v22;
    v21 = (struct PTPInput *)((char *)a2 + 52);
    v23 = 0;
    v22 = 96 * (_DWORD)v8;
    v13 = 8;
    v10[0] = v7;
    v16 = 4;
    v19 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016ADDF, 0LL, v8, 6u, &pData);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPInput *, struct tagTPAAPSTATE *))(**((_QWORD **)this + 3) + 16LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
