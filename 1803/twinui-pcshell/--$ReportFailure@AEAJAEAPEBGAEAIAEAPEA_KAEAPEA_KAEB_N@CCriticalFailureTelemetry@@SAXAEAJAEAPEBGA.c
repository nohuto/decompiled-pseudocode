/*
 * XREFs of ??$ReportFailure@AEAJAEAPEBGAEAIAEAPEA_KAEAPEA_KAEB_N@CCriticalFailureTelemetry@@SAXAEAJAEAPEBGAEAIAEAPEA_K3AEB_N@Z @ 0x1802FF0A4
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1802FF2BC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180075568 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ @ 0x1802FF1EC (--1Completer@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x1802FF374 (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 */

void __fastcall CCriticalFailureTelemetry::ReportFailure<long &,unsigned short const * &,unsigned int &,unsigned __int64 * &,unsigned __int64 * &,bool const &>(
        int *a1,
        const unsigned __int16 **a2,
        unsigned int *a3,
        unsigned __int64 **a4,
        CCriticalFailureTelemetry **a5,
        bool *a6)
{
  __int64 v10; // rdx
  WINBOOL fPending; // [rsp+40h] [rbp-20h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-18h] BYREF
  union _RTL_RUN_ONCE *v13; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+58h] [rbp-8h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CCriticalFailureTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    v13 = &`CCriticalFailureTelemetry::Instance'::`2'::wrapper;
    Context = &qword_180438DC8;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_180438DC8);
    qword_180438DC8 = v10;
    atexit(lambda_a7f0a761e664b789011006ea52c1fb72_::_lambda_invoker_cdecl_);
    v14 = 0;
    wil::details::static_lazy<CCriticalFailureTelemetry>::Completer::~Completer(&v13);
  }
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CCriticalFailureTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v13 = &`CCriticalFailureTelemetry::Instance'::`2'::wrapper;
        Context = &qword_180438DC8;
        wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_180438DC8);
        qword_180438DC8 = &MultitaskingViewTelemetry::`vftable';
        atexit(lambda_a7f0a761e664b789011006ea52c1fb72_::_lambda_invoker_cdecl_);
        v14 = 0;
        wil::details::static_lazy<CCriticalFailureTelemetry>::Completer::~Completer(&v13);
      }
    }
    CCriticalFailureTelemetry::ReportFailure_(*a5, *a1, *a2, *a3, *a4, (unsigned __int64 *)*a5, *a6);
  }
}
