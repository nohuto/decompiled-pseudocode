/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x140584D3C
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140476810 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
