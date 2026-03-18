/*
 * XREFs of HvpMapEntryIsBinPresent @ 0x140016938
 * Callers:
 *     HvpSetRangeProtection @ 0x14047CF98 (HvpSetRangeProtection.c)
 *     HvpFreeAllocatedBins @ 0x140694950 (HvpFreeAllocatedBins.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsBinPresent(__int64 a1)
{
  return (*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0uLL) != 0 || (*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL) != 0;
}
