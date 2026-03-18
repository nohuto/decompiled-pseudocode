/*
 * XREFs of MmMarkImageForHiberPhase @ 0x140485A18
 * Callers:
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x14048566C (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  __int64 v1; // rax

  v1 = MiLookupDataTableEntry(a1, 2LL);
  return MiMarkNonPagedHiberPhasePages(*(_QWORD *)(v1 + 48), *(_QWORD *)(v1 + 48) + *(unsigned int *)(v1 + 64) - 1LL, 0);
}
