/*
 * XREFs of FsRtlRemoveMcbEntry @ 0x1401E7310
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlRemoveLargeMcbEntry @ 0x1401E72A0 (FsRtlRemoveLargeMcbEntry.c)
 */

void __stdcall FsRtlRemoveMcbEntry(PMCB Mcb, VBN Vbn, ULONG SectorCount)
{
  FsRtlRemoveLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, SectorCount);
}
