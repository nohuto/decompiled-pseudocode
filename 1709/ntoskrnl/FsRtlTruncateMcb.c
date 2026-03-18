/*
 * XREFs of FsRtlTruncateMcb @ 0x1401E7570
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlTruncateLargeMcb @ 0x1401111E0 (FsRtlTruncateLargeMcb.c)
 */

void __stdcall FsRtlTruncateMcb(PMCB Mcb, VBN Vbn)
{
  FsRtlTruncateLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn);
}
