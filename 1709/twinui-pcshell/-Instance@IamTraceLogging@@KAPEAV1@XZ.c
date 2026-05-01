/*
 * XREFs of ?Instance@IamTraceLogging@@KAPEAV1@XZ @ 0x18001E080
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___::operator() @ 0x18001ABF0 (CDelayIAMOperations--CDelayedOperation__lambda_bb299bb733d931796faa9380238be063___--operator().c)
 * Callees:
 *     ?Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180027104 (-Provider@CAppManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct IamTraceLogging *IamTraceLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_1802B9CB0 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_1802B9CB0;
    atexit(lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
    qword_1802B9CB8 = (__int64)CAppManagerLogging::Provider();
    byte_1802B9CC0 = 0;
    dword_1802B9CC4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802B9CB0 + 8))(&qword_1802B9CB0);
    InitOnceComplete(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &qword_1802B9CB0);
  }
  return (struct IamTraceLogging *)Context;
}
