/*
 * XREFs of RtlFindLongestRunClearCapped @ 0x140252780
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x140225658 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLongestRunClearCapped(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // r13d
  int v8; // eax
  int v9; // r15d
  unsigned int v10; // r8d
  int v11; // edi
  unsigned int v12; // r15d
  unsigned int v13; // r12d
  unsigned int v14; // r11d
  int v15; // ebx
  unsigned __int8 *v16; // r14
  unsigned int v17; // edx
  unsigned __int8 v18; // r9
  unsigned __int8 *v19; // r14
  unsigned int v20; // ebp
  unsigned int v21; // edx
  unsigned __int8 i; // r9
  __int64 v23; // rbp
  int v24; // eax
  char j; // cl
  unsigned int v26; // ecx
  char v28; // [rsp+0h] [rbp-48h]
  unsigned int v30; // [rsp+60h] [rbp+18h]
  int v31; // [rsp+68h] [rbp+20h]

  v6 = *(_DWORD *)a1;
  v28 = v6;
  v31 = v6 & 7;
  v7 = (v6 >> 3) + (v31 != 0);
  v8 = *a3;
  v9 = -(*a3 < v6);
  v10 = 0;
  v11 = 0;
  v12 = v8 & v9 & 0xFFFFFFF8;
  v13 = 0;
  v14 = v12 >> 3;
  v15 = v12;
  v16 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (v12 >> 3));
  v17 = 0;
  v18 = *v16;
  v19 = v16 + 1;
  if ( v12 >> 3 == v7 - 1 && (v6 & 7) != 0 )
    v18 |= byte_1402C7740[v6 & 7];
  v20 = 0;
  v30 = 0;
  while ( v20 < v7 )
  {
    if ( v18 )
    {
      v21 = RtlpBitsClearLow[v18] + v17;
      if ( v21 )
      {
        if ( v21 >= a2 )
          goto LABEL_43;
        if ( v21 > v10 )
        {
          v10 = v21;
          v11 = v15;
        }
      }
      if ( v15 != v12 )
        v21 = v13;
      v13 = v21;
      v17 = RtlpBitsClearHigh[v18];
      v15 = 8 * v14 - v17 + 8;
      for ( i = byte_1402C7730[RtlpBitsClearLow[v18]] | byte_1402C7740[8 - v17] | v18; i != 0xFF; v11 = v24 + 8 * v14 )
      {
        v23 = RtlpBitsClearAnywhere[i];
        if ( v10 >= (unsigned int)v23 )
          break;
        v24 = 0;
        for ( j = byte_1402C7730[v23]; ((unsigned __int8)j & i) != 0; j *= 2 )
          ++v24;
        if ( (unsigned int)v23 >= a2 )
        {
          *a3 = v24 + 8 * v14;
          return a2;
        }
        i |= j;
        v10 = v23;
      }
      LOBYTE(v6) = v28;
      v20 = v30;
    }
    else
    {
      v17 += 8;
      if ( v17 >= a2 )
      {
LABEL_43:
        *a3 = v15;
        return a2;
      }
    }
    if ( ++v14 >= v7 )
    {
      if ( v17 )
      {
        if ( v15 == v12 )
          v13 = v17;
        if ( v17 > v10 )
        {
          v10 = v17;
          v11 = v15;
        }
        v17 = 0;
      }
      v14 = 0;
      v19 = *(unsigned __int8 **)(a1 + 8);
    }
    v18 = *v19++;
    if ( v14 == v7 - 1 && v31 )
    {
      v18 |= byte_1402C7740[v6 & 7];
      v20 = v30;
    }
    v30 = ++v20;
  }
  if ( v17 )
  {
    v26 = v17 + v13;
    if ( v15 + v17 != v12 )
      v26 = v17;
    if ( v26 > v10 )
      v11 = v15;
    else
      v26 = v10;
    v10 = v26;
  }
  else if ( !v10 )
  {
    *a3 = 0;
    return 0LL;
  }
  *a3 = v11;
  if ( v10 > a2 )
    return a2;
  return v10;
}
