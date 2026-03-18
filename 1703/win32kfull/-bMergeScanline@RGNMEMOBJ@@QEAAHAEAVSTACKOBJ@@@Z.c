/*
 * XREFs of ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C012CB30
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C012CA04 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C012CF74 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bMergeScanline(RGNMEMOBJ *this, struct STACKOBJ *a2)
{
  signed int *v2; // rdi
  __int64 v4; // rcx
  struct STACKOBJ *v5; // r9
  __int64 v6; // rbp
  signed int v7; // eax
  int v8; // edx
  __int64 v9; // r13
  signed int v10; // r8d
  unsigned int *v11; // r14
  unsigned int *i; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  signed int v15; // eax
  unsigned int *v16; // rdi
  __int64 v17; // rcx
  unsigned int v18; // eax
  signed int v19; // ecx
  signed int v20; // eax
  unsigned int v22; // ebx
  unsigned int v23; // r14d
  unsigned int *v24; // r9
  unsigned int v25; // edx
  _DWORD *v26; // r8
  unsigned int *v27; // r8
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned int *v30; // r8
  int v31; // ecx
  __int64 v32; // r12
  int v33; // edx
  unsigned int v34; // edx

  v2 = (signed int *)*((_QWORD *)a2 + 1);
  v4 = *(_QWORD *)this;
  v5 = a2;
  v6 = 0LL;
  v7 = v2[1];
  v8 = *(_DWORD *)(v4 + 80);
  if ( v8 == 120 )
  {
    v22 = 2 * v7;
    v23 = 8 * v7 + 152;
    if ( v23 <= *(_DWORD *)(v4 + 24) || RGNOBJ::bExpand(this, 8 * v7 + 5088) )
    {
      v24 = (unsigned int *)(v2 + 6);
      v25 = 0;
      *(_DWORD *)(*(_QWORD *)this + 80LL) = v23;
      *(_DWORD *)(*(_QWORD *)this + 84LL) = 3;
      v26 = (_DWORD *)(*(_QWORD *)this + 104LL);
      v26[2] = *v2;
      v27 = (_DWORD *)((char *)v26 + (unsigned int)(4 * *v26 + 16));
      *v27 = v22;
      v27[1] = *v2;
      for ( v27[2] = *v2 + 1; v25 < v22; v27[v29 + 3] = *(v24 - 1) )
      {
        v28 = *v24;
        v24 += 2;
        v27[v25 + 3] = v28;
        v29 = v25 + 1;
        v25 += 2;
      }
      v27[v25 + 3] = v22;
      *(_DWORD *)(*(_QWORD *)this + 92LL) = *v2;
      *(_DWORD *)(*(_QWORD *)this + 100LL) = *v2 + 1;
      *(_DWORD *)(*(_QWORD *)this + 88LL) = v27[3];
      *(_DWORD *)(*(_QWORD *)this + 96LL) = v27[v22 + 2];
      v30 = &v27[*v27 + 4];
      *v30 = 0;
      v31 = *v2 + 1;
      *((_QWORD *)v30 + 1) = 0x7FFFFFFFLL;
      v30[1] = v31;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = v30 + 4;
      return 1LL;
    }
  }
  else
  {
    v9 = (unsigned int)(8 * v7 + 16);
    if ( (unsigned int)v9 > *(_DWORD *)(v4 + 24) - v8 )
    {
      if ( !RGNOBJ::bExpand(this, v9 + *(_DWORD *)(v4 + 24) + 4936) )
        return 0LL;
      v5 = a2;
    }
    v10 = *v2;
    v11 = *(unsigned int **)(*(_QWORD *)this + 40LL);
    for ( i = (unsigned int *)(*(_QWORD *)this + 104LL); v10 > (int)i[1]; i += *i + 4 )
      ;
    v13 = i[1];
    if ( v10 != v13 )
    {
      i[-*(i - 1) - 2] = v10;
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      if ( *v2 < *(_DWORD *)(*(_QWORD *)this + 92LL) )
        *(_DWORD *)(*(_QWORD *)this + 92LL) = *v2;
      goto LABEL_9;
    }
    if ( v13 + 1 != i[2] )
    {
      ++*(_DWORD *)(*(_QWORD *)this + 84LL);
      *(_DWORD *)(*(_QWORD *)this + 100LL) = *v2 + 1;
      i[1] = *v2 + 1;
      goto LABEL_9;
    }
    v32 = *((_QWORD *)v5 + 2);
    v9 = (unsigned int)(v9 - 16);
    *(_DWORD *)v32 = v13;
    v33 = v2[1] + (*i >> 1);
    *(_DWORD *)(v32 + 4) = v33;
    v34 = 8 * v33 + 24;
    if ( v34 <= *(_DWORD *)(v32 + 8) )
    {
LABEL_31:
      vMergeSpans(
        (struct _SPAN *)(i + 3),
        (struct _SPAN *)&i[*i + 3],
        (struct _SPAN *)(v2 + 6),
        (struct _SPAN *)&v2[2 * v2[1] + 6],
        (struct _SPAN *)(v32 + 24));
      v2 = (signed int *)v32;
LABEL_9:
      *(_QWORD *)(*(_QWORD *)this + 40LL) = (char *)v11 + v9;
      while ( v11 > i )
      {
        --v11;
        *(unsigned int *)((char *)v11 + v9) = *v11;
      }
      v14 = 2 * v2[1];
      *i = v14;
      i[1] = *v2;
      v15 = *v2;
      v16 = (unsigned int *)(v2 + 6);
      i[2] = v15 + 1;
      if ( v14 )
      {
        do
        {
          v17 = (unsigned int)(v6 + 1);
          i[v6 + 3] = *v16;
          v6 = (unsigned int)(v6 + 2);
          v18 = v16[1];
          v16 += 2;
          i[v17 + 3] = v18;
        }
        while ( (unsigned int)v6 < v14 );
      }
      i[v6 + 3] = v14;
      v19 = i[3];
      if ( *(_DWORD *)(*(_QWORD *)this + 88LL) > v19 )
        *(_DWORD *)(*(_QWORD *)this + 88LL) = v19;
      v20 = i[v14 + 2];
      if ( *(_DWORD *)(*(_QWORD *)this + 96LL) < v20 )
        *(_DWORD *)(*(_QWORD *)this + 96LL) = v20;
      *(_DWORD *)(*(_QWORD *)this + 80LL) += v9;
      return 1LL;
    }
    if ( (unsigned int)STACKOBJ::bExpandScanline(v5, v34, 0) )
    {
      v32 = *((_QWORD *)a2 + 2);
      goto LABEL_31;
    }
  }
  return 0LL;
}
