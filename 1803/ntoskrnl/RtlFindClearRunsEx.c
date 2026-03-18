/*
 * XREFs of RtlFindClearRunsEx @ 0x14016D6F4
 * Callers:
 *     RtlFindLongestRunClearEx @ 0x14016D6BC (RtlFindLongestRunClearEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRunsEx(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  int v3; // ebp
  unsigned __int8 *v4; // rcx
  __int64 v5; // r12
  unsigned int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // r11d
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // r13d
  unsigned __int8 v14; // dl
  __int64 v15; // rsi
  unsigned int v16; // r9d
  unsigned __int8 v17; // dl
  unsigned int v18; // eax
  unsigned int v19; // r11d
  __int64 v20; // rdx
  _QWORD *k; // rcx
  __int64 v22; // rdx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // r11
  _QWORD *i; // rcx
  __int64 v28; // rcx
  __int64 v29; // r15
  int v30; // ebp
  char j; // bl
  int v32; // r11d
  unsigned int v33; // eax
  unsigned int v34; // esi
  __int64 v35; // rdi
  _QWORD *v36; // rcx
  __int64 v37; // rcx
  unsigned __int8 *v38; // [rsp+40h] [rbp+8h]
  unsigned int v39; // [rsp+58h] [rbp+20h]

  v2 = *a1;
  v3 = 0;
  v4 = (unsigned __int8 *)a1[1];
  v5 = v2 & 7;
  v39 = 0;
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
      v38 = v4;
      if ( v11 == v12 && v5 )
        v14 |= byte_1402FEA48[v5];
      if ( v14 )
      {
        v15 = RtlpBitsClearLow[v14];
        v16 = v15 + v8;
        if ( v16 && (!v7 || *(_DWORD *)(a2 + 8LL * (v7 - 1) + 4) < v16) )
        {
          v24 = v7 + 1;
          if ( v7 )
            v24 = v7;
          v7 = v24;
          v25 = v24 - 2;
          v26 = (int)(v24 - 2);
          for ( i = (_QWORD *)(a2 + 8 + 8 * v26); v26 >= 0 && *((_DWORD *)i - 1) < v16; --i )
          {
            --v25;
            --v26;
            *i = *(i - 1);
          }
          v9 = v39;
          v28 = (int)(v25 + 1);
          *(_DWORD *)(a2 + 8 * v28 + 4) = v16;
          *(_DWORD *)(a2 + 8 * v28) = v3;
        }
        v8 = RtlpBitsClearHigh[v14];
        v3 = v13 - v8 + 8;
        v17 = byte_1402FEA38[v15] | byte_1402FEA48[8 - v8] | v14;
        if ( v17 != 0xFF )
        {
          do
          {
            if ( v7 && *(_DWORD *)(a2 + 8LL * (v7 - 1) + 4) >= (unsigned int)RtlpBitsClearAnywhere[v17] )
              break;
            v29 = RtlpBitsClearAnywhere[v17];
            v30 = 0;
            for ( j = byte_1402FEA38[v29]; ((unsigned __int8)j & v17) != 0; j *= 2 )
              ++v30;
            v32 = (unsigned __int8)v29;
            v33 = v7 + 1;
            if ( v7 )
              v33 = v7;
            v7 = v33;
            v34 = v33 - 2;
            v35 = (int)(v33 - 2);
            v36 = (_QWORD *)(a2 + 8 + 8 * v35);
            while ( v35 >= 0 )
            {
              v32 = (unsigned __int8)v29;
              if ( *((_DWORD *)v36 - 1) >= (unsigned int)(unsigned __int8)v29 )
                break;
              --v34;
              --v35;
              *v36 = *(v36 - 1);
              --v36;
            }
            v17 |= j;
            v37 = (int)(v34 + 1);
            *(_DWORD *)(a2 + 8 * v37 + 4) = v32;
            *(_DWORD *)(a2 + 8 * v37) = v30 + v13;
          }
          while ( v17 != 0xFF );
          v3 = v13 - v8 + 8;
          v9 = v39;
        }
        v4 = v38;
      }
      else
      {
        v8 += 8;
      }
      ++v9;
      v12 = v10 - 1;
      v11 = v9;
      v13 += 8;
      v39 = v9;
    }
    while ( v9 < v10 );
  }
  if ( v8 && (!v7 || *(_DWORD *)(a2 + 8LL * (v7 - 1) + 4) < v8) )
  {
    v18 = v7 + 1;
    if ( v7 )
      v18 = v7;
    v7 = v18;
    v19 = v18 - 2;
    v20 = (int)(v18 - 2);
    for ( k = (_QWORD *)(a2 + 8 + 8 * v20); v20 >= 0 && *((_DWORD *)k - 1) < v8; --k )
    {
      --v19;
      --v20;
      *k = *(k - 1);
    }
    v22 = (int)(v19 + 1);
    *(_DWORD *)(a2 + 8 * v22 + 4) = v8;
    *(_DWORD *)(a2 + 8 * v22) = v3;
  }
  return v7;
}
