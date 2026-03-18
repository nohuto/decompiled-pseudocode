/*
 * XREFs of FsRtlAddMcbEntry @ 0x1401E6EB0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddLargeMcbEntry @ 0x140111170 (FsRtlAddLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlAddMcbEntry(PMCB Mcb, VBN Vbn, LBN Lbn, ULONG SectorCount)
{
  return FsRtlAddLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, Lbn, SectorCount);
}
