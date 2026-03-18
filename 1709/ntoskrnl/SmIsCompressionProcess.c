/*
 * XREFs of SmIsCompressionProcess @ 0x140116B88
 * Callers:
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140718F50 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x140719180 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == Object;
}
