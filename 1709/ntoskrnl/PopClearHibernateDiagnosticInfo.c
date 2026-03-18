/*
 * XREFs of PopClearHibernateDiagnosticInfo @ 0x1406FB498
 * Callers:
 *     PopUnlockAfterSleepWorker @ 0x140438EC0 (PopUnlockAfterSleepWorker.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

void *PopClearHibernateDiagnosticInfo()
{
  return memset(&PopHibernateDiagnosticInfo, 0, 0x80uLL);
}
