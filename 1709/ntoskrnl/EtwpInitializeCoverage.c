/*
 * XREFs of EtwpInitializeCoverage @ 0x1405ABC40
 * Callers:
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x1405AB2CC (TraceLoggingRegisterEx.c)
 */

TLG_STATUS EtwpInitializeCoverage()
{
  MEMORY[0xFFFFF7800000037C] = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx(&stru_140354BD0, (TLG_PENABLECALLBACK)EtwpCoverageProvEnableCallback, 0LL);
}
