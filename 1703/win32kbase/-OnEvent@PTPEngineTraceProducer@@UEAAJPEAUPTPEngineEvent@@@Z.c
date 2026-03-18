/*
 * XREFs of ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C01393E0
 * Callers:
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C012C7B0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnEvent(PTPEngineTraceProducer *this, struct PTPEngineEvent *a2)
{
  int v4; // edx
  const GUID *v5; // r9
  int v7; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  char *v9; // [rsp+60h] [rbp-9h]
  __int64 v10; // [rsp+68h] [rbp-1h]
  int *v11; // [rsp+70h] [rbp+7h]
  __int64 v12; // [rsp+78h] [rbp+Fh]
  __int64 *v13; // [rsp+80h] [rbp+17h]
  __int64 v14; // [rsp+88h] [rbp+1Fh]
  struct PTPEngineEvent *v15; // [rsp+90h] [rbp+27h]
  __int64 v16; // [rsp+98h] [rbp+2Fh] BYREF

  if ( (unsigned int)dword_1C0188840 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
  {
    v10 = 8LL;
    v9 = (char *)this + 552;
    v11 = &v7;
    v13 = &v16;
    v7 = v4;
    v12 = 4LL;
    v14 = 2LL;
    v15 = a2;
    v16 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016ABDA, 0LL, v5, 6u, &pData);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPEngineEvent *))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           a2);
}
