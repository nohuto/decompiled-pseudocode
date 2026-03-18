/*
 * XREFs of FsRtlTruncateMcb @ 0x140224BD0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlTruncateLargeMcb @ 0x1400AFAB0 (FsRtlTruncateLargeMcb.c)
 */

void __stdcall FsRtlTruncateMcb(PMCB Mcb, VBN Vbn)
{
  FsRtlTruncateLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn);
}
