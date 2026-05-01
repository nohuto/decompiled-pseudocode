/*
 * XREFs of ??$ViewRecovered@AEBKAEAHAEAK@ViewManagerInteropTraceLogging@@SAXAEBKAEAHAEAK@Z @ 0x1800FEF98
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1800F9508 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 *     wil::details::ScopeExitFn__lambda_c9aeabbc4ed93c83596db45a40c96b7c___::_ScopeExitFn__lambda_c9aeabbc4ed93c83596db45a40c96b7c___ @ 0x1800FAEDC (wil--details--ScopeExitFn__lambda_c9aeabbc4ed93c83596db45a40c96b7c___--_ScopeExitFn__lambda_c9ae.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800EDA34 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTraceLogging::ViewRecovered<unsigned long const &,int &,unsigned long &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const struct _TlgProvider_t *v6; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-78h] BYREF
  __int64 v9; // [rsp+50h] [rbp-58h]
  __int64 v10; // [rsp+58h] [rbp-50h]
  __int64 v11; // [rsp+60h] [rbp-48h]
  __int64 v12; // [rsp+68h] [rbp-40h]
  __int64 v13; // [rsp+70h] [rbp-38h]
  __int64 v14; // [rsp+78h] [rbp-30h]

  v6 = ViewManagerInteropLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v9 = a1;
    v10 = 4LL;
    v11 = a2;
    v12 = 4LL;
    v13 = a3;
    v14 = 4LL;
    LODWORD(v6) = TlgWrite(v6, &unk_1801FD103, 0LL, 0LL, 5u, &pData);
  }
  return (int)v6;
}
