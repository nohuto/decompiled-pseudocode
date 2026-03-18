/*
 * XREFs of RtlFreeRangeList @ 0x1405B5980
 * Callers:
 *     ArbTestAllocation @ 0x1405B3190 (ArbTestAllocation.c)
 *     ArbBootAllocation @ 0x1405B4870 (ArbBootAllocation.c)
 *     RtlCopyRangeList @ 0x1405B5570 (RtlCopyRangeList.c)
 *     ArbCommitAllocation @ 0x1405B5AA0 (ArbCommitAllocation.c)
 *     RtlMergeRangeLists @ 0x1406E5B60 (RtlMergeRangeLists.c)
 *     ArbInitializeRangeList @ 0x140746CD0 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x140746DE0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140747160 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x140747320 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x140747340 (ArbStartArbiter.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x1405B59F0 (RtlpDeleteRangeListEntry.c)
 */

void __stdcall RtlFreeRangeList(PRTL_RANGE_LIST RangeList)
{
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _RTL_RANGE_LIST *v3; // rax
  struct _LIST_ENTRY *v4; // rbx
  struct _LIST_ENTRY **v5; // rbx
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx

  RangeList->Flags = 0;
  RangeList->Count = 0;
  p_Blink = &RangeList->ListHead.Flink[-3].Blink;
  v3 = (struct _RTL_RANGE_LIST *)(p_Blink + 5);
  v4 = p_Blink[5];
  while ( 1 )
  {
    v5 = &v4[-3].Blink;
    if ( RangeList == v3 )
      break;
    Flink = v3->ListHead.Flink;
    Blink = v3->ListHead.Blink;
    if ( (struct _RTL_RANGE_LIST *)v3->ListHead.Flink->Blink != v3 || (struct _RTL_RANGE_LIST *)Blink->Flink != v3 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    RtlpDeleteRangeListEntry(p_Blink);
    p_Blink = v5;
    v4 = v5[5];
    v3 = (struct _RTL_RANGE_LIST *)(p_Blink + 5);
  }
}
