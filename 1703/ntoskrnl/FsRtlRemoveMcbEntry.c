/*
 * XREFs of FsRtlRemoveMcbEntry @ 0x1401E3130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlRemoveMcbEntry(PMCB Mcb, VBN Vbn, ULONG SectorCount)
{
  FsRtlRemoveLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, SectorCount);
}
