/*
 * XREFs of FsRtlAddBaseMcbEntry @ 0x1400AFFF0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x1400B0010 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  return FsRtlAddBaseMcbEntryEx(Mcb, Vbn, Lbn, SectorCount) >= 0;
}
