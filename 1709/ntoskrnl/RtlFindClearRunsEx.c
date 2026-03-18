/*
 * XREFs of RtlFindClearRunsEx @ 0x1402524B4
 * Callers:
 *     RtlFindLongestRunClearEx @ 0x1402529D0 (RtlFindLongestRunClearEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRunsEx(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  int v3; // ebp
  unsigned __int8 *v4; // rcx
  __int64 v5; // r15
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r13d
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // r11
  int v13; // r12d
  unsigned __int8 v14; // dl
  __int64 v15; // rsi
  unsigned int v16; // r9d
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // r11
  _QWORD *i; // rcx
  __int64 v21; // rcx
  unsigned __int8 v22; // dl
  int v23; // esi
  __int64 v24; // rbp
  char j; // r11
  unsigned int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rbx
  _QWORD *k; // rcx
  __int64 v30; // rcx
  unsigned int v31; // eax
  unsigned int v32; // r11d
  __int64 v33; // rdx
  _QWORD *m; // rcx
  __int64 v35; // rdx
  unsigned __int8 *v37; // [rsp+38h] [rbp+8h]

  v2 = *a1;
  v3 = 0;
  v4 = (unsigned __int8 *)a1[1];
  v5 = v2 & 7;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = (v2 >> 3) + ((v2 & 7) != 0);
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10 - 1;
    v13 = 0;
    do
    {
      v14 = *v4++;
      v37 = v4;
      if ( v11 == v12 && v5 )
        v14 |= byte_1402C7740[v5];
      if ( v14 )
      {
        v15 = RtlpBitsClearLow[v14];
        v16 = v15 + v8;
        if ( v16 && (!v7 || *(_DWORD *)(a2 + 8LL * (v7 - 1) + 4) < v16) )
        {
          v17 = v7 + 1;
          if ( v7 )
            v17 = v7;
          v7 = v17;
          v18 = v17 - 2;
          v19 = (int)(v17 - 2);
          for ( i = (_QWORD *)(a2 + 8 + 8 * v19); v19 >= 0 && *((_DWORD *)i - 1) < v16; --i )
          {
            --v18;
            --v19;
            *i = *(i - 1);
          }
          v21 = (int)(v18 + 1);
          *(_DWORD *)(a2 + 8 * v21 + 4) = v16;
          *(_DWORD *)(a2 + 8 * v21) = v3;
        }
        v8 = RtlpBitsClearHigh[v14];
        v3 = v13 - v8 + 8;
        v22 = byte_1402C7730[v15] | byte_1402C7740[8 - v8] | v14;
        if ( v22 != 0xFF )
        {
          do
          {
            if ( v7 && *(_DWORD *)(a2 + 8LL * (v7 - 1) + 4) >= (unsigned int)RtlpBitsClearAnywhere[v22] )
              break;
            v23 = 0;
            v24 = RtlpBitsClearAnywhere[v22];
            for ( j = byte_1402C7730[v24]; ((unsigned __int8)j & v22) != 0; j *= 2 )
              ++v23;
            v26 = v7 + 1;
            if ( v7 )
              v26 = v7;
            v7 = v26;
            v27 = v26 - 2;
            v28 = (int)(v26 - 2);
            for ( k = (_QWORD *)(a2 + 8 + 8 * v28); v28 >= 0 && *((_DWORD *)k - 1) < (unsigned int)(unsigned __int8)v24; --k )
            {
              --v27;
              --v28;
              *k = *(k - 1);
            }
            v22 |= j;
            v30 = (int)(v27 + 1);
            *(_DWORD *)(a2 + 8 * v30 + 4) = (unsigned __int8)v24;
            *(_DWORD *)(a2 + 8 * v30) = v13 + v23;
          }
          while ( v22 != 0xFF );
          v3 = v13 - v8 + 8;
        }
        v4 = v37;
      }
      else
      {
        v8 += 8;
      }
      ++v9;
      v12 = v10 - 1;
      v11 = v9;
      v13 += 8;
    }
    while ( v9 < v10 );
  }
  if ( v8 && (!v7 || *(_DWORD *)(a2 + 8LL * (v7 - 1) + 4) < v8) )
  {
    v31 = v7 + 1;
    if ( v7 )
      v31 = v7;
    v7 = v31;
    v32 = v31 - 2;
    v33 = (int)(v31 - 2);
    for ( m = (_QWORD *)(a2 + 8 + 8 * v33); v33 >= 0 && *((_DWORD *)m - 1) < v8; --m )
    {
      --v32;
      --v33;
      *m = *(m - 1);
    }
    v35 = (int)(v32 + 1);
    *(_DWORD *)(a2 + 8 * v35 + 4) = v8;
    *(_DWORD *)(a2 + 8 * v35) = v3;
  }
  return v7;
}
