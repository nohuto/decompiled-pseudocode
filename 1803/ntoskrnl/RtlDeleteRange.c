/*
 * XREFs of RtlDeleteRange @ 0x14061A4E0
 * Callers:
 *     ArbBacktrackAllocation @ 0x14061AC10 (ArbBacktrackAllocation.c)
 *     IopPortBacktrackAllocation @ 0x140728550 (IopPortBacktrackAllocation.c)
 * Callees:
 *     RtlpDeleteFromMergedRange @ 0x140618758 (RtlpDeleteFromMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x14061A758 (RtlpFreeRangeListEntry.c)
 */

NTSTATUS __stdcall RtlDeleteRange(PRTL_RANGE_LIST RangeList, ULONGLONG Start, ULONGLONG End, PVOID Owner)
{
  struct _RTL_RANGE_LIST *Flink; // rax
  NTSTATUS v8; // r10d
  char *p_Blink; // rcx
  ULONGLONG v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rdx
  char **v13; // r8
  char *v15; // rax
  __int64 v16; // r8

  Flink = (struct _RTL_RANGE_LIST *)RangeList->ListHead.Flink;
  v8 = -1073741172;
  p_Blink = (char *)&RangeList->ListHead.Flink[-3].Blink;
  while ( 1 )
  {
    v11 = (__int64)&Flink->ListHead.Flink[-3].Blink;
    if ( RangeList == Flink )
      return v8;
    v10 = *(_QWORD *)p_Blink;
    if ( End < *(_QWORD *)p_Blink )
      return v8;
    if ( (p_Blink[34] & 1) != 0 )
    {
      if ( Start >= v10 && End <= *((_QWORD *)p_Blink + 1) )
      {
        v15 = (char *)*((_QWORD *)p_Blink + 2);
        v16 = (__int64)(v15 - 40);
        while ( p_Blink + 16 != v15 )
        {
          if ( *(_QWORD *)v16 == Start && *(_QWORD *)(v16 + 8) == End && *(PVOID *)(v16 + 24) == Owner )
          {
            v8 = RtlpDeleteFromMergedRange((_QWORD *)v16, p_Blink);
            goto LABEL_13;
          }
          v16 = *(_QWORD *)v15 - 40LL;
          v15 = *(char **)v15;
        }
      }
    }
    else if ( v10 == Start && *((_QWORD *)p_Blink + 1) == End && *((PVOID *)p_Blink + 3) == Owner )
    {
      v12 = *((_QWORD *)p_Blink + 5);
      if ( *(char **)(v12 + 8) != p_Blink + 40 || (v13 = (char **)*((_QWORD *)p_Blink + 6), *v13 != p_Blink + 40) )
        __fastfail(3u);
      *v13 = (char *)v12;
      *(_QWORD *)(v12 + 8) = v13;
      RtlpFreeRangeListEntry(p_Blink);
      v8 = 0;
LABEL_13:
      if ( v8 >= 0 )
      {
        --RangeList->Count;
        ++RangeList->Stamp;
      }
      return v8;
    }
    p_Blink = (char *)v11;
    Flink = (struct _RTL_RANGE_LIST *)(v11 + 40);
  }
}
