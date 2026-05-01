/*
 * XREFs of ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x180079B1C
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180078B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180075568 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180078E68 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?close_reset@?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x18007A9FC (-close_reset@-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadPoolTimer@US.c)
 *     ?Create@StartWindowTelemetry@@IEAAXXZ @ 0x180093CA0 (-Create@StartWindowTelemetry@@IEAAXXZ.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014E830 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall XamlLauncherState::BeginStartTelemetryTimeout(struct _TP_TIMER **this)
{
  PTP_TIMER ThreadpoolTimer; // rax
  const char *v3; // r9
  struct _TP_TIMER *v4; // rcx
  struct _TP_TIMER *v5; // rdi
  PTP_TIMER v6; // rax
  const char *v7; // r9
  struct _TP_TIMER *v8; // rcx
  struct _TP_TIMER *v9; // rdi
  PTP_TIMER v10; // rax
  const char *v11; // r9
  struct _TP_TIMER *v12; // rcx
  struct _TP_TIMER *v13; // rdi
  PTP_TIMER v14; // rax
  const char *v15; // r9
  struct _TP_TIMER *v16; // rcx
  struct _TP_TIMER *v17; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+20h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+28h] BYREF
  struct _FILETIME v21; // [rsp+50h] [rbp+30h] BYREF

  if ( !this[114] )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_73e76d8d16808ac10322fbdb9b07c67c_::_lambda_invoker_cdecl_, this, 0LL);
    v4 = this[114];
    v5 = ThreadpoolTimer;
    if ( v4 )
      wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v4);
    this[114] = v5;
    if ( v5
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x41F,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v3),
          (v5 = this[114]) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-20000000LL;
      SetThreadpoolTimer(v5, &pftDueTime, 0, 0x3E8u);
    }
  }
  if ( !this[115] )
  {
    v6 = CreateThreadpoolTimer(lambda_b5008ceb20ea0aaab8abc16420ca4d79_::_lambda_invoker_cdecl_, this, 0LL);
    v8 = this[115];
    v9 = v6;
    if ( v8 )
      wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v8);
    this[115] = v9;
    if ( v9
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x434,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v7),
          (v9 = this[115]) != 0LL) )
    {
      v21 = (struct _FILETIME)(-10000000LL * *((unsigned int *)this + 17));
      SetThreadpoolTimer(v9, &v21, 0, 0x3E8u);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&pftDueTime, &Context)
        && pftDueTime.dwLowDateTime )
      {
        Context = qword_180438058;
        qword_180438058[0] = &IamTraceLogging::`vftable';
        atexit(lambda_7be3e90a96589580164e7896806c54b3_::_lambda_invoker_cdecl_);
        StartWindowTelemetry::Create((StartWindowTelemetry *)qword_180438058);
        InitOnceComplete(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, qword_180438058);
      }
      if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)Context) )
        XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses((XamlLauncherState *)this);
    }
  }
  if ( !this[116] )
  {
    v10 = CreateThreadpoolTimer(lambda_0ecf0782f9870a2c1275b8518c08daa4_::_lambda_invoker_cdecl_, this, 0LL);
    v12 = this[116];
    v13 = v10;
    if ( v12 )
      wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v12);
    this[116] = v13;
    if ( v13
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x44F,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v11),
          (v13 = this[116]) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-100000000LL;
      SetThreadpoolTimer(v13, &pftDueTime, 0, 0x3E8u);
    }
  }
  if ( !this[117] )
  {
    v14 = CreateThreadpoolTimer(lambda_6993ad0a1190e378d2297439533de25a_::_lambda_invoker_cdecl_, this, 0LL);
    v16 = this[117];
    v17 = v14;
    if ( v16 )
      wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,0,std::nullptr_t>::close_reset(v16);
    this[117] = v17;
    if ( v17
      || (wil::details::in1diag3::_Log_NullAlloc(
            retaddr,
            (void *)0x464,
            (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
            v15),
          (v17 = this[117]) != 0LL) )
    {
      pftDueTime = (struct _FILETIME)-300000000LL;
      SetThreadpoolTimer(v17, &pftDueTime, 0, 0x3E8u);
    }
  }
}
