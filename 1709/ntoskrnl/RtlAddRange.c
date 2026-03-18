/*
 * XREFs of RtlAddRange @ 0x1404667A0
 * Callers:
 *     RtlInvertRangeListEx @ 0x1405CC960 (RtlInvertRangeListEx.c)
 *     IopMemInitialize @ 0x1405CE6B4 (IopMemInitialize.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405CE8DC (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1405CEAD0 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddAllocation @ 0x1405CF8D0 (ArbAddAllocation.c)
 *     IopPortAddAllocation @ 0x1405CF9A0 (IopPortAddAllocation.c)
 *     ArbInitializeRangeList @ 0x140789210 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlpAddRange @ 0x140466840 (RtlpAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x140466900 (RtlpCreateRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x14053F0F4 (RtlpFreeRangeListEntry.c)
 */

NTSTATUS __stdcall RtlAddRange(
        PRTL_RANGE_LIST RangeList,
        ULONGLONG Start,
        ULONGLONG End,
        UCHAR Attributes,
        ULONG Flags,
        PVOID UserData,
        PVOID Owner)
{
  int v7; // r10d
  __int64 RangeListEntry; // rax
  void *v10; // rbx
  NTSTATUS v11; // esi

  v7 = End;
  if ( End < Start )
    return -1073741811;
  LOBYTE(End) = Attributes;
  RangeListEntry = RtlpCreateRangeListEntry(Start, v7, End, (_DWORD)UserData, (__int64)Owner);
  v10 = (void *)RangeListEntry;
  if ( !RangeListEntry )
    return -1073741823;
  if ( (Flags & 2) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 1u;
  if ( (Flags & 0x10) != 0 )
    *(_BYTE *)(RangeListEntry + 33) |= 0x10u;
  v11 = RtlpAddRange(RangeList, RangeListEntry);
  if ( v11 < 0 )
  {
    RtlpFreeRangeListEntry(v10);
  }
  else
  {
    ++RangeList->Count;
    ++RangeList->Stamp;
  }
  return v11;
}
