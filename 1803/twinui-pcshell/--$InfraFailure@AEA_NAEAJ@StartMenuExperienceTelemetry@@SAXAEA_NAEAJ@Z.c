/*
 * XREFs of ??$InfraFailure@AEA_NAEAJ@StartMenuExperienceTelemetry@@SAXAEA_NAEAJ@Z @ 0x1801727AC
 * Callers:
 *     ?OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z @ 0x180173B70 (-OnApplicationActivatedForLaunch@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

BOOLEAN __fastcall StartMenuExperienceTelemetry::InfraFailure<bool &,long &>(unsigned __int8 *a1, __int64 a2)
{
  void *v4; // r8
  BOOLEAN result; // al
  const struct _TlgProvider_t *v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  int v8; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  int v10; // [rsp+3Ch] [rbp-5h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  int *v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+70h] [rbp+2Fh]
  int v15; // [rsp+74h] [rbp+33h]
  __int64 v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+84h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180438878;
    qword_180438878[0] = &LockScreenServiceLogging::`vftable';
    qword_180438890 = (struct _TlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438878, qword_180438890, v4);
    InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, qword_180438878);
  }
  result = (unsigned __int8)Context;
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    result = TlgKeywordOn(v6, 0x200000000000uLL);
    if ( result )
    {
      v8 = *a1;
      v15 = 0;
      v18 = 0;
      v10 = v8;
      v13 = &v10;
      v14 = 4;
      v16 = a2;
      v17 = 4;
      return TlgWrite(v7, &unk_18038E7E9, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
