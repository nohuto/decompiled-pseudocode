/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x140239BE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x1402394C4 (PspApplyTimerDelayProcess.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(__int64 *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9

  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1[4] + 760)) )
  {
    PspApplyTimerDelayProcess(a1[4], 0LL, v2, v3);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1[4] + 760));
  }
  ObfDereferenceObjectWithTag((PVOID)a1[4], 0x624A7350u);
  ExFreePoolWithTag(a1, 0x65446954u);
}
