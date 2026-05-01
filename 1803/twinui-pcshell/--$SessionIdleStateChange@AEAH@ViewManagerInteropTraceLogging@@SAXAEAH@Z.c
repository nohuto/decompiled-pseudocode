/*
 * XREFs of ??$SessionIdleStateChange@AEAH@ViewManagerInteropTraceLogging@@SAXAEAH@Z @ 0x1801C7428
 * Callers:
 *     ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x1801CBF40 (-OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall ViewManagerInteropTraceLogging::SessionIdleStateChange<int &>(__int64 a1)
{
  void *v2; // r8
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v4; // rcx
  WINBOOL v5; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958, v2);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  result = (int)v6;
  v4 = (const struct _TlgProvider_t *)v6[1];
  if ( *(_DWORD *)v4 > 5u )
  {
    v10 = 0;
    v8 = a1;
    v9 = 4;
    return TlgWrite(v4, &unk_1803938D2, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
