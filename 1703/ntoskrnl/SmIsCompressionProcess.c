/*
 * XREFs of SmIsCompressionProcess @ 0x14001E628
 * Callers:
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1406E2AF4 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x1406E2CD0 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_1403FA178;
}
