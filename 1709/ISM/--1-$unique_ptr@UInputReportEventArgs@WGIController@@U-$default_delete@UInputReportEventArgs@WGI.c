/*
 * XREFs of ??1?$unique_ptr@UInputReportEventArgs@WGIController@@U?$default_delete@UInputReportEventArgs@WGIController@@@std@@@std@@QEAA@XZ @ 0x1800A1C78
 * Callers:
 *     _WGIController::NotifyInputReport_::_1_::dtor$0 @ 0x1800D1710 (_WGIController--NotifyInputReport_--_1_--dtor$0.c)
 *     _WGIController::NotifyInputReportCallback_::_1_::dtor$0 @ 0x1800D171C (_WGIController--NotifyInputReportCallback_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::unique_ptr<WGIController::InputReportEventArgs>::~unique_ptr<WGIController::InputReportEventArgs>(
        __int64 **a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v2 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    }
    operator delete(v1);
  }
}
