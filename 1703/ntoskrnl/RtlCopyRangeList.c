/*
 * XREFs of RtlCopyRangeList @ 0x1405B5570
 * Callers:
 *     ArbTestAllocation @ 0x1405B3190 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x1405B4870 (ArbBootAllocation.c)
 *     RtlMergeRangeLists @ 0x1406E5B60 (RtlMergeRangeLists.c)
 *     ArbQueryConflict @ 0x140746DE0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140747160 (ArbRetestAllocation.c)
 * Callees:
 *     RtlpCopyRangeListEntry @ 0x1405B5604 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x1405B5980 (RtlFreeRangeList.c)
 */

NTSTATUS __stdcall RtlCopyRangeList(PRTL_RANGE_LIST CopyRangeList, PRTL_RANGE_LIST RangeList)
{
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY **p_Blink; // rax
  struct _LIST_ENTRY **v6; // rsi
  __int64 v7; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v9; // rax

  if ( CopyRangeList->Count )
    return -1073741811;
  CopyRangeList->Flags = RangeList->Flags;
  CopyRangeList->Count = RangeList->Count;
  CopyRangeList->Stamp = RangeList->Stamp;
  for ( i = RangeList->ListHead.Flink; ; i = *v6 )
  {
    p_Blink = &i[-3].Blink;
    v6 = p_Blink + 5;
    if ( RangeList == (PRTL_RANGE_LIST)(p_Blink + 5) )
      return 0;
    v7 = RtlpCopyRangeListEntry(p_Blink);
    if ( !v7 )
      break;
    Blink = CopyRangeList->ListHead.Blink;
    v9 = (struct _LIST_ENTRY *)(v7 + 40);
    if ( (PRTL_RANGE_LIST)Blink->Flink != CopyRangeList )
      __fastfail(3u);
    v9->Flink = &CopyRangeList->ListHead;
    v9->Blink = Blink;
    Blink->Flink = v9;
    CopyRangeList->ListHead.Blink = v9;
  }
  RtlFreeRangeList(CopyRangeList);
  return -1073741670;
}
