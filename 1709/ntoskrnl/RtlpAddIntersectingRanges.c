/*
 * XREFs of RtlpAddIntersectingRanges @ 0x1405DA3FC
 * Callers:
 *     RtlpAddRange @ 0x140466840 (RtlpAddRange.c)
 * Callees:
 *     RtlpCopyRangeListEntry @ 0x140466A04 (RtlpCopyRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x14053F0F4 (RtlpFreeRangeListEntry.c)
 *     RtlpAddToMergedRange @ 0x1405DA4EC (RtlpAddToMergedRange.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(_QWORD *a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  char v4; // r10
  unsigned int v5; // r14d
  __int64 v7; // rdi
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _BYTE *v13; // rsi
  _QWORD *i; // rbx
  __int64 v15; // rbp
  _QWORD *v17; // r8
  unsigned __int64 v18; // rbx
  _QWORD *v19; // r11
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  bool v24; // cf
  __int64 v25; // rdx
  _QWORD *v26; // rax
  __int64 v27; // r14
  __int64 v28; // r8
  _QWORD *v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax

  v4 = *((_BYTE *)a3 + 33) & 1;
  v5 = a4;
  v7 = a2;
  if ( (a4 & 1) == 0 )
  {
    v17 = (_QWORD *)(a2 + 40);
    if ( a1 != (_QWORD *)(a2 + 40) )
    {
      v18 = a3[1];
      do
      {
        if ( v18 < *(_QWORD *)a2 )
          break;
        if ( (*(_BYTE *)(a2 + 34) & 1) != 0 )
        {
          v19 = (_QWORD *)(a2 + 16);
          v20 = *(_QWORD *)(a2 + 16) - 40LL;
          v21 = *(_QWORD **)(a2 + 16);
          if ( v19 != v21 )
          {
            v22 = *a3;
            do
            {
              v23 = *(_QWORD *)v20;
              v24 = v22 < *(_QWORD *)v20;
              if ( v22 > *(_QWORD *)v20 )
              {
                if ( *(_QWORD *)(v20 + 8) < v22 )
                  goto LABEL_26;
                v24 = v22 < v23;
              }
              if ( (!v24 || v18 >= v23) && (!v4 || (*(_BYTE *)(v20 + 33) & 1) == 0) )
                return 3221226114LL;
LABEL_26:
              v20 = *v21 - 40LL;
              v21 = (_QWORD *)*v21;
            }
            while ( v19 != v21 );
          }
        }
        else if ( !v4 || (*(_BYTE *)(a2 + 33) & 1) == 0 )
        {
          return 3221226114LL;
        }
        a2 = *v17 - 40LL;
        v17 = (_QWORD *)*v17;
      }
      while ( a1 != v17 );
    }
  }
  if ( (*(_BYTE *)(v7 + 34) & 1) == 0 )
  {
    v9 = RtlpCopyRangeListEntry(v7);
    if ( !v9 )
      return 3221225626LL;
    if ( (*(_BYTE *)(v7 + 33) & 0x10) != 0 )
    {
      --**(_DWORD **)(v7 + 16);
      *(_BYTE *)(v7 + 33) &= ~0x10u;
    }
    v10 = (_QWORD *)(v7 + 16);
    v11 = v9 + 5;
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *(_QWORD *)(v7 + 16) = v7 + 16;
    *(_WORD *)(v7 + 34) = 1;
    v12 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v12 + 8) != v7 + 16 )
      __fastfail(3u);
    *v11 = v12;
    v11[1] = v10;
    *(_QWORD *)(v12 + 8) = v11;
    *v10 = v11;
  }
  v13 = (_BYTE *)(*(_QWORD *)(v7 + 40) - 40LL);
  for ( i = *(_QWORD **)(v7 + 40); ; i = (_QWORD *)(v15 + 40) )
  {
    v15 = *i - 40LL;
    if ( a1 == i || (unsigned __int64)a3[1] < *(_QWORD *)v13 )
      break;
    if ( (v13[34] & 1) != 0 )
    {
      v25 = *((_QWORD *)v13 + 2) - 40LL;
      v26 = (_QWORD *)*((_QWORD *)v13 + 2);
      v27 = *v26;
      while ( 1 )
      {
        v30 = v27 - 40;
        if ( v13 + 16 == (_BYTE *)v26 )
          break;
        v28 = *v26;
        if ( *(_QWORD **)(*v26 + 8LL) != v26 || (v29 = (_QWORD *)v26[1], (_QWORD *)*v29 != v26) )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        RtlpAddToMergedRange(v7, v25, a4);
        v25 = v30;
        v27 = *(_QWORD *)(v30 + 40);
        v26 = (_QWORD *)(v25 + 40);
      }
      v31 = *i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v32 = (_QWORD *)i[1], (_QWORD *)*v32 != i) )
        __fastfail(3u);
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      RtlpFreeRangeListEntry(v13);
      v5 = a4;
    }
    else
    {
      v33 = *i;
      if ( *(_QWORD **)(*i + 8LL) != i || (v34 = (_QWORD *)i[1], (_QWORD *)*v34 != i) )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      RtlpAddToMergedRange(v7, v13, v5);
    }
    v13 = (_BYTE *)v15;
  }
  return RtlpAddToMergedRange(v7, a3, v5);
}
