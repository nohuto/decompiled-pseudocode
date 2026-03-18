/*
 * XREFs of CmpRegisterTraceLoggingProvider @ 0x1405F23E4
 * Callers:
 *     CmInitSystem2 @ 0x140857C20 (CmInitSystem2.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1405AB198 (TlgRegisterAggregateProviderEx.c)
 */

TLG_STATUS CmpRegisterTraceLoggingProvider()
{
  return TlgRegisterAggregateProviderEx(&stru_1403549F0, 0LL, 0LL);
}
