/*
 * XREFs of RtlpDeleteFromMergedRange @ 0x140618758
 * Callers:
 *     RtlDeleteRange @ 0x14061A4E0 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x14061A5A0 (RtlDeleteOwnersRanges.c)
 * Callees:
 *     RtlpAddRange @ 0x140619950 (RtlpAddRange.c)
 *     RtlpAddToMergedRange @ 0x14061A0F8 (RtlpAddToMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x14061A758 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpDeleteFromMergedRange(_QWORD *Entry, char *a2)
{
  int v2; // r14d
  _QWORD **v3; // r8
  PVOID *v6; // rdx
  _QWORD *v7; // r8
  char *v8; // rax
  char *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  char **v12; // rdx
  char *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rbx
  char **v20; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-8h]

  v2 = 0;
  v3 = (_QWORD **)Entry[5];
  if ( v3[1] != Entry + 5 || (v6 = (PVOID *)Entry[6], *v6 != Entry + 5) )
    __fastfail(3u);
  *v6 = v3;
  v3[1] = v6;
  v22 = &v21;
  v7 = &v21;
  v8 = (char *)*((_QWORD *)a2 + 2);
  v21 = &v21;
  v9 = v8 - 40;
  v10 = *(_QWORD *)v8 - 40LL;
  if ( a2 + 16 == v8 )
  {
LABEL_9:
    v13 = a2 + 40;
    v14 = *((_QWORD *)a2 + 5);
    if ( v7 == &v21 )
    {
      if ( *(char **)(v14 + 8) != v13 || (v20 = (char **)*((_QWORD *)a2 + 6), *v20 != v13) )
        __fastfail(3u);
      *v20 = (char *)v14;
      *(_QWORD *)(v14 + 8) = v20;
    }
    else
    {
      v15 = (_QWORD *)*((_QWORD *)a2 + 6);
      *v15 = v7;
      v21[1] = v15;
      *(_QWORD *)(v14 + 8) = v22;
      *v22 = v14;
    }
    RtlpFreeRangeListEntry(Entry);
    RtlpFreeRangeListEntry(a2);
    return (unsigned int)v2;
  }
  else
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 || (v12 = (char **)*((_QWORD *)v8 + 1), *v12 != v8) )
        __fastfail(3u);
      *v12 = (char *)v11;
      *(_QWORD *)(v11 + 8) = v12;
      v9[33] &= ~2u;
      v2 = RtlpAddRange(&v21, v9, 1LL);
      if ( v2 < 0 )
        break;
      v9 = (char *)v10;
      v10 = *(_QWORD *)(v10 + 40) - 40LL;
      v8 = v9 + 40;
      if ( a2 + 16 == v9 + 40 )
      {
        v7 = v21;
        goto LABEL_9;
      }
    }
    v17 = (__int64)(v21 - 5);
    v18 = v21;
    while ( 1 )
    {
      v19 = *v18 - 40LL;
      if ( &v21 == v18 )
        break;
      RtlpAddToMergedRange(a2, v17, 1LL);
      v18 = (_QWORD *)(v19 + 40);
      v17 = v19;
    }
    return RtlpAddToMergedRange(a2, Entry, 1LL);
  }
}
