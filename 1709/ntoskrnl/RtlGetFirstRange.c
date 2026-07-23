/*
 * XREFs of RtlGetFirstRange @ 0x14056E250
 * Callers:
 *     RtlIsRangeAvailable @ 0x14056DEB0 (RtlIsRangeAvailable.c)
 *     ArbOverrideConflict @ 0x140789320 (ArbOverrideConflict.c)
 *     ArbShareDriverExclusive @ 0x14078994C (ArbShareDriverExclusive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetFirstRange(PRTL_RANGE_LIST RangeList, PRTL_RANGE_LIST_ITERATOR Iterator, PRTL_RANGE *Range)
{
  NTSTATUS v3; // r9d
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v5; // rcx

  Iterator->RangeListHead = &RangeList->ListHead;
  v3 = 0;
  Iterator->Stamp = RangeList->Stamp;
  Flink = RangeList->ListHead.Flink;
  if ( (PRTL_RANGE_LIST)RangeList->ListHead.Flink == RangeList )
  {
    Iterator->Current = 0LL;
    Iterator->MergedHead = 0LL;
    *Range = 0LL;
    return -2147483622;
  }
  else
  {
    v5 = (struct _LIST_ENTRY *)((char *)Flink - 40);
    if ( (BYTE2(Flink[-1].Blink) & 1) != 0 )
    {
      Iterator->MergedHead = v5 + 1;
      Iterator->Current = &v5[1].Flink[-3].Blink;
    }
    else
    {
      Iterator->MergedHead = 0LL;
      Iterator->Current = v5;
    }
    *Range = (PRTL_RANGE)Iterator->Current;
  }
  return v3;
}
