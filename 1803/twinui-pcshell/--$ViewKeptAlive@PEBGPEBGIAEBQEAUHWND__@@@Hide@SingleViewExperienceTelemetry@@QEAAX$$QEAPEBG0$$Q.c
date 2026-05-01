/*
 * XREFs of ??$ViewKeptAlive@PEBGPEBGIAEBQEAUHWND__@@@Hide@SingleViewExperienceTelemetry@@QEAAX$$QEAPEBG0$$QEAIAEBQEAUHWND__@@@Z @ 0x18006DB98
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18006B838 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

BOOLEAN __fastcall SingleViewExperienceTelemetry::Hide::ViewKeptAlive<unsigned short const *,unsigned short const *,unsigned int,HWND__ * const &>(
        __int64 a1,
        LPCWSTR *a2,
        LPCWSTR *a3,
        __int64 a4,
        __int64 *a5)
{
  BOOLEAN result; // al
  __int64 v10; // rcx
  TraceLoggingHProvider v11; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-59h] BYREF
  __int64 v14; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+80h] [rbp-11h] BYREF
  __int64 v18; // [rsp+90h] [rbp-1h]
  int v19; // [rsp+98h] [rbp+7h]
  int v20; // [rsp+9Ch] [rbp+Bh]
  __int64 *v21; // [rsp+A0h] [rbp+Fh]
  int v22; // [rsp+A8h] [rbp+17h]
  int v23; // [rsp+ACh] [rbp+1Bh]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180438800;
    qword_180438800[0] = &LockScreenServiceLogging::`vftable';
    qword_180438818 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438800, qword_180438818);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438800);
  }
  result = (unsigned __int8)Context;
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    result = TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x200000000000uLL);
    if ( result )
    {
      TlgCreateWsz(&pDesc, *a2);
      TlgCreateWsz(&v17, *a3);
      v20 = 0;
      v23 = 0;
      v18 = a4;
      v10 = *a5;
      v21 = &v14;
      v19 = 4;
      v14 = v10;
      v22 = 8;
      return TlgWrite(v11, &unk_18039F415, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 6u, &pData);
    }
  }
  return result;
}
