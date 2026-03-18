/*
 * XREFs of MmMarkImageForHiberPhase @ 0x14043066C
 * Callers:
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 * Callees:
 *     MiEnumerateLeafPtes @ 0x140002204 (MiEnumerateLeafPtes.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
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
