/*
 * XREFs of ?Provider@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAQEBU_TlgProvider_t@@XZ @ 0x180060050
 * Callers:
 *     ??$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18005E2C0 (--$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTy.c)
 *     ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x18005E3AC (--$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTyp.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(
    &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
    0,
    &fPending,
    &Context);
  if ( fPending )
  {
    Context = &qword_1802BA4E8;
    qword_1802BA4E8 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BA500 = (TraceLoggingHProvider)&`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_75f51455afdd6deeb34ec28b1e80a524_::_lambda_invoker_cdecl_);
    qword_1802BA4F0 = (__int64)qword_1802BA500;
    byte_1802BA4F8 = 1;
    TraceLoggingRegister(qword_1802BA500);
    dword_1802BA4FC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BA4E8 + 8))(&qword_1802BA4E8);
    InitOnceComplete(
      &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
      0,
      &qword_1802BA4E8);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
