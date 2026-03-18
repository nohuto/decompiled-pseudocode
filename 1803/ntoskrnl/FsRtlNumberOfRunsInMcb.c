/*
 * XREFs of FsRtlNumberOfRunsInMcb @ 0x1402248F0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1402248B0 (FsRtlNumberOfRunsInLargeMcb.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInMcb(PMCB Mcb)
{
  return FsRtlNumberOfRunsInLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
