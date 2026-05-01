/*
 * XREFs of ?HandleViewCreationFailure_@CAppManagerTelemetry@@QEAAXPEBG_KJJ@Z @ 0x18009CB18
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x18009C890 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18005BFD8 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

void __fastcall CAppManagerTelemetry::HandleViewCreationFailure_(
        CAppManagerTelemetry *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        int a5)
{
  const struct _TlgProvider_t *v7; // rax
  TraceLoggingHProvider v8; // r10
  int v9; // [rsp+38h] [rbp-31h] BYREF
  int v10; // [rsp+3Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-1h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+Fh]
  __int64 v14; // [rsp+80h] [rbp+17h]
  int *v15; // [rsp+88h] [rbp+1Fh]
  __int64 v16; // [rsp+90h] [rbp+27h]
  int *v17; // [rsp+98h] [rbp+2Fh]
  __int64 v18; // [rsp+A0h] [rbp+37h]
  __int64 v19; // [rsp+D8h] [rbp+6Fh] BYREF

  v19 = a3;
  v7 = CAppManagerLogging::Provider();
  if ( *(_DWORD *)v7 > 5u )
  {
    if ( TlgKeywordOn(v7, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, a2);
      v14 = 8LL;
      v15 = &v9;
      v10 = a5;
      v17 = &v10;
      v13 = &v19;
      v9 = a4;
      v16 = 4LL;
      v18 = 4LL;
      TlgWrite(v8, &unk_180385F26, 0LL, 0LL, 6u, &pData);
    }
  }
}
