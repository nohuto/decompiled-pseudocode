/*
 * XREFs of EtwpInitializeCoverage @ 0x1406558C0
 * Callers:
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x140613338 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS EtwpInitializeCoverage()
{
  MEMORY[0xFFFFF7800000037C] = 1;
  EtwpCoverageLock = 0LL;
  return TraceLoggingRegisterEx(&stru_140397820, (TLG_PENABLECALLBACK)EtwpCoverageProvEnableCallback, 0LL);
}
