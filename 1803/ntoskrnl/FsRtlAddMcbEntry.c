/*
 * XREFs of FsRtlAddMcbEntry @ 0x140224520
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddLargeMcbEntry @ 0x1400AFA40 (FsRtlAddLargeMcbEntry.c)
 */

BOOLEAN __stdcall FsRtlAddMcbEntry(PMCB Mcb, VBN Vbn, LBN Lbn, ULONG SectorCount)
{
  return FsRtlAddLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, Lbn, SectorCount);
}
