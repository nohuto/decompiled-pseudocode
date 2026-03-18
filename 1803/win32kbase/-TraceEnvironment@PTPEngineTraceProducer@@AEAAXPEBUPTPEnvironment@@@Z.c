/*
 * XREFs of ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C013CEE4
 * Callers:
 *     _lambda_6734545a6e0e853b7ddbd29772882ff2_::_lambda_invoker_cdecl_ @ 0x1C0124E50 (_lambda_6734545a6e0e853b7ddbd29772882ff2_--_lambda_invoker_cdecl_.c)
 *     ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C013CE40 (-SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall PTPEngineTraceProducer::TraceEnvironment(PTPEngineTraceProducer *this, const struct PTPEnvironment *a2)
{
  char *v4; // rbx
  const GUID *v5; // r9
  const GUID *v6; // r9
  const GUID *v7; // r9
  const GUID *v8; // r9
  const GUID *v9; // r9
  _DWORD v10[4]; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  char *v12; // [rsp+68h] [rbp-19h]
  __int64 v13; // [rsp+70h] [rbp-11h]
  _DWORD *v14; // [rsp+78h] [rbp-9h]
  __int64 v15; // [rsp+80h] [rbp-1h]
  __int64 *v16; // [rsp+88h] [rbp+7h]
  __int64 v17; // [rsp+90h] [rbp+Fh]
  const struct PTPEnvironment *v18; // [rsp+98h] [rbp+17h]
  __int64 v19; // [rsp+A0h] [rbp+1Fh] BYREF

  if ( dword_1C019EBC0 > 5u )
  {
    v4 = (char *)this + 576;
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 3uLL) )
    {
      v12 = v4;
      v14 = v10;
      v16 = &v19;
      v18 = (const struct PTPEnvironment *)((char *)a2 + 440);
      v13 = 8LL;
      v10[0] = 1;
      v15 = 4LL;
      v17 = 2LL;
      v19 = 96LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C01790F8, 0LL, v5, 6u, &pData);
      LODWORD(v5) = dword_1C019EBC0;
    }
    if ( (unsigned int)v5 > 5 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 3uLL) )
      {
        v12 = v4;
        v14 = v10;
        v16 = &v19;
        v18 = (const struct PTPEnvironment *)((char *)a2 + 412);
        v13 = 8LL;
        v10[0] = 1;
        v15 = 4LL;
        v17 = 2LL;
        v19 = 28LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178FF2, 0LL, v6, 6u, &pData);
        LODWORD(v6) = dword_1C019EBC0;
      }
      else
      {
        v4 = (char *)this + 576;
      }
      if ( (unsigned int)v6 > 5 )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 3uLL) )
        {
          v12 = v4;
          v14 = v10;
          v16 = &v19;
          v13 = 8LL;
          v10[0] = 1;
          v15 = 4LL;
          v17 = 2LL;
          v18 = a2;
          v19 = 92LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178EEA, 0LL, v7, 6u, &pData);
          LODWORD(v7) = dword_1C019EBC0;
        }
        else
        {
          v4 = (char *)this + 576;
        }
        if ( (unsigned int)v7 > 5 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 3uLL) )
          {
            v12 = v4;
            v14 = v10;
            v16 = &v19;
            v18 = (const struct PTPEnvironment *)((char *)a2 + 388);
            v13 = 8LL;
            v10[0] = 1;
            v15 = 4LL;
            v17 = 2LL;
            v19 = 24LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178F2C, 0LL, v8, 6u, &pData);
            LODWORD(v8) = dword_1C019EBC0;
          }
          else
          {
            v4 = (char *)this + 576;
          }
          if ( (unsigned int)v8 > 5 )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C019EBC0, 3uLL) )
            {
              v12 = v4;
              v14 = v10;
              v16 = &v19;
              v18 = (const struct PTPEnvironment *)((char *)a2 + 92);
              v13 = 8LL;
              v10[0] = 8;
              v15 = 4LL;
              v17 = 2LL;
              v19 = 296LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C019EBC0, &unk_1C0178FAE, 0LL, v9, 6u, &pData);
            }
          }
        }
      }
    }
  }
}
