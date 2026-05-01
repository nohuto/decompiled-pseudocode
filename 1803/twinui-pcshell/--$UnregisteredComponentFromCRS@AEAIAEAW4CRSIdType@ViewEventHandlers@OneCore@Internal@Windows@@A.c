/*
 * XREFs of ??$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1802FFF88
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x18002FF80 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x180301F88 (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall CUITelemetry::UnregisteredComponentFromCRS<unsigned int &,enum Windows::Internal::OneCore::ViewEventHandlers::CRSIdType &,unsigned int &,unsigned int &>(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 a4)
{
  void *v8; // r8
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v10; // rcx
  int v11; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  int v13; // [rsp+3Ch] [rbp-35h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  __int64 v16; // [rsp+68h] [rbp-9h]
  int v17; // [rsp+70h] [rbp-1h]
  int v18; // [rsp+74h] [rbp+3h]
  int *v19; // [rsp+78h] [rbp+7h]
  int v20; // [rsp+80h] [rbp+Fh]
  int v21; // [rsp+84h] [rbp+13h]
  __int64 v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+90h] [rbp+1Fh]
  int v24; // [rsp+94h] [rbp+23h]
  __int64 v25; // [rsp+98h] [rbp+27h]
  int v26; // [rsp+A0h] [rbp+2Fh]
  int v27; // [rsp+A4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CUITelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180438DE8;
    qword_180438DE8 = &LockScreenServiceLogging::`vftable';
    qword_180438E00 = (struct _TlgProvider_t *)&`CUITelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_118efc2810da81fa517ffdfff2ec5234_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438DE8, qword_180438E00, v8);
    InitOnceComplete(&`CUITelemetry::Instance'::`2'::wrapper, 0, &qword_180438DE8);
  }
  result = (int)Context;
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    v11 = *a2;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v13 = v11;
    v19 = &v13;
    v16 = a1;
    v17 = 4;
    v20 = 4;
    v22 = a3;
    v23 = 4;
    v25 = a4;
    v26 = 4;
    return TlgWrite(v10, &unk_18039EA44, 0LL, 0LL, 6u, &pData);
  }
  return result;
}
