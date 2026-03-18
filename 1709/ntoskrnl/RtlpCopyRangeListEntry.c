/*
 * XREFs of RtlpCopyRangeListEntry @ 0x140466A04
 * Callers:
 *     RtlCopyRangeList @ 0x140466970 (RtlCopyRangeList.c)
 *     RtlpAddIntersectingRanges @ 0x1405DA3FC (RtlpAddIntersectingRanges.c)
 *     RtlMergeRangeLists @ 0x14071E070 (RtlMergeRangeLists.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     RtlpDeleteRangeListEntry @ 0x14053F090 (RtlpDeleteRangeListEntry.c)
 */

_QWORD *__fastcall RtlpCopyRangeListEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  char *v5; // r14
  __int64 i; // rsi
  __int64 v7; // rsi
  _OWORD *v8; // rax
  _OWORD *v9; // rdx
  char **v10; // rax
  char *v11; // rdx

  v2 = ExAllocateFromNPagedLookasideList(&RtlpRangeListEntryLookasideList);
  v3 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = *(_OWORD *)a1;
    *((_OWORD *)v2 + 1) = *(_OWORD *)(a1 + 16);
    *((_OWORD *)v2 + 2) = *(_OWORD *)(a1 + 32);
    v2[6] = *(_QWORD *)(a1 + 48);
    if ( (*((_BYTE *)v2 + 33) & 0x10) != 0 )
      ++*(_DWORD *)v2[2];
    if ( (*(_BYTE *)(a1 + 34) & 1) != 0 )
    {
      v5 = (char *)(v2 + 2);
      v2[3] = v2 + 2;
      v2[2] = v2 + 2;
      for ( i = *(_QWORD *)(a1 + 16); ; i = *(_QWORD *)(v7 + 40) )
      {
        v7 = i - 40;
        if ( a1 == v7 + 24 )
          break;
        v8 = ExAllocateFromNPagedLookasideList(&RtlpRangeListEntryLookasideList);
        v9 = v8;
        if ( !v8 )
        {
          RtlpDeleteRangeListEntry(v3);
          return 0LL;
        }
        *v8 = *(_OWORD *)v7;
        v8[1] = *(_OWORD *)(v7 + 16);
        v8[2] = *(_OWORD *)(v7 + 32);
        *((_QWORD *)v8 + 6) = *(_QWORD *)(v7 + 48);
        if ( (*((_BYTE *)v8 + 33) & 0x10) != 0 )
          ++**((_DWORD **)v8 + 2);
        v10 = (char **)v3[3];
        v11 = (char *)v9 + 40;
        if ( *v10 != v5 )
          __fastfail(3u);
        *(_QWORD *)v11 = v5;
        *((_QWORD *)v11 + 1) = v10;
        *v10 = v11;
        v3[3] = v11;
      }
    }
  }
  return v3;
}
