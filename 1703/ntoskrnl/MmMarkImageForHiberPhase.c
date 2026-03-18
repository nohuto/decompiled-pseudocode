/*
 * XREFs of MmMarkImageForHiberPhase @ 0x14040DDE0
 * Callers:
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     MiEnumerateLeafPtes @ 0x140079AD8 (MiEnumerateLeafPtes.c)
 */

unsigned __int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  PVOID *v1; // rax

  v1 = MiLookupDataTableEntry(a1, 1);
  return MiEnumerateLeafPtes(
           (unsigned __int64)v1[6],
           ((unsigned __int64)v1[6] + *((unsigned int *)v1 + 16)) & 0xFFFFFFFFFFFFF000uLL,
           (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiMarkNonPagedHiberPhasePages,
           0LL,
           0);
}
