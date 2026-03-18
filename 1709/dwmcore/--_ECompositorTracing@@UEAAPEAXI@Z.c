/*
 * XREFs of ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x1801BFAD0
 * Callers:
 *     _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_ @ 0x1801BF110 (_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x1801BFA6C (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

CompositorTracing *__fastcall CompositorTracing::`vector deleting destructor'(CompositorTracing *this, char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
