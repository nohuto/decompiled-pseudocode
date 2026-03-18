/*
 * XREFs of RtlDeleteRange @ 0x1405B57E0
 * Callers:
 *     ArbBacktrackAllocation @ 0x1405DA4E0 (ArbBacktrackAllocation.c)
 *     IopPortBacktrackAllocation @ 0x140696950 (IopPortBacktrackAllocation.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x1405B5A50 (RtlpFreeRangeListEntry.c)
 *     RtlpDeleteFromMergedRange @ 0x1405D88C4 (RtlpDeleteFromMergedRange.c)
 */

NTSTATUS __stdcall RtlDeleteRange(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  ULONGLONG *p_Blink; // rcx
  NTSTATUS v8; // r10d
  struct _RTL_RANGE_LIST *i; // rax
  ULONGLONG v10; // rdx
  __int64 v11; // r11
  ULONGLONG v12; // r8
  ULONGLONG **v13; // rdx
  _QWORD *v15; // r8
  ULONGLONG *j; // rax

  p_Blink = (ULONGLONG *)&RangeList->ListHead.Flink[-3].Blink;
  v8 = -1073741172;
  for ( i = (struct _RTL_RANGE_LIST *)(p_Blink + 5); ; i = (struct _RTL_RANGE_LIST *)(v11 + 40) )
  {
    v11 = (__int64)&i->ListHead.Flink[-3].Blink;
    if ( RangeList == i )
      break;
    v10 = *p_Blink;
    if ( End < *p_Blink )
      break;
    if ( (*((_BYTE *)p_Blink + 34) & 1) != 0 )
    {
      if ( Start >= v10 && End <= p_Blink[1] )
      {
        v15 = (_QWORD *)(p_Blink[2] - 40);
        for ( j = (ULONGLONG *)p_Blink[2]; p_Blink + 2 != j; j = (ULONGLONG *)*j )
        {
          if ( *v15 == Start && v15[1] == End && (PVOID)v15[3] == Owner )
          {
            v8 = RtlpDeleteFromMergedRange(v15, p_Blink);
            if ( v8 < 0 )
              return v8;
            goto LABEL_13;
          }
          v15 = (_QWORD *)(*j - 40);
        }
      }
    }
    else if ( v10 == Start && p_Blink[1] == End && (PVOID)p_Blink[3] == Owner )
    {
      v12 = p_Blink[5];
      v13 = (ULONGLONG **)p_Blink[6];
      if ( *(ULONGLONG **)(v12 + 8) != p_Blink + 5 || *v13 != p_Blink + 5 )
        __fastfail(3u);
      *v13 = (ULONGLONG *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      RtlpFreeRangeListEntry(p_Blink);
      v8 = 0;
LABEL_13:
      --RangeList->Count;
      ++RangeList->Stamp;
      return v8;
    }
    p_Blink = (ULONGLONG *)v11;
  }
  return v8;
}
