/*
 * XREFs of RtlpAddIntersectingRanges @ 0x140619FCC
 * Callers:
 *     RtlpAddRange @ 0x140619950 (RtlpAddRange.c)
 * Callees:
 *     RtlpAddToMergedRange @ 0x14061A0F8 (RtlpAddToMergedRange.c)
 *     RtlpCopyRangeListEntry @ 0x14061A310 (RtlpCopyRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x14061A758 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(unsigned __int64 *a1, unsigned __int64 *a2, __int64 *a3, unsigned int a4)
{
  char v4; // r10
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rcx
  unsigned __int64 **v14; // rax
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 **v18; // rdx
  unsigned __int64 v19; // r11
  unsigned __int64 *v20; // rax
  unsigned __int64 *v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  bool v24; // cf
  unsigned __int64 *v25; // rax
  unsigned __int64 *v26; // rax
  unsigned __int64 *v27; // rax
  unsigned __int64 *v28; // rdx
  __int64 v29; // rbp
  unsigned __int64 v30; // r8
  unsigned __int64 **v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 **v33; // rdx

  v4 = *((_BYTE *)a3 + 33) & 1;
  v7 = a2;
  if ( (a4 & 1) == 0 && a1 != a2 + 5 )
  {
    v19 = a3[1];
    do
    {
      if ( v19 < *a2 )
        break;
      if ( (*((_BYTE *)a2 + 34) & 1) != 0 )
      {
        v20 = (unsigned __int64 *)a2[2];
        v21 = v20 - 5;
        if ( a2 + 2 != v20 )
        {
          v22 = *a3;
          do
          {
            v23 = *v21;
            v24 = v22 < *v21;
            if ( v22 > *v21 )
            {
              if ( v21[1] < v22 )
                goto LABEL_31;
              v24 = v22 < v23;
            }
            if ( (!v24 || v19 >= v23) && (!v4 || (*((_BYTE *)v21 + 33) & 1) == 0) )
              return 3221226114LL;
LABEL_31:
            v25 = (unsigned __int64 *)v21[5];
            v21 = v25 - 5;
          }
          while ( a2 + 2 != v25 );
        }
      }
      else if ( !v4 || (*((_BYTE *)a2 + 33) & 1) == 0 )
      {
        return 3221226114LL;
      }
      v26 = (unsigned __int64 *)a2[5];
      a2 = v26 - 5;
    }
    while ( a1 != v26 );
  }
  if ( (*((_BYTE *)v7 + 34) & 1) == 0 )
  {
    v13 = RtlpCopyRangeListEntry(v7);
    if ( !v13 )
      return 3221225626LL;
    if ( (*((_BYTE *)v7 + 33) & 0x10) != 0 )
    {
      --*(_DWORD *)v7[2];
      *((_BYTE *)v7 + 33) &= ~0x10u;
    }
    v14 = (unsigned __int64 **)(v7 + 2);
    v15 = (unsigned __int64 *)(v13 + 40);
    v7[3] = (unsigned __int64)(v7 + 2);
    v7[2] = (unsigned __int64)(v7 + 2);
    *((_WORD *)v7 + 17) = 1;
    v16 = v7[2];
    if ( *(unsigned __int64 **)(v16 + 8) != v7 + 2 )
      __fastfail(3u);
    *v15 = v16;
    v15[1] = (unsigned __int64)v14;
    *(_QWORD *)(v16 + 8) = v15;
    *v14 = v15;
  }
  v9 = (unsigned __int64 *)v7[5];
  v10 = v9 - 5;
  while ( 1 )
  {
    v11 = *v9 - 40;
    if ( a1 == v9 || a3[1] < *v10 )
      break;
    if ( (*((_BYTE *)v10 + 34) & 1) != 0 )
    {
      v27 = (unsigned __int64 *)v10[2];
      v28 = v27 - 5;
      v29 = *v27 - 40;
      if ( v10 + 2 != v27 )
      {
        do
        {
          v30 = *v27;
          if ( *(unsigned __int64 **)(*v27 + 8) != v27 || (v31 = (_QWORD *)v27[1], (unsigned __int64 *)*v31 != v27) )
            __fastfail(3u);
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          RtlpAddToMergedRange(v7, v28, a4);
          v28 = (_QWORD *)v29;
          v29 = *(_QWORD *)(v29 + 40) - 40LL;
          v27 = v28 + 5;
        }
        while ( v10 + 2 != v28 + 5 );
      }
      v32 = v10[5];
      if ( *(unsigned __int64 **)(v32 + 8) != v10 + 5 || (v33 = (unsigned __int64 **)v10[6], *v33 != v10 + 5) )
        __fastfail(3u);
      *v33 = (unsigned __int64 *)v32;
      *(_QWORD *)(v32 + 8) = v33;
      RtlpFreeRangeListEntry(v10);
    }
    else
    {
      v17 = v10[5];
      if ( *(unsigned __int64 **)(v17 + 8) != v10 + 5 || (v18 = (unsigned __int64 **)v10[6], *v18 != v10 + 5) )
        __fastfail(3u);
      *v18 = (unsigned __int64 *)v17;
      *(_QWORD *)(v17 + 8) = v18;
      RtlpAddToMergedRange(v7, v10, a4);
    }
    v10 = (unsigned __int64 *)v11;
    v9 = (unsigned __int64 *)(v11 + 40);
  }
  return RtlpAddToMergedRange(v7, a3, a4);
}
