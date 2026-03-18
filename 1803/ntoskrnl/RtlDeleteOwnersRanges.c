/*
 * XREFs of RtlDeleteOwnersRanges @ 0x14061A5A0
 * Callers:
 *     ArbTestAllocation @ 0x140618580 (ArbTestAllocation.c)
 *     ArbQueryConflict @ 0x1407F5AC0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1407F5E40 (ArbRetestAllocation.c)
 * Callees:
 *     RtlpDeleteFromMergedRange @ 0x140618758 (RtlpDeleteFromMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x14061A758 (RtlpFreeRangeListEntry.c)
 */

NTSTATUS __stdcall RtlDeleteOwnersRanges(PRTL_RANGE_LIST RangeList, PVOID Owner)
{
  NTSTATUS v4; // r8d
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY **p_Blink; // rdx
  struct _LIST_ENTRY **v7; // rdi
  char *v8; // rcx
  __int64 v9; // r8
  char **v10; // rax
  char *v11; // rax
  __int64 v12; // r9

  v4 = 0;
LABEL_2:
  Flink = RangeList->ListHead.Flink->Flink;
  p_Blink = &RangeList->ListHead.Flink[-3].Blink;
  while ( 1 )
  {
    v7 = &Flink[-3].Blink;
    v8 = (char *)(p_Blink + 5);
    if ( RangeList == (PRTL_RANGE_LIST)(p_Blink + 5) )
      return v4;
    if ( (*((_BYTE *)p_Blink + 34) & 1) != 0 )
    {
      v11 = (char *)p_Blink[2];
      v12 = (__int64)(v11 - 40);
      while ( p_Blink + 2 != (struct _LIST_ENTRY **)v11 )
      {
        if ( *(PVOID *)(v12 + 24) == Owner )
        {
          v4 = RtlpDeleteFromMergedRange((_QWORD *)v12, (char *)p_Blink);
          if ( v4 < 0 )
            return v4;
          --RangeList->Count;
          ++RangeList->Stamp;
          goto LABEL_2;
        }
        v12 = *(_QWORD *)v11 - 40LL;
        v11 = *(char **)v11;
      }
    }
    else if ( p_Blink[3] == Owner )
    {
      v9 = *(_QWORD *)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = (char **)p_Blink[6], *v10 != v8) )
        __fastfail(3u);
      *v10 = (char *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      RtlpFreeRangeListEntry(p_Blink);
      --RangeList->Count;
      ++RangeList->Stamp;
      v4 = 0;
    }
    p_Blink = v7;
    Flink = v7[5];
  }
}
