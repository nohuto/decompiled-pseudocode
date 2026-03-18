/*
 * XREFs of FsRtlUninitializeMcb @ 0x140715020
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeLargeMcb @ 0x1400C1130 (FsRtlUninitializeLargeMcb.c)
 */

void __stdcall FsRtlUninitializeMcb(PMCB Mcb)
{
  FsRtlUninitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
