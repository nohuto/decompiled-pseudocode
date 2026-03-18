/*
 * XREFs of IopQueryConflictFillConflicts @ 0x1406D62F0
 * Callers:
 *     IopQueryConflictListInternal @ 0x1406D68B4 (IopQueryConflictListInternal.c)
 * Callees:
 *     IopEliminateBogusConflict @ 0x14020114C (IopEliminateBogusConflict.c)
 *     IopQueryConflictFillString @ 0x1406D670C (IopQueryConflictFillString.c)
 */

__int64 __fastcall IopQueryConflictFillConflicts(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  unsigned int v6; // edi
  __int64 v7; // r13
  unsigned int v9; // ebx
  unsigned int v11; // ebp
  unsigned int v12; // r14d
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  __int64 v15; // rcx
  unsigned int v16; // ebp
  unsigned int v17; // r15d
  __int64 v18; // rax
  unsigned int v19; // r9d
  _QWORD *v20; // rax
  unsigned int v21; // edx
  unsigned int v22; // r8d
  __int64 v23; // rcx
  int v24; // edx
  unsigned int v25; // r15d
  unsigned int v26; // ebp
  unsigned int v27; // r8d
  unsigned int v28; // r14d
  __int64 *v29; // r12
  __int64 v30; // r13
  __int64 v31; // rcx
  unsigned __int64 v32; // r15
  unsigned int v33; // ecx
  unsigned int v34; // r8d
  unsigned int v35; // ebx
  __int64 v36; // r12
  int v38; // [rsp+20h] [rbp-58h]
  unsigned int v39; // [rsp+28h] [rbp-50h]
  unsigned int v40; // [rsp+88h] [rbp+10h] BYREF
  __int64 v41; // [rsp+98h] [rbp+20h]

  v41 = a4;
  v6 = 0;
  v7 = a4;
  v38 = 0;
  v9 = a2;
  v11 = 0;
  if ( a2 )
  {
    v12 = 1;
    do
    {
      if ( IopEliminateBogusConflict(a1, a3[3 * v11]) )
      {
        if ( v12 < v9 )
        {
          *(_OWORD *)&a3[3 * v11] = *(_OWORD *)&a3[3 * v9 - 3];
          a3[3 * v11 + 2] = a3[3 * v9 - 1];
        }
        --v9;
        --v11;
        --v12;
      }
      ++v11;
      ++v12;
    }
    while ( v11 < v9 );
  }
LABEL_8:
  v13 = 0;
  v14 = 1;
  while ( v13 < v9 )
  {
    v15 = 3LL * v13;
    if ( a3[3 * v13] )
    {
      v16 = v14;
      if ( v14 < v9 )
      {
        v17 = v14 + 1;
        do
        {
          if ( IopEliminateBogusConflict(a3[v15], a3[3 * v16]) )
          {
            if ( v17 < v9 )
            {
              *(_OWORD *)&a3[3 * v16] = *(_OWORD *)&a3[3 * v9 - 3];
              a3[3 * v16 + 2] = a3[3 * v9 - 1];
            }
            --v9;
            --v16;
            --v17;
          }
          else if ( IopEliminateBogusConflict(a3[3 * v16], a3[3 * v13]) )
          {
            v18 = 3LL * v13;
            *(_OWORD *)&a3[v18] = *(_OWORD *)&a3[3 * v16];
            a3[v18 + 2] = a3[3 * v16 + 2];
            if ( v16 + 1 < v9 )
            {
              *(_OWORD *)&a3[3 * v16] = *(_OWORD *)&a3[3 * v9 - 3];
              a3[3 * v16 + 2] = a3[3 * v9 - 1];
            }
            --v9;
            goto LABEL_8;
          }
          v15 = 3LL * v13;
          ++v16;
          ++v17;
        }
        while ( v16 < v9 );
      }
    }
    ++v13;
    ++v14;
  }
  v19 = 0;
  if ( v9 )
  {
    v20 = a3;
    while ( *v20 )
    {
      ++v19;
      v20 += 3;
      if ( v19 >= v9 )
        goto LABEL_39;
    }
    v21 = v19 + 1;
    if ( v19 + 1 < v9 )
    {
      v22 = v19 + 2;
      do
      {
        if ( !a3[3 * v21] )
        {
          if ( v22 < v9 )
          {
            *(_OWORD *)&a3[3 * v21] = *(_OWORD *)&a3[3 * v9 - 3];
            a3[3 * v21 + 2] = a3[3 * v9 - 1];
          }
          --v9;
          --v21;
          --v22;
        }
        ++v21;
        ++v22;
      }
      while ( v21 < v9 );
    }
    if ( v9 != 1 )
    {
      if ( v19 + 1 < v9 )
      {
        v23 = 3LL * v19;
        *(_OWORD *)&a3[v23] = *(_OWORD *)&a3[3 * v9 - 3];
        a3[v23 + 2] = a3[3 * v9 - 1];
      }
      --v9;
    }
  }
LABEL_39:
  v24 = a6;
  v25 = 32;
  v26 = 0;
  if ( a6 )
  {
    v25 = 74;
    LOBYTE(v26) = a5 >= 0x4A;
  }
  v39 = v26;
  v27 = v26;
  v28 = v26;
  if ( v9 )
  {
    v29 = a3;
    v30 = v9;
    do
    {
      v31 = *v29;
      v40 = 0;
      IopQueryConflictFillString(v31, 0LL, &v40, 0LL);
      v25 += 2 * v40 + 40;
      if ( v25 <= a5 )
      {
        ++v26;
        v28 += v40;
      }
      v29 += 3;
      --v30;
    }
    while ( v30 );
    v7 = v41;
    v24 = a6;
    v27 = v39;
  }
  *(_DWORD *)(v7 + 16) = v25;
  *(_DWORD *)(v7 + 8) = v27 + v9;
  *(_DWORD *)(v7 + 12) = v26;
  v32 = v7 + 8 * (v26 + 4LL * v26 + 3);
  if ( v32 <= v7 + (unsigned __int64)a5 - 8 )
  {
    *(_DWORD *)v32 = -1;
    if ( v27 )
    {
      v33 = 1;
      *(_DWORD *)(v7 + 24) = 0;
      *(_DWORD *)(v7 + 28) = v24;
      --v28;
      *(_DWORD *)(v7 + 32) = 0;
      *(_QWORD *)(v7 + 40) = 0LL;
      *(_QWORD *)(v7 + 48) = 0LL;
      *(_DWORD *)(v7 + 56) = 0;
      v38 = 1;
      *(_WORD *)(v32 + 4) = 0;
    }
    else
    {
      v33 = 0;
    }
    a5 = 0;
    v34 = 0;
    v35 = v33;
    if ( v33 < v26 )
    {
      v36 = v7 + 40LL * v33 + 28;
      do
      {
        *(_DWORD *)(v36 - 4) = v35;
        *(_QWORD *)v36 = 0LL;
        *(_QWORD *)(v36 + 12) = 1LL;
        *(_QWORD *)(v36 + 20) = 0LL;
        *(_DWORD *)(v36 + 28) = 0;
        v40 = v28;
        IopQueryConflictFillString(a3[3 * v34], v32 + 2 * (v35 + 2LL), &v40, v7 + 40LL * v33 + 28);
        v36 += 40LL;
        v34 = a5 + 1;
        v28 -= v40;
        v33 = v38 + 1;
        v35 += v40;
        ++a5;
        v38 = v33;
      }
      while ( v33 < v26 );
    }
    *(_WORD *)(v32 + 2LL * v35 + 4) = 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v6;
}
