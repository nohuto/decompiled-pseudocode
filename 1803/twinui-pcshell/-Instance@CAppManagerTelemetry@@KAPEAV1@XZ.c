/*
 * XREFs of ?Instance@CAppManagerTelemetry@@KAPEAV1@XZ @ 0x180108468
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x18009C890 (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180105D94 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

struct CAppManagerTelemetry *CAppManagerTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438698;
    qword_180438698[0] = &IamTraceLogging::`vftable';
    atexit(lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_180438698);
    InitOnceComplete(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, qword_180438698);
  }
  return (struct CAppManagerTelemetry *)Context;
}
