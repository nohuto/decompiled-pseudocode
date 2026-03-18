/*
 * XREFs of RtlpFreeRangeListEntry @ 0x1405B5A50
 * Callers:
 *     RtlAddRange @ 0x1405B4B10 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x1405B5304 (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x1405B57E0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x1405B58A0 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x1405B59F0 (RtlpDeleteRangeListEntry.c)
 *     RtlpDeleteFromMergedRange @ 0x1405D88C4 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
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
  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&RtlpRangeListEntryLookasideList, Entry);
}
