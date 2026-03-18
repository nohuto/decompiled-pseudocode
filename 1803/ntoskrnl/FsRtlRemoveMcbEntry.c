/*
 * XREFs of FsRtlRemoveMcbEntry @ 0x140224980
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlRemoveLargeMcbEntry @ 0x140224910 (FsRtlRemoveLargeMcbEntry.c)
 */

void __stdcall FsRtlRemoveMcbEntry(PMCB Mcb, VBN Vbn, ULONG SectorCount)
{
  FsRtlRemoveLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, SectorCount);
}
