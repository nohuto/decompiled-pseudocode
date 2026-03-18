/*
 * XREFs of ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C013CA40
 * Callers:
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0127380 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnEvent(PTPEngineTraceProducer *this, struct PTPEngineEvent *a2)
{
  const GUID *v4; // r9
  int v6; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  char *v8; // [rsp+60h] [rbp+7h]
  __int64 v9; // [rsp+68h] [rbp+Fh]
  int *v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  __int64 *v12; // [rsp+80h] [rbp+27h]
  __int64 v13; // [rsp+88h] [rbp+2Fh]
  struct PTPEngineEvent *v14; // [rsp+90h] [rbp+37h]
  __int64 v15; // [rsp+98h] [rbp+3Fh] BYREF

  if ( dword_1C019EBC0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 3uLL) )
  {
    v9 = 8LL;
    v8 = (char *)this + 576;
    v10 = &v6;
    v12 = &v15;
    v6 = 1;
    v11 = 4LL;
    v13 = 2LL;
    v14 = a2;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0179135, 0LL, v4, 6u, &pData);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPEngineEvent *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           a2);
}
