/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x140284F40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     PspApplyTimerDelayProcess @ 0x1402847F4 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(_QWORD *P)
{
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(P[4] + 760LL)) )
  {
    PspApplyTimerDelayProcess(P[4], 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(P[4] + 760LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}
