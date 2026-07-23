/*
 * XREFs of LdrpMergeNodes @ 0x180074C34
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x180074AA8 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 */

int __fastcall LdrpMergeNodes(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  __int64 v6; // rcx
  _QWORD *v7; // rax
  bool v8; // zf
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *i; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rdx
  _QWORD *v19; // rax
  _QWORD **v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  _QWORD **v23; // r14
  _QWORD **v24; // rdi
  _QWORD *j; // rsi
  _QWORD *v26; // rdi
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rcx
  _QWORD *v31; // rdx
  _QWORD *v32; // r9
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rcx
  _QWORD *k; // rdx
  _QWORD *v37; // rax
  _QWORD **v38; // rax

  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrddag.c",
      996,
      (unsigned int)"LdrpMergeNodes",
      2,
      "Merging a cycle rooted at %wZ.\n",
      *(_QWORD *)a1 - 72LL);
  v4 = *a2;
  do
  {
    v5 = (_QWORD *)*(v4 - 8);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    v8 = (LdrpDebugFlags & 5) == 0;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    if ( !v8 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrddag.c",
        1032,
        (unsigned int)"LdrpMergeNodes",
        2,
        "Adding cyclic module %wZ.\n",
        v5 - 9);
    *(v5 - 1) = a1;
    v9 = *(_QWORD **)(a1 + 8);
    if ( *v9 != a1 )
      __fastfail(3u);
    v5[1] = v9;
    *v5 = a1;
    *v9 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 24) += *((_DWORD *)v4 - 10);
    v10 = (_QWORD *)*(v4 - 3);
    v11 = v10;
    *((_DWORD *)v4 - 10) = 0;
    *((_DWORD *)v4 - 2) = -5;
    do
    {
      v11 = (_QWORD *)*v11;
      v11[3] = a1;
    }
    while ( v11 != v10 );
    v12 = (_QWORD *)*(v4 - 2);
    v13 = v12;
    do
    {
      v13 = (_QWORD *)*v13;
      *(v13 - 1) = a1;
    }
    while ( v13 != v12 );
    v4 = (_QWORD *)*v4;
  }
  while ( v4 );
  v14 = *(_QWORD **)(a1 + 40);
  v15 = v14;
  for ( i = (_QWORD *)*v14; ; i = (_QWORD *)*v15 )
  {
    if ( i[1] == a1 )
    {
      v13 = (_QWORD *)*i;
      *v15 = *i;
      if ( *(_QWORD **)(a1 + 40) == i )
      {
        v13 = 0LL;
        if ( v15 != i )
          v13 = v15;
        *(_QWORD *)(a1 + 40) = v13;
      }
      *i = 0LL;
    }
    else
    {
      v15 = i;
    }
    if ( i == v14 )
      break;
  }
  v17 = *a2;
  do
  {
    while ( 1 )
    {
      v20 = (_QWORD **)*(v17 - 3);
      if ( !v20 )
        break;
      v21 = *v20;
      if ( *v20 == v20 )
      {
        *(v17 - 3) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v21;
        *v20 = (_QWORD *)*v21;
      }
      if ( !v21 )
        break;
      v22 = v21[1];
      if ( v22 == a1 )
      {
        *v21 = 0LL;
      }
      else
      {
        v18 = *(_QWORD **)(a1 + 40);
        if ( v18 )
        {
          v19 = *(_QWORD **)(a1 + 40);
          while ( 1 )
          {
            v19 = (_QWORD *)*v19;
            if ( v19[1] == v22 )
              break;
            if ( v19 == v18 )
            {
              v13 = (_QWORD *)*v18;
              *v21 = *v18;
              *v18 = v21;
              goto LABEL_28;
            }
          }
          v31 = *(_QWORD **)(v22 + 48);
          v32 = v21 + 2;
          while ( (_QWORD *)*v31 != v32 )
            v31 = (_QWORD *)*v31;
          *v31 = *v32;
          if ( *(_QWORD **)(v22 + 48) == v32 )
          {
            v33 = 0LL;
            if ( v31 != v32 )
              v33 = v31;
            *(_QWORD *)(v22 + 48) = v33;
          }
          --*(_DWORD *)(v22 + 24);
          LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v21);
        }
        else
        {
          *v21 = v21;
LABEL_28:
          *(_QWORD *)(a1 + 40) = v21;
        }
      }
    }
    v17 = (_QWORD *)*v17;
  }
  while ( v17 );
  v23 = *(_QWORD ***)(a1 + 48);
  v24 = v23;
  for ( j = *v23; ; j = *v24 )
  {
    if ( j[1] == a1 )
    {
      *v24 = (_QWORD *)*j;
      if ( *(_QWORD **)(a1 + 48) == j )
      {
        v38 = 0LL;
        if ( v24 != j )
          v38 = v24;
        *(_QWORD *)(a1 + 48) = v38;
      }
      --*(_DWORD *)(a1 + 24);
      LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, j - 2);
    }
    else
    {
      v24 = (_QWORD **)j;
    }
    if ( j == v23 )
      break;
  }
  v26 = *a2;
  do
  {
    while ( 1 )
    {
      v27 = (_QWORD *)*(v26 - 2);
      if ( !v27 )
        break;
      v28 = (_QWORD *)*v27;
      if ( (_QWORD *)*v27 == v27 )
      {
        *(v26 - 2) = 0LL;
      }
      else
      {
        v13 = (_QWORD *)*v28;
        *v27 = *v28;
      }
      if ( !v28 )
        break;
      v29 = v28[1];
      v30 = v28 - 2;
      if ( v29 == a1 )
        goto LABEL_49;
      v34 = *(_QWORD **)(a1 + 48);
      if ( v34 )
      {
        v13 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v13 = (_QWORD *)*v13;
          if ( v13[1] == v29 )
            break;
          if ( v13 == v34 )
            goto LABEL_68;
        }
        for ( k = *(_QWORD **)(v29 + 40); (_QWORD *)*k != v30; k = (_QWORD *)*k )
          ;
        *k = *v30;
        if ( *(_QWORD **)(v29 + 40) == v30 )
        {
          v37 = 0LL;
          if ( k != v30 )
            v37 = k;
          *(_QWORD *)(v29 + 40) = v37;
        }
LABEL_49:
        --*(_DWORD *)(a1 + 24);
        LODWORD(v13) = RtlFreeHeap(LdrpHeap, 0, v30);
      }
      else
      {
LABEL_68:
        v35 = v30 + 2;
        if ( v34 )
        {
          v13 = (_QWORD *)*v34;
          *v35 = *v34;
          *v34 = v35;
        }
        else
        {
          *v35 = v35;
        }
        *(_QWORD *)(a1 + 48) = v35;
      }
    }
    v26 = (_QWORD *)*v26;
  }
  while ( v26 );
  return (int)v13;
}
