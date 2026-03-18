/*
 * XREFs of DbgkpResumeProcess @ 0x140681A78
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 * Callees:
 *     PsThawProcess @ 0x14054E700 (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(ULONG_PTR a1)
{
  PsThawProcess(a1, 0);
  KeLeaveCriticalRegion();
}
