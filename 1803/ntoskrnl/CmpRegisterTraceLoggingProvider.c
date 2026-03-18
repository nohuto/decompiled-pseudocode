/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x14062013C
 * Callers:
 *     CmInitSystem2 @ 0x14089E508 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x14064AF18 (TlgRegisterAggregateProviderEx.c)
 */

__int64 CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&stru_140397090, 0LL, 0LL);
}
