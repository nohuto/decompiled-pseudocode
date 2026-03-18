/*
 * XREFs of SmIsCompressionProcess @ 0x1400B72A4
 * Callers:
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14077CF24 (PsWaitForAllProcesses.c)
 *     PspFreezeProcessWorker @ 0x14077D150 (PspFreezeProcessWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmIsCompressionProcess(PVOID a1)
{
  return a1 == qword_140466158;
}
