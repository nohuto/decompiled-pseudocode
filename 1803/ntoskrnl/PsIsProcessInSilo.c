/*
 * XREFs of PsIsProcessInSilo @ 0x1400F0EC0
 * Callers:
 *     PsIsThreadInSilo @ 0x1400F17F4 (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x14059A9C0 (PsLookupProcessByProcessId.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     NtGetNextProcess @ 0x14060E220 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x1400CF63C (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x140580A88 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Affinity.Bitmap[16]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
