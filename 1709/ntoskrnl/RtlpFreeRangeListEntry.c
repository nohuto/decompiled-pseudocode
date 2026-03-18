/*
 * XREFs of RtlpFreeRangeListEntry @ 0x14053F0F4
 * Callers:
 *     RtlAddRange @ 0x1404667A0 (RtlAddRange.c)
 *     RtlpDeleteRangeListEntry @ 0x14053F090 (RtlpDeleteRangeListEntry.c)
 *     RtlDeleteOwnersRanges @ 0x14055AF80 (RtlDeleteOwnersRanges.c)
 *     RtlDeleteRange @ 0x140595650 (RtlDeleteRange.c)
 *     RtlpAddIntersectingRanges @ 0x1405DA3FC (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x14071E184 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeRangeListEntry(PVOID Entry)
{
  _DWORD *v2; // rax

  if ( (*((_BYTE *)Entry + 34) & 1) == 0 && (*((_BYTE *)Entry + 33) & 0x10) != 0 )
  {
    v2 = (_DWORD *)*((_QWORD *)Entry + 2);
    if ( (*v2)-- == 1 )
      ExFreePoolWithTag(*((PVOID *)Entry + 2), 0);
  }
  ExFreeToNPagedLookasideList(&RtlpRangeListEntryLookasideList, Entry);
}
