/*
 * XREFs of RtlpAddIntersectingRanges @ 0x1405B5304
 * Callers:
 *     RtlpAddRange @ 0x1405B4BB0 (RtlpAddRange.c)
 * Callees:
 *     RtlpAddToMergedRange @ 0x1405B5430 (RtlpAddToMergedRange.c)
 *     RtlpCopyRangeListEntry @ 0x1405B5604 (RtlpCopyRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x1405B5A50 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(_QWORD *a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  char v4; // r10
  unsigned int v5; // r14d
  __int64 v7; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _BYTE *v13; // rsi
  _QWORD *i; // rbx
  __int64 v15; // rbp
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  unsigned __int64 v20; // rbx
  _QWORD *v21; // r11
  __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  bool v26; // cf
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // r14
  __int64 v30; // r8
  _QWORD *v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rcx
  _QWORD *v34; // rax

  v4 = *((_BYTE *)a3 + 33) & 1;
  v5 = a4;
  v7 = a2;
  if ( (a4 & 1) == 0 )
  {
    v19 = (_QWORD *)(a2 + 40);
    if ( a1 != (_QWORD *)(a2 + 40) )
    {
      v20 = a3[1];
      do
      {
        if ( v20 < *(_QWORD *)a2 )
          break;
        if ( (*(_BYTE *)(a2 + 34) & 1) != 0 )
        {
          v21 = (_QWORD *)(a2 + 16);
          v22 = *(_QWORD *)(a2 + 16) - 40LL;
          v23 = *(_QWORD **)(a2 + 16);
          if ( v21 != v23 )
          {
            v24 = *a3;
            do
            {
              v25 = *(_QWORD *)v22;
              v26 = v24 < *(_QWORD *)v22;
              if ( v24 > *(_QWORD *)v22 )
              {
                if ( *(_QWORD *)(v22 + 8) < v24 )
                  goto LABEL_31;
                v26 = v24 < v25;
              }
              if ( (!v26 || v20 >= v25) && (!v4 || (*(_BYTE *)(v22 + 33) & 1) == 0) )
                return 3221226114LL;
LABEL_31:
              v22 = *v23 - 40LL;
              v23 = (_QWORD *)*v23;
            }
            while ( v21 != v23 );
          }
        }
        else if ( !v4 || (*(_BYTE *)(a2 + 33) & 1) == 0 )
        {
          return 3221226114LL;
        }
        a2 = *v19 - 40LL;
        v19 = (_QWORD *)*v19;
      }
      while ( a1 != v19 );
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
    v11 = (_QWORD *)(v9 + 40);
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
      v27 = *((_QWORD *)v13 + 2) - 40LL;
      v28 = (_QWORD *)*((_QWORD *)v13 + 2);
      v29 = *v28;
      while ( 1 )
      {
        v32 = v29 - 40;
        if ( v13 + 16 == (_BYTE *)v28 )
          break;
        v30 = *v28;
        v31 = (_QWORD *)v28[1];
        if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v31 != v28 )
          __fastfail(3u);
        *v31 = v30;
        *(_QWORD *)(v30 + 8) = v31;
        RtlpAddToMergedRange(v7, v27, a4);
        v27 = v32;
        v29 = *(_QWORD *)(v32 + 40);
        v28 = (_QWORD *)(v27 + 40);
      }
      v33 = *i;
      v34 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v34 != i )
        __fastfail(3u);
      *v34 = v33;
      *(_QWORD *)(v33 + 8) = v34;
      RtlpFreeRangeListEntry(v13);
      v5 = a4;
    }
    else
    {
      v17 = *i;
      v18 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v18 != i )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      RtlpAddToMergedRange(v7, v13, v5);
    }
    v13 = (_BYTE *)v15;
  }
  return RtlpAddToMergedRange(v7, a3, v5);
}
