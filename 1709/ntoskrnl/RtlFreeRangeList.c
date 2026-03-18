/*
 * XREFs of RtlFreeRangeList @ 0x14053F020
 * Callers:
 *     RtlCopyRangeList @ 0x140466970 (RtlCopyRangeList.c)
 *     ArbTestAllocation @ 0x14055AAF0 (ArbTestAllocation.c)
 *     ArbCommitAllocation @ 0x14055AC70 (ArbCommitAllocation.c)
 *     ArbBootAllocation @ 0x1405CF680 (ArbBootAllocation.c)
 *     RtlMergeRangeLists @ 0x14071E070 (RtlMergeRangeLists.c)
 *     ArbInitializeRangeList @ 0x140789210 (ArbInitializeRangeList.c)
 *     ArbQueryConflict @ 0x1407893F0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140789770 (ArbRetestAllocation.c)
 *     ArbRollbackAllocation @ 0x140789930 (ArbRollbackAllocation.c)
 *     ArbStartArbiter @ 0x140789B60 (ArbStartArbiter.c)
 * Callees:
 *     RtlpDeleteRangeListEntry @ 0x14053F090 (RtlpDeleteRangeListEntry.c)
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
    if ( (struct _RTL_RANGE_LIST *)v3->ListHead.Flink->Blink != v3
      || (Blink = v3->ListHead.Blink, (struct _RTL_RANGE_LIST *)Blink->Flink != v3) )
    {
      __fastfail(3u);
    }
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    RtlpDeleteRangeListEntry(p_Blink);
    p_Blink = v5;
    v4 = v5[5];
    v3 = (struct _RTL_RANGE_LIST *)(p_Blink + 5);
  }
}
