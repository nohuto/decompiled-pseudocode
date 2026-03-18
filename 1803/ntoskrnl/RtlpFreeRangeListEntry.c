/*
 * XREFs of RtlpFreeRangeListEntry @ 0x14061A758
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x140618758 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x1406198B0 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x140619FCC (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x14061A4E0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x14061A5A0 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x14061A6F8 (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
