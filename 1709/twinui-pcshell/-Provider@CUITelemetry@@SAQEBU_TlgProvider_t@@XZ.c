/*
 * XREFs of ?Provider@CUITelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x1801C48D0
 * Callers:
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C50E0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1801C5310 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ??$RegisteredComponentInCRS@AEAIAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAI0AEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1801C7720 (--$RegisteredComponentInCRS@AEAIAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@A.c)
 *     ??$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@AEAIAEAI@CUITelemetry@@SAXAEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@00@Z @ 0x1801C7800 (--$UnregisteredComponentFromCRS@AEAIAEAW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@A.c)
 *     ??$RegisteringDisconnectedComponent@AEAIAEAI@CUITelemetry@@SAXAEAI0@Z @ 0x1801C78CC (--$RegisteringDisconnectedComponent@AEAIAEAI@CUITelemetry@@SAXAEAI0@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *CUITelemetry::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CUITelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BB0A0;
    qword_1802BB0A0 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BB0B8 = (TraceLoggingHProvider)&`CUITelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_118efc2810da81fa517ffdfff2ec5234_::_lambda_invoker_cdecl_);
    qword_1802BB0A8 = (__int64)qword_1802BB0B8;
    byte_1802BB0B0 = 1;
    TraceLoggingRegister(qword_1802BB0B8);
    dword_1802BB0B4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BB0A0 + 8))(&qword_1802BB0A0);
    InitOnceComplete(&`CUITelemetry::Instance'::`2'::wrapper, 0, &qword_1802BB0A0);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
