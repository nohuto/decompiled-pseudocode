/*
 * XREFs of ??$FailedSettingPresentedWindowOnFrame@AEBJ@CFramePresentationTelemetry@@SAXAEBJ@Z @ 0x18013569C
 * Callers:
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

BOOLEAN __fastcall CFramePresentationTelemetry::FailedSettingPresentedWindowOnFrame<long const &>(__int64 a1)
{
  void *v2; // r8
  BOOLEAN result; // al
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  WINBOOL v6; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]
  int v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+6Ch] [rbp-1Ch]

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688, v2);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  result = (unsigned __int8)v7;
  v4 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v4 > 5u )
  {
    result = TlgKeywordOn(v4, 0x400000000000uLL);
    if ( result )
    {
      v11 = 0;
      v9 = a1;
      v10 = 4;
      return TlgWrite(v5, &unk_18038903A, 0LL, 0LL, 3u, &pData);
    }
  }
  return result;
}
