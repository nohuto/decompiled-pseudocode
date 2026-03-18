/*
 * XREFs of ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C0139860
 * Callers:
 *     _lambda_31a9479bdf43f1457bc87359a481f8f6_::_lambda_invoker_cdecl_ @ 0x1C012ACF0 (_lambda_31a9479bdf43f1457bc87359a481f8f6_--_lambda_invoker_cdecl_.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C01397D0 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall PTPEngineTraceProducer::TraceEnvironment(PTPEngineTraceProducer *this, const struct PTPEnvironment *a2)
{
  const GUID *v4; // r9
  const GUID *v5; // r9
  const GUID *v6; // r9
  const GUID *v7; // r9
  const GUID *v8; // r9
  _DWORD v9[4]; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  char *v11; // [rsp+68h] [rbp-29h]
  __int64 v12; // [rsp+70h] [rbp-21h]
  _DWORD *v13; // [rsp+78h] [rbp-19h]
  __int64 v14; // [rsp+80h] [rbp-11h]
  _QWORD *v15; // [rsp+88h] [rbp-9h]
  __int64 v16; // [rsp+90h] [rbp-1h]
  const struct PTPEnvironment *v17; // [rsp+98h] [rbp+7h]
  _QWORD v18[3]; // [rsp+A0h] [rbp+Fh] BYREF

  if ( (unsigned int)dword_1C0188840 > 5 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
    {
      v12 = 8LL;
      v11 = (char *)this + 552;
      v13 = v9;
      v15 = v18;
      v17 = (const struct PTPEnvironment *)((char *)a2 + 416);
      v9[0] = 1;
      v14 = 4LL;
      v16 = 2LL;
      v18[0] = 96LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016AB9D, 0LL, v4, 6u, &pData);
      LODWORD(v4) = dword_1C0188840;
    }
    if ( (unsigned int)v4 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
      {
        v12 = 8LL;
        v11 = (char *)this + 552;
        v13 = v9;
        v15 = v18;
        v17 = (const struct PTPEnvironment *)((char *)a2 + 388);
        v9[0] = 1;
        v14 = 4LL;
        v16 = 2LL;
        v18[0] = 28LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016AA8B, 0LL, v5, 6u, &pData);
        LODWORD(v5) = dword_1C0188840;
      }
      if ( (unsigned int)v5 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
        {
          v12 = 8LL;
          v11 = (char *)this + 552;
          v13 = v9;
          v15 = v18;
          v9[0] = 1;
          v14 = 4LL;
          v16 = 2LL;
          v17 = a2;
          v18[0] = 92LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A983, 0LL, v6, 6u, &pData);
          LODWORD(v6) = dword_1C0188840;
        }
        if ( (unsigned int)v6 > 5 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
          {
            v12 = 8LL;
            v11 = (char *)this + 552;
            v13 = v9;
            v15 = v18;
            v17 = (const struct PTPEnvironment *)((char *)a2 + 364);
            v9[0] = 1;
            v14 = 4LL;
            v16 = 2LL;
            v18[0] = 24LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A9C5, 0LL, v7, 6u, &pData);
            LODWORD(v7) = dword_1C0188840;
          }
          if ( (unsigned int)v7 > 5 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 1uLL) )
            {
              v12 = 8LL;
              v11 = (char *)this + 552;
              v13 = v9;
              v15 = v18;
              v17 = (const struct PTPEnvironment *)((char *)a2 + 92);
              v9[0] = 2;
              v14 = 4LL;
              v16 = 2LL;
              v18[0] = 272LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016AA47, 0LL, v8, 6u, &pData);
            }
          }
        }
      }
    }
  }
}
