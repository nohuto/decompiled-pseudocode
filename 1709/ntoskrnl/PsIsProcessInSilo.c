/*
 * XREFs of PsIsProcessInSilo @ 0x140089050
 * Callers:
 *     PsIsThreadInSilo @ 0x140089378 (PsIsThreadInSilo.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     PsLookupProcessByProcessId @ 0x140575060 (PsLookupProcessByProcessId.c)
 *     NtGetNextProcess @ 0x14071C6A0 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x14012CFAC (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x14059803C (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
