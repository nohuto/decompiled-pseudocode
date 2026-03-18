/*
 * XREFs of RtlFindLongestRunClearCapped @ 0x140288060
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x14009C6F0 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLongestRunClearCapped(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v3; // r13d
  int v7; // ecx
  unsigned int v8; // r15d
  int v9; // r10d
  int v10; // r12d
  unsigned int v11; // r8d
  unsigned int v12; // r12d
  int v13; // edi
  unsigned int v14; // esi
  unsigned __int8 *v15; // r14
  unsigned int v16; // edx
  unsigned __int8 v17; // r9
  unsigned __int8 *v18; // r14
  unsigned int v19; // ebp
  __int64 v20; // rbp
  unsigned int v21; // eax
  unsigned __int8 i; // r9
  __int64 v23; // rbp
  int v24; // eax
  char j; // cl
  unsigned int v26; // ecx
  int v27; // eax
  int v28; // r9d
  unsigned int v29; // ecx
  __int64 result; // rax
  int v31; // [rsp+0h] [rbp-48h]
  unsigned int v33; // [rsp+60h] [rbp+18h]
  unsigned int v34; // [rsp+68h] [rbp+20h]

  v3 = *(_DWORD *)a1;
  v7 = *(_DWORD *)a1 & 7;
  v31 = v7;
  v8 = (v3 >> 3) + (v7 != 0);
  v9 = 0;
  v10 = *a3 < v3 ? *a3 : 0;
  v11 = 0;
  v12 = v10 & 0xFFFFFFF8;
  v13 = v12;
  v14 = v12 >> 3;
  v15 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (v12 >> 3));
  v16 = 0;
  v33 = 0;
  v17 = *v15;
  v18 = v15 + 1;
  if ( v12 >> 3 == v8 - 1 && v7 )
    v17 |= byte_1402FEA48[v3 & 7];
  v19 = 0;
  v34 = 0;
  while ( v19 < v8 )
  {
    if ( v17 )
    {
      v20 = RtlpBitsClearLow[v17];
      v21 = v11 + v20;
      if ( v11 + (_DWORD)v20 )
      {
        if ( v21 >= a2 )
          goto LABEL_43;
        if ( v21 > v16 )
        {
          v16 = v11 + v20;
          v9 = v13;
        }
      }
      if ( v13 != v12 )
        v21 = v33;
      v33 = v21;
      v11 = RtlpBitsClearHigh[v17];
      v13 = 8 * v14 - v11 + 8;
      for ( i = byte_1402FEA38[v20] | byte_1402FEA48[8 - v11] | v17; i != 0xFF; v16 = v23 )
      {
        v23 = RtlpBitsClearAnywhere[i];
        if ( v16 >= (unsigned int)v23 )
          break;
        v24 = 0;
        for ( j = byte_1402FEA38[v23]; ((unsigned __int8)j & i) != 0; j *= 2 )
          ++v24;
        v9 = v24 + 8 * v14;
        if ( (unsigned int)v23 >= a2 )
        {
          result = a2;
          goto LABEL_42;
        }
        i |= j;
      }
      v19 = v34;
    }
    else
    {
      v11 += 8;
      if ( v11 >= a2 )
      {
LABEL_43:
        *a3 = v13;
        return a2;
      }
    }
    ++v14;
    v26 = v11;
    if ( v14 >= v8 )
    {
      if ( v11 )
      {
        v27 = v13;
        if ( v11 <= v16 )
        {
          v11 = v16;
          v27 = v9;
        }
        v16 = v11;
        v9 = v27;
        v11 = 0;
        if ( v13 != v12 )
          v26 = v33;
        v33 = v26;
      }
      v14 = 0;
      v18 = *(unsigned __int8 **)(a1 + 8);
    }
    v17 = *v18++;
    if ( v14 == v8 - 1 && v31 )
      v17 |= byte_1402FEA48[v3 & 7];
    v34 = ++v19;
  }
  v28 = v9;
  if ( v11 )
  {
    v29 = v11 + v33;
    v9 = v13;
    if ( v13 + v11 != v12 )
      v29 = v11;
    if ( v29 <= v16 )
    {
      v29 = v16;
      v9 = v28;
    }
    v16 = v29;
  }
  else if ( !v16 )
  {
    *a3 = 0;
    return 0LL;
  }
  if ( v16 > a2 )
    v16 = a2;
  result = v16;
LABEL_42:
  *a3 = v9;
  return result;
}
