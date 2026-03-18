/*
 * XREFs of RtlGetFirstRange @ 0x140619F10
 * Callers:
 *     ArbShareDriverExclusive @ 0x140617CC4 (ArbShareDriverExclusive.c)
 *     RtlIsRangeAvailable @ 0x140619CD0 (RtlIsRangeAvailable.c)
 *     ArbOverrideConflict @ 0x14061A7A0 (ArbOverrideConflict.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetFirstRange(PRTL_RANGE_LIST RangeList, PRTL_RANGE_LIST_ITERATOR Iterator, PRTL_RANGE *Range)
{
  NTSTATUS v3; // r9d
  struct _LIST_ENTRY *Flink; // rax
  __int64 p_Blink; // rcx

  Iterator->RangeListHead = &RangeList->ListHead;
  v3 = 0;
  Iterator->Stamp = RangeList->Stamp;
  Flink = RangeList->ListHead.Flink;
  if ( (PRTL_RANGE_LIST)RangeList->ListHead.Flink == RangeList )
  {
    Iterator->Current = 0LL;
    v3 = -2147483622;
    Iterator->MergedHead = 0LL;
    p_Blink = 0LL;
  }
  else
  {
    p_Blink = (__int64)&Flink[-3].Blink;
    if ( (BYTE2(Flink[-1].Blink) & 1) != 0 )
    {
      Iterator->MergedHead = (PLIST_ENTRY)(p_Blink + 16);
      p_Blink = *(_QWORD *)(p_Blink + 16) - 40LL;
    }
    else
    {
      Iterator->MergedHead = 0LL;
    }
    Iterator->Current = (PVOID)p_Blink;
  }
  *Range = (PRTL_RANGE)p_Blink;
  return v3;
}
