/*
 * XREFs of PspTimerDelayWorkerRoutine @ 0x14024EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PspApplyTimerDelayProcess @ 0x14024E464 (PspApplyTimerDelayProcess.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall PspTimerDelayWorkerRoutine(_QWORD *P)
{
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 760LL)) )
  {
    PspApplyTimerDelayProcess(P[4], 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(P[4] + 760LL));
  }
  ObfDereferenceObjectWithTag((PVOID)P[4], 0x624A7350u);
  ExFreePoolWithTag(P, 0x65446954u);
}
