/*
 * XREFs of ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C013CB38
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0125D88 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z @ 0x1C013CD20 (-OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnInput(
        PTPEngineTraceProducer *this,
        struct PTPInput *a2,
        struct tagTPAAPSTATE *a3)
{
  unsigned int v3; // r10d
  const GUID *v6; // r9
  const GUID *v7; // r9
  _DWORD v9[4]; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  char *v11; // [rsp+60h] [rbp-29h]
  int v12; // [rsp+68h] [rbp-21h]
  int v13; // [rsp+6Ch] [rbp-1Dh]
  _DWORD *v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+7Ch] [rbp-Dh]
  int *v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+88h] [rbp-1h]
  int v19; // [rsp+8Ch] [rbp+3h]
  struct PTPInput *v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+98h] [rbp+Fh] BYREF
  int v22; // [rsp+9Ch] [rbp+13h]
  _DWORD *v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A8h] [rbp+1Fh]
  int v25; // [rsp+ACh] [rbp+23h]
  const GUID *v26; // [rsp+B0h] [rbp+27h]
  _DWORD v27[2]; // [rsp+B8h] [rbp+2Fh] BYREF

  v3 = dword_1C019EBC0;
  if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 3uLL) )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v11 = (char *)this + 576;
    v14 = v9;
    v17 = &v21;
    v12 = 8;
    v9[0] = 3;
    v15 = 4;
    v25 = 0;
    v27[1] = 0;
    v27[0] = v6 != 0LL ? 0x80 : 0;
    v18 = 2;
    v20 = a2;
    v21 = 52;
    v23 = v27;
    v24 = 2;
    v26 = v6;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178EA4, 0LL, v6, 8u, &pData);
    v3 = dword_1C019EBC0;
  }
  if ( *((_DWORD *)a2 + 12) && v3 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 3uLL) )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v11 = (char *)this + 576;
    v14 = v9;
    v17 = &v21;
    v20 = (struct PTPInput *)((char *)a2 + 52);
    v22 = 0;
    v21 = 96 * (_DWORD)v7;
    v12 = 8;
    v9[0] = 3;
    v15 = 4;
    v18 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C017903A, 0LL, v7, 6u, &pData);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPInput *, struct tagTPAAPSTATE *))(**((_QWORD **)this + 3) + 16LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
