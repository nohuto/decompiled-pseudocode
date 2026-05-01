/*
 * XREFs of ??$TryShowAsViewModeAsync@AEAIAEAIAEAIAEAIAEAMAEAM@OnRequestApplicationViewSwitcherOperation@ViewManagerInteropTraceLogging@@QEAAXAEAI000AEAM1@Z @ 0x1801DB290
 * Callers:
 *     ?OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180055748 (-OnRequestApplicationViewSwitcherOperation@ViewManagerBridge@@AEAAJIIPEAUIPropertySet@Collection.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::OnRequestApplicationViewSwitcherOperation::TryShowAsViewModeAsync<unsigned int &,unsigned int &,unsigned int &,unsigned int &,float &,float &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        float *a6,
        float *a7)
{
  void *v11; // r8
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v13; // r10
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  WINBOOL fPending; // [rsp+38h] [rbp-91h] BYREF
  int v19; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v20; // [rsp+40h] [rbp-89h] BYREF
  int v21; // [rsp+44h] [rbp-85h] BYREF
  int v22; // [rsp+48h] [rbp-81h] BYREF
  int v23; // [rsp+4Ch] [rbp-7Dh] BYREF
  int v24; // [rsp+50h] [rbp-79h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-61h] BYREF
  int *v27; // [rsp+88h] [rbp-41h]
  int v28; // [rsp+90h] [rbp-39h]
  int v29; // [rsp+94h] [rbp-35h]
  int *v30; // [rsp+98h] [rbp-31h]
  int v31; // [rsp+A0h] [rbp-29h]
  int v32; // [rsp+A4h] [rbp-25h]
  int *v33; // [rsp+A8h] [rbp-21h]
  int v34; // [rsp+B0h] [rbp-19h]
  int v35; // [rsp+B4h] [rbp-15h]
  int *v36; // [rsp+B8h] [rbp-11h]
  int v37; // [rsp+C0h] [rbp-9h]
  int v38; // [rsp+C4h] [rbp-5h]
  int *v39; // [rsp+C8h] [rbp-1h]
  int v40; // [rsp+D0h] [rbp+7h]
  int v41; // [rsp+D4h] [rbp+Bh]
  int *v42; // [rsp+D8h] [rbp+Fh]
  int v43; // [rsp+E0h] [rbp+17h]
  int v44; // [rsp+E4h] [rbp+1Bh]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958, v11);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  result = (int)Context;
  v13 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v13 > 5u )
  {
    v14 = *a2;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v19 = v14;
    v27 = &v19;
    v20 = *a3;
    v30 = &v20;
    v21 = *a4;
    v33 = &v21;
    v28 = 4;
    v31 = 4;
    v34 = 4;
    v15 = *a5;
    v36 = &v22;
    v22 = v15;
    v37 = 4;
    v40 = 4;
    v16 = (int)*a6;
    v43 = 4;
    v39 = &v23;
    v23 = v16;
    v17 = (int)*a7;
    v42 = &v24;
    v24 = v17;
    return TlgWrite(v13, &unk_1803948CC, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 8u, &pData);
  }
  return result;
}
