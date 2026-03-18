/*
 * XREFs of DbgkpResumeProcess @ 0x1407115E8
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     PsThawProcess @ 0x140565D8C (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(ULONG_PTR a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
