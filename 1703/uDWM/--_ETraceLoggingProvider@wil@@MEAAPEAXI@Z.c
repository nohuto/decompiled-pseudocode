/*
 * XREFs of ??_ETraceLoggingProvider@wil@@MEAAPEAXI@Z @ 0x1800A3400
 * Callers:
 *     _lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_ @ 0x1800728F0 (_lambda_87e3050d7bd177bdce03acb9ca29079f_--_lambda_invoker_cdecl_.c)
 *     _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_ @ 0x1800A3370 (_lambda_7c6f95392d1fa211f578d6d8eb47d107_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180072DD8 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

wil::TraceLoggingProvider *__fastcall wil::TraceLoggingProvider::`vector deleting destructor'(
        wil::TraceLoggingProvider *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, wil::TraceLoggingProvider *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
