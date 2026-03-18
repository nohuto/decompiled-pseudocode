/*
 * XREFs of DbgkpResumeProcess @ 0x1406ACD40
 * Callers:
 *     PsDispatchIumService @ 0x14024ED54 (PsDispatchIumService.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     PsThawProcess @ 0x14057CE6C (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(ULONG_PTR a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
