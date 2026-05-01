/*
 * XREFs of ?Instance@IamTraceLogging@@KAPEAV1@XZ @ 0x18001D520
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::operator() @ 0x180019CE0 (CDelayIAMOperations--CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___--operator().c)
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180026994 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

struct IamTraceLogging *IamTraceLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_180244438 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_180244438;
    atexit(lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
    qword_180244440 = (__int64)CAppManagerLogging::Provider();
    byte_180244448 = 0;
    dword_18024444C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180244438 + 8))(&qword_180244438);
    InitOnceComplete(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &qword_180244438);
  }
  return (struct IamTraceLogging *)Context;
}
