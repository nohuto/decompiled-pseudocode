/*
 * XREFs of RtlFindClearRuns @ 0x1800EA280
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800EA580 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRuns(unsigned int *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // esi
  int v5; // edi
  unsigned __int8 *v6; // rcx
  int v8; // edx
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // r12d
  unsigned int v14; // r15d
  int v15; // eax
  unsigned __int8 v16; // r10
  __int64 v17; // r14
  unsigned int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // rdx
  _QWORD *i; // rcx
  __int64 v23; // rcx
  unsigned __int8 v24; // r10
  __int64 v25; // r14
  unsigned __int8 v26; // di
  int v27; // ebp
  unsigned int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // rdx
  _QWORD *j; // rcx
  __int64 v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // r10d
  __int64 v35; // rdx
  _QWORD *k; // rcx
  __int64 v37; // rdx
  int v39; // [rsp+0h] [rbp-48h]
  int v40; // [rsp+4h] [rbp-44h]
  char v41; // [rsp+8h] [rbp-40h]
  unsigned __int8 *v42; // [rsp+10h] [rbp-38h]
  int v43; // [rsp+50h] [rbp+8h]

  v4 = *a1;
  v5 = 0;
  v6 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  v41 = v4;
  v39 = 0;
  v8 = v4 & 7;
  v40 = v8;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = (v4 >> 3) + (v8 != 0);
  if ( v14 )
  {
    v15 = 0;
    v43 = 0;
    while ( 1 )
    {
      v16 = *v6++;
      v42 = v6;
      if ( v13 == v14 - 1 && v8 )
      {
        v16 |= byte_180121000[(v4 & 7) + 16];
        v15 = v43;
      }
      if ( v16 )
      {
        v17 = (unsigned __int8)byte_180119B00[v16];
        v18 = v17 + v12;
        if ( v18 && (v11 < a3 || *(_DWORD *)(a2 + 8LL * (v11 - 1) + 4) < v18) )
        {
          v19 = v11 + 1;
          if ( v11 >= a3 )
            v19 = v11;
          v11 = v19;
          v20 = v19 - 2;
          if ( a4 )
          {
            v21 = (int)v20;
            for ( i = (_QWORD *)(a2 + 8 + 8LL * (int)v20); v21 >= 0 && *((_DWORD *)i - 1) < v18; --i )
            {
              --v20;
              --v21;
              *i = *(i - 1);
            }
          }
          v23 = (int)(v20 + 1);
          *(_DWORD *)(a2 + 8 * v23 + 4) = v18;
          *(_DWORD *)(a2 + 8 * v23) = v39;
          if ( !a4 && v19 >= a3 )
            return v11;
        }
        v12 = (unsigned __int8)byte_180129AB0[v16];
        v5 = v43 - v12 + 8;
        v39 = v5;
        v24 = byte_180123730[v17] | byte_180121000[8 - v12 + 16] | v16;
        if ( v24 != 0xFF )
        {
          do
          {
            if ( v11 >= a3 && *(_DWORD *)(a2 + 8LL * (v11 - 1) + 4) >= (unsigned int)byte_180129BB0[v24] )
              break;
            v25 = byte_180129BB0[v24];
            v26 = byte_180123730[v25];
            v27 = 0;
            while ( (v26 & v24) != 0 )
            {
              v26 *= 2;
              ++v27;
            }
            v28 = v11 + 1;
            if ( v11 >= a3 )
              v28 = v11;
            v11 = v28;
            v29 = v28 - 2;
            if ( a4 )
            {
              v30 = (int)v29;
              for ( j = (_QWORD *)(a2 + 8 + 8LL * (int)v29);
                    v30 >= 0 && *((_DWORD *)j - 1) < (unsigned int)(unsigned __int8)v25;
                    --j )
              {
                --v29;
                --v30;
                *j = *(j - 1);
              }
            }
            v32 = (int)(v29 + 1);
            *(_DWORD *)(a2 + 8 * v32 + 4) = (unsigned __int8)v25;
            *(_DWORD *)(a2 + 8 * v32) = v27 + v43;
            if ( !a4 && v28 >= a3 )
              return v11;
            v24 |= v26;
          }
          while ( v24 != 0xFF );
          v5 = v43 - v12 + 8;
        }
        v15 = v43;
        v6 = v42;
        v8 = v40;
      }
      else
      {
        v5 = v39;
        v12 += 8;
      }
      v15 += 8;
      ++v13;
      v43 = v15;
      if ( v13 >= v14 )
        break;
      LOBYTE(v4) = v41;
    }
  }
  if ( v12 && (v11 < a3 || *(_DWORD *)(a2 + 8LL * (v11 - 1) + 4) < v12) )
  {
    v33 = v11 + 1;
    if ( v11 >= a3 )
      v33 = v11;
    v11 = v33;
    v34 = v33 - 2;
    if ( a4 )
    {
      v35 = (int)v34;
      for ( k = (_QWORD *)(a2 + 8 + 8LL * (int)v34); v35 >= 0 && *((_DWORD *)k - 1) < v12; --k )
      {
        --v34;
        --v35;
        *k = *(k - 1);
      }
    }
    v37 = (int)(v34 + 1);
    *(_DWORD *)(a2 + 8 * v37 + 4) = v12;
    *(_DWORD *)(a2 + 8 * v37) = v5;
  }
  return v11;
}
