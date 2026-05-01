/*
 * XREFs of ??$DroppedPendingActivation@PEBG@ViewManagerInteropTelemetry@@SAX$$QEAPEBG@Z @ 0x1801C6754
 * Callers:
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180031B50 (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

BOOLEAN __fastcall ViewManagerInteropTelemetry::DroppedPendingActivation<unsigned short const *>(LPCWSTR *a1)
{
  void *v2; // r8
  BOOLEAN result; // al
  TraceLoggingHProvider v4; // r10
  WINBOOL v5; // [rsp+30h] [rbp-58h] BYREF
  TraceLoggingHProvider *v6; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-28h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = (TraceLoggingHProvider *)qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958, v2);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  result = (unsigned __int8)v6;
  if ( *(_DWORD *)v6[1] > 5u )
  {
    result = TlgKeywordOn(v6[1], 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, *a1);
      return TlgWrite(v4, &unk_1803937D5, 0LL, 0LL, 3u, &pData);
    }
  }
  return result;
}
