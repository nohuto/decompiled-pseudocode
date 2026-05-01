/*
 * XREFs of ??_GViewManagerInteropTraceLogging@@UEAAPEAXI@Z @ 0x1801057B0
 * Callers:
 *     _lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_ @ 0x1801018D0 (_lambda_119a121fb38785c27806b92be2d82d86_--_lambda_invoker_cdecl_.c)
 *     _lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_ @ 0x1801E37D0 (_lambda_1807517bb2a601749b2ae4fbbb57858f_--_lambda_invoker_cdecl_.c)
 *     _lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_ @ 0x1802FEAD0 (_lambda_7c6f95392d1fa211f578d6d8eb47d107_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180104A74 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

ViewManagerInteropTraceLogging *__fastcall ViewManagerInteropTraceLogging::`scalar deleting destructor'(
        ViewManagerInteropTraceLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x18);
  return this;
}
