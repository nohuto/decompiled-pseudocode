/*
 * XREFs of RtlAddRange @ 0x1405B4B10
 * Callers:
 *     IopPortAddAllocation @ 0x1405B3A60 (IopPortAddAllocation.c)
 *     RtlInvertRangeListEx @ 0x1405B41E0 (RtlInvertRangeListEx.c)
 *     ArbAddAllocation @ 0x1405B4AC0 (ArbAddAllocation.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1405B6478 (ArbAddInaccessibleAllocationRange.c)
 *     IopMemInitialize @ 0x1405D0F08 (IopMemInitialize.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405D0FEC (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbInitializeRangeList @ 0x140746CD0 (ArbInitializeRangeList.c)
 * Callees:
 *     RtlpAddRange @ 0x1405B4BB0 (RtlpAddRange.c)
 *     RtlpCreateRangeListEntry @ 0x1405B4C78 (RtlpCreateRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x1405B5A50 (RtlpFreeRangeListEntry.c)
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
