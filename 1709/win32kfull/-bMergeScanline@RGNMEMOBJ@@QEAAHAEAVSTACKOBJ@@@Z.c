/*
 * XREFs of ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C012A1A8
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C01294D0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C012A080 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 *     ?vMergeSpans@@YAXPEAU_SPAN@@0000@Z @ 0x1C012A5F4 (-vMergeSpans@@YAXPEAU_SPAN@@0000@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::bMergeScanline(RGNMEMOBJ *this, struct STACKOBJ *a2)
{
  signed int *v2; // rdi
  __int64 v4; // rcx
  __int64 v6; // rbp
  int v7; // edx
  int v8; // r9d
  unsigned int v9; // r12d
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
  signed int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // r14d
  unsigned int *v25; // r9
  unsigned int v26; // edx
  _DWORD *v27; // r8
  unsigned int *v28; // r8
  unsigned int v29; // eax
  __int64 v30; // rcx
  unsigned int *v31; // r8
  int v32; // ecx
  __int64 v33; // r12
  int v34; // edx
  unsigned int v35; // edx
  int v36; // [rsp+60h] [rbp+8h]
  int v37; // [rsp+60h] [rbp+8h]

  v2 = (signed int *)*((_QWORD *)a2 + 1);
  v4 = *(_QWORD *)this;
  v6 = 0LL;
  v7 = *(_DWORD *)(v4 + 80);
  if ( v7 == 120 )
  {
    v22 = v2[1];
    v23 = 2 * v22;
    v24 = 8 * v22 + 152;
    if ( v24 <= *(_DWORD *)(v4 + 24) || RGNOBJ::bExpand(this, 8 * v22 + 5088) )
    {
      v25 = (unsigned int *)(v2 + 6);
      v26 = 0;
      *(_DWORD *)(*(_QWORD *)this + 80LL) = v24;
      *(_DWORD *)(*(_QWORD *)this + 84LL) = 3;
      v27 = (_DWORD *)(*(_QWORD *)this + 104LL);
      v27[2] = *v2;
      v28 = (_DWORD *)((char *)v27 + (unsigned int)(4 * *v27 + 16));
      *v28 = v23;
      v28[1] = *v2;
      for ( v28[2] = *v2 + 1; v26 < v23; v28[v30 + 3] = *(v25 - 1) )
      {
        v29 = *v25;
        v25 += 2;
        v28[v26 + 3] = v29;
        v30 = v26 + 1;
        v26 += 2;
      }
      v28[v26 + 3] = v23;
      *(_DWORD *)(*(_QWORD *)this + 92LL) = *v2;
      *(_DWORD *)(*(_QWORD *)this + 100LL) = *v2 + 1;
      *(_DWORD *)(*(_QWORD *)this + 88LL) = v28[3];
      *(_DWORD *)(*(_QWORD *)this + 96LL) = v28[v23 + 2];
      v31 = &v28[*v28 + 4];
      *v31 = 0;
      v32 = *v2 + 1;
      *((_QWORD *)v31 + 1) = 0x7FFFFFFFLL;
      v31[1] = v32;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = v31 + 4;
      return 1LL;
    }
  }
  else
  {
    v8 = 8 * v2[1];
    v36 = v8;
    v9 = v8 + 16;
    if ( v8 + 16 > (unsigned int)(*(_DWORD *)(v4 + 24) - v7) )
    {
      if ( !RGNOBJ::bExpand(this, v9 + *(_DWORD *)(v4 + 24) + 4936) )
        return 0LL;
      v8 = v36;
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
    v33 = *((_QWORD *)a2 + 2);
    v37 = v8;
    *(_DWORD *)v33 = v13;
    v34 = v2[1] + (*i >> 1);
    *(_DWORD *)(v33 + 4) = v34;
    v35 = 8 * v34 + 24;
    if ( v35 <= *(_DWORD *)(v33 + 8) )
    {
LABEL_31:
      vMergeSpans(
        (struct _SPAN *)(i + 3),
        (struct _SPAN *)&i[*i + 3],
        (struct _SPAN *)(v2 + 6),
        (struct _SPAN *)&v2[2 * v2[1] + 6],
        (struct _SPAN *)(v33 + 24));
      v2 = (signed int *)v33;
      v9 = v37;
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
    if ( (unsigned int)STACKOBJ::bExpandScanline(a2, v35, 0) )
    {
      v33 = *((_QWORD *)a2 + 2);
      goto LABEL_31;
    }
  }
  return 0LL;
}
