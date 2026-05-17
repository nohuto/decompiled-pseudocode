/*
 * XREFs of RtlFindClearRuns @ 0x1800E5710
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800E5A10 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRuns(int *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebp
  int v5; // esi
  int v7; // edx
  BOOL v10; // r15d
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  bool v13; // zf
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  unsigned __int8 *v16; // rax
  int v17; // edi
  unsigned int v18; // ecx
  unsigned __int8 v19; // r10
  __int64 v20; // r14
  unsigned int v21; // r9d
  __int64 result; // rax
  int v23; // esi
  __int64 v24; // rdi
  _QWORD *i; // rcx
  __int64 v26; // rcx
  unsigned __int8 v27; // r10
  __int64 v28; // r14
  int v29; // ebp
  unsigned __int8 j; // di
  unsigned int v31; // eax
  unsigned int v32; // esi
  __int64 v33; // rdx
  _QWORD *k; // rcx
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // r10d
  __int64 v38; // rdx
  _QWORD *m; // rcx
  __int64 v40; // rdx
  int v41; // [rsp+0h] [rbp-48h]
  int v42; // [rsp+4h] [rbp-44h]
  unsigned int v43; // [rsp+8h] [rbp-40h]
  unsigned __int8 *v44; // [rsp+10h] [rbp-38h]
  int v45; // [rsp+50h] [rbp+8h]

  v4 = *a1;
  v5 = 0;
  v43 = *a1;
  v45 = 0;
  v7 = *a1 & 7;
  v42 = v7;
  v10 = v7 != 0;
  v11 = 0;
  v12 = 0;
  v13 = ((unsigned int)*a1 >> 3) + v10 == 0;
  v14 = ((unsigned int)*a1 >> 3) + v10;
  v15 = 0;
  v16 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  if ( !v13 )
  {
    v17 = 0;
    v18 = v14 - 1;
    v41 = 0;
    while ( 1 )
    {
      v19 = *v16;
      v44 = v16 + 1;
      if ( v15 == v18 && v7 )
        v19 |= byte_180120DD0[(v4 & 7) + 32];
      if ( v19 )
      {
        v20 = (unsigned __int8)byte_180119500[v19];
        v21 = v20 + v12;
        if ( v21 && (v11 < a3 || *(_DWORD *)(a2 + 8LL * (v11 - 1) + 4) < v21) )
        {
          LODWORD(result) = v11 + 1;
          if ( v11 >= a3 )
            LODWORD(result) = v11;
          v11 = result;
          v23 = result - 2;
          if ( a4 )
          {
            v24 = v23;
            for ( i = (_QWORD *)(a2 + 8 + 8LL * v23); v24 >= 0 && *((_DWORD *)i - 1) < v21; --i )
            {
              --v23;
              --v24;
              *i = *(i - 1);
            }
            v17 = v41;
          }
          v26 = v23 + 1;
          *(_DWORD *)(a2 + 8 * v26 + 4) = v21;
          *(_DWORD *)(a2 + 8 * v26) = v45;
          if ( !a4 && (unsigned int)result >= a3 )
            return (unsigned int)result;
        }
        v12 = (unsigned __int8)byte_1801298D0[v19];
        v5 = v17 - v12 + 8;
        v45 = v5;
        v27 = byte_180120DD0[v20 + 16] | byte_180120DD0[8 - v12 + 32] | v19;
        if ( v27 != 0xFF )
        {
          do
          {
            if ( v11 >= a3 && *(_DWORD *)(a2 + 8LL * (v11 - 1) + 4) >= (unsigned int)byte_1801299D0[v27] )
              break;
            v28 = byte_1801299D0[v27];
            v29 = 0;
            for ( j = byte_180120DD0[v28 + 16]; (j & v27) != 0; j *= 2 )
              ++v29;
            v31 = v11 + 1;
            if ( v11 >= a3 )
              v31 = v11;
            v11 = v31;
            v32 = v31 - 2;
            if ( a4 )
            {
              v33 = (int)v32;
              for ( k = (_QWORD *)(a2 + 8 + 8LL * (int)v32);
                    v33 >= 0 && *((_DWORD *)k - 1) < (unsigned int)(unsigned __int8)v28;
                    --k )
              {
                --v32;
                --v33;
                *k = *(k - 1);
              }
            }
            v35 = (int)(v32 + 1);
            *(_DWORD *)(a2 + 8 * v35 + 4) = (unsigned __int8)v28;
            *(_DWORD *)(a2 + 8 * v35) = v29 + v41;
            if ( !a4 && v31 >= a3 )
              return v11;
            v27 |= j;
          }
          while ( v27 != 0xFF );
          v5 = v45;
          v17 = v41;
        }
        v7 = v42;
        v18 = v14 - 1;
        LOBYTE(v4) = v43;
      }
      else
      {
        v5 = v45;
        v12 += 8;
      }
      v17 += 8;
      ++v15;
      v41 = v17;
      if ( v15 >= v14 )
        break;
      v16 = v44;
    }
  }
  if ( v12 && (v11 < a3 || *(_DWORD *)(a2 + 8LL * (v11 - 1) + 4) < v12) )
  {
    v36 = v11 + 1;
    if ( v11 >= a3 )
      v36 = v11;
    v11 = v36;
    v37 = v36 - 2;
    if ( a4 )
    {
      v38 = (int)v37;
      for ( m = (_QWORD *)(a2 + 8 + 8LL * (int)v37); v38 >= 0 && *((_DWORD *)m - 1) < v12; --m )
      {
        --v37;
        --v38;
        *m = *(m - 1);
      }
    }
    v40 = (int)(v37 + 1);
    *(_DWORD *)(a2 + 8 * v40 + 4) = v12;
    *(_DWORD *)(a2 + 8 * v40) = v5;
  }
  return v11;
}
