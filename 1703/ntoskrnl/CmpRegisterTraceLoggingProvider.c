/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1405A76F8
 * Callers:
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     <none>
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&stru_14033C3C0, 0LL, 0LL);
}
