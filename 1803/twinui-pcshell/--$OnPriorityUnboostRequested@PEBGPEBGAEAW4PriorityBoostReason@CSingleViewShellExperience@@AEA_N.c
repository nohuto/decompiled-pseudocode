/*
 * XREFs of ??$OnPriorityUnboostRequested@PEBGPEBGAEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAIAEA_N@SingleViewExperienceTelemetry@@SAX$$QEAPEBG0AEAW4PriorityBoostReason@CSingleViewShellExperience@@AEA_NAEAI2@Z @ 0x18006D8B8
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

BOOLEAN __fastcall SingleViewExperienceTelemetry::OnPriorityUnboostRequested<unsigned short const *,unsigned short const *,enum CSingleViewShellExperience::PriorityBoostReason &,bool &,unsigned int &,bool &>(
        LPCWSTR *a1,
        LPCWSTR *a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  BOOLEAN result; // al
  int v11; // ecx
  TraceLoggingHProvider v12; // r10
  WINBOOL fPending; // [rsp+30h] [rbp-79h] BYREF
  int v14; // [rsp+34h] [rbp-75h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+70h] [rbp-39h] BYREF
  int *v19; // [rsp+80h] [rbp-29h]
  int v20; // [rsp+88h] [rbp-21h]
  int v21; // [rsp+8Ch] [rbp-1Dh]
  __int64 v22; // [rsp+90h] [rbp-19h]
  int v23; // [rsp+98h] [rbp-11h]
  int v24; // [rsp+9Ch] [rbp-Dh]
  __int64 v25; // [rsp+A0h] [rbp-9h]
  int v26; // [rsp+A8h] [rbp-1h]
  int v27; // [rsp+ACh] [rbp+3h]
  __int64 v28; // [rsp+B0h] [rbp+7h]
  int v29; // [rsp+B8h] [rbp+Fh]
  int v30; // [rsp+BCh] [rbp+13h]

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
      TlgCreateWsz(&pDesc, *a1);
      TlgCreateWsz(&v18, *a2);
      v11 = *a3;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v19 = &v14;
      v14 = v11;
      v25 = a5;
      v28 = a6;
      v20 = 4;
      v23 = 1;
      v29 = 1;
      v22 = a4;
      v26 = 4;
      return TlgWrite(v12, &unk_18039F283, 0LL, 0LL, 8u, &pData);
    }
  }
  return result;
}
