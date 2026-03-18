/*
 * XREFs of PsIsProcessInSilo @ 0x140094938
 * Callers:
 *     PsIsThreadInSilo @ 0x140094994 (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 * Callees:
 *     PspGetJobSilo @ 0x14003A23C (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x14045A7A8 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
