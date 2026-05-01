/*
 * XREFs of ??$RequestCloseForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x1801DAF18
 * Callers:
 *     ?RequestCloseForView@ViewManagerBridge@@UEAAJI@Z @ 0x1801DDDA0 (-RequestCloseForView@ViewManagerBridge@@UEAAJI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::RequestCloseForView<unsigned int &>(int *a1)
{
  void *v2; // r8
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v4; // rcx
  int v5; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958, v2);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  result = (int)Context;
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v5 = *a1;
    v12 = 0;
    v7 = v5;
    v10 = &v7;
    v11 = 4;
    return TlgWrite(v4, &unk_180394AAC, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
