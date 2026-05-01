/*
 * XREFs of ?Instance@PrivilegedOperationsTraceLogging@@KAPEAV1@XZ @ 0x1800CF074
 * Callers:
 *     ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4_SET_SHELL_CLOAK@@@Z @ 0x1800CF4F0 (-SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4_SET_SHELL_CLOAK@@@Z.c)
 *     ??$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1800D2478 (--$SetShellCloak@HAEAPEAUHWND__@@AEBKAEAK@PrivilegedOperationsTraceLogging@@SAX$$QEAHAEAPEAUHWND.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

struct PrivilegedOperationsTraceLogging *PrivilegedOperationsTraceLogging::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802450D0;
    qword_1802450D0 = (__int64)&QuickConnectLoggingProvider::`vftable';
    qword_1802450E8 = (TraceLoggingHProvider)&`PrivilegedOperationsTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_);
    qword_1802450D8 = (__int64)qword_1802450E8;
    byte_1802450E0 = 1;
    TraceLoggingRegister(qword_1802450E8);
    dword_1802450E4 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802450D0 + 8))(&qword_1802450D0);
    InitOnceComplete(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 0, &qword_1802450D0);
  }
  return (struct PrivilegedOperationsTraceLogging *)Context;
}
