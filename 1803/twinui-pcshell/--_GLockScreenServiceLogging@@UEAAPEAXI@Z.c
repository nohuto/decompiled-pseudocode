/*
 * XREFs of ??_GLockScreenServiceLogging@@UEAAPEAXI@Z @ 0x18016B170
 * Callers:
 *     ?cleanup@?$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEAAXXZ @ 0x18013239C (-cleanup@-$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEA.c)
 *     _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_ @ 0x18019CE30 (_lambda_87ebf9cdbe9512ecf246e0e20380c4a1_--_lambda_invoker_cdecl_.c)
 *     ?cleanup@?$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAXXZ @ 0x1801A7BB4 (-cleanup@-$static_lazy@VTaskFlowDataEngineTelemetry@@@details@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1TraceLoggingProvider@wil@@MEAA@XZ @ 0x180104A74 (--1TraceLoggingProvider@wil@@MEAA@XZ.c)
 */

LockScreenServiceLogging *__fastcall LockScreenServiceLogging::`scalar deleting destructor'(
        LockScreenServiceLogging *this,
        char a2)
{
  wil::TraceLoggingProvider::~TraceLoggingProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
