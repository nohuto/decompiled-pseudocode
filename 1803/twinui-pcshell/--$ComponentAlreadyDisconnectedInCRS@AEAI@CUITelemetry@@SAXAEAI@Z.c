/*
 * XREFs of ??$ComponentAlreadyDisconnectedInCRS@AEAI@CUITelemetry@@SAXAEAI@Z @ 0x1802FFA04
 * Callers:
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x180300820 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall CUITelemetry::ComponentAlreadyDisconnectedInCRS<unsigned int &>(__int64 a1)
{
  void *v2; // r8
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v4; // rcx
  WINBOOL v5; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-48h] BYREF
  __int64 v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`CUITelemetry::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = &qword_180438DE8;
    qword_180438DE8 = &LockScreenServiceLogging::`vftable';
    qword_180438E00 = (struct _TlgProvider_t *)&`CUITelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_118efc2810da81fa517ffdfff2ec5234_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438DE8, qword_180438E00, v2);
    InitOnceComplete(&`CUITelemetry::Instance'::`2'::wrapper, 0, &qword_180438DE8);
  }
  result = (int)v6;
  v4 = (const struct _TlgProvider_t *)v6[1];
  if ( *(_DWORD *)v4 > 5u )
  {
    v10 = 0;
    v8 = a1;
    v9 = 4;
    return TlgWrite(v4, &unk_18039EBAF, 0LL, 0LL, 3u, &pData);
  }
  return result;
}
