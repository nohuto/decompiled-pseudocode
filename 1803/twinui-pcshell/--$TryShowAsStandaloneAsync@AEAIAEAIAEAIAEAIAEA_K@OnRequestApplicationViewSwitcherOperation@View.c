/*
 * XREFs of ??$TryShowAsStandaloneAsync@AEAIAEAIAEAIAEAIAEA_K@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEA_K@Z @ 0x180091AE8
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055748 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsStandaloneAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        __int64 a6)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v11; // r10
  int v12; // eax
  int v13; // ecx
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  int v15; // [rsp+3Ch] [rbp-65h] BYREF
  int v16; // [rsp+40h] [rbp-61h] BYREF
  int v17; // [rsp+44h] [rbp-5Dh] BYREF
  int v18; // [rsp+48h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-49h] BYREF
  int *v21; // [rsp+78h] [rbp-29h]
  int v22; // [rsp+80h] [rbp-21h]
  int v23; // [rsp+84h] [rbp-1Dh]
  int *v24; // [rsp+88h] [rbp-19h]
  int v25; // [rsp+90h] [rbp-11h]
  int v26; // [rsp+94h] [rbp-Dh]
  int *v27; // [rsp+98h] [rbp-9h]
  int v28; // [rsp+A0h] [rbp-1h]
  int v29; // [rsp+A4h] [rbp+3h]
  int *v30; // [rsp+A8h] [rbp+7h]
  int v31; // [rsp+B0h] [rbp+Fh]
  int v32; // [rsp+B4h] [rbp+13h]
  __int64 v33; // [rsp+B8h] [rbp+17h]
  int v34; // [rsp+C0h] [rbp+1Fh]
  int v35; // [rsp+C4h] [rbp+23h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  result = (int)Context;
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 5u )
  {
    v12 = *a2;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v15 = v12;
    v21 = &v15;
    v16 = *a3;
    v24 = &v16;
    v17 = *a4;
    v27 = &v17;
    v22 = 4;
    v25 = 4;
    v28 = 4;
    v13 = *a5;
    v30 = &v18;
    v33 = a6;
    v18 = v13;
    v31 = 4;
    v34 = 8;
    return TlgWrite(v11, &unk_180394784, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 7u, &pData);
  }
  return result;
}
