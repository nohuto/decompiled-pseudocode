/*
 * XREFs of RtlMergeRangeLists @ 0x140781800
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddRange @ 0x140619950 (RtlpAddRange.c)
 *     RtlCopyRangeList @ 0x14061A280 (RtlCopyRangeList.c)
 *     RtlpCopyRangeListEntry @ 0x14061A310 (RtlpCopyRangeListEntry.c)
 *     RtlFreeRangeList @ 0x14061A680 (RtlFreeRangeList.c)
 */

NTSTATUS __stdcall RtlMergeRangeLists(
        PRTL_RANGE_LIST MergedRangeList,
        PRTL_RANGE_LIST RangeList1,
        PRTL_RANGE_LIST RangeList2,
        ULONG Flags)
{
  NTSTATUS v7; // ebx
  char *p_Blink; // rbp
  ULONG v9; // edi
  char *i; // rax
  __int64 *v11; // rax
  ULONG v12; // r8d
  char *v13; // r13
  __int64 *v14; // rax
  ULONG v15; // r8d
  struct _RTL_RANGE_LIST *v16; // rax

  v7 = RtlCopyRangeList(MergedRangeList, RangeList1);
  if ( v7 < 0 )
  {
LABEL_19:
    RtlFreeRangeList(MergedRangeList);
  }
  else
  {
    p_Blink = (char *)&RangeList2->ListHead.Flink[-3].Blink;
    if ( RangeList2 != (PRTL_RANGE_LIST)RangeList2->ListHead.Flink )
    {
      v9 = Flags | 1;
      do
      {
        if ( (p_Blink[34] & 1) != 0 )
        {
          for ( i = (char *)*((_QWORD *)p_Blink + 2); ; i = (char *)*((_QWORD *)v13 + 5) )
          {
            v13 = i - 40;
            if ( p_Blink + 16 == i )
              break;
            v11 = RtlpCopyRangeListEntry((__int64)(i - 40));
            if ( !v11 )
              goto LABEL_18;
            v12 = Flags | 1;
            if ( (v13[33] & 2) == 0 )
              v12 = Flags;
            v7 = RtlpAddRange(MergedRangeList, v11, v12);
          }
          v9 = Flags | 1;
        }
        else
        {
          v14 = RtlpCopyRangeListEntry((__int64)p_Blink);
          if ( !v14 )
          {
LABEL_18:
            v7 = -1073741670;
            goto LABEL_19;
          }
          v15 = v9;
          if ( (p_Blink[33] & 2) == 0 )
            v15 = Flags;
          v7 = RtlpAddRange(MergedRangeList, v14, v15);
          if ( v7 < 0 )
            goto LABEL_19;
        }
        v16 = (struct _RTL_RANGE_LIST *)*((_QWORD *)p_Blink + 5);
        p_Blink = (char *)&v16[-2].Stamp;
      }
      while ( RangeList2 != v16 );
    }
    MergedRangeList->Count += RangeList2->Count;
    MergedRangeList->Stamp += RangeList2->Count;
  }
  return v7;
}
