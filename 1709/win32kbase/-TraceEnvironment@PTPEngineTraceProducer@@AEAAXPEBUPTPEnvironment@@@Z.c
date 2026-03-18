/*
 * XREFs of ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C0138BB0
 * Callers:
 *     _lambda_31a9479bdf43f1457bc87359a481f8f6_::_lambda_invoker_cdecl_ @ 0x1C012A440 (_lambda_31a9479bdf43f1457bc87359a481f8f6_--_lambda_invoker_cdecl_.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C0138B10 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall PTPEngineTraceProducer::TraceEnvironment(PTPEngineTraceProducer *this, const struct PTPEnvironment *a2)
{
  const GUID *v4; // r9
  const GUID *v5; // r9
  const GUID *v6; // r9
  const GUID *v7; // r9
  const GUID *v8; // r9
  _DWORD v9[4]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  char *v11; // [rsp+68h] [rbp-19h]
  __int64 v12; // [rsp+70h] [rbp-11h]
  _DWORD *v13; // [rsp+78h] [rbp-9h]
  __int64 v14; // [rsp+80h] [rbp-1h]
  __int64 *v15; // [rsp+88h] [rbp+7h]
  __int64 v16; // [rsp+90h] [rbp+Fh]
  const struct PTPEnvironment *v17; // [rsp+98h] [rbp+17h]
  __int64 v18; // [rsp+A0h] [rbp+1Fh] BYREF

  if ( dword_1C018D230 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 3uLL) )
    {
      v12 = 8LL;
      v11 = (char *)this + 576;
      v13 = v9;
      v15 = &v18;
      v17 = (const struct PTPEnvironment *)((char *)a2 + 436);
      v9[0] = 1;
      v14 = 4LL;
      v16 = 2LL;
      v18 = 96LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016AE9D, 0LL, v4, 6u, &pData);
      LODWORD(v4) = dword_1C018D230;
    }
    if ( (unsigned int)v4 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 3uLL) )
      {
        v12 = 8LL;
        v11 = (char *)this + 576;
        v13 = v9;
        v15 = &v18;
        v17 = (const struct PTPEnvironment *)((char *)a2 + 408);
        v9[0] = 1;
        v14 = 4LL;
        v16 = 2LL;
        v18 = 28LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016AD97, 0LL, v5, 6u, &pData);
        LODWORD(v5) = dword_1C018D230;
      }
      if ( (unsigned int)v5 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 3uLL) )
        {
          v12 = 8LL;
          v11 = (char *)this + 576;
          v13 = v9;
          v15 = &v18;
          v9[0] = 1;
          v14 = 4LL;
          v16 = 2LL;
          v17 = a2;
          v18 = 92LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016AC8F, 0LL, v6, 6u, &pData);
          LODWORD(v6) = dword_1C018D230;
        }
        if ( (unsigned int)v6 > 5 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 3uLL) )
          {
            v12 = 8LL;
            v11 = (char *)this + 576;
            v13 = v9;
            v15 = &v18;
            v17 = (const struct PTPEnvironment *)((char *)a2 + 384);
            v9[0] = 1;
            v14 = 4LL;
            v16 = 2LL;
            v18 = 24LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016ACD1, 0LL, v7, 6u, &pData);
            LODWORD(v7) = dword_1C018D230;
          }
          if ( (unsigned int)v7 > 5 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 3uLL) )
            {
              v12 = 8LL;
              v11 = (char *)this + 576;
              v13 = v9;
              v15 = &v18;
              v17 = (const struct PTPEnvironment *)((char *)a2 + 92);
              v9[0] = 6;
              v14 = 4LL;
              v16 = 2LL;
              v18 = 292LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016AD53, 0LL, v8, 6u, &pData);
            }
          }
        }
      }
    }
  }
}
