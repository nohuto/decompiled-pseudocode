/*
 * XREFs of ?Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ @ 0x1800F1FD4
 * Callers:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1800F24A0 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilege.c)
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1800F559C (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct PrivilegedOperationsTraceLogging *PrivilegedOperationsTraceLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BAF78;
    qword_1802BAF78 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BAF90 = (TraceLoggingHProvider)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
    qword_1802BAF80 = (__int64)qword_1802BAF90;
    byte_1802BAF88 = 1;
    TraceLoggingRegister(qword_1802BAF90);
    dword_1802BAF8C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAF78 + 8))(&qword_1802BAF78);
    InitOnceComplete(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &qword_1802BAF78);
  }
  return (struct PrivilegedOperationsTraceLogging *)Context;
}
