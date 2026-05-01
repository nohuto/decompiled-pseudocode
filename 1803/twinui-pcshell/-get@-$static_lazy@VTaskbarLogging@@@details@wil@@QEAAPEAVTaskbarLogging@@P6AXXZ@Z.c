/*
 * XREFs of ?get@?$static_lazy@VTaskbarLogging@@@details@wil@@QEAAPEAVTaskbarLogging@@P6AXXZ@Z @ 0x1801499C8
 * Callers:
 *     ??1?$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180145A04 (--1-$ActivityData@VTaskbarLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@VTask.c)
 *     ?NotifyFailure@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180147A30 (-NotifyFailure@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ReportStopActivity@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180148620 (-ReportStopActivity@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ?StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180148BF4 (-StartActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180148CAC (-StartActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180148D64 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QE.c)
 *     ?StopActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x180148E70 (-StopActivity@CanApplyTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ @ 0x1801490F0 (-StopActivity@GetTaskbarLayout@TaskbarFlexibleLayoutTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180149C98 (-zInternalStart@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

LPVOID __fastcall wil::details::static_lazy<TaskbarLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`TaskbarLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, &v6) && (_DWORD)v5 )
  {
    v6 = &qword_180438788;
    qword_180438788 = &LockScreenServiceLogging::`vftable';
    qword_1804387A0 = (struct _TlgProvider_t *)&`TaskbarLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438788, qword_1804387A0, v3);
    InitOnceComplete(&`TaskbarLogging::Instance'::`2'::wrapper, 0, &qword_180438788);
  }
  return v6;
}
